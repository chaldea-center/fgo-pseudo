void EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932C97 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932C97 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__int__int__o *onDecide; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_21FFECC(v10, v11);
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
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5932C93 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__);
    byte_5932C93 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
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
  __int64 v2; // x2
  int v4; // w8
  UserItemMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  UserItemMaster_o *v9; // x20
  unsigned int v10; // w23
  int max; // w22
  struct CommonConsumeEntity_array *v12; // x8
  CommonConsumeEntity_o *v13; // x8
  CommonConsumeEntity_o *v14; // x10
  int32_t num; // w9
  int32_t v16; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v18; // x8
  char *v19; // x9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5932C8F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932C8F = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_21FFECC(Master_object, v6);
  v9 = Master_object;
  v10 = 0;
  max = this->fields.max;
  while ( (signed int)v10 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    v12 = this->fields.exchangeOriginItemList;
    if ( !v12 )
      goto LABEL_32;
    if ( v10 >= LODWORD(v12->max_length) )
      goto LABEL_34;
    v13 = v12->m_Items[v10];
    if ( !v13 || !v9 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v9,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v13->fields.objectId,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( v10 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_34;
      v14 = exchangeOriginItemList->m_Items[v10];
      if ( !v14 )
        goto LABEL_32;
      num = entity->fields.num;
      v16 = v14->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v16 )
        max = num / v16;
      if ( !isShortage )
        goto LABEL_32;
      if ( v10 >= LODWORD(isShortage->max_length) )
        goto LABEL_34;
      isShortage->m_Items[v10] = v16 > num;
    }
    else
    {
      v18 = this->fields.isShortage;
      if ( !v18 )
        goto LABEL_32;
      if ( v10 >= LODWORD(v18->max_length) )
LABEL_34:
        sub_21FFED4(Master_object);
      v19 = (char *)v18 + (int)v10;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
      v19[32] = 1;
    }
    ++v10;
    if ( !exchangeOriginItemList )
      goto LABEL_32;
  }
  return max;
}


void EventTradeSweetsNumConfirmDialogComponent__Init(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntity, 0, v7, v8, v9, v10, v11, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w8
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  makeCount = this->fields.makeCount;
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( makeCount == 1 )
  {
    if ( !itemSlider )
      goto LABEL_18;
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
    if ( !itemSlider )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    v5 = this->fields.makeCount;
    v6 = 0;
  }
  else
  {
    if ( !makeCount )
    {
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
LABEL_18:
      sub_21FFECC(itemSlider, method);
    }
    if ( !itemSlider )
      goto LABEL_18;
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
    if ( !itemSlider )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    v5 = this->fields.makeCount;
    v6 = 1;
  }
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

  if ( (byte_5932C92 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    byte_5932C92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_21FFECC(0, v5);
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

  if ( (byte_5932C91 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    byte_5932C91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsNumConfirmDialogComponent__Open(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        int32_t storeIdx,
        System_Action_int__int__int__o *onDecide,
        bool isReplenishment,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  EventTradeSweetsNumConfirmDialogComponent_o *v12; // x19
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  char v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  char v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventTradeInfo_o *v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *titleLabel; // x22
  int v30; // w8
  __int64 v31; // x1
  __int64 v32; // x2
  LocalizationManager_c *v33; // x0
  UILabel_o *detailLabel; // x22
  __int64 *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  struct EventTradeGoodsEntity_o *v43; // x8
  CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  char v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  char v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w26
  EventTradeGoodsEntity_o *v62; // x21
  int64_t startedAt; // x22
  __int64 v64; // x2
  const MethodInfo *v65; // x5
  struct EventTradeInfo_o *v66; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v67; // x23
  int32_t v68; // w24
  int v69; // w22
  EventTradeGoodsEntity_o *v70; // x21
  int32_t v71; // w21
  const MethodInfo *v72; // x1
  __int64 v73; // x1
  __int64 v74; // x2
  int32_t ItemSliderMax; // w22
  int32_t v76; // w0
  const MethodInfo *v77; // x1
  struct EventTradeGoodsEntity_o *v78; // x8
  int32_t eventId; // w20
  UISprite_o *eventItemIcon; // x21
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  System_String_o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  UILabel_o *eventItemMakeNum; // x20
  System_String_o *v88; // x21
  Il2CppObject *v89; // x0
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  System_Action_o *v92; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_5932C8C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__);
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13998/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_21189/*"icon_{0}"*/);
    sub_21FFC50(&StringLiteral_13995/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/);
    sub_21FFC50(&StringLiteral_9170/*"MULTIPLE_INFO"*/);
    sub_21FFC50(&StringLiteral_14014/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_14016/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_13993/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_5932C8C = 1;
  }
  if ( !v12->fields.state )
  {
    if ( !item )
      goto LABEL_53;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    v12->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.tradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      *(System_String_o **)&storeIdx,
      (System_String_o *)onDecide,
      isReplenishment,
      (int32_t)method,
      v6,
      v7);
    v12->fields.onDecide = onDecide;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.onDecide,
      (int32_t)onDecide,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v12->fields.storeIdx = storeIdx;
    v12->fields.isReplenishment = isReplenishment;
    v26 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
    v12->fields.eventTradeInfo = v26;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.eventTradeInfo,
      (int32_t)v26,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0);
    if ( !this )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    titleLabel = v12->fields.titleLabel;
    v30 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( isReplenishment )
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_14016/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/,
                                                              0);
      if ( !titleLabel )
        goto LABEL_53;
      UILabel__set_text(titleLabel, (System_String_o *)this, 0);
      v33 = LocalizationManager_TypeInfo;
      detailLabel = v12->fields.detailLabel;
      v35 = &StringLiteral_14014/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_20;
    }
    else
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13998/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/,
                                                              0);
      if ( !titleLabel )
        goto LABEL_53;
      UILabel__set_text(titleLabel, (System_String_o *)this, 0);
      v33 = LocalizationManager_TypeInfo;
      detailLabel = v12->fields.detailLabel;
      v35 = &StringLiteral_13993/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
LABEL_20:
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)*v35, 0);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0);
          cancelButtonLb = v12->fields.cancelButtonLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                                  0);
          if ( cancelButtonLb )
          {
            UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
            decideButtonLb = v12->fields.decideButtonLb;
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13995/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
                                                                    0);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
              tradeGoodsEntity = v12->fields.tradeGoodsEntity;
              if ( tradeGoodsEntity )
              {
                this = (EventTradeSweetsNumConfirmDialogComponent_o *)v12->fields.eventItemNameLabel;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, tradeGoodsEntity->fields.name, 0);
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41, v42);
                  this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                  v43 = v12->fields.tradeGoodsEntity;
                  if ( v43 )
                  {
                    if ( this )
                    {
                      SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                           (CommonConsumeMaster_o *)this,
                                           v43->fields.commonConsumeId,
                                           0);
                      v12->fields.exchangeOriginItemList = SortedEntityList;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&v12->fields.exchangeOriginItemList,
                        (int32_t)SortedEntityList,
                        v45,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50);
                      exchangeOriginItemList = v12->fields.exchangeOriginItemList;
                      if ( exchangeOriginItemList )
                      {
                        v52 = sub_21FFD10(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
                        v12->fields.isShortage = (struct System_Boolean_array *)v52;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)&v12->fields.isShortage,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57,
                          v58);
                        if ( isReplenishment )
                        {
                          eventTradeInfo = v12->fields.eventTradeInfo;
                          if ( !eventTradeInfo )
                            goto LABEL_53;
                          tradeNum = eventTradeInfo->fields.tradeNum;
                          v62 = v12->fields.tradeGoodsEntity;
                          startedAt = eventTradeInfo->fields.startedAt;
                          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v59);
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                          v66 = v12->fields.eventTradeInfo;
                          if ( !v66 )
                            goto LABEL_53;
                          v67 = this;
                          v68 = v66->fields.tradeNum;
                          if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item, v64);
                          v69 = EventTradeTimeCalculation__GetCompleteNum_39026620(
                                  v62,
                                  startedAt,
                                  (int64_t)v67,
                                  v68,
                                  0,
                                  v65)
                              - tradeNum;
                        }
                        else
                        {
                          v69 = 0;
                        }
                        v70 = v12->fields.tradeGoodsEntity;
                        if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item, v59);
                        v71 = EventTradeTimeCalculation__GetTradeMaxNum(v70, (const MethodInfo *)item) + v69;
                        v12->fields.max = v71;
                        ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v12, v72);
                        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v73, v74);
                        v76 = System_Math__Min_76940292(v71, ItemSliderMax, 0);
                        v12->fields.max = v76;
                        v12->fields.makeCount = v76;
                        EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v12, v77);
                        v78 = item->fields._TradeGoodsEntity_k__BackingField;
                        if ( v78 )
                        {
                          eventId = v12->fields.eventId;
                          eventItemIcon = v12->fields.eventItemIcon;
                          goodsIconId = v78->fields.goodsIconId;
                          v81 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &goodsIconId);
                          v84 = System_String__Format((System_String_o *)StringLiteral_21189/*"icon_{0}"*/, v81, 0);
                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v82, v83);
                          AtlasManager__SetEventUI_47538316(eventId, eventItemIcon, v84, 0);
                          eventItemMakeNum = v12->fields.eventItemMakeNum;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85, v86);
                          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
                          v89 = (Il2CppObject *)System_Int32__ToString((int)v12 + 320, 0);
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v88, v89, 0);
                          if ( eventItemMakeNum )
                          {
                            UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0);
                            EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v12, v90);
                            EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v12, v91);
                            v12->fields.state = 1;
                            v92 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v92,
                              (Il2CppObject *)v12,
                              Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                              0);
                            BaseDialog__Open((BaseDialog_o *)v12, v92, 0, 0, 0);
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
LABEL_53:
        sub_21FFECC(this, item);
      }
    }
    j_il2cpp_runtime_class_init_0(v33, v31, v32);
    goto LABEL_20;
  }
}


void EventTradeSweetsNumConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  unsigned int v9; // w26
  unsigned int max_length; // w10
  struct UISprite_array *exchangeOriginItemIcon; // x9
  __int64 v12; // x27
  CommonConsumeEntity_o *v13; // x8
  int32_t objectId; // w21
  UISprite_o *v15; // x20
  __int64 v16; // x2
  struct CommonConsumeEntity_array *v17; // x8
  CommonConsumeEntity_o *v18; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v21; // x8
  Il2CppObject *v22; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v25; // x21
  UILabel_o *v26; // x22
  System_String_o *v27; // x0
  struct UILabel_array *v28; // x8
  struct System_Boolean_array *isShortage; // x9
  float v30; // s0 OVERLAPPED
  float v31; // s3
  float v32; // s1
  float v33; // s2
  unsigned int v34; // w26
  unsigned int v35; // w10
  struct UISprite_array *exchangeOriginItemIcon2; // x9
  __int64 v37; // x27
  CommonConsumeEntity_o *v38; // x8
  int32_t v39; // w21
  UISprite_o *v40; // x20
  __int64 v41; // x2
  struct CommonConsumeEntity_array *v42; // x8
  CommonConsumeEntity_o *v43; // x8
  int32_t v44; // w20
  int32_t v45; // w21
  struct CommonConsumeEntity_array *v46; // x8
  Il2CppObject *v47; // x20
  int32_t v48; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v50; // x21
  UILabel_o *v51; // x22
  System_String_o *v52; // x0
  struct UILabel_array *v53; // x8
  struct System_Boolean_array *v54; // x9
  float v55; // s0 OVERLAPPED
  float v56; // s3
  float v57; // s1
  float v58; // s2
  __int64 v59; // x1
  __int64 v60; // x2
  UILabel_o *exchangeDestinationLb; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v66; // x8
  __int64 v67; // x2
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v70; // x8
  const MethodInfo *v71; // x1

  if ( (byte_5932C90 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13997/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_21FFC50(&StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    sub_21FFC50(&StringLiteral_13994/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_5932C90 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13997/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_71;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_71;
  if ( LODWORD(exchangeOriginItemList->max_length) == 3 )
  {
    v9 = 0;
    while ( 1 )
    {
      max_length = exchangeOriginItemList->max_length;
      if ( (int)v9 >= (int)max_length )
        break;
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_71;
      if ( v9 >= LODWORD(exchangeOriginItemIcon->max_length) || v9 >= max_length )
        goto LABEL_94;
      v12 = (int)v9;
      v13 = exchangeOriginItemList->m_Items[v9];
      if ( v13 )
      {
        objectId = v13->fields.objectId;
        v15 = exchangeOriginItemIcon->m_Items[v9];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v15, objectId, 0);
        v17 = this->fields.exchangeOriginItemList;
        if ( v17 )
        {
          if ( v9 >= LODWORD(v17->max_length) )
            goto LABEL_94;
          v18 = v17->m_Items[v9];
          if ( v18 )
          {
            num = v18->fields.num;
            if ( this->fields.makeCount <= 1 )
              makeCount = 1;
            else
              makeCount = this->fields.makeCount;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v16);
            NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0);
            v21 = this->fields.exchangeOriginItemList;
            if ( v21 )
            {
              if ( v9 >= LODWORD(v21->max_length) )
                goto LABEL_94;
              v22 = (Il2CppObject *)NumberFormat;
              NumberFormat = v21->m_Items[v9];
              if ( NumberFormat )
              {
                HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
                NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
                exchangeOriginCounts = this->fields.exchangeOriginCounts;
                if ( exchangeOriginCounts )
                {
                  if ( v9 >= LODWORD(exchangeOriginCounts->max_length) )
                    goto LABEL_94;
                  v25 = (Il2CppObject *)NumberFormat;
                  v26 = exchangeOriginCounts->m_Items[v9];
                  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
                  NumberFormat = (CommonConsumeEntity_o *)System_String__Format_75484576(v27, v22, v25, 0);
                  if ( v26 )
                  {
                    UILabel__set_text(v26, (System_String_o *)NumberFormat, 0);
                    v28 = this->fields.exchangeOriginCounts;
                    if ( v28 )
                    {
                      if ( v9 >= LODWORD(v28->max_length) )
                        goto LABEL_94;
                      isShortage = this->fields.isShortage;
                      if ( isShortage )
                      {
                        if ( v9 >= LODWORD(isShortage->max_length) )
                          goto LABEL_94;
                        NumberFormat = (CommonConsumeEntity_o *)v28->m_Items[v9];
                        if ( NumberFormat )
                        {
                          v30 = 1.0;
                          v31 = 1.0;
                          ++v9;
                          v32 = isShortage->m_Items[v12] ? 0.0 : 1.0;
                          v33 = v32;
                          UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)&v30, 0);
                          exchangeOriginItemList = this->fields.exchangeOriginItemList;
                          if ( exchangeOriginItemList )
                            continue;
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
      goto LABEL_71;
    }
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject;
    if ( !NumberFormat )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat )
      goto LABEL_71;
  }
  else
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = exchangeOriginItemList->max_length;
      if ( (int)v34 >= (int)v35 )
        break;
      exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
      if ( !exchangeOriginItemIcon2 )
        goto LABEL_71;
      if ( v34 >= LODWORD(exchangeOriginItemIcon2->max_length) || v34 >= v35 )
        goto LABEL_94;
      v37 = (int)v34;
      v38 = exchangeOriginItemList->m_Items[v34];
      if ( v38 )
      {
        v39 = v38->fields.objectId;
        v40 = exchangeOriginItemIcon2->m_Items[v34];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v40, v39, 0);
        v42 = this->fields.exchangeOriginItemList;
        if ( v42 )
        {
          if ( v34 >= LODWORD(v42->max_length) )
            goto LABEL_94;
          v43 = v42->m_Items[v34];
          if ( v43 )
          {
            v44 = v43->fields.num;
            if ( this->fields.makeCount <= 1 )
              v45 = 1;
            else
              v45 = this->fields.makeCount;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v41);
            NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v45 * v44, 0);
            v46 = this->fields.exchangeOriginItemList;
            if ( v46 )
            {
              if ( v34 >= LODWORD(v46->max_length) )
                goto LABEL_94;
              v47 = (Il2CppObject *)NumberFormat;
              NumberFormat = v46->m_Items[v34];
              if ( NumberFormat )
              {
                v48 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
                NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v48, 0);
                exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
                if ( exchangeOriginCounts2 )
                {
                  if ( v34 >= LODWORD(exchangeOriginCounts2->max_length) )
                    goto LABEL_94;
                  v50 = (Il2CppObject *)NumberFormat;
                  v51 = exchangeOriginCounts2->m_Items[v34];
                  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
                  NumberFormat = (CommonConsumeEntity_o *)System_String__Format_75484576(v52, v47, v50, 0);
                  if ( v51 )
                  {
                    UILabel__set_text(v51, (System_String_o *)NumberFormat, 0);
                    v53 = this->fields.exchangeOriginCounts2;
                    if ( v53 )
                    {
                      if ( v34 >= LODWORD(v53->max_length) )
                        goto LABEL_94;
                      v54 = this->fields.isShortage;
                      if ( v54 )
                      {
                        if ( v34 >= LODWORD(v54->max_length) )
                          goto LABEL_94;
                        NumberFormat = (CommonConsumeEntity_o *)v53->m_Items[v34];
                        if ( NumberFormat )
                        {
                          v55 = 1.0;
                          v56 = 1.0;
                          ++v34;
                          v57 = v54->m_Items[v37] ? 0.0 : 1.0;
                          v58 = v57;
                          UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)&v55, 0);
                          exchangeOriginItemList = this->fields.exchangeOriginItemList;
                          if ( exchangeOriginItemList )
                            continue;
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
      goto LABEL_71;
    }
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0),
          (NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject) == 0) )
    {
LABEL_71:
      sub_21FFECC(NumberFormat, v6);
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 0, 0);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13994/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_71;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v63);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_71;
  if ( !NumberFormat )
    goto LABEL_71;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_71;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_71;
  if ( !LODWORD(GiftListById->max_length) )
LABEL_94:
    sub_21FFED4(NumberFormat);
  v66 = GiftListById->m_Items[0];
  if ( !v66 )
    goto LABEL_71;
  if ( !NumberFormat )
    goto LABEL_71;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v66->fields.objectId,
                                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_71;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v67);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0);
  v70 = this->fields.tradeGoodsEntity;
  if ( !v70 )
    goto LABEL_71;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v70->fields.eventPointItemId, 0);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v71);
}


void EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  System_String_o *v5; // x20
  UILabel_o *exchangeDestinationItemCount; // x0
  __int64 v7; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v9; // x21
  Il2CppObject *NumberFormat; // x22
  int32_t v11; // w0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct EventTradeInfo_o *v17; // x9
  System_String_o *v18; // x22
  struct EventTradeGoodsEntity_o *v19; // x8
  int32_t makeCount; // w9
  int32_t eventPointNum; // w8
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  int32_t v26; // w0
  Il2CppObject *v27; // x0
  struct EventTradeGoodsEntity_o *v28; // x8
  int32_t v29; // w9
  int32_t v30; // w8
  System_String_o *v31; // x21

  if ( (byte_5932C96 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9170/*"MULTIPLE_INFO"*/);
    sub_21FFC50(&StringLiteral_14015/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_5932C96 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isReplenishment )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
    exchangeDestinationItemCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14015/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v9 = (System_String_o *)exchangeDestinationItemCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
      v11 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v11, 0);
      v13 = (Il2CppObject *)System_String__Format_75484576(v9, NumberFormat, v12, 0);
      v14 = System_String__Format(v5, v13, 0);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
      exchangeDestinationItemCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14015/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v17 = this->fields.eventTradeInfo;
        if ( v17 )
        {
          v18 = (System_String_o *)exchangeDestinationItemCount;
          exchangeDestinationItemCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                        v17->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                        0);
          v19 = this->fields.tradeGoodsEntity;
          if ( v19 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v19->fields.eventPointNum;
            v22 = (Il2CppObject *)exchangeDestinationItemCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0);
            v24 = (Il2CppObject *)System_String__Format_75484576(v18, v22, v23, 0);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_28:
    sub_21FFECC(exchangeDestinationItemCount, v7);
  }
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
  if ( this->fields.makeCount <= 1 )
    v26 = 1;
  else
    v26 = this->fields.makeCount;
  v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0);
  v14 = System_String__Format(v25, v27, 0);
  exchangeDestinationItemCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
  v28 = this->fields.tradeGoodsEntity;
  if ( !v28 )
    goto LABEL_28;
  v29 = this->fields.makeCount;
  v30 = v28->fields.eventPointNum;
  v15 = (System_String_o *)exchangeDestinationItemCount;
  if ( v29 <= 1 )
    v29 = 1;
  v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v29 * v30, 0);
LABEL_25:
  v31 = System_String__Format(v15, v24, 0);
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  if ( !exchangeDestinationItemCount )
    goto LABEL_28;
  UILabel__set_text(exchangeDestinationItemCount, v14, 0);
  exchangeDestinationItemCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationItemCount )
    goto LABEL_28;
  UILabel__set_text(exchangeDestinationItemCount, v31, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventTradeSweetsNumConfirmDialogComponent_o *v4; // x19
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *v6; // x20
  int32_t tradeNum; // w21
  int64_t startedAt; // x22
  const MethodInfo *v9; // x3
  struct EventTradeInfo_o *v10; // x8
  char *v11; // x22
  int64_t v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *v15; // x19
  int64_t v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t Time; // x23
  int64_t v23; // x0
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  Il2CppObject *v28; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *v29; // x1
  UILabel_o *v30; // x0
  UILabel_o *tradeCompletionTimeLabel; // x20
  System_String_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x21
  int32_t makeCount; // w22
  System_String_o *v38; // x19
  int64_t TradeFinishTime; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v4 = this;
  if ( (byte_5932C8D & 1) == 0 )
  {
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13986/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_21FFC50(&StringLiteral_13992/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_26374/*"{0,2}:{1:D2}:{2:D2}"*/);
    byte_5932C8D = 1;
  }
  if ( !v4->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v4->fields.tradeCompletionTimeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13992/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
    tradeGoodsEntity = v4->fields.tradeGoodsEntity;
    makeCount = v4->fields.makeCount;
    v38 = v32;
    if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v33, v34);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1, v35);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0,
                                         (System_String_o *)StringLiteral_26374/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v38, RestTimeInFormat, 0);
    if ( tradeCompletionTimeLabel )
    {
      v29 = this;
      v30 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_21FFECC(this, method);
  }
  eventTradeInfo = v4->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_23;
  v6 = v4->fields.tradeGoodsEntity;
  tradeNum = eventTradeInfo->fields.tradeNum;
  startedAt = eventTradeInfo->fields.startedAt;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, method, v2);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)EventTradeTimeCalculation__GetTradeFinishTime(
                                                          v6,
                                                          tradeNum,
                                                          startedAt,
                                                          v3);
  v10 = v4->fields.eventTradeInfo;
  if ( !v10 )
    goto LABEL_23;
  v11 = (char *)this + v10->fields.startedAt;
  v12 = EventTradeTimeCalculation__GetTradeFinishTime(
          v4->fields.tradeGoodsEntity,
          v4->fields.makeCount,
          (int64_t)v11,
          v9);
  v15 = v4->fields.tradeCompletionTimeLabel;
  v16 = v12;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13992/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v18);
  Time = NetworkManager__getTime(0);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20, v21);
  v23 = System_Math__Max_76939968((int64_t)&v11[-Time], 0, 0);
  v24 = LocalizationManager__GetRestTimeInFormat(v23 + v16, 0, (System_String_o *)StringLiteral_26374/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13986/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
  v26 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v16, 0, (System_String_o *)StringLiteral_26374/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v27 = System_String__Format(v25, v26, 0);
  v28 = (Il2CppObject *)System_String__Concat_75438412(v24, v27, 0);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v19, v28, 0);
  if ( !v15 )
    goto LABEL_23;
  v29 = this;
  v30 = v15;
LABEL_22:
  UILabel__set_text(v30, (System_String_o *)v29, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__SliderValueChange(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *itemSlider; // x0
  __int64 v4; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  unsigned int v6; // w25
  unsigned int max_length; // w9
  CommonConsumeEntity_o *v8; // x8
  int32_t num; // w20
  int v10; // w22
  struct CommonConsumeEntity_array *v11; // x8
  Il2CppObject *v12; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v15; // x22
  UILabel_o *v16; // x21
  System_String_o *v17; // x0
  unsigned int v18; // w25
  unsigned int v19; // w9
  CommonConsumeEntity_o *v20; // x8
  int32_t v21; // w20
  int32_t makeCount; // w22
  struct CommonConsumeEntity_array *v23; // x8
  Il2CppObject *v24; // x20
  int32_t v25; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v27; // x22
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_5932C95 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_5932C95 = 1;
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
LABEL_39:
    sub_21FFECC(itemSlider, method);
  }
  if ( LODWORD(exchangeOriginItemList->max_length) == 3 )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length = exchangeOriginItemList->max_length;
      if ( (int)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        goto LABEL_41;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( v8 )
      {
        num = v8->fields.num;
        v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
        itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v10 * num, 0);
        v11 = this->fields.exchangeOriginItemList;
        if ( v11 )
        {
          if ( v6 >= LODWORD(v11->max_length) )
            goto LABEL_41;
          v12 = (Il2CppObject *)itemSlider;
          itemSlider = v11->m_Items[v6];
          if ( itemSlider )
          {
            HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
            itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
            exchangeOriginCounts = this->fields.exchangeOriginCounts;
            if ( exchangeOriginCounts )
            {
              if ( v6 >= LODWORD(exchangeOriginCounts->max_length) )
                goto LABEL_41;
              v15 = (Il2CppObject *)itemSlider;
              v16 = exchangeOriginCounts->m_Items[v6];
              v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
              itemSlider = (CommonConsumeEntity_o *)System_String__Format_75484576(v17, v12, v15, 0);
              if ( v16 )
              {
                ++v6;
                UILabel__set_text(v16, (System_String_o *)itemSlider, 0);
                exchangeOriginItemList = this->fields.exchangeOriginItemList;
                if ( exchangeOriginItemList )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_39;
    }
  }
  else
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = exchangeOriginItemList->max_length;
      if ( (int)v18 >= (int)v19 )
        break;
      if ( v18 >= v19 )
        goto LABEL_41;
      v20 = exchangeOriginItemList->m_Items[v18];
      if ( v20 )
      {
        v21 = v20->fields.num;
        if ( this->fields.makeCount <= 1 )
          makeCount = 1;
        else
          makeCount = this->fields.makeCount;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
        itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v21, 0);
        v23 = this->fields.exchangeOriginItemList;
        if ( v23 )
        {
          if ( v18 >= LODWORD(v23->max_length) )
            goto LABEL_41;
          v24 = (Il2CppObject *)itemSlider;
          itemSlider = v23->m_Items[v18];
          if ( itemSlider )
          {
            v25 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
            itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v25, 0);
            exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
            if ( exchangeOriginCounts2 )
            {
              if ( v18 >= LODWORD(exchangeOriginCounts2->max_length) )
LABEL_41:
                sub_21FFED4(itemSlider);
              v27 = (Il2CppObject *)itemSlider;
              v28 = exchangeOriginCounts2->m_Items[v18];
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13996/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
              itemSlider = (CommonConsumeEntity_o *)System_String__Format_75484576(v29, v24, v27, 0);
              if ( v28 )
              {
                ++v18;
                UILabel__set_text(v28, (System_String_o *)itemSlider, 0);
                exchangeOriginItemList = this->fields.exchangeOriginItemList;
                if ( exchangeOriginItemList )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_39;
    }
  }
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
  __int64 v3; // x1
  __int64 v4; // x2
  UILabel_o *eventItemMakeNum; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  int64_t Time; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x20
  int64_t startedAt; // x21
  __int64 v15; // x2
  const MethodInfo *v16; // x5
  struct EventTradeInfo_o *v17; // x8
  int64_t v18; // x22
  int32_t v19; // w23
  int v20; // w23
  EventTradeGoodsEntity_o *v21; // x20
  int32_t TradeMaxNum; // w20
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t ItemSliderMax; // w21
  int32_t v27; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t v30; // w20
  System_Math_c *v31; // x0
  int32_t makeCount; // w21
  UISliderWithButton_o *itemSlider; // x8
  int32_t max; // w8
  const MethodInfo *v35; // x1

  if ( (byte_5932C8E & 1) == 0 )
  {
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9170/*"MULTIPLE_INFO"*/);
    byte_5932C8E = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
  v7 = (Il2CppObject *)System_Int32__ToString((int)this + 320, 0);
  Time = (int64_t)System_String__Format(v6, v7, 0);
  if ( !eventItemMakeNum )
    goto LABEL_38;
  UILabel__set_text(eventItemMakeNum, (System_String_o *)Time, 0);
  if ( this->fields.isReplenishment )
  {
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_38;
    tradeNum = eventTradeInfo->fields.tradeNum;
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    startedAt = eventTradeInfo->fields.startedAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
    Time = NetworkManager__getTime(0);
    v17 = this->fields.eventTradeInfo;
    if ( !v17 )
      goto LABEL_38;
    v18 = Time;
    v19 = v17->fields.tradeNum;
    if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v9, v15);
    v20 = EventTradeTimeCalculation__GetCompleteNum_39026620(tradeGoodsEntity, startedAt, v18, v19, 0, v16) - tradeNum;
  }
  else
  {
    v20 = 0;
  }
  v21 = this->fields.tradeGoodsEntity;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v9, v10);
  TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v21, v9);
  ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(this, v23);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24, v25);
  v27 = System_Math__Min_76940292(TradeMaxNum + v20, ItemSliderMax, 0);
  if ( this->fields.max != v27 )
  {
    v30 = v27;
    v31 = System_Math_TypeInfo;
    makeCount = this->fields.makeCount;
    this->fields.max = v30;
    if ( !*(&v31->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v31, v28, v29);
    Time = System_Math__Min_76940292(v30, makeCount, 0);
    itemSlider = this->fields.itemSlider;
    this->fields.makeCount = Time;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, Time, 1, 1, 0);
      max = this->fields.max;
      Time = (int64_t)this->fields.itemSlider;
      if ( max == 1 )
      {
        if ( Time )
        {
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
            Time = (int64_t)this->fields.itemSlider;
            if ( Time )
            {
              UISliderWithButton__grayMode((UISliderWithButton_o *)Time, 0);
              goto LABEL_37;
            }
          }
        }
      }
      else if ( max )
      {
        if ( Time )
        {
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
            Time = (int64_t)this->fields.itemSlider;
            if ( Time )
            {
              UISliderWithButton__normalMode((UISliderWithButton_o *)Time, 0);
              goto LABEL_37;
            }
          }
        }
      }
      else if ( Time )
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
LABEL_37:
            EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(this, v35);
            return;
          }
        }
      }
    }
LABEL_38:
    sub_21FFECC(Time, v9);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932C94 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C94 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}