void EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3245F & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3245F = 1;
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
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    v4 = sub_1C32BC4(&this->fields.onDecide, 0);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C32E7C(v4);
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

  if ( (byte_4C3245B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__);
    byte_4C3245B = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v6; // x20
  __int64 v7; // x23
  struct CommonConsumeEntity_array *v8; // x8
  CommonConsumeEntity_o *v9; // x8
  CommonConsumeEntity_o *v10; // x10
  int32_t num; // w9
  int32_t v12; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v14; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C32457 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C32457 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_1C32E7C(Master_object);
  max = this->fields.max;
  v6 = Master_object;
  v7 = 0;
  while ( (int)v7 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    v8 = this->fields.exchangeOriginItemList;
    if ( !v8 )
      goto LABEL_32;
    if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
      goto LABEL_34;
    v9 = v8->m_Items[v7];
    if ( !v9 || !v6 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v6,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v9->fields.objectId,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( (unsigned int)v7 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_34;
      v10 = exchangeOriginItemList->m_Items[v7];
      if ( !v10 )
        goto LABEL_32;
      num = entity->fields.num;
      v12 = v10->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v12 )
        max = num / v12;
      if ( !isShortage )
        goto LABEL_32;
      if ( (unsigned int)v7 >= LODWORD(isShortage->max_length) )
        goto LABEL_34;
      isShortage->m_Items[v7] = v12 > num;
    }
    else
    {
      v14 = this->fields.isShortage;
      if ( !v14 )
        goto LABEL_32;
      if ( (unsigned int)v7 >= LODWORD(v14->max_length) )
LABEL_34:
        sub_1C32E84(Master_object);
      v14->m_Items[v7] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v7;
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

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_1C32BC4(&this->fields.tradeGoodsEntity, 0);
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
    sub_1C32E7C(itemSlider);
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
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3245A & 1) == 0 )
  {
    sub_1C32C20(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    byte_4C3245A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C32E7C(0);
    UISliderWithButton__grayMode(itemSlider, 0);
    EventTradeSweetsNumConfirmDialogComponent__Close(this, v6);
  }
}


void EventTradeSweetsNumConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C32459 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    byte_4C32459 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  const MethodInfo *v25; // x1
  struct EventTradeInfo_o *v26; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v28; // x21
  int64_t startedAt; // x24
  const MethodInfo *v30; // x5
  struct EventTradeInfo_o *v31; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v32; // x23
  int32_t v33; // w25
  int v34; // w23
  EventTradeGoodsEntity_o *v35; // x21
  int32_t v36; // w21
  const MethodInfo *v37; // x1
  int32_t ItemSliderMax; // w22
  int32_t v39; // w0
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  struct EventTradeGoodsEntity_o *v47; // x8
  int32_t eventId; // w21
  UISprite_o *eventItemIcon; // x22
  Il2CppObject *v50; // x0
  System_String_o *v51; // x23
  UILabel_o *eventItemMakeNum; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  System_Action_o *v57; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4C32454 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__);
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13470/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_20249/*"icon_{0}"*/);
    sub_1C32C20(&StringLiteral_13467/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/);
    sub_1C32C20(&StringLiteral_8817/*"MULTIPLE_INFO"*/);
    sub_1C32C20(&StringLiteral_13486/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_13488/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4C32454 = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_1C32BC4(&v10->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
      v10->fields.onDecide = onDecide;
      sub_1C32BC4(&v10->fields.onDecide, onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v13 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v13;
      sub_1C32BC4(&v10->fields.eventTradeInfo, v13);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = (System_String_o **)&StringLiteral_13488/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v16 = (System_String_o **)&StringLiteral_13470/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v16, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v18 = (System_String_o **)&StringLiteral_13486/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v18 = (System_String_o **)&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v18, 0);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13467/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
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
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                             (CommonConsumeMaster_o *)this,
                                             (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                             0);
                        v10->fields.exchangeOriginItemList = SortedEntityList;
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C32BC4(
                                                                                &v10->fields.exchangeOriginItemList,
                                                                                SortedEntityList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v24 = sub_1C32CC8(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
                          v10->fields.isShortage = (struct System_Boolean_array *)v24;
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C32BC4(
                                                                                  &v10->fields.isShortage,
                                                                                  v24);
                          if ( isReplenishment )
                          {
                            v26 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            tradeNum = v26->fields.tradeNum;
                            v28 = *p_tradeGoodsEntity;
                            startedAt = v26->fields.startedAt;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                            v31 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v32 = this;
                            v33 = v31->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                            v34 = EventTradeTimeCalculation__GetCompleteNum_32513068(
                                    v28,
                                    startedAt,
                                    (int64_t)v32,
                                    v33,
                                    0,
                                    v30)
                                - tradeNum;
                          }
                          else
                          {
                            v34 = 0;
                          }
                          v35 = *p_tradeGoodsEntity;
                          if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                          v36 = EventTradeTimeCalculation__GetTradeMaxNum(v35, v25) + v34;
                          v10->fields.max = v36;
                          ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v10, v37);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v39 = System_Math__Min_65042304(v36, ItemSliderMax, 0);
                          v10->fields.max = v39;
                          v10->fields.makeCount = v39;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v40);
                          v47 = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( v47 )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = v47->fields.goodsIconId;
                            v50 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                    int_TypeInfo,
                                                    &goodsIconId,
                                                    v41,
                                                    v42,
                                                    v43,
                                                    v44,
                                                    v45,
                                                    v46);
                            v51 = System_String__Format((System_String_o *)StringLiteral_20249/*"icon_{0}"*/, v50, 0);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI_40507600(eventId, eventItemIcon, v51, 0);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MULTIPLE_INFO"*/, 0);
                            v54 = (Il2CppObject *)System_Int32__ToString((int)v10 + 320, 0);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v53, v54, 0);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v55);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v56);
                              v10->fields.state = 1;
                              v57 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v57,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)v10, v57, 0, 0, 0);
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
    sub_1C32E7C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
  int v7; // w25
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v9; // x8
  UISprite_o *v10; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v12; // x8
  CommonConsumeEntity_o *v13; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v16; // x8
  Il2CppObject *v17; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v20; // x21
  UILabel_o *v21; // x22
  System_String_o *v22; // x0
  struct UILabel_array *v23; // x8
  struct System_Boolean_array *isShortage; // x9
  float v25; // s1 OVERLAPPED
  float v26; // s0
  float v27; // s3
  float v28; // s2
  unsigned int v29; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v31; // x8
  UISprite_o *v32; // x20
  int32_t v33; // w21
  struct CommonConsumeEntity_array *v34; // x8
  CommonConsumeEntity_o *v35; // x8
  int32_t v36; // w20
  int32_t v37; // w21
  struct CommonConsumeEntity_array *v38; // x8
  Il2CppObject *v39; // x20
  int32_t v40; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v42; // x21
  UILabel_o *v43; // x22
  System_String_o *v44; // x0
  struct UILabel_array *v45; // x8
  struct System_Boolean_array *v46; // x9
  float v47; // s1 OVERLAPPED
  float v48; // s0
  float v49; // s3
  float v50; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v54; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v57; // x8
  const MethodInfo *v58; // x1

  if ( (byte_4C32458 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_13469/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C32C20(&StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    sub_1C32C20(&StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4C32458 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13469/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v7 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(exchangeOriginItemIcon->max_length) || v7 >= (unsigned int)max_length )
        goto LABEL_94;
      v9 = exchangeOriginItemList->m_Items[v7];
      if ( !v9 )
        goto LABEL_93;
      v10 = exchangeOriginItemIcon->m_Items[v7];
      objectId = v9->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v10, objectId, 0);
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(v12->max_length) )
        goto LABEL_94;
      v13 = v12->m_Items[v7];
      if ( !v13 )
        goto LABEL_93;
      num = v13->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0);
      v16 = this->fields.exchangeOriginItemList;
      if ( !v16 )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(v16->max_length) )
        goto LABEL_94;
      v17 = (Il2CppObject *)NumberFormat;
      NumberFormat = v16->m_Items[v7];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_94;
      v20 = (Il2CppObject *)NumberFormat;
      v21 = exchangeOriginCounts->m_Items[v7];
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63559836(v22, v17, v20, 0);
      if ( !v21 )
        goto LABEL_93;
      UILabel__set_text(v21, (System_String_o *)NumberFormat, 0);
      v23 = this->fields.exchangeOriginCounts;
      if ( !v23 )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(v23->max_length) )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( (unsigned int)v7 >= LODWORD(isShortage->max_length) )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v23->m_Items[v7];
      v25 = isShortage->m_Items[v7] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v26 = 1.0;
      v27 = 1.0;
      v28 = v25;
      UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v25 - 1), 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      ++v7;
    }
    while ( v7 < (int)max_length );
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
      v29 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v29 >= LODWORD(exchangeOriginItemIcon2->max_length) || v29 >= (unsigned int)max_length )
          goto LABEL_94;
        v31 = exchangeOriginItemList->m_Items[v29];
        if ( !v31 )
          break;
        v32 = exchangeOriginItemIcon2->m_Items[v29];
        v33 = v31->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v32, v33, 0);
        v34 = this->fields.exchangeOriginItemList;
        if ( !v34 )
          break;
        if ( v29 >= LODWORD(v34->max_length) )
          goto LABEL_94;
        v35 = v34->m_Items[v29];
        if ( !v35 )
          break;
        v36 = v35->fields.num;
        if ( this->fields.makeCount <= 1 )
          v37 = 1;
        else
          v37 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v37 * v36, 0);
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v29 >= LODWORD(v38->max_length) )
          goto LABEL_94;
        v39 = (Il2CppObject *)NumberFormat;
        NumberFormat = v38->m_Items[v29];
        if ( !NumberFormat )
          break;
        v40 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v40, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v29 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_94;
        v42 = (Il2CppObject *)NumberFormat;
        v43 = exchangeOriginCounts2->m_Items[v29];
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63559836(v44, v39, v42, 0);
        if ( !v43 )
          break;
        UILabel__set_text(v43, (System_String_o *)NumberFormat, 0);
        v45 = this->fields.exchangeOriginCounts2;
        if ( !v45 )
          break;
        if ( v29 >= LODWORD(v45->max_length) )
          goto LABEL_94;
        v46 = this->fields.isShortage;
        if ( !v46 )
          break;
        if ( v29 >= LODWORD(v46->max_length) )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v45->m_Items[v29];
        v47 = v46->m_Items[v29] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v48 = 1.0;
        v49 = 1.0;
        v50 = v47;
        UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v47 - 1), 0);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(max_length) = exchangeOriginItemList->max_length;
        if ( (int)++v29 >= (int)max_length )
          goto LABEL_74;
      }
LABEL_93:
      sub_1C32E7C(NumberFormat);
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
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !LODWORD(GiftListById->max_length) )
LABEL_94:
    sub_1C32E84(NumberFormat);
  v54 = GiftListById->m_Items[0];
  if ( !v54 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v54->fields.objectId,
                                            (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0);
  v57 = this->fields.tradeGoodsEntity;
  if ( !v57 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v57->fields.eventPointItemId, 0);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v58);
}


void EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isReplenishment; // w21
  System_String_o *v4; // x20
  UILabel_o *exchangeDestinationPointCount; // x0
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v7; // x21
  Il2CppObject *NumberFormat; // x22
  int32_t v9; // w0
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct EventTradeInfo_o *v15; // x9
  System_String_o *v16; // x22
  struct EventTradeGoodsEntity_o *v17; // x8
  int32_t makeCount; // w9
  int32_t eventPointNum; // w8
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w0
  Il2CppObject *v24; // x0
  struct EventTradeGoodsEntity_o *v25; // x8
  int32_t v26; // w9
  int32_t v27; // w8
  System_String_o *v28; // x21

  if ( (byte_4C3245E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8817/*"MULTIPLE_INFO"*/);
    sub_1C32C20(&StringLiteral_13487/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4C3245E = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MULTIPLE_INFO"*/, 0);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13487/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v7 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
      v9 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v10 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v9, 0);
      v11 = (Il2CppObject *)System_String__Format_63559836(v7, NumberFormat, v10, 0);
      v12 = System_String__Format(v4, v11, 0);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MULTIPLE_INFO"*/, 0);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13487/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v15 = this->fields.eventTradeInfo;
        if ( v15 )
        {
          v16 = (System_String_o *)exchangeDestinationPointCount;
          exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                         v15->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                         0);
          v17 = this->fields.tradeGoodsEntity;
          if ( v17 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v17->fields.eventPointNum;
            v20 = (Il2CppObject *)exchangeDestinationPointCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v21 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0);
            v22 = (Il2CppObject *)System_String__Format_63559836(v16, v20, v21, 0);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1C32E7C(exchangeDestinationPointCount);
  }
  if ( this->fields.makeCount <= 1 )
    v23 = 1;
  else
    v23 = this->fields.makeCount;
  v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v23, 0);
  v12 = System_String__Format(v4, v24, 0);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MULTIPLE_INFO"*/, 0);
  v25 = this->fields.tradeGoodsEntity;
  if ( !v25 )
    goto LABEL_26;
  v26 = this->fields.makeCount;
  v27 = v25->fields.eventPointNum;
  v13 = (System_String_o *)exchangeDestinationPointCount;
  if ( v26 <= 1 )
    v26 = 1;
  v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26 * v27, 0);
LABEL_23:
  exchangeDestinationPointCount = (UILabel_o *)System_String__Format(v13, v22, 0);
  if ( !this->fields.exchangeDestinationItemCount )
    goto LABEL_26;
  v28 = (System_String_o *)exchangeDestinationPointCount;
  UILabel__set_text(this->fields.exchangeDestinationItemCount, v12, 0);
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationPointCount )
    goto LABEL_26;
  UILabel__set_text(exchangeDestinationPointCount, v28, 0);
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
  if ( (byte_4C32455 & 1) == 0 )
  {
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13458/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C32C20(&StringLiteral_13464/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_25040/*"{0,2}:{1:D2}:{2:D2}"*/);
    byte_4C32455 = 1;
  }
  if ( !v3->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v3->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13464/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
    tradeGoodsEntity = v3->fields.tradeGoodsEntity;
    makeCount = v3->fields.makeCount;
    v29 = v25;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1, v26);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0,
                                         (System_String_o *)StringLiteral_25040/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v29, RestTimeInFormat, 0);
    if ( tradeCompletionTimeLabel )
    {
      v22 = this;
      v23 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1C32E7C(this);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13464/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Max_65041988((int64_t)&v10[-Time], 0, 0);
  v17 = LocalizationManager__GetRestTimeInFormat(v16 + v13, 0, (System_String_o *)StringLiteral_25040/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13458/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v13, 0, (System_String_o *)StringLiteral_25040/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v20 = System_String__Format(v18, v19, 0);
  v21 = (Il2CppObject *)System_String__Concat_63518544(v17, v20, 0);
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
  const MethodInfo *v4; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
  signed int v7; // w10
  __int64 v8; // x25
  CommonConsumeEntity_o *v9; // x8
  int32_t num; // w20
  int v11; // w21
  struct CommonConsumeEntity_array *v12; // x8
  Il2CppObject *v13; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v16; // x21
  UILabel_o *v17; // x22
  System_String_o *v18; // x0
  signed int v19; // w10
  __int64 v20; // x25
  CommonConsumeEntity_o *v21; // x8
  int32_t v22; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v24; // x8
  Il2CppObject *v25; // x20
  int32_t v26; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v28; // x21
  UILabel_o *v29; // x22
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_4C3245D & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4C3245D = 1;
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
    sub_1C32E7C(itemSlider);
  }
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)max_length )
    {
      v8 = v7;
      v9 = exchangeOriginItemList->m_Items[v7];
      if ( !v9 )
        goto LABEL_41;
      num = v9->fields.num;
      v11 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v11 * num, 0);
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_41;
      if ( (unsigned int)v8 >= LODWORD(v12->max_length) )
        goto LABEL_42;
      v13 = (Il2CppObject *)itemSlider;
      itemSlider = v12->m_Items[v8];
      if ( !itemSlider )
        goto LABEL_41;
      HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_41;
      if ( (unsigned int)v8 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_42;
      v16 = (Il2CppObject *)itemSlider;
      v17 = exchangeOriginCounts->m_Items[v8];
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63559836(v18, v13, v16, 0);
      if ( !v17 )
        goto LABEL_41;
      UILabel__set_text(v17, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      v7 = v8 + 1;
      if ( (int)v8 + 1 >= (int)max_length )
        goto LABEL_40;
    }
    goto LABEL_42;
  }
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    while ( v19 < (unsigned int)max_length )
    {
      v20 = v19;
      v21 = exchangeOriginItemList->m_Items[v19];
      if ( !v21 )
        goto LABEL_41;
      v22 = v21->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v22, 0);
      v24 = this->fields.exchangeOriginItemList;
      if ( !v24 )
        goto LABEL_41;
      if ( (unsigned int)v20 >= LODWORD(v24->max_length) )
        break;
      v25 = (Il2CppObject *)itemSlider;
      itemSlider = v24->m_Items[v20];
      if ( !itemSlider )
        goto LABEL_41;
      v26 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v26, 0);
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        goto LABEL_41;
      if ( (unsigned int)v20 >= LODWORD(exchangeOriginCounts2->max_length) )
        break;
      v28 = (Il2CppObject *)itemSlider;
      v29 = exchangeOriginCounts2->m_Items[v20];
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63559836(v30, v25, v28, 0);
      if ( !v29 )
        goto LABEL_41;
      UILabel__set_text(v29, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      v19 = v20 + 1;
      if ( (int)v20 + 1 >= (int)max_length )
        goto LABEL_40;
    }
LABEL_42:
    sub_1C32E84(itemSlider);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v4);
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, v31);
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

  if ( (byte_4C32456 & 1) == 0 )
  {
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8817/*"MULTIPLE_INFO"*/);
    byte_4C32456 = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8817/*"MULTIPLE_INFO"*/, 0);
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
    v16 = EventTradeTimeCalculation__GetCompleteNum_32513068(tradeGoodsEntity, startedAt, v14, v15, 0, v12) - tradeNum;
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
  v21 = System_Math__Min_65042304(TradeMaxNum + v16, ItemSliderMax, 0);
  if ( this->fields.max != v21 )
  {
    this->fields.max = v21;
    v22 = v21;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Time = System_Math__Min_65042304(v22, makeCount, 0);
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
    sub_1C32E7C(Time);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3245C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3245C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}