void __fastcall EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F59B & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3F59B = 1;
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
    v4 = sub_1BDB81C(&this->fields.onDecide);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1BDBAD4(v4, v5);
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B3F597 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, v3);
    byte_4B3F597 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UserItemMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v10; // x20
  __int64 v11; // x23
  struct CommonConsumeEntity_array *v12; // x8
  CommonConsumeEntity_o *v13; // x8
  CommonConsumeEntity_o *v14; // x10
  int32_t num; // w9
  int32_t v16; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v18; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3F593 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    byte_4B3F593 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_1BDBAD4(Master_object, v6);
  max = this->fields.max;
  v10 = Master_object;
  v11 = 0LL;
  while ( (int)v11 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v6);
      byte_4B3ED56 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    v12 = this->fields.exchangeOriginItemList;
    if ( !v12 )
      goto LABEL_32;
    if ( (unsigned int)v11 >= v12->max_length )
      goto LABEL_34;
    v13 = v12->m_Items[v11];
    if ( !v13 || !v10 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v10,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v13->fields.objectId,
                                          0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( (unsigned int)v11 >= exchangeOriginItemList->max_length )
        goto LABEL_34;
      v14 = exchangeOriginItemList->m_Items[v11];
      if ( !v14 )
        goto LABEL_32;
      num = entity->fields.num;
      v16 = v14->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v16 )
        max = num / v16;
      if ( !isShortage )
        goto LABEL_32;
      if ( (unsigned int)v11 >= isShortage->max_length )
        goto LABEL_34;
      isShortage->m_Items[v11 + 4] = v16 > num;
    }
    else
    {
      v18 = this->fields.isShortage;
      if ( !v18 )
        goto LABEL_32;
      if ( (unsigned int)v11 >= v18->max_length )
LABEL_34:
        sub_1BDBADC(Master_object, v6, v7);
      v18->m_Items[v11 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v11;
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
    sub_1BDBAD4(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BDB81C(&this->fields.tradeGoodsEntity);
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
    sub_1BDBAD4(itemSlider, method);
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

  if ( (byte_4B3F596 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__, method);
    byte_4B3F596 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BDBAD4(0LL, v5);
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

  if ( (byte_4B3F595 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__, method);
    byte_4B3F595 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x22
  struct EventTradeInfo_o *v30; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x23
  UILabel_o *titleLabel; // x24
  System_String_o **v33; // x8
  UILabel_o *detailLabel; // x24
  System_String_o **v35; // x8
  UILabel_o *cancelButtonLb; // x24
  UILabel_o *decideButtonLb; // x24
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct EventTradeInfo_o *v40; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v42; // x21
  int64_t startedAt; // x24
  const MethodInfo *v44; // x5
  struct EventTradeInfo_o *v45; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v46; // x23
  int32_t v47; // w25
  int v48; // w23
  EventTradeGoodsEntity_o *v49; // x21
  int32_t v50; // w21
  const MethodInfo *v51; // x1
  int32_t ItemSliderMax; // w22
  int32_t v53; // w0
  const MethodInfo *v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  int32_t eventId; // w21
  UISprite_o *eventItemIcon; // x22
  Il2CppObject *v61; // x0
  System_String_o *v62; // x23
  UILabel_o *eventItemMakeNum; // x21
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  System_Action_o *v68; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B3F590 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, item);
    sub_1BDB878(&AtlasManager_TypeInfo, v11);
    sub_1BDB878(&bool___TypeInfo, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonConsumeMaster___, v13);
    sub_1BDB878(&DataManager_TypeInfo, v14);
    sub_1BDB878(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__, v15);
    sub_1BDB878(&EventTradeTimeCalculation_TypeInfo, v16);
    sub_1BDB878(&int_TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&System_Math_TypeInfo, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&StringLiteral_13442/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/, v21);
    sub_1BDB878(&StringLiteral_20269/*"icon_{0}"*/, v22);
    sub_1BDB878(&StringLiteral_13439/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/, v23);
    sub_1BDB878(&StringLiteral_8809/*"MULTIPLE_INFO"*/, v24);
    sub_1BDB878(&StringLiteral_13458/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/, v25);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v26);
    sub_1BDB878(&StringLiteral_13460/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/, v27);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BDB878(&StringLiteral_13437/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v28);
    byte_4B3F590 = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
      sub_1BDB81C(&v10->fields.tradeGoodsEntity);
      v10->fields.onDecide = onDecide;
      sub_1BDB81C(&v10->fields.onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v30 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v30;
      sub_1BDB81C(&v10->fields.eventTradeInfo);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = (System_String_o **)&StringLiteral_13460/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v33 = (System_String_o **)&StringLiteral_13442/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v33, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v35 = (System_String_o **)&StringLiteral_13458/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v35 = (System_String_o **)&StringLiteral_13437/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v35, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13439/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
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
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        v10->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                                               (CommonConsumeMaster_o *)this,
                                                               (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                               0LL);
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BDB81C(&v10->fields.exchangeOriginItemList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v10->fields.isShortage = (struct System_Boolean_array *)sub_1BDB920(
                                                                                    bool___TypeInfo,
                                                                                    exchangeOriginItemList->max_length);
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BDB81C(&v10->fields.isShortage);
                          if ( isReplenishment )
                          {
                            v40 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            tradeNum = v40->fields.tradeNum;
                            v42 = *p_tradeGoodsEntity;
                            startedAt = v40->fields.startedAt;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                            v45 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v46 = this;
                            v47 = v45->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                            v48 = EventTradeTimeCalculation__GetCompleteNum_31670780(
                                    v42,
                                    startedAt,
                                    (int64_t)v46,
                                    v47,
                                    0,
                                    v44)
                                - tradeNum;
                          }
                          else
                          {
                            v48 = 0;
                          }
                          v49 = *p_tradeGoodsEntity;
                          if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                          v50 = EventTradeTimeCalculation__GetTradeMaxNum(v49, (const MethodInfo *)item) + v48;
                          v10->fields.max = v50;
                          ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v10, v51);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v53 = System_Math__Min_64100908(v50, ItemSliderMax, 0LL);
                          v10->fields.max = v53;
                          v10->fields.makeCount = v53;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v54);
                          TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( TradeGoodsEntity_k__BackingField )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
                            v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v55, v56, v57);
                            v62 = System_String__Format((System_String_o *)StringLiteral_20269/*"icon_{0}"*/, v61, 0LL);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI_39626228(eventId, eventItemIcon, v62, 0LL);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
                            v65 = (Il2CppObject *)System_Int32__ToString((int)v10 + 320, 0LL);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v64, v65, 0LL);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0LL);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v66);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v67);
                              v10->fields.state = 1;
                              v68 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                              System_Action___ctor(
                                v68,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)v10, v68, 0, 0LL);
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
    sub_1BDBAD4(this, item);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v17; // x9
  int v18; // w25
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v20; // x8
  UISprite_o *v21; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v23; // x8
  CommonConsumeEntity_o *v24; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v27; // x8
  Il2CppObject *v28; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v31; // x21
  UILabel_o *v32; // x22
  System_String_o *v33; // x0
  struct UILabel_array *v34; // x8
  struct System_Boolean_array *isShortage; // x9
  float v36; // s1
  float v37; // s0
  float v38; // s3
  float v39; // s2
  unsigned int v40; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v42; // x8
  UISprite_o *v43; // x20
  int32_t v44; // w21
  struct CommonConsumeEntity_array *v45; // x8
  CommonConsumeEntity_o *v46; // x8
  int32_t v47; // w20
  int32_t v48; // w21
  struct CommonConsumeEntity_array *v49; // x8
  Il2CppObject *v50; // x20
  int32_t v51; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v53; // x21
  UILabel_o *v54; // x22
  System_String_o *v55; // x0
  struct UILabel_array *v56; // x8
  struct System_Boolean_array *v57; // x9
  float v58; // s1
  float v59; // s0
  float v60; // s3
  float v61; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v65; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v68; // x8
  const MethodInfo *v69; // x1

  if ( (byte_4B3F594 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&StringLiteral_13441/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v9);
    sub_1BDB878(&StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v10);
    sub_1BDB878(&StringLiteral_13438/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v11);
    byte_4B3F594 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13441/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  v17 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v17 == 3 )
  {
    v18 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( v18 >= exchangeOriginItemIcon->max_length || v18 >= (unsigned int)v17 )
        goto LABEL_94;
      v20 = exchangeOriginItemList->m_Items[v18];
      if ( !v20 )
        goto LABEL_93;
      v21 = exchangeOriginItemIcon->m_Items[v18];
      objectId = v20->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v21, objectId, 0LL);
      v23 = this->fields.exchangeOriginItemList;
      if ( !v23 )
        goto LABEL_93;
      if ( v18 >= v23->max_length )
        goto LABEL_94;
      v24 = v23->m_Items[v18];
      if ( !v24 )
        goto LABEL_93;
      num = v24->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0LL);
      v27 = this->fields.exchangeOriginItemList;
      if ( !v27 )
        goto LABEL_93;
      if ( v18 >= v27->max_length )
        goto LABEL_94;
      v28 = (Il2CppObject *)NumberFormat;
      NumberFormat = v27->m_Items[v18];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( v18 >= exchangeOriginCounts->max_length )
        goto LABEL_94;
      v31 = (Il2CppObject *)NumberFormat;
      v32 = exchangeOriginCounts->m_Items[v18];
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_62613552(v33, v28, v31, 0LL);
      if ( !v32 )
        goto LABEL_93;
      UILabel__set_text(v32, (System_String_o *)NumberFormat, 0LL);
      v34 = this->fields.exchangeOriginCounts;
      if ( !v34 )
        goto LABEL_93;
      if ( v18 >= v34->max_length )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( v18 >= isShortage->max_length )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v34->m_Items[v18];
      v36 = isShortage->m_Items[v18 + 4] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v37 = 1.0;
      v38 = 1.0;
      v39 = v36;
      UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v36 - 1), 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(v17) = exchangeOriginItemList->max_length;
      ++v18;
    }
    while ( v18 < (int)v17 );
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
    if ( (int)v17 >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v40 >= exchangeOriginItemIcon2->max_length || v40 >= (unsigned int)v17 )
          goto LABEL_94;
        v42 = exchangeOriginItemList->m_Items[v40];
        if ( !v42 )
          break;
        v43 = exchangeOriginItemIcon2->m_Items[v40];
        v44 = v42->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v43, v44, 0LL);
        v45 = this->fields.exchangeOriginItemList;
        if ( !v45 )
          break;
        if ( v40 >= v45->max_length )
          goto LABEL_94;
        v46 = v45->m_Items[v40];
        if ( !v46 )
          break;
        v47 = v46->fields.num;
        if ( this->fields.makeCount <= 1 )
          v48 = 1;
        else
          v48 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v48 * v47, 0LL);
        v49 = this->fields.exchangeOriginItemList;
        if ( !v49 )
          break;
        if ( v40 >= v49->max_length )
          goto LABEL_94;
        v50 = (Il2CppObject *)NumberFormat;
        NumberFormat = v49->m_Items[v40];
        if ( !NumberFormat )
          break;
        v51 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v51, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v40 >= exchangeOriginCounts2->max_length )
          goto LABEL_94;
        v53 = (Il2CppObject *)NumberFormat;
        v54 = exchangeOriginCounts2->m_Items[v40];
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_62613552(v55, v50, v53, 0LL);
        if ( !v54 )
          break;
        UILabel__set_text(v54, (System_String_o *)NumberFormat, 0LL);
        v56 = this->fields.exchangeOriginCounts2;
        if ( !v56 )
          break;
        if ( v40 >= v56->max_length )
          goto LABEL_94;
        v57 = this->fields.isShortage;
        if ( !v57 )
          break;
        if ( v40 >= v57->max_length )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v56->m_Items[v40];
        v58 = v57->m_Items[v40 + 4] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v59 = 1.0;
        v60 = 1.0;
        v61 = v58;
        UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v58 - 1), 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v17) = exchangeOriginItemList->max_length;
        if ( (int)++v40 >= (int)v17 )
          goto LABEL_74;
      }
LABEL_93:
      sub_1BDBAD4(NumberFormat, v14);
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
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0LL);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !GiftListById->max_length )
LABEL_94:
    sub_1BDBADC(NumberFormat, v14, v15);
  v65 = GiftListById->m_Items[0];
  if ( !v65 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v65->fields.objectId,
                                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0LL);
  v68 = this->fields.tradeGoodsEntity;
  if ( !v68 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v68->fields.eventPointItemId, 0LL);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v69);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isReplenishment; // w21
  System_String_o *v6; // x20
  UILabel_o *exchangeDestinationPointCount; // x0
  __int64 v8; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v10; // x21
  Il2CppObject *NumberFormat; // x22
  int32_t v12; // w0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct EventTradeInfo_o *v18; // x9
  System_String_o *v19; // x22
  struct EventTradeGoodsEntity_o *v20; // x8
  int32_t makeCount; // w9
  int32_t eventPointNum; // w8
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w0
  Il2CppObject *v27; // x0
  struct EventTradeGoodsEntity_o *v28; // x8
  int32_t v29; // w9
  int32_t v30; // w8
  System_String_o *v31; // x21

  if ( (byte_4B3F59A & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_8809/*"MULTIPLE_INFO"*/, v3);
    sub_1BDB878(&StringLiteral_13459/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, v4);
    byte_4B3F59A = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13459/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v10 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
      v12 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v13 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12, 0LL);
      v14 = (Il2CppObject *)System_String__Format_62613552(v10, NumberFormat, v13, 0LL);
      v15 = System_String__Format(v6, v14, 0LL);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13459/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v18 = this->fields.eventTradeInfo;
        if ( v18 )
        {
          v19 = (System_String_o *)exchangeDestinationPointCount;
          exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                         v18->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                         0LL);
          v20 = this->fields.tradeGoodsEntity;
          if ( v20 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v20->fields.eventPointNum;
            v23 = (Il2CppObject *)exchangeDestinationPointCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0LL);
            v25 = (Il2CppObject *)System_String__Format_62613552(v19, v23, v24, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1BDBAD4(exchangeDestinationPointCount, v8);
  }
  if ( this->fields.makeCount <= 1 )
    v26 = 1;
  else
    v26 = this->fields.makeCount;
  v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0LL);
  v15 = System_String__Format(v6, v27, 0LL);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
  v28 = this->fields.tradeGoodsEntity;
  if ( !v28 )
    goto LABEL_26;
  v29 = this->fields.makeCount;
  v30 = v28->fields.eventPointNum;
  v16 = (System_String_o *)exchangeDestinationPointCount;
  if ( v29 <= 1 )
    v29 = 1;
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v29 * v30, 0LL);
LABEL_23:
  exchangeDestinationPointCount = (UILabel_o *)System_String__Format(v16, v25, 0LL);
  if ( !this->fields.exchangeDestinationItemCount )
    goto LABEL_26;
  v31 = (System_String_o *)exchangeDestinationPointCount;
  UILabel__set_text(this->fields.exchangeDestinationItemCount, v15, 0LL);
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationPointCount )
    goto LABEL_26;
  UILabel__set_text(exchangeDestinationPointCount, v31, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeSweetsNumConfirmDialogComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *v11; // x22
  int32_t tradeNum; // w20
  int64_t startedAt; // x21
  const MethodInfo *v14; // x3
  struct EventTradeInfo_o *v15; // x8
  char *v16; // x22
  int64_t v17; // x0
  UILabel_o *v18; // x19
  int64_t v19; // x21
  System_String_o *v20; // x20
  int64_t Time; // x23
  int64_t v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  Il2CppObject *v27; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *v28; // x1
  UILabel_o *v29; // x0
  UILabel_o *tradeCompletionTimeLabel; // x20
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x21
  int32_t makeCount; // w22
  System_String_o *v35; // x19
  int64_t TradeFinishTime; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = this;
  if ( (byte_4B3F591 & 1) == 0 )
  {
    sub_1BDB878(&EventTradeTimeCalculation_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&System_Math_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_13430/*"TRADE_EVENT_ADD_TIME_LABEL"*/, v7);
    sub_1BDB878(&StringLiteral_13436/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, v8);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BDB878(&StringLiteral_25119/*"{0,2}:{1:D2}:{2:D2}"*/, v9);
    byte_4B3F591 = 1;
  }
  if ( !v3->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v3->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
    tradeGoodsEntity = v3->fields.tradeGoodsEntity;
    makeCount = v3->fields.makeCount;
    v35 = v31;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1LL, v32);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0LL,
                                         (System_String_o *)StringLiteral_25119/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0LL);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v35, RestTimeInFormat, 0LL);
    if ( tradeCompletionTimeLabel )
    {
      v28 = this;
      v29 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1BDBAD4(this, method);
  }
  eventTradeInfo = v3->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_23;
  v11 = v3->fields.tradeGoodsEntity;
  tradeNum = eventTradeInfo->fields.tradeNum;
  startedAt = eventTradeInfo->fields.startedAt;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)EventTradeTimeCalculation__GetTradeFinishTime(
                                                          v11,
                                                          tradeNum,
                                                          startedAt,
                                                          v2);
  v15 = v3->fields.eventTradeInfo;
  if ( !v15 )
    goto LABEL_23;
  v16 = (char *)this + v15->fields.startedAt;
  v17 = EventTradeTimeCalculation__GetTradeFinishTime(
          v3->fields.tradeGoodsEntity,
          v3->fields.makeCount,
          (int64_t)v16,
          v14);
  v18 = v3->fields.tradeCompletionTimeLabel;
  v19 = v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = System_Math__Max_64100592((int64_t)&v16[-Time], 0LL, 0LL);
  v23 = LocalizationManager__GetRestTimeInFormat(v22 + v19, 0LL, (System_String_o *)StringLiteral_25119/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13430/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v19, 0LL, (System_String_o *)StringLiteral_25119/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v26 = System_String__Format(v24, v25, 0LL);
  v27 = (Il2CppObject *)System_String__Concat_62572260(v23, v26, 0LL);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v20, v27, 0LL);
  if ( !v18 )
    goto LABEL_23;
  v28 = this;
  v29 = v18;
LABEL_22:
  UILabel__set_text(v29, (System_String_o *)v28, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SliderValueChange(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonConsumeEntity_o *itemSlider; // x0
  __int64 v5; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v7; // x9
  signed int v8; // w10
  __int64 v9; // x25
  CommonConsumeEntity_o *v10; // x8
  int32_t num; // w20
  int v12; // w21
  struct CommonConsumeEntity_array *v13; // x8
  Il2CppObject *v14; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v17; // x21
  UILabel_o *v18; // x22
  System_String_o *v19; // x0
  signed int v20; // w10
  __int64 v21; // x25
  CommonConsumeEntity_o *v22; // x8
  int32_t v23; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v25; // x8
  Il2CppObject *v26; // x20
  int32_t v27; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v29; // x21
  UILabel_o *v30; // x22
  System_String_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_4B3F599 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v3);
    byte_4B3F599 = 1;
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
    sub_1BDBAD4(itemSlider, method);
  }
  v7 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v7 == 3 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)v7 )
    {
      v9 = v8;
      v10 = exchangeOriginItemList->m_Items[v8];
      if ( !v10 )
        goto LABEL_41;
      num = v10->fields.num;
      v12 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v12 * num, 0LL);
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_41;
      if ( (unsigned int)v9 >= v13->max_length )
        goto LABEL_42;
      v14 = (Il2CppObject *)itemSlider;
      itemSlider = v13->m_Items[v9];
      if ( !itemSlider )
        goto LABEL_41;
      HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_41;
      if ( (unsigned int)v9 >= exchangeOriginCounts->max_length )
        goto LABEL_42;
      v17 = (Il2CppObject *)itemSlider;
      v18 = exchangeOriginCounts->m_Items[v9];
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_62613552(v19, v14, v17, 0LL);
      if ( !v18 )
        goto LABEL_41;
      UILabel__set_text(v18, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v7) = exchangeOriginItemList->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= (int)v7 )
        goto LABEL_40;
    }
    goto LABEL_42;
  }
  if ( (int)v7 >= 1 )
  {
    v20 = 0;
    while ( v20 < (unsigned int)v7 )
    {
      v21 = v20;
      v22 = exchangeOriginItemList->m_Items[v20];
      if ( !v22 )
        goto LABEL_41;
      v23 = v22->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v23, 0LL);
      v25 = this->fields.exchangeOriginItemList;
      if ( !v25 )
        goto LABEL_41;
      if ( (unsigned int)v21 >= v25->max_length )
        break;
      v26 = (Il2CppObject *)itemSlider;
      itemSlider = v25->m_Items[v21];
      if ( !itemSlider )
        goto LABEL_41;
      v27 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v27, 0LL);
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        goto LABEL_41;
      if ( (unsigned int)v21 >= exchangeOriginCounts2->max_length )
        break;
      v29 = (Il2CppObject *)itemSlider;
      v30 = exchangeOriginCounts2->m_Items[v21];
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_62613552(v31, v26, v29, 0LL);
      if ( !v30 )
        goto LABEL_41;
      UILabel__set_text(v30, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v7) = exchangeOriginItemList->max_length;
      v20 = v21 + 1;
      if ( (int)v21 + 1 >= (int)v7 )
        goto LABEL_40;
    }
LABEL_42:
    sub_1BDBADC(itemSlider, method, v5);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, method);
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, v32);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *eventItemMakeNum; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  int64_t Time; // x0
  const MethodInfo *v11; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x20
  int64_t startedAt; // x21
  const MethodInfo *v16; // x5
  struct EventTradeInfo_o *v17; // x8
  int64_t v18; // x22
  int32_t v19; // w23
  int v20; // w23
  EventTradeGoodsEntity_o *v21; // x20
  int32_t TradeMaxNum; // w20
  const MethodInfo *v23; // x1
  int32_t ItemSliderMax; // w21
  int32_t v25; // w0
  int32_t v26; // w20
  int32_t makeCount; // w21
  UISliderWithButton_o *itemSlider; // x8
  int32_t max; // w20
  const MethodInfo *v30; // x1

  if ( (byte_4B3F592 & 1) == 0 )
  {
    sub_1BDB878(&EventTradeTimeCalculation_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&System_Math_TypeInfo, v4);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8809/*"MULTIPLE_INFO"*/, v6);
    byte_4B3F592 = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString((int)this + 320, 0LL);
  Time = (int64_t)System_String__Format(v8, v9, 0LL);
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
    v17 = this->fields.eventTradeInfo;
    if ( !v17 )
      goto LABEL_35;
    v18 = Time;
    v19 = v17->fields.tradeNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v20 = EventTradeTimeCalculation__GetCompleteNum_31670780(tradeGoodsEntity, startedAt, v18, v19, 0, v16) - tradeNum;
  }
  else
  {
    v20 = 0;
  }
  v21 = this->fields.tradeGoodsEntity;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v21, v11);
  ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(this, v23);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v25 = System_Math__Min_64100908(TradeMaxNum + v20, ItemSliderMax, 0LL);
  if ( this->fields.max != v25 )
  {
    this->fields.max = v25;
    v26 = v25;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Time = System_Math__Min_64100908(v26, makeCount, 0LL);
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
              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(this, v30);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BDBAD4(Time, v11);
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

  if ( (byte_4B3F598 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F598 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}