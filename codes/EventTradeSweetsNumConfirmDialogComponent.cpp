void __fastcall EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B112FA & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B112FA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    v4 = sub_1BCA784(&this->fields.onDecide, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1BCAA3C(v4, v5);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B112F6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, v5, v6);
    byte_4B112F6 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Master_object; // x0
  __int64 v9; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w21
  UserItemMaster_o *v12; // x20
  __int64 v13; // x22
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x8
  CommonConsumeEntity_o *v16; // x10
  int32_t num; // w9
  int32_t v18; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v20; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B112F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B112F2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_28:
    sub_1BCAA3C(Master_object, v9);
  max = this->fields.max;
  v12 = (UserItemMaster_o *)Master_object;
  v13 = 0LL;
  while ( (int)v13 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Master_object = NetworkManager__get_UserId(0LL);
    v14 = this->fields.exchangeOriginItemList;
    if ( !v14 )
      goto LABEL_28;
    if ( (unsigned int)v13 >= v14->max_length )
      goto LABEL_30;
    v15 = v14->m_Items[v13];
    if ( !v15 || !v12 )
      goto LABEL_28;
    Master_object = UserItemMaster__TryGetEntity(v12, &entity, Master_object, v15->fields.objectId, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_28;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_28;
      if ( (unsigned int)v13 >= exchangeOriginItemList->max_length )
        goto LABEL_30;
      v16 = exchangeOriginItemList->m_Items[v13];
      if ( !v16 )
        goto LABEL_28;
      num = entity->fields.num;
      v18 = v16->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v18 )
        max = num / v18;
      if ( !isShortage )
        goto LABEL_28;
      if ( (unsigned int)v13 >= isShortage->max_length )
        goto LABEL_30;
      isShortage->m_Items[v13 + 4] = v18 > num;
    }
    else
    {
      v20 = this->fields.isShortage;
      if ( !v20 )
        goto LABEL_28;
      if ( (unsigned int)v13 >= v20->max_length )
LABEL_30:
        sub_1BCAA44(Master_object, v9);
      v20->m_Items[v13 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v13;
    if ( !exchangeOriginItemList )
      goto LABEL_28;
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
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BCA784(&this->fields.tradeGoodsEntity, 0LL);
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
    sub_1BCAA3C(itemSlider, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B112F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B112F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventTradeSweetsNumConfirmDialogComponent__Close(this, v8);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B112F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B112F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x22
  struct EventTradeInfo_o *v49; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x23
  __int64 v51; // x1
  UILabel_o *titleLabel; // x24
  System_String_o **v53; // x8
  __int64 v54; // x1
  UILabel_o *detailLabel; // x24
  System_String_o **v56; // x8
  __int64 v57; // x1
  UILabel_o *cancelButtonLb; // x24
  UILabel_o *decideButtonLb; // x24
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  __int64 v61; // x1
  CommonConsumeEntity_array *SortedEntityList; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v64; // x0
  struct EventTradeInfo_o *v65; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v67; // x21
  int64_t startedAt; // x24
  const MethodInfo *v69; // x5
  struct EventTradeInfo_o *v70; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v71; // x23
  int32_t v72; // w25
  int v73; // w23
  EventTradeGoodsEntity_o *v74; // x21
  int32_t v75; // w21
  const MethodInfo *v76; // x1
  __int64 v77; // x1
  int32_t ItemSliderMax; // w22
  int32_t v79; // w0
  const MethodInfo *v80; // x1
  struct EventTradeGoodsEntity_o *v81; // x8
  int32_t eventId; // w21
  UISprite_o *eventItemIcon; // x22
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  System_String_o *v86; // x23
  __int64 v87; // x1
  UILabel_o *eventItemMakeNum; // x21
  System_String_o *v89; // x22
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_o *v96; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B112EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&storeIdx);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&bool___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__, v19, v20);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Math_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_13543/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_20412/*"icon_{0}"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13540/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13559/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_13561/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/, v43, v44);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13538/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v45, v46);
    byte_4B112EF = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_1BCA784(&v10->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
      v10->fields.onDecide = onDecide;
      sub_1BCA784(&v10->fields.onDecide, onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v49 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v49;
      sub_1BCA784(&v10->fields.eventTradeInfo, v49);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        v53 = (System_String_o **)&StringLiteral_13561/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v53 = (System_String_o **)&StringLiteral_13543/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v53, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
          v56 = (System_String_o **)&StringLiteral_13559/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v56 = (System_String_o **)&StringLiteral_13538/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v56, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13540/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
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
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                             (CommonConsumeMaster_o *)this,
                                             (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                             0LL);
                        v10->fields.exchangeOriginItemList = SortedEntityList;
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BCA784(
                                                                                &v10->fields.exchangeOriginItemList,
                                                                                SortedEntityList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v64 = sub_1BCA888(bool___TypeInfo, exchangeOriginItemList->max_length);
                          v10->fields.isShortage = (struct System_Boolean_array *)v64;
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BCA784(
                                                                                  &v10->fields.isShortage,
                                                                                  v64);
                          if ( isReplenishment )
                          {
                            v65 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            tradeNum = v65->fields.tradeNum;
                            v67 = *p_tradeGoodsEntity;
                            startedAt = v65->fields.startedAt;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                            v70 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v71 = this;
                            v72 = v70->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item);
                            v73 = EventTradeTimeCalculation__GetCompleteNum_31314548(
                                    v67,
                                    startedAt,
                                    (int64_t)v71,
                                    v72,
                                    0,
                                    v69)
                                - tradeNum;
                          }
                          else
                          {
                            v73 = 0;
                          }
                          v74 = *p_tradeGoodsEntity;
                          if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item);
                          v75 = EventTradeTimeCalculation__GetTradeMaxNum(v74, (const MethodInfo *)item) + v73;
                          v10->fields.max = v75;
                          ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v10, v76);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v77);
                          v79 = System_Math__Min_63220524(v75, ItemSliderMax, 0LL);
                          v10->fields.max = v79;
                          v10->fields.makeCount = v79;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v80);
                          v81 = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( v81 )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = v81->fields.goodsIconId;
                            v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
                            v86 = System_String__Format((System_String_o *)StringLiteral_20412/*"icon_{0}"*/, v84, 0LL);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v85);
                            AtlasManager__SetEventUI_38574572(eventId, eventItemIcon, v86, 0LL);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
                            v89 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
                            v90 = (Il2CppObject *)System_Int32__ToString((int)v10 + 312, 0LL);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v89, v90, 0LL);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0LL);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v91);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v92);
                              v10->fields.state = 1;
                              v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v94, v95);
                              System_Action___ctor(
                                v96,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)v10, v96, 0, 0LL);
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
    sub_1BCAA3C(this, item);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v24; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v26; // x9
  int v27; // w25
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v29; // x8
  UISprite_o *v30; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v32; // x8
  CommonConsumeEntity_o *v33; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v36; // x8
  Il2CppObject *v37; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v40; // x21
  UILabel_o *v41; // x22
  System_String_o *v42; // x0
  struct UILabel_array *v43; // x8
  struct System_Boolean_array *isShortage; // x9
  float v45; // s1
  float v46; // s0
  float v47; // s3
  float v48; // s2
  unsigned int v49; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v51; // x8
  UISprite_o *v52; // x20
  int32_t v53; // w21
  struct CommonConsumeEntity_array *v54; // x8
  CommonConsumeEntity_o *v55; // x8
  int32_t v56; // w20
  int32_t v57; // w21
  struct CommonConsumeEntity_array *v58; // x8
  Il2CppObject *v59; // x20
  int32_t v60; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v62; // x21
  UILabel_o *v63; // x22
  System_String_o *v64; // x0
  struct UILabel_array *v65; // x8
  struct System_Boolean_array *v66; // x9
  float v67; // s1
  float v68; // s0
  float v69; // s3
  float v70; // s2
  __int64 v71; // x1
  UILabel_o *exchangeDestinationLb; // x20
  __int64 v73; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v76; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v79; // x8
  const MethodInfo *v80; // x1

  if ( (byte_4B112F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_13542/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_13539/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v20, v21);
    byte_4B112F3 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13542/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  v26 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v26 == 3 )
  {
    v27 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( v27 >= exchangeOriginItemIcon->max_length || v27 >= (unsigned int)v26 )
        goto LABEL_94;
      v29 = exchangeOriginItemList->m_Items[v27];
      if ( !v29 )
        goto LABEL_93;
      v30 = exchangeOriginItemIcon->m_Items[v27];
      objectId = v29->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v30, objectId, 0LL);
      v32 = this->fields.exchangeOriginItemList;
      if ( !v32 )
        goto LABEL_93;
      if ( v27 >= v32->max_length )
        goto LABEL_94;
      v33 = v32->m_Items[v27];
      if ( !v33 )
        goto LABEL_93;
      num = v33->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0LL);
      v36 = this->fields.exchangeOriginItemList;
      if ( !v36 )
        goto LABEL_93;
      if ( v27 >= v36->max_length )
        goto LABEL_94;
      v37 = (Il2CppObject *)NumberFormat;
      NumberFormat = v36->m_Items[v27];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( v27 >= exchangeOriginCounts->max_length )
        goto LABEL_94;
      v40 = (Il2CppObject *)NumberFormat;
      v41 = exchangeOriginCounts->m_Items[v27];
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_62415592(v42, v37, v40, 0LL);
      if ( !v41 )
        goto LABEL_93;
      UILabel__set_text(v41, (System_String_o *)NumberFormat, 0LL);
      v43 = this->fields.exchangeOriginCounts;
      if ( !v43 )
        goto LABEL_93;
      if ( v27 >= v43->max_length )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( v27 >= isShortage->max_length )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v43->m_Items[v27];
      v45 = isShortage->m_Items[v27 + 4] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v46 = 1.0;
      v47 = 1.0;
      v48 = v45;
      UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v45 - 1), 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(v26) = exchangeOriginItemList->max_length;
      ++v27;
    }
    while ( v27 < (int)v26 );
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
    if ( (int)v26 >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v49 >= exchangeOriginItemIcon2->max_length || v49 >= (unsigned int)v26 )
          goto LABEL_94;
        v51 = exchangeOriginItemList->m_Items[v49];
        if ( !v51 )
          break;
        v52 = exchangeOriginItemIcon2->m_Items[v49];
        v53 = v51->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v52, v53, 0LL);
        v54 = this->fields.exchangeOriginItemList;
        if ( !v54 )
          break;
        if ( v49 >= v54->max_length )
          goto LABEL_94;
        v55 = v54->m_Items[v49];
        if ( !v55 )
          break;
        v56 = v55->fields.num;
        if ( this->fields.makeCount <= 1 )
          v57 = 1;
        else
          v57 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v57 * v56, 0LL);
        v58 = this->fields.exchangeOriginItemList;
        if ( !v58 )
          break;
        if ( v49 >= v58->max_length )
          goto LABEL_94;
        v59 = (Il2CppObject *)NumberFormat;
        NumberFormat = v58->m_Items[v49];
        if ( !NumberFormat )
          break;
        v60 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v60, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v49 >= exchangeOriginCounts2->max_length )
          goto LABEL_94;
        v62 = (Il2CppObject *)NumberFormat;
        v63 = exchangeOriginCounts2->m_Items[v49];
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_62415592(v64, v59, v62, 0LL);
        if ( !v63 )
          break;
        UILabel__set_text(v63, (System_String_o *)NumberFormat, 0LL);
        v65 = this->fields.exchangeOriginCounts2;
        if ( !v65 )
          break;
        if ( v49 >= v65->max_length )
          goto LABEL_94;
        v66 = this->fields.isShortage;
        if ( !v66 )
          break;
        if ( v49 >= v66->max_length )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v65->m_Items[v49];
        v67 = v66->m_Items[v49 + 4] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v68 = 1.0;
        v69 = 1.0;
        v70 = v67;
        UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v67 - 1), 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v26) = exchangeOriginItemList->max_length;
        if ( (int)++v49 >= (int)v26 )
          goto LABEL_74;
      }
LABEL_93:
      sub_1BCAA3C(NumberFormat, v24);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13539/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v73);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0LL);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !GiftListById->max_length )
LABEL_94:
    sub_1BCAA44(NumberFormat, v24);
  v76 = GiftListById->m_Items[0];
  if ( !v76 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v76->fields.objectId,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0LL);
  v79 = this->fields.tradeGoodsEntity;
  if ( !v79 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v79->fields.eventPointItemId, 0LL);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v80);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 isReplenishment; // w21
  System_String_o *v9; // x20
  UILabel_o *exchangeDestinationPointCount; // x0
  __int64 v11; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v13; // x21
  Il2CppObject *NumberFormat; // x22
  int32_t v15; // w0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct EventTradeInfo_o *v21; // x9
  System_String_o *v22; // x22
  struct EventTradeGoodsEntity_o *v23; // x8
  int32_t makeCount; // w9
  int32_t eventPointNum; // w8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w0
  Il2CppObject *v30; // x0
  struct EventTradeGoodsEntity_o *v31; // x8
  int32_t v32; // w9
  int32_t v33; // w8
  System_String_o *v34; // x21

  if ( (byte_4B112F9 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_13560/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, v6, v7);
    byte_4B112F9 = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v13 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
      v15 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0LL);
      v17 = (Il2CppObject *)System_String__Format_62415592(v13, NumberFormat, v16, 0LL);
      v18 = System_String__Format(v9, v17, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v21 = this->fields.eventTradeInfo;
        if ( v21 )
        {
          v22 = (System_String_o *)exchangeDestinationPointCount;
          exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                         v21->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                         0LL);
          v23 = this->fields.tradeGoodsEntity;
          if ( v23 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v23->fields.eventPointNum;
            v26 = (Il2CppObject *)exchangeDestinationPointCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0LL);
            v28 = (Il2CppObject *)System_String__Format_62415592(v22, v26, v27, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(exchangeDestinationPointCount, v11);
  }
  if ( this->fields.makeCount <= 1 )
    v29 = 1;
  else
    v29 = this->fields.makeCount;
  v30 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v29, 0LL);
  v18 = System_String__Format(v9, v30, 0LL);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  v31 = this->fields.tradeGoodsEntity;
  if ( !v31 )
    goto LABEL_26;
  v32 = this->fields.makeCount;
  v33 = v31->fields.eventPointNum;
  v19 = (System_String_o *)exchangeDestinationPointCount;
  if ( v32 <= 1 )
    v32 = 1;
  v28 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v32 * v33, 0LL);
LABEL_23:
  exchangeDestinationPointCount = (UILabel_o *)System_String__Format(v19, v28, 0LL);
  if ( !this->fields.exchangeDestinationItemCount )
    goto LABEL_26;
  v34 = (System_String_o *)exchangeDestinationPointCount;
  UILabel__set_text(this->fields.exchangeDestinationItemCount, v18, 0LL);
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationPointCount )
    goto LABEL_26;
  UILabel__set_text(exchangeDestinationPointCount, v34, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventTradeSweetsNumConfirmDialogComponent_o *v4; // x19
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
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *v18; // x22
  int32_t tradeNum; // w20
  int64_t startedAt; // x21
  const MethodInfo *v21; // x3
  struct EventTradeInfo_o *v22; // x8
  char *v23; // x22
  int64_t v24; // x0
  __int64 v25; // x1
  UILabel_o *v26; // x19
  int64_t v27; // x21
  __int64 v28; // x1
  System_String_o *v29; // x20
  __int64 v30; // x1
  int64_t Time; // x23
  int64_t v32; // x0
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  Il2CppObject *v37; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *v38; // x1
  UILabel_o *v39; // x0
  UILabel_o *tradeCompletionTimeLabel; // x20
  System_String_o *v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x21
  int32_t makeCount; // w22
  System_String_o *v46; // x19
  int64_t TradeFinishTime; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v4 = this;
  if ( (byte_4B112F0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13531/*"TRADE_EVENT_ADD_TIME_LABEL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13537/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, v13, v14);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/, v15, v16);
    byte_4B112F0 = 1;
  }
  if ( !v4->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v4->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_13537/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
    tradeGoodsEntity = v4->fields.tradeGoodsEntity;
    makeCount = v4->fields.makeCount;
    v46 = v41;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v42);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1LL, v43);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0LL,
                                         (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0LL);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v46, RestTimeInFormat, 0LL);
    if ( tradeCompletionTimeLabel )
    {
      v38 = this;
      v39 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1BCAA3C(this, method);
  }
  eventTradeInfo = v4->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_23;
  v18 = v4->fields.tradeGoodsEntity;
  tradeNum = eventTradeInfo->fields.tradeNum;
  startedAt = eventTradeInfo->fields.startedAt;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, method);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)EventTradeTimeCalculation__GetTradeFinishTime(
                                                          v18,
                                                          tradeNum,
                                                          startedAt,
                                                          v3);
  v22 = v4->fields.eventTradeInfo;
  if ( !v22 )
    goto LABEL_23;
  v23 = (char *)this + v22->fields.startedAt;
  v24 = EventTradeTimeCalculation__GetTradeFinishTime(
          v4->fields.tradeGoodsEntity,
          v4->fields.makeCount,
          (int64_t)v23,
          v21);
  v26 = v4->fields.tradeCompletionTimeLabel;
  v27 = v24;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13537/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30);
  v32 = System_Math__Max_63220208((int64_t)&v23[-Time], 0LL, 0LL);
  v33 = LocalizationManager__GetRestTimeInFormat(v32 + v27, 0LL, (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13531/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
  v35 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v27, 0LL, (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v36 = System_String__Format(v34, v35, 0LL);
  v37 = (Il2CppObject *)System_String__Concat_62401220(v33, v36, 0LL);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v29, v37, 0LL);
  if ( !v26 )
    goto LABEL_23;
  v38 = this;
  v39 = v26;
LABEL_22:
  UILabel__set_text(v39, (System_String_o *)v38, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SliderValueChange(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonConsumeEntity_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v8; // x9
  signed int v9; // w10
  __int64 v10; // x25
  CommonConsumeEntity_o *v11; // x8
  int32_t num; // w20
  int v13; // w21
  struct CommonConsumeEntity_array *v14; // x8
  Il2CppObject *v15; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v18; // x21
  UILabel_o *v19; // x22
  System_String_o *v20; // x0
  signed int v21; // w10
  __int64 v22; // x25
  CommonConsumeEntity_o *v23; // x8
  int32_t v24; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v26; // x8
  Il2CppObject *v27; // x20
  int32_t v28; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v30; // x21
  UILabel_o *v31; // x22
  System_String_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4B112F8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v4, v5);
    byte_4B112F8 = 1;
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
    sub_1BCAA3C(itemSlider, method);
  }
  v8 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)v8 )
    {
      v10 = v9;
      v11 = exchangeOriginItemList->m_Items[v9];
      if ( !v11 )
        goto LABEL_41;
      num = v11->fields.num;
      v13 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v13 * num, 0LL);
      v14 = this->fields.exchangeOriginItemList;
      if ( !v14 )
        goto LABEL_41;
      if ( (unsigned int)v10 >= v14->max_length )
        goto LABEL_42;
      v15 = (Il2CppObject *)itemSlider;
      itemSlider = v14->m_Items[v10];
      if ( !itemSlider )
        goto LABEL_41;
      HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_41;
      if ( (unsigned int)v10 >= exchangeOriginCounts->max_length )
        goto LABEL_42;
      v18 = (Il2CppObject *)itemSlider;
      v19 = exchangeOriginCounts->m_Items[v10];
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_62415592(v20, v15, v18, 0LL);
      if ( !v19 )
        goto LABEL_41;
      UILabel__set_text(v19, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v8) = exchangeOriginItemList->max_length;
      v9 = v10 + 1;
      if ( (int)v10 + 1 >= (int)v8 )
        goto LABEL_40;
    }
    goto LABEL_42;
  }
  if ( (int)v8 >= 1 )
  {
    v21 = 0;
    while ( v21 < (unsigned int)v8 )
    {
      v22 = v21;
      v23 = exchangeOriginItemList->m_Items[v21];
      if ( !v23 )
        goto LABEL_41;
      v24 = v23->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v24, 0LL);
      v26 = this->fields.exchangeOriginItemList;
      if ( !v26 )
        goto LABEL_41;
      if ( (unsigned int)v22 >= v26->max_length )
        break;
      v27 = (Il2CppObject *)itemSlider;
      itemSlider = v26->m_Items[v22];
      if ( !itemSlider )
        goto LABEL_41;
      v28 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v28, 0LL);
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        goto LABEL_41;
      if ( (unsigned int)v22 >= exchangeOriginCounts2->max_length )
        break;
      v30 = (Il2CppObject *)itemSlider;
      v31 = exchangeOriginCounts2->m_Items[v22];
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_62415592(v32, v27, v30, 0LL);
      if ( !v31 )
        goto LABEL_41;
      UILabel__set_text(v31, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v8) = exchangeOriginItemList->max_length;
      v21 = v22 + 1;
      if ( (int)v22 + 1 >= (int)v8 )
        goto LABEL_40;
    }
LABEL_42:
    sub_1BCAA44(itemSlider, method);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, method);
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, v33);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UILabel_o *eventItemMakeNum; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  int64_t Time; // x0
  const MethodInfo *v17; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x20
  int64_t startedAt; // x21
  const MethodInfo *v22; // x5
  struct EventTradeInfo_o *v23; // x8
  int64_t v24; // x22
  int32_t v25; // w23
  int v26; // w23
  EventTradeGoodsEntity_o *v27; // x20
  int32_t TradeMaxNum; // w20
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  int32_t ItemSliderMax; // w21
  int32_t v32; // w0
  __int64 v33; // x1
  int32_t v34; // w20
  int32_t makeCount; // w21
  UISliderWithButton_o *itemSlider; // x8
  int32_t max; // w20
  const MethodInfo *v38; // x1

  if ( (byte_4B112F1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v10, v11);
    byte_4B112F1 = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  v15 = (Il2CppObject *)System_Int32__ToString((int)this + 312, 0LL);
  Time = (int64_t)System_String__Format(v14, v15, 0LL);
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
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Time = NetworkManager__getTime(0LL);
    v23 = this->fields.eventTradeInfo;
    if ( !v23 )
      goto LABEL_35;
    v24 = Time;
    v25 = v23->fields.tradeNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v17);
    v26 = EventTradeTimeCalculation__GetCompleteNum_31314548(tradeGoodsEntity, startedAt, v24, v25, 0, v22) - tradeNum;
  }
  else
  {
    v26 = 0;
  }
  v27 = this->fields.tradeGoodsEntity;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v17);
  TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v27, v17);
  ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(this, v29);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30);
  v32 = System_Math__Min_63220524(TradeMaxNum + v26, ItemSliderMax, 0LL);
  if ( this->fields.max != v32 )
  {
    this->fields.max = v32;
    v34 = v32;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v33);
    Time = System_Math__Min_63220524(v34, makeCount, 0LL);
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
              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(this, v38);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(Time, v17);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B112F7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B112F7 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}