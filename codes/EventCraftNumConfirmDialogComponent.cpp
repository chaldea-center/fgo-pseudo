void EventCraftNumConfirmDialogComponent___ctor(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2156F & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo);
    byte_4C2156F = 1;
  }
  this->fields.exChangeOriginItemUi = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_1C2D538(EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo, 2);
  sub_1C2D434(&this->fields.exChangeOriginItemUi);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftNumConfirmDialogComponent__Close(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C2156B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent_Init__);
    byte_4C2156B = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventCraftNumConfirmDialogComponent__GetItemSliderMax(
        EventCraftNumConfirmDialogComponent_o *this,
        int32_t craftMax,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w20
  EventCraftNumConfirmDialogComponent_o *v5; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 v7; // x23
  UserItemMaster_o *userItemMaster; // x22
  struct CommonConsumeEntity_array *v9; // x8
  CommonConsumeEntity_o *v10; // x8
  CommonConsumeEntity_o *v11; // x10
  int32_t num; // w9
  int32_t v13; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v15; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = craftMax;
  v5 = this;
  if ( (byte_4C21566 & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C21566 = 1;
  }
  entity = 0;
  consumeItemList = v5->fields.consumeItemList;
  if ( !consumeItemList )
LABEL_30:
    sub_1C2D6EC(this, *(_QWORD *)&craftMax);
  v7 = 0;
  while ( (int)v7 < SLODWORD(consumeItemList->max_length) )
  {
    userItemMaster = v5->fields.userItemMaster;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v9 = v5->fields.consumeItemList;
    if ( !v9 )
      goto LABEL_30;
    if ( (unsigned int)v7 >= LODWORD(v9->max_length) )
      goto LABEL_32;
    v10 = v9->m_Items[v7];
    if ( !v10 || !userItemMaster )
      goto LABEL_30;
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                      v10->fields.objectId,
                                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      consumeItemList = v5->fields.consumeItemList;
      if ( !consumeItemList )
        goto LABEL_30;
      if ( (unsigned int)v7 >= LODWORD(consumeItemList->max_length) )
        goto LABEL_32;
      v11 = consumeItemList->m_Items[v7];
      if ( !v11 )
        goto LABEL_30;
      num = entity->fields.num;
      v13 = v11->fields.num;
      isShortage = v5->fields.isShortage;
      if ( v4 >= num / v13 )
        v4 = num / v13;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v7 >= LODWORD(isShortage->max_length) )
        goto LABEL_32;
      isShortage->m_Items[v7] = v13 > num;
    }
    else
    {
      v15 = v5->fields.isShortage;
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)v7 >= LODWORD(v15->max_length) )
LABEL_32:
        sub_1C2D6F4(this, *(_QWORD *)&craftMax, method, v3);
      v15->m_Items[v7] = 1;
      consumeItemList = v5->fields.consumeItemList;
      v4 = 0;
    }
    ++v7;
    if ( !consumeItemList )
      goto LABEL_30;
  }
  return v4;
}


void EventCraftNumConfirmDialogComponent__Init(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0;
  sub_1C2D434(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftNumConfirmDialogComponent__InitItemSlider(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t max; // w8
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  max = this->fields.max;
  if ( max == 1 )
  {
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
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
    v5 = this->fields.max;
    v6 = 0;
  }
  else
  {
    if ( !max )
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
LABEL_18:
      sub_1C2D6EC(itemSlider, method);
    }
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
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
    v5 = this->fields.max;
    v6 = 1;
  }
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0);
}


void EventCraftNumConfirmDialogComponent__OnClickCancel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C2156A & 1) == 0 )
  {
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    byte_4C2156A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C2D6EC(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    EventCraftNumConfirmDialogComponent__Close(this, v7);
  }
}


void EventCraftNumConfirmDialogComponent__OnClickDecide(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  unsigned int v9; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9

  if ( (byte_4C21569 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int____int__bool___);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    sub_1C2D490(&int___TypeInfo);
    byte_4C21569 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = sub_1C2D538(int___TypeInfo, 2);
    if ( v5 )
    {
      v9 = *(_DWORD *)(v5 + 24);
      v6 = v5;
      if ( !v9 )
        goto LABEL_13;
      *(_DWORD *)(v5 + 32) = this->fields.storeIdx;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        if ( v9 > 1 )
        {
          *(_DWORD *)(v5 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            (System_Action_T1__T2__T3__o *)this->fields.onDecide,
            (Il2CppObject *)v5,
            this->fields.makeCount,
            this->fields.isButtonOn,
            (const MethodInfo_301B894 *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_1C2D6F4(v5, v5, v7, v8);
      }
    }
    sub_1C2D6EC(v5, v6);
  }
}


void EventCraftNumConfirmDialogComponent__OnClickSupportToolButton(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x20
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  EventCraftNumConfirmDialogComponent___c_c *v5; // x0
  System_Func_object__long__o *_9__56_0; // x21
  Il2CppObject *v7; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  int64_t Time; // x21
  int64_t v11; // x0
  int32_t isButtonOn; // w20
  int64_t v13; // x20
  BalanceConfig_c *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v19; // x8
  const MethodInfo *v20; // x1

  if ( (byte_4C21568 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    sub_1C2D490(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__);
    sub_1C2D490(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_17462/*"btn_boostitem_off"*/);
    sub_1C2D490(&StringLiteral_17463/*"btn_boostitem_on"*/);
    byte_4C21568 = 1;
  }
  v3 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.craftPickupInfoList, 0) )
  {
    craftPickupInfoList = this->fields.craftPickupInfoList;
    v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__56_0 = (System_Func_object__long__o *)v5->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__56_0 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__56_0,
        v7,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__,
        0);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__56_0;
      sub_1C2D434(&static_fields->__9__56_0);
    }
    v9 = System_Linq_Enumerable__Select_object__long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
           (System_Func_TSource__TResult__o *)_9__56_0,
           (const MethodInfo_3104D28 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v3 = System_Linq_Enumerable__Max_66459884((System_Collections_Generic_IEnumerable_long__o *)v9, 0);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Max_64982052(v3 - Time, 0, 0);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = isButtonOn ^ 1;
    v15 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C2D4A8(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, isButtonOn, 0, 0);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_1C2D6EC(0, v17);
    if ( this->fields.isButtonOn )
      v19 = &StringLiteral_17463/*"btn_boostitem_on"*/;
    else
      v19 = &StringLiteral_17462/*"btn_boostitem_off"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v19, 0);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v20);
    return;
  }
  v13 = v11;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( v13 <= v14->static_fields->SECONDS_PER_DAY )
  {
    isButtonOn = this->fields.isButtonOn;
    goto LABEL_21;
  }
}


void EventCraftNumConfirmDialogComponent__Open(
        EventCraftNumConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *supportToolItem,
        System_Action_int____int__bool__o *decideAction,
        bool replenishment,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent_o *v12; // x19
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UserItemMaster_o *userItemMaster; // x25
  UserItemMaster_o **p_userItemMaster; // x24
  int32_t id; // w3
  int32_t num; // w28
  ItemEntity_o *v18; // x1
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x24
  UILabel_o *titleLabel; // x25
  _BOOL4 isReplenishment; // w29
  System_String_o **v24; // x8
  UILabel_o *detailLabel; // x25
  _BOOL4 v26; // w29
  System_String_o **v27; // x8
  UILabel_o *cancelButtonLb; // x25
  UILabel_o *decideButtonLb; // x25
  _BOOL4 v30; // w29
  System_String_o **v31; // x8
  UILabel_o *useSupportToolLb; // x25
  UILabel_o *supportToolMaskLb; // x25
  UILabel_o *supportToolPossessionLb; // x25
  System_String_o *v35; // x26
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  UILabel_o *supportToolPossessionLbHeader; // x25
  UILabel_o *supportToolLeftTimeHeaderLb; // x25
  UISprite_o *supportToolItemSp; // x25
  struct CommonConsumeEntity_array *consumeItemList; // x8
  const MethodInfo *v44; // x3
  struct EventTradeInfo_o *v45; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v47; // x22
  int64_t startedAt; // x25
  const MethodInfo *v49; // x7
  struct EventTradeInfo_o *v50; // x8
  EventCraftNumConfirmDialogComponent_o *v51; // x24
  int32_t v52; // w26
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int v54; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventTradeGoodsEntity_o *v56; // x20
  int32_t v57; // w20
  const MethodInfo *v58; // x2
  int32_t ItemSliderMax; // w21
  int32_t v60; // w0
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  System_Action_o *v64; // x20
  int32_t v65; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v12 = this;
  if ( (byte_4C21563 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__);
    sub_1C2D490(&EventCraftTimeCalculation_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17462/*"btn_boostitem_off"*/);
    sub_1C2D490(&StringLiteral_3889/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/);
    sub_1C2D490(&StringLiteral_3887/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/);
    sub_1C2D490(&StringLiteral_3899/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3885/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/);
    sub_1C2D490(&StringLiteral_3883/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_3904/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_1C2D490(&StringLiteral_3882/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3886/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/);
    sub_1C2D490(&StringLiteral_3897/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3888/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_3898/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4C21563 = 1;
  }
  entity = 0;
  if ( !v12->fields.state )
  {
    if ( !item )
      goto LABEL_88;
    p_tradeGoodsEntity = &v12->fields.tradeGoodsEntity;
    v12->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
    sub_1C2D434(&v12->fields.tradeGoodsEntity);
    v12->fields.onDecide = decideAction;
    sub_1C2D434(&v12->fields.onDecide);
    userItemMaster = v12->fields.userItemMaster;
    v12->fields.storeIdx = storeIndex;
    if ( !userItemMaster )
    {
      p_userItemMaster = &v12->fields.userItemMaster;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      *p_userItemMaster = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
      sub_1C2D434(&v12->fields.userItemMaster);
      userItemMaster = *p_userItemMaster;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( NetworkManager_TypeInfo->_2.cctor_finished )
    {
      if ( supportToolItem )
        goto LABEL_15;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
      if ( supportToolItem )
      {
LABEL_15:
        id = supportToolItem->fields.id;
        if ( !userItemMaster )
          goto LABEL_88;
LABEL_19:
        this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                          userItemMaster,
                                                          &entity,
                                                          *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                          id,
                                                          0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_88;
          num = entity->fields.num;
          if ( num <= 0 )
            v18 = 0;
          else
            v18 = supportToolItem;
        }
        else
        {
          num = 0;
          v18 = 0;
        }
        v12->fields.supportTool = v18;
        sub_1C2D434(&v12->fields.supportTool);
        supportTool = v12->fields.supportTool;
        if ( supportTool )
          LODWORD(supportTool) = ItemEntity__GetTradePickupTime(supportTool, 0);
        v12->fields.supportToolTime = (int)supportTool;
        v12->fields.isReplenishment = replenishment;
        if ( replenishment )
          TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
        else
          TradeInfo_k__BackingField = 0;
        p_eventTradeInfo = &v12->fields.eventTradeInfo;
        v12->fields.eventTradeInfo = TradeInfo_k__BackingField;
        sub_1C2D434(&v12->fields.eventTradeInfo);
        v12->fields.craftPickupInfoList = item->fields._PickupInfoList_k__BackingField;
        sub_1C2D434(&v12->fields.craftPickupInfoList);
        if ( !v12->fields.itemMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v12->fields.itemMaster = (struct ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
          sub_1C2D434(&v12->fields.itemMaster);
        }
        if ( !v12->fields.giftMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v12->fields.giftMaster = (struct GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
          sub_1C2D434(&v12->fields.giftMaster);
        }
        titleLabel = v12->fields.titleLabel;
        isReplenishment = v12->fields.isReplenishment;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = (System_String_o **)&StringLiteral_3888/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
        if ( isReplenishment )
          v24 = (System_String_o **)&StringLiteral_3899/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v24, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0);
          detailLabel = v12->fields.detailLabel;
          v26 = v12->fields.isReplenishment;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = (System_String_o **)&StringLiteral_3883/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( v26 )
            v27 = (System_String_o **)&StringLiteral_3898/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v27, 0);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0);
            cancelButtonLb = v12->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
              decideButtonLb = v12->fields.decideButtonLb;
              v30 = v12->fields.isReplenishment;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v31 = (System_String_o **)&StringLiteral_3882/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
              if ( v30 )
                v31 = (System_String_o **)&StringLiteral_3897/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v31, 0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                this = (EventCraftNumConfirmDialogComponent_o *)v12->fields.useSupportToolBtnSp;
                v12->fields.isButtonOn = 0;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17462/*"btn_boostitem_off"*/, 0);
                  useSupportToolLb = v12->fields.useSupportToolLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3889/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                    0);
                  if ( useSupportToolLb )
                  {
                    UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0);
                    supportToolMaskLb = v12->fields.supportToolMaskLb;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3885/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                      0);
                    if ( supportToolMaskLb )
                    {
                      UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0);
                      supportToolPossessionLb = v12->fields.supportToolPossessionLb;
                      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3886/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0);
                      v65 = num;
                      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v36, v37, v38);
                      this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v35, v39, 0);
                      if ( supportToolPossessionLb )
                      {
                        UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0);
                        supportToolPossessionLbHeader = v12->fields.supportToolPossessionLbHeader;
                        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3887/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                          0);
                        if ( supportToolPossessionLbHeader )
                        {
                          UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0);
                          supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
                          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3904/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                            0);
                          if ( supportToolLeftTimeHeaderLb )
                          {
                            UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0);
                            supportToolItemSp = v12->fields.supportToolItemSp;
                            if ( supportToolItem )
                              LODWORD(supportToolItem) = supportToolItem->fields.id;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(supportToolItemSp, (int32_t)supportToolItem, 0);
                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                            this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                            if ( *p_tradeGoodsEntity )
                            {
                              if ( this )
                              {
                                v12->fields.consumeItemList = CommonConsumeMaster__GetSortedEntityList(
                                                                (CommonConsumeMaster_o *)this,
                                                                (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                                0);
                                this = (EventCraftNumConfirmDialogComponent_o *)sub_1C2D434(&v12->fields.consumeItemList);
                                consumeItemList = v12->fields.consumeItemList;
                                if ( consumeItemList )
                                {
                                  v12->fields.isShortage = (struct System_Boolean_array *)sub_1C2D538(
                                                                                            bool___TypeInfo,
                                                                                            LODWORD(consumeItemList->max_length));
                                  sub_1C2D434(&v12->fields.isShortage);
                                  if ( !v12->fields.isReplenishment || (v45 = *p_eventTradeInfo) == 0 )
                                  {
                                    v54 = 0;
LABEL_82:
                                    PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
                                    v56 = *p_tradeGoodsEntity;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v57 = EventCraftTimeCalculation__GetCraftMaxNum(
                                            PickupInfoList_k__BackingField,
                                            0,
                                            v56,
                                            v44)
                                        + v54;
                                    ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(v12, v57, v58);
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    v60 = System_Math__Min_64982368(v57, ItemSliderMax, 0);
                                    v12->fields.max = v60;
                                    v12->fields.makeCount = v60;
                                    v12->fields.saveMakeCount = 0;
                                    EventCraftNumConfirmDialogComponent__InitItemSlider(v12, v61);
                                    EventCraftNumConfirmDialogComponent__SetExchangeBase(v12, v62);
                                    EventCraftNumConfirmDialogComponent__SetTimeLabel(v12, v63);
                                    v12->fields.state = 1;
                                    v64 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v64,
                                      (Il2CppObject *)v12,
                                      Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__,
                                      0);
                                    BaseDialog__Open((BaseDialog_o *)v12, v64, 0, 0);
                                    return;
                                  }
                                  tradeNum = v45->fields.tradeNum;
                                  v47 = *p_tradeGoodsEntity;
                                  startedAt = v45->fields.startedAt;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                                  v50 = *p_eventTradeInfo;
                                  if ( *p_eventTradeInfo )
                                  {
                                    v51 = this;
                                    v52 = v50->fields.tradeNum;
                                    craftPickupInfoList = v12->fields.craftPickupInfoList;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v54 = EventCraftTimeCalculation__GetCompleteNum_31473700(
                                            v47,
                                            startedAt,
                                            (int64_t)v51,
                                            v52,
                                            0,
                                            craftPickupInfoList,
                                            0,
                                            v49)
                                        - tradeNum;
                                    goto LABEL_82;
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
LABEL_88:
        sub_1C2D6EC(this, item);
      }
    }
    id = 0;
    if ( !userItemMaster )
      goto LABEL_88;
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftNumConfirmDialogComponent__SetExchangeBase(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent_o *v2; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  int max_length; // w22
  UILabel_o *exchangeOriginLb; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  unsigned int v9; // w9
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v11; // x25
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v13; // x8
  int v14; // w10
  il2cpp_array_size_t v15; // x9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v17; // w26
  struct UISprite_array *v18; // x10
  CommonConsumeEntity_o *v19; // x8
  UISprite_o *v20; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v22; // x8
  CommonConsumeEntity_o *v23; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v26; // w20
  struct CommonConsumeEntity_array *v27; // x8
  Il2CppObject *v28; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v30; // x8
  Il2CppObject *v31; // x21
  UILabel_o *v32; // x22
  System_String_o *v33; // x0
  struct UILabel_array *v34; // x8
  struct System_Boolean_array *isShortage; // x9
  float v36; // s1 OVERLAPPED
  float v37; // s0
  float v38; // s3
  float v39; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v43; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  int v46; // [xsp+4h] [xbp-7Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_4C21567 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C2D490(&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_3884/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4C21567 = 1;
  }
  entity = 0;
  consumeItemList = v2->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_69;
  max_length = consumeItemList->max_length;
  exchangeOriginLb = v2->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_69;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0);
  exChangeOriginItemUi = v2->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_69;
  v9 = exChangeOriginItemUi->max_length;
  if ( max_length == 2 )
  {
    if ( !v9 )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v9 <= 1 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v11 = *m_Items;
  if ( !*m_Items )
    goto LABEL_69;
  exchangeOriginItemIcon = v11->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_69;
  v13 = v2->fields.consumeItemList;
  v46 = max_length;
  if ( !v13 )
    goto LABEL_69;
  v14 = exchangeOriginItemIcon->max_length;
  v15 = v13->max_length;
  if ( v14 >= (int)v15 )
  {
    exchangeOriginCountLb = v11->fields.exchangeOriginCountLb;
    if ( !exchangeOriginCountLb )
      goto LABEL_69;
    if ( SLODWORD(exchangeOriginCountLb->max_length) >= (int)v15 )
    {
      if ( (int)v15 >= 1 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = v11->fields.exchangeOriginItemIcon;
          if ( !v18 )
            break;
          if ( v17 >= LODWORD(v18->max_length) || v17 >= (unsigned int)v15 )
            goto LABEL_70;
          v19 = v13->m_Items[v17];
          if ( !v19 )
            break;
          v20 = v18->m_Items[v17];
          objectId = v19->fields.objectId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v20, objectId, 0);
          v22 = v2->fields.consumeItemList;
          if ( !v22 )
            break;
          if ( v17 >= LODWORD(v22->max_length) )
            goto LABEL_70;
          v23 = v22->m_Items[v17];
          if ( !v23 )
            break;
          num = v23->fields.num;
          makeCount = v2->fields.makeCount;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v26 = System_Math__Max_64982040(makeCount, 1, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v26 * num, 0);
          v27 = v2->fields.consumeItemList;
          if ( !v27 )
            break;
          if ( v17 >= LODWORD(v27->max_length) )
            goto LABEL_70;
          v28 = (Il2CppObject *)this;
          this = (EventCraftNumConfirmDialogComponent_o *)v27->m_Items[v17];
          if ( !this )
            break;
          HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
          v30 = v11->fields.exchangeOriginCountLb;
          if ( !v30 )
            break;
          if ( v17 >= LODWORD(v30->max_length) )
            goto LABEL_70;
          v31 = (Il2CppObject *)this;
          v32 = v30->m_Items[v17];
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
          this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_63499156(v33, v28, v31, 0);
          if ( !v32 )
            break;
          UILabel__set_text(v32, (System_String_o *)this, 0);
          v34 = v11->fields.exchangeOriginCountLb;
          if ( !v34 )
            break;
          if ( v17 >= LODWORD(v34->max_length) )
            goto LABEL_70;
          isShortage = v2->fields.isShortage;
          if ( !isShortage )
            break;
          if ( v17 >= LODWORD(isShortage->max_length) )
            goto LABEL_70;
          this = (EventCraftNumConfirmDialogComponent_o *)v34->m_Items[v17];
          v36 = isShortage->m_Items[v17] ? 0.0 : 1.0;
          if ( !this )
            break;
          v37 = 1.0;
          v38 = 1.0;
          v39 = v36;
          UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)(&v36 - 1), 0);
          v13 = v2->fields.consumeItemList;
          if ( !v13 )
            break;
          LODWORD(v15) = v13->max_length;
          if ( (int)++v17 >= (int)v15 )
            goto LABEL_50;
        }
LABEL_69:
        sub_1C2D6EC(this, method);
      }
LABEL_50:
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent2;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v46 == 2, 0);
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent3;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v46 != 2, 0);
      exchangeDestinationLb = v2->fields.exchangeDestinationLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
      if ( !exchangeDestinationLb )
        goto LABEL_69;
      UILabel__set_text(exchangeDestinationLb, (System_String_o *)this, 0);
      tradeGoodsEntity = v2->fields.tradeGoodsEntity;
      if ( !tradeGoodsEntity )
        goto LABEL_69;
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.giftMaster;
      if ( !this )
        goto LABEL_69;
      GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, tradeGoodsEntity->fields.giftId, 0);
      this = (EventCraftNumConfirmDialogComponent_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)GiftListById,
                                                        0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_67;
      if ( !GiftListById )
        goto LABEL_69;
      if ( LODWORD(GiftListById->max_length) )
      {
        v43 = GiftListById->m_Items[0];
        if ( !v43 )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.itemMaster;
        if ( !this )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                          &entity,
                                                          v43->fields.objectId,
                                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          exchangeDestinationItemIcon = v2->fields.exchangeDestinationItemIcon;
          monitor = (int32_t)entity[2].monitor;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(exchangeDestinationItemIcon, monitor, 0);
        }
LABEL_67:
        EventCraftNumConfirmDialogComponent__SetRewardCount(v2, method);
        return;
      }
LABEL_70:
      sub_1C2D6F4(this, method, v6, v7);
    }
  }
}


void EventCraftNumConfirmDialogComponent__SetRewardCount(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isReplenishment; // w21
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v8; // x21
  System_String_o *NumberFormat; // x0
  int32_t makeCount; // w23
  Il2CppObject *v11; // x22
  int32_t v12; // w0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // w21
  int32_t v16; // w0
  UILabel_o *exchangeDestinationItemCountLb; // x8

  if ( (byte_4C2156D & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&StringLiteral_8811/*"MULTIPLE_INFO"*/);
    sub_1C2D490(&StringLiteral_13484/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4C2156D = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
  if ( isReplenishment )
  {
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_15;
    v8 = v5;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
    makeCount = this->fields.makeCount;
    v11 = (Il2CppObject *)NumberFormat;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Max_64982040(makeCount, 1, 0);
    v13 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12, 0);
    v14 = (Il2CppObject *)System_String__Format_63499156(v8, v11, v13, 0);
  }
  else
  {
    v15 = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_64982040(v15, 1, 0);
    v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v16, 0);
  }
  v5 = System_String__Format(v4, v14, 0);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
LABEL_15:
    sub_1C2D6EC(v5, v6);
  UILabel__set_text(exchangeDestinationItemCountLb, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftNumConfirmDialogComponent__SetTimeLabel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventCraftNumConfirmDialogComponent_o *v3; // x19
  ItemEntity_o *supportTool; // x20
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x5
  EventTradeGoodsEntity_o *v8; // x22
  System_Collections_Generic_List_EventCraftPickupInfo__o *v9; // x23
  System_String_o *v10; // x21
  ItemEntity_o *v11; // x24
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int32_t tradeNum; // w21
  int64_t startedAt; // x22
  struct EventTradeInfo_o *v17; // x8
  ItemEntity_o *v18; // x21
  EventTradeGoodsEntity_o *v19; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *v20; // x23
  int32_t makeCount; // w22
  char *v22; // x20
  int64_t Time; // x25
  const MethodInfo *v24; // x5
  int64_t v25; // x25
  int64_t CraftFinishTime; // x0
  UILabel_o *craftCompletionTimeLabel; // x21
  int64_t v28; // x22
  System_String_o *v29; // x23
  int64_t v30; // x0
  int64_t v31; // x0
  System_String_o *RestTimeInFormat; // x20
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  Il2CppObject *v36; // x0
  EventCraftNumConfirmDialogComponent_o *v37; // x1
  UILabel_o *v38; // x0
  int32_t v39; // w25
  int64_t v40; // x22
  Il2CppObject *v41; // x0
  int64_t v42; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  EventCraftNumConfirmDialogComponent___c_c *v44; // x0
  System_Func_object__long__o *_9__51_0; // x21
  Il2CppObject *v46; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  int64_t v49; // x21
  int64_t v50; // x0
  BalanceConfig_c *v51; // x8
  int64_t v52; // x20
  int64_t SECONDS_PER_DAY; // x21
  float v54; // s0 OVERLAPPED
  float v55; // s3
  float v56; // s1
  float v57; // s2
  __int64 v58; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v60; // x0

  v3 = this;
  if ( (byte_4C21564 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C2D490(&EventCraftTimeCalculation_TypeInfo);
    sub_1C2D490(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__);
    sub_1C2D490(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3881/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/);
    sub_1C2D490(&StringLiteral_13455/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C2D490(&StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_13390/*"TIME_FORMAT_1"*/);
    byte_4C21564 = 1;
  }
  if ( v3->fields.isReplenishment )
  {
    if ( v3->fields.isButtonOn )
      supportTool = v3->fields.supportTool;
    else
      supportTool = 0;
    eventTradeInfo = v3->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      tradeGoodsEntity = v3->fields.tradeGoodsEntity;
      craftPickupInfoList = v3->fields.craftPickupInfoList;
      tradeNum = eventTradeInfo->fields.tradeNum;
      startedAt = eventTradeInfo->fields.startedAt;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)EventCraftTimeCalculation__GetCraftFinishTime(
                                                        tradeGoodsEntity,
                                                        craftPickupInfoList,
                                                        supportTool,
                                                        tradeNum,
                                                        startedAt,
                                                        v2);
      v17 = v3->fields.eventTradeInfo;
      if ( v17 )
      {
        if ( v3->fields.isButtonOn )
          v18 = v3->fields.supportTool;
        else
          v18 = 0;
        v19 = v3->fields.tradeGoodsEntity;
        v20 = v3->fields.craftPickupInfoList;
        makeCount = v3->fields.makeCount;
        v22 = (char *)this + v17->fields.startedAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v25 = System_Math__Max_64982052((int64_t)v22, Time, 0);
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v19, v20, v18, makeCount, v25, v24);
        craftCompletionTimeLabel = v3->fields.craftCompletionTimeLabel;
        v28 = CraftFinishTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3881/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0);
        v30 = NetworkManager__getTime(0);
        v31 = System_Math__Max_64982052((int64_t)&v22[-v30], 0, 0);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v31 + v28,
                             0,
                             (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
        v34 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                v28,
                                0,
                                (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0);
        v35 = System_String__Format(v33, v34, 0);
        v36 = (Il2CppObject *)System_String__Concat_63457864(RestTimeInFormat, v35, 0);
        this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v29, v36, 0);
        if ( craftCompletionTimeLabel )
        {
          v37 = this;
          v38 = craftCompletionTimeLabel;
          goto LABEL_35;
        }
      }
    }
LABEL_69:
    sub_1C2D6EC(this, method);
  }
  v5 = v3->fields.craftCompletionTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3881/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  v8 = v3->fields.tradeGoodsEntity;
  v9 = v3->fields.craftPickupInfoList;
  v10 = v6;
  if ( v3->fields.isButtonOn )
    v11 = v3->fields.supportTool;
  else
    v11 = 0;
  v39 = v3->fields.makeCount;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  v40 = EventCraftTimeCalculation__GetCraftFinishTime(v8, v9, v11, v39, -1, v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v40, 0, (System_String_o *)StringLiteral_25022/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v10, v41, 0);
  if ( !v5 )
    goto LABEL_69;
  v37 = this;
  v38 = v5;
LABEL_35:
  UILabel__set_text(v38, (System_String_o *)v37, 0);
  v42 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.craftPickupInfoList, 0) )
  {
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.craftPickupInfoList;
    v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__51_0 = (System_Func_object__long__o *)v44->static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__51_0 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v46,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__,
        0);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__51_0;
      sub_1C2D434(&static_fields->__9__51_0);
    }
    v48 = System_Linq_Enumerable__Select_object__long_(
            v43,
            (System_Func_TSource__TResult__o *)_9__51_0,
            (const MethodInfo_3104D28 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v42 = System_Linq_Enumerable__Max_66459884((System_Collections_Generic_IEnumerable_long__o *)v48, 0);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v49 = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v50 = System_Math__Max_64982052(v42 - v49, 0, 0);
  v51 = BalanceConfig_TypeInfo;
  v52 = v50;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v51->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  method = (const MethodInfo *)(v52 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  method = (const MethodInfo *)(v52 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.useSupportToolBtnSp;
  v54 = 1.0;
  if ( v52 > SECONDS_PER_DAY )
    v54 = 0.5;
  if ( !this )
    goto LABEL_69;
  v55 = 1.0;
  v56 = v54;
  v57 = v54;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v54, 0);
  v58 = v3->fields.isButtonOn ? v3->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13390/*"TIME_FORMAT_1"*/, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v58 + v52, 0, v60, 0);
  if ( !supportToolLeftTimeLb )
    goto LABEL_69;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0);
}


void EventCraftNumConfirmDialogComponent__SliderValueChange(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  struct CommonConsumeEntity_array *consumeItemList; // x8
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  il2cpp_array_size_t max_length; // x9
  unsigned int v9; // w11
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v11; // x23
  struct UILabel_array *exchangeOriginCountLb; // x10
  signed int v13; // w10
  __int64 v14; // x27
  CommonConsumeEntity_o *v15; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v18; // w20
  struct CommonConsumeEntity_array *v19; // x8
  Il2CppObject *v20; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v22; // x8
  Il2CppObject *v23; // x21
  UILabel_o *v24; // x22
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4C2156C & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4C2156C = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_31;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  consumeItemList = this->fields.consumeItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !consumeItemList )
    goto LABEL_31;
  exChangeOriginItemUi = this->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_31;
  max_length = consumeItemList->max_length;
  v9 = exChangeOriginItemUi->max_length;
  if ( (_DWORD)max_length == 2 )
  {
    if ( !v9 )
      goto LABEL_32;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v9 <= 1 )
      goto LABEL_32;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v11 = *m_Items;
  if ( !*m_Items || (exchangeOriginCountLb = v11->fields.exchangeOriginCountLb) == 0 )
LABEL_31:
    sub_1C2D6EC(itemSlider, method);
  if ( SLODWORD(exchangeOriginCountLb->max_length) >= (int)max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( v13 < (unsigned int)max_length )
      {
        v14 = v13;
        v15 = consumeItemList->m_Items[v13];
        if ( !v15 )
          goto LABEL_31;
        num = v15->fields.num;
        makeCount = this->fields.makeCount;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v18 = System_Math__Max_64982040(makeCount, 1, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v18 * num, 0);
        v19 = this->fields.consumeItemList;
        if ( !v19 )
          goto LABEL_31;
        if ( (unsigned int)v14 >= LODWORD(v19->max_length) )
          break;
        v20 = (Il2CppObject *)itemSlider;
        itemSlider = (UISliderWithButton_o *)v19->m_Items[v14];
        if ( !itemSlider )
          goto LABEL_31;
        HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
        v22 = v11->fields.exchangeOriginCountLb;
        if ( !v22 )
          goto LABEL_31;
        if ( (unsigned int)v14 >= LODWORD(v22->max_length) )
          break;
        v23 = (Il2CppObject *)itemSlider;
        v24 = v22->m_Items[v14];
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13465/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
        itemSlider = (UISliderWithButton_o *)System_String__Format_63499156(v25, v20, v23, 0);
        if ( !v24 )
          goto LABEL_31;
        UILabel__set_text(v24, (System_String_o *)itemSlider, 0);
        consumeItemList = this->fields.consumeItemList;
        if ( !consumeItemList )
          goto LABEL_31;
        LODWORD(max_length) = consumeItemList->max_length;
        v13 = v14 + 1;
        if ( (int)v14 + 1 >= (int)max_length )
          goto LABEL_30;
      }
LABEL_32:
      sub_1C2D6F4(itemSlider, method, v4, v5);
    }
LABEL_30:
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v26);
  }
}


void EventCraftNumConfirmDialogComponent__Update(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4C21562 & 1) == 0 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21562 = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.updatedTime = floorf(time);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v3);
  }
}


void EventCraftNumConfirmDialogComponent__UpdateDraw(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  ItemEntity_o *supportTool; // x21
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x22
  int32_t CraftMaxNum; // w0
  const MethodInfo *v8; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t v10; // w20
  int32_t ItemSliderMax; // w21
  int v12; // w0
  const MethodInfo *v13; // x1
  int32_t max; // w9
  int32_t makeCount; // w8
  __int64 v16; // x1
  int32_t saveMakeCount; // w10
  float v18; // s8
  UISliderWithButton_o *itemSlider; // x0
  int32_t v20; // w8
  const MethodInfo *v21; // x1

  if ( (byte_4C21565 & 1) == 0 )
  {
    sub_1C2D490(&EventCraftTimeCalculation_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21565 = 1;
  }
  craftPickupInfoList = this->fields.craftPickupInfoList;
  if ( this->fields.isButtonOn )
    supportTool = this->fields.supportTool;
  else
    supportTool = 0;
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(craftPickupInfoList, supportTool, tradeGoodsEntity, v2);
  eventTradeInfo = this->fields.eventTradeInfo;
  if ( eventTradeInfo )
    LODWORD(eventTradeInfo) = eventTradeInfo->fields.tradeNum;
  v10 = CraftMaxNum - (_DWORD)eventTradeInfo;
  ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(this, CraftMaxNum - (_DWORD)eventTradeInfo, v8);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Min_64982368(v10, ItemSliderMax, 0);
  max = this->fields.max;
  if ( max != v12 )
  {
    makeCount = this->fields.makeCount;
    v16 = (unsigned int)v12;
    if ( v12 < makeCount )
    {
      this->fields.saveMakeCount = makeCount;
      makeCount = v12;
      this->fields.makeCount = v12;
    }
    if ( makeCount == max )
    {
      saveMakeCount = this->fields.saveMakeCount;
      makeCount = max;
      if ( max < saveMakeCount )
      {
        makeCount = this->fields.saveMakeCount;
        this->fields.makeCount = saveMakeCount;
        this->fields.saveMakeCount = 0;
      }
    }
    v18 = 0.0;
    this->fields.max = v12;
    if ( v12 >= 2 )
      v18 = (float)(1.0 / (float)(v12 - 1)) * (float)(makeCount - 1);
    itemSlider = this->fields.itemSlider;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, v16, 1, 1, 0);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        UIProgressBar__set_value((UIProgressBar_o *)itemSlider, v18, 0);
        v20 = this->fields.max;
        if ( v20 == 1 )
        {
          itemSlider = this->fields.itemSlider;
          if ( itemSlider )
          {
            itemSlider = (UISliderWithButton_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)itemSlider,
                                                   0);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
              itemSlider = this->fields.itemSlider;
              if ( itemSlider )
              {
                UISliderWithButton__grayMode(itemSlider, 0);
                goto LABEL_36;
              }
            }
          }
        }
        else if ( v20 )
        {
          itemSlider = this->fields.itemSlider;
          if ( itemSlider )
          {
            itemSlider = (UISliderWithButton_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)itemSlider,
                                                   0);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
              itemSlider = this->fields.itemSlider;
              if ( itemSlider )
              {
                UISliderWithButton__normalMode(itemSlider, 0);
                goto LABEL_36;
              }
            }
          }
        }
        else
        {
          itemSlider = this->fields.itemSlider;
          if ( itemSlider )
          {
            itemSlider = (UISliderWithButton_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)itemSlider,
                                                   0);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0);
              itemSlider = (UISliderWithButton_o *)this->fields.decideButton;
              if ( itemSlider )
              {
                ((void (__fastcall *)(UISliderWithButton_o *, _QWORD, const MethodInfo *))itemSlider->klass->vtable._5_OnStart.methodPtr)(
                  itemSlider,
                  0,
                  itemSlider->klass->vtable._5_OnStart.method);
LABEL_36:
                EventCraftNumConfirmDialogComponent__SetExchangeBase(this, v21);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(itemSlider, v16);
  }
LABEL_37:
  EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v13);
}


void EventCraftNumConfirmDialogComponent___Open_b__50_0(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *EventCraftNumConfirmDialogComponent__get_closeBtnObject(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C2156E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2156E = 1;
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


void EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___ctor(
        EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftNumConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21570 & 1) == 0 )
  {
    sub_1C2D490(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    byte_4C21570 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventCraftNumConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v1;
  sub_1C2D434(EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields);
}


void EventCraftNumConfirmDialogComponent___c___ctor(
        EventCraftNumConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventCraftNumConfirmDialogComponent___c___OnClickSupportToolButton_b__56_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.endedAt;
}


int64_t EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__51_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.endedAt;
}