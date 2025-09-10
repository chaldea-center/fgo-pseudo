void EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21CC4 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21CC4 = 1;
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
    v4 = sub_1C2D434(&this->fields.onDecide);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C21CC0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__);
    byte_4C21CC0 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  __int64 v5; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v8; // x20
  __int64 v9; // x23
  struct CommonConsumeEntity_array *v10; // x8
  CommonConsumeEntity_o *v11; // x8
  CommonConsumeEntity_o *v12; // x10
  int32_t num; // w9
  int32_t v14; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v16; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C21CBC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C21CBC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_1C2D6EC(Master_object, v4);
  max = this->fields.max;
  v8 = Master_object;
  v9 = 0;
  while ( (int)v9 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    v10 = this->fields.exchangeOriginItemList;
    if ( !v10 )
      goto LABEL_32;
    if ( (unsigned int)v9 >= LODWORD(v10->max_length) )
      goto LABEL_34;
    v11 = v10->m_Items[v9];
    if ( !v11 || !v8 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v11->fields.objectId,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( (unsigned int)v9 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_34;
      v12 = exchangeOriginItemList->m_Items[v9];
      if ( !v12 )
        goto LABEL_32;
      num = entity->fields.num;
      v14 = v12->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v14 )
        max = num / v14;
      if ( !isShortage )
        goto LABEL_32;
      if ( (unsigned int)v9 >= LODWORD(isShortage->max_length) )
        goto LABEL_34;
      isShortage->m_Items[v9] = v14 > num;
    }
    else
    {
      v16 = this->fields.isShortage;
      if ( !v16 )
        goto LABEL_32;
      if ( (unsigned int)v9 >= LODWORD(v16->max_length) )
LABEL_34:
        sub_1C2D6F4(Master_object, v4, v5);
      v16->m_Items[v9] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v9;
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
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_1C2D434(&this->fields.tradeGoodsEntity);
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
    sub_1C2D6EC(itemSlider, method);
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

  if ( (byte_4C21CBF & 1) == 0 )
  {
    sub_1C2D490(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    byte_4C21CBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C2D6EC(0, v5);
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

  if ( (byte_4C21CBE & 1) == 0 )
  {
    sub_1C2D490(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    byte_4C21CBE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x22
  struct EventTradeInfo_o *v12; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x23
  UILabel_o *titleLabel; // x24
  System_String_o **v15; // x8
  UILabel_o *detailLabel; // x24
  System_String_o **v17; // x8
  UILabel_o *cancelButtonLb; // x24
  UILabel_o *decideButtonLb; // x24
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct EventTradeInfo_o *v22; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v24; // x21
  int64_t startedAt; // x24
  const MethodInfo *v26; // x5
  struct EventTradeInfo_o *v27; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v28; // x23
  int32_t v29; // w25
  int v30; // w23
  EventTradeGoodsEntity_o *v31; // x21
  int32_t v32; // w21
  const MethodInfo *v33; // x1
  int32_t ItemSliderMax; // w22
  int32_t v35; // w0
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
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
  if ( (byte_4C21CB9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__);
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13467/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_20237/*"icon_{0}"*/);
    sub_1C2D490(&StringLiteral_13464/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/);
    sub_1C2D490(&StringLiteral_8811/*"MULTIPLE_INFO"*/);
    sub_1C2D490(&StringLiteral_13483/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_13485/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_13462/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4C21CB9 = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
      sub_1C2D434(&v10->fields.tradeGoodsEntity);
      v10->fields.onDecide = onDecide;
      sub_1C2D434(&v10->fields.onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v12 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v12;
      sub_1C2D434(&v10->fields.eventTradeInfo);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = (System_String_o **)&StringLiteral_13485/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v15 = (System_String_o **)&StringLiteral_13467/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v15, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = (System_String_o **)&StringLiteral_13483/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v17 = (System_String_o **)&StringLiteral_13462/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v17, 0);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13464/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
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
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        v10->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                                               (CommonConsumeMaster_o *)this,
                                                               (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                               0);
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C2D434(&v10->fields.exchangeOriginItemList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v10->fields.isShortage = (struct System_Boolean_array *)sub_1C2D538(
                                                                                    bool___TypeInfo,
                                                                                    LODWORD(exchangeOriginItemList->max_length));
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C2D434(&v10->fields.isShortage);
                          if ( isReplenishment )
                          {
                            v22 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            tradeNum = v22->fields.tradeNum;
                            v24 = *p_tradeGoodsEntity;
                            startedAt = v22->fields.startedAt;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                            v27 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v28 = this;
                            v29 = v27->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                            v30 = EventTradeTimeCalculation__GetCompleteNum_32285980(
                                    v24,
                                    startedAt,
                                    (int64_t)v28,
                                    v29,
                                    0,
                                    v26)
                                - tradeNum;
                          }
                          else
                          {
                            v30 = 0;
                          }
                          v31 = *p_tradeGoodsEntity;
                          if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                          v32 = EventTradeTimeCalculation__GetTradeMaxNum(v31, (const MethodInfo *)item) + v30;
                          v10->fields.max = v32;
                          ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v10, v33);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v35 = System_Math__Min_64982368(v32, ItemSliderMax, 0);
                          v10->fields.max = v35;
                          v10->fields.makeCount = v35;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v36);
                          TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( TradeGoodsEntity_k__BackingField )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
                            v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v37, v38, v39);
                            v44 = System_String__Format((System_String_o *)StringLiteral_20237/*"icon_{0}"*/, v43, 0);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI_40385372(eventId, eventItemIcon, v44, 0);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
                            v47 = (Il2CppObject *)System_Int32__ToString((int)v10 + 320, 0);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v46, v47, 0);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v48);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v49);
                              v10->fields.state = 1;
                              v50 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v50,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)v10, v50, 0, 0);
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
    sub_1C2D6EC(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
  int v9; // w25
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v11; // x8
  UISprite_o *v12; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v18; // x8
  Il2CppObject *v19; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v22; // x21
  UILabel_o *v23; // x22
  System_String_o *v24; // x0
  struct UILabel_array *v25; // x8
  struct System_Boolean_array *isShortage; // x9
  float v27; // s1 OVERLAPPED
  float v28; // s0
  float v29; // s3
  float v30; // s2
  unsigned int v31; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v33; // x8
  UISprite_o *v34; // x20
  int32_t v35; // w21
  struct CommonConsumeEntity_array *v36; // x8
  CommonConsumeEntity_o *v37; // x8
  int32_t v38; // w20
  int32_t v39; // w21
  struct CommonConsumeEntity_array *v40; // x8
  Il2CppObject *v41; // x20
  int32_t v42; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v44; // x21
  UILabel_o *v45; // x22
  System_String_o *v46; // x0
  struct UILabel_array *v47; // x8
  struct System_Boolean_array *v48; // x9
  float v49; // s1 OVERLAPPED
  float v50; // s0
  float v51; // s3
  float v52; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v56; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v59; // x8
  const MethodInfo *v60; // x1

  if ( (byte_4C21CBD & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C2D490(&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    sub_1C2D490(&StringLiteral_13463/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4C21CBD = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v9 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(exchangeOriginItemIcon->max_length) || v9 >= (unsigned int)max_length )
        goto LABEL_94;
      v11 = exchangeOriginItemList->m_Items[v9];
      if ( !v11 )
        goto LABEL_93;
      v12 = exchangeOriginItemIcon->m_Items[v9];
      objectId = v11->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v12, objectId, 0);
      v14 = this->fields.exchangeOriginItemList;
      if ( !v14 )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(v14->max_length) )
        goto LABEL_94;
      v15 = v14->m_Items[v9];
      if ( !v15 )
        goto LABEL_93;
      num = v15->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0);
      v18 = this->fields.exchangeOriginItemList;
      if ( !v18 )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(v18->max_length) )
        goto LABEL_94;
      v19 = (Il2CppObject *)NumberFormat;
      NumberFormat = v18->m_Items[v9];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_94;
      v22 = (Il2CppObject *)NumberFormat;
      v23 = exchangeOriginCounts->m_Items[v9];
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63499156(v24, v19, v22, 0);
      if ( !v23 )
        goto LABEL_93;
      UILabel__set_text(v23, (System_String_o *)NumberFormat, 0);
      v25 = this->fields.exchangeOriginCounts;
      if ( !v25 )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(v25->max_length) )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( (unsigned int)v9 >= LODWORD(isShortage->max_length) )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v25->m_Items[v9];
      v27 = isShortage->m_Items[v9] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v28 = 1.0;
      v29 = 1.0;
      v30 = v27;
      UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v27 - 1), 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      ++v9;
    }
    while ( v9 < (int)max_length );
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
      v31 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v31 >= LODWORD(exchangeOriginItemIcon2->max_length) || v31 >= (unsigned int)max_length )
          goto LABEL_94;
        v33 = exchangeOriginItemList->m_Items[v31];
        if ( !v33 )
          break;
        v34 = exchangeOriginItemIcon2->m_Items[v31];
        v35 = v33->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v34, v35, 0);
        v36 = this->fields.exchangeOriginItemList;
        if ( !v36 )
          break;
        if ( v31 >= LODWORD(v36->max_length) )
          goto LABEL_94;
        v37 = v36->m_Items[v31];
        if ( !v37 )
          break;
        v38 = v37->fields.num;
        if ( this->fields.makeCount <= 1 )
          v39 = 1;
        else
          v39 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v39 * v38, 0);
        v40 = this->fields.exchangeOriginItemList;
        if ( !v40 )
          break;
        if ( v31 >= LODWORD(v40->max_length) )
          goto LABEL_94;
        v41 = (Il2CppObject *)NumberFormat;
        NumberFormat = v40->m_Items[v31];
        if ( !NumberFormat )
          break;
        v42 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v42, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v31 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_94;
        v44 = (Il2CppObject *)NumberFormat;
        v45 = exchangeOriginCounts2->m_Items[v31];
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63499156(v46, v41, v44, 0);
        if ( !v45 )
          break;
        UILabel__set_text(v45, (System_String_o *)NumberFormat, 0);
        v47 = this->fields.exchangeOriginCounts2;
        if ( !v47 )
          break;
        if ( v31 >= LODWORD(v47->max_length) )
          goto LABEL_94;
        v48 = this->fields.isShortage;
        if ( !v48 )
          break;
        if ( v31 >= LODWORD(v48->max_length) )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v47->m_Items[v31];
        v49 = v48->m_Items[v31] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v50 = 1.0;
        v51 = 1.0;
        v52 = v49;
        UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v49 - 1), 0);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(max_length) = exchangeOriginItemList->max_length;
        if ( (int)++v31 >= (int)max_length )
          goto LABEL_74;
      }
LABEL_93:
      sub_1C2D6EC(NumberFormat, v5);
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
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13463/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !LODWORD(GiftListById->max_length) )
LABEL_94:
    sub_1C2D6F4(NumberFormat, v5, v6);
  v56 = GiftListById->m_Items[0];
  if ( !v56 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v56->fields.objectId,
                                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0);
  v59 = this->fields.tradeGoodsEntity;
  if ( !v59 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v59->fields.eventPointItemId, 0);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v60);
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

  if ( (byte_4C21CC3 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8811/*"MULTIPLE_INFO"*/);
    sub_1C2D490(&StringLiteral_13484/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4C21CC3 = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v8 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
      v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v11 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v10, 0);
      v12 = (Il2CppObject *)System_String__Format_63499156(v8, NumberFormat, v11, 0);
      v13 = System_String__Format(v4, v12, 0);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
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
            v23 = (Il2CppObject *)System_String__Format_63499156(v17, v21, v22, 0);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1C2D6EC(exchangeDestinationPointCount, v6);
  }
  if ( this->fields.makeCount <= 1 )
    v24 = 1;
  else
    v24 = this->fields.makeCount;
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v24, 0);
  v13 = System_String__Format(v4, v25, 0);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
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
  if ( (byte_4C21CBA & 1) == 0 )
  {
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13455/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C2D490(&StringLiteral_13461/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/);
    byte_4C21CBA = 1;
  }
  if ( !v3->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v3->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13461/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
    tradeGoodsEntity = v3->fields.tradeGoodsEntity;
    makeCount = v3->fields.makeCount;
    v29 = v25;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1, v26);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0,
                                         (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v29, RestTimeInFormat, 0);
    if ( tradeCompletionTimeLabel )
    {
      v22 = this;
      v23 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1C2D6EC(this, method);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13461/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Max_64982052((int64_t)&v10[-Time], 0, 0);
  v17 = LocalizationManager__GetRestTimeInFormat(v16 + v13, 0, (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v13, 0, (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v20 = System_String__Format(v18, v19, 0);
  v21 = (Il2CppObject *)System_String__Concat_63457864(v17, v20, 0);
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
  __int64 v4; // x2
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

  if ( (byte_4C21CC2 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4C21CC2 = 1;
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
    sub_1C2D6EC(itemSlider, method);
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63499156(v18, v13, v16, 0);
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
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63499156(v30, v25, v28, 0);
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
    sub_1C2D6F4(itemSlider, method, v4);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, method);
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

  if ( (byte_4C21CBB & 1) == 0 )
  {
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8811/*"MULTIPLE_INFO"*/);
    byte_4C21CBB = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
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
    v16 = EventTradeTimeCalculation__GetCompleteNum_32285980(tradeGoodsEntity, startedAt, v14, v15, 0, v12) - tradeNum;
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
  v21 = System_Math__Min_64982368(TradeMaxNum + v16, ItemSliderMax, 0);
  if ( this->fields.max != v21 )
  {
    this->fields.max = v21;
    v22 = v21;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Time = System_Math__Min_64982368(v22, makeCount, 0);
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
    sub_1C2D6EC(Time, v7);
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

  if ( (byte_4C21CC1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21CC1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}