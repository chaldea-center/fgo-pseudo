void __fastcall EventCraftNumConfirmDialogComponent___ctor(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BEE6C & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    sub_1B4CF90(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo, v3);
    byte_49BEE6C = 1;
  }
  v4 = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_1B4D038(
                                                                                  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo,
                                                                                  2LL);
  this->fields.exChangeOriginItemUi = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.exChangeOriginItemUi, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__Close(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49BEE68 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent_Init__, v3);
    byte_49BEE68 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventCraftNumConfirmDialogComponent__GetItemSliderMax(
        EventCraftNumConfirmDialogComponent_o *this,
        int32_t craftMax,
        const MethodInfo *method)
{
  int v3; // w20
  EventCraftNumConfirmDialogComponent_o *v4; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 v6; // x23
  UserItemMaster_o *userItemMaster; // x22
  struct CommonConsumeEntity_array *v8; // x8
  CommonConsumeEntity_o *v9; // x8
  CommonConsumeEntity_o *v10; // x10
  int32_t num; // w9
  int32_t v12; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v14; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = craftMax;
  v4 = this;
  if ( (byte_49BEE63 & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&craftMax);
    byte_49BEE63 = 1;
  }
  entity = 0LL;
  consumeItemList = v4->fields.consumeItemList;
  if ( !consumeItemList )
LABEL_30:
    sub_1B4D1EC(this, *(_QWORD *)&craftMax);
  v6 = 0LL;
  while ( (int)v6 < (signed int)consumeItemList->max_length )
  {
    userItemMaster = v4->fields.userItemMaster;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&craftMax);
      byte_49B57A5 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v8 = v4->fields.consumeItemList;
    if ( !v8 )
      goto LABEL_30;
    if ( (unsigned int)v6 >= v8->max_length )
      goto LABEL_32;
    v9 = v8->m_Items[v6];
    if ( !v9 || !userItemMaster )
      goto LABEL_30;
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                      v9->fields.objectId,
                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      consumeItemList = v4->fields.consumeItemList;
      if ( !consumeItemList )
        goto LABEL_30;
      if ( (unsigned int)v6 >= consumeItemList->max_length )
        goto LABEL_32;
      v10 = consumeItemList->m_Items[v6];
      if ( !v10 )
        goto LABEL_30;
      num = entity->fields.num;
      v12 = v10->fields.num;
      isShortage = v4->fields.isShortage;
      if ( v3 >= num / v12 )
        v3 = num / v12;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v6 >= isShortage->max_length )
        goto LABEL_32;
      isShortage->m_Items[v6 + 4] = v12 > num;
    }
    else
    {
      v14 = v4->fields.isShortage;
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)v6 >= v14->max_length )
LABEL_32:
        sub_1B4D1F4(this, *(_QWORD *)&craftMax);
      v14->m_Items[v6 + 4] = 1;
      consumeItemList = v4->fields.consumeItemList;
      v3 = 0;
    }
    ++v6;
    if ( !consumeItemList )
      goto LABEL_30;
  }
  return v3;
}


void __fastcall EventCraftNumConfirmDialogComponent__Init(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tradeGoodsEntity, 0, v3, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__InitItemSlider(
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
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
    if ( !itemSlider )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0LL);
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
LABEL_18:
      sub_1B4D1EC(itemSlider, method);
    }
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
    if ( !itemSlider )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0LL);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_18;
    v5 = this->fields.max;
    v6 = 1;
  }
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickCancel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49BEE67 & 1) == 0 )
  {
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__, method);
    byte_49BEE67 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B4D1EC(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventCraftNumConfirmDialogComponent__Close(this, v7);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickDecide(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int v9; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9

  if ( (byte_49BEE66 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_int____int__bool___, method);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__, v3);
    sub_1B4CF90(&int___TypeInfo, v4);
    byte_49BEE66 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = sub_1B4D038(int___TypeInfo, 2LL);
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 24);
      v8 = v7;
      if ( !v9 )
        goto LABEL_13;
      *(_DWORD *)(v7 + 32) = this->fields.storeIdx;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        if ( v9 > 1 )
        {
          *(_DWORD *)(v7 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            (System_Action_T1__T2__T3__o *)this->fields.onDecide,
            (Il2CppObject *)v7,
            this->fields.makeCount,
            this->fields.isButtonOn,
            (const MethodInfo_2E58330 *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_1B4D1F4(v7, v7);
      }
    }
    sub_1B4D1EC(v7, v8);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickSupportToolButton(
        EventCraftNumConfirmDialogComponent_o *this,
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
  int64_t v12; // x20
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  EventCraftNumConfirmDialogComponent___c_c *v14; // x0
  System_Func_T__TResult__o *_9__56_0; // x21
  Il2CppObject *v16; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  int64_t Time; // x21
  int64_t v22; // x0
  _BOOL4 isButtonOn; // w20
  int64_t v24; // x20
  BalanceConfig_c *v25; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v30; // x8
  const MethodInfo *v31; // x1

  if ( (byte_49BEE65 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v3);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__, v4);
    sub_1B4CF90(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5);
    sub_1B4CF90(&System_Math_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__, v8);
    sub_1B4CF90(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_17181/*"btn_boostitem_off"*/, v10);
    sub_1B4CF90(&StringLiteral_17182/*"btn_boostitem_on"*/, v11);
    byte_49BEE65 = 1;
  }
  v12 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.craftPickupInfoList, 0LL) )
  {
    craftPickupInfoList = this->fields.craftPickupInfoList;
    v14 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v14 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__56_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__56_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__56_0,
        v16,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__56_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v18, v19);
    }
    v20 = System_Linq_Enumerable__Select_object__long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
            (System_Func_TSource__TResult__o *)_9__56_0,
            (const MethodInfo_2F33EC4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v12 = System_Linq_Enumerable__Max_64099968((System_Collections_Generic_IEnumerable_long__o *)v20, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = System_Math__Max_62621800(v12 - Time, 0LL, 0LL);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = !isButtonOn;
    v26 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1B4CFA8(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v27 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, isButtonOn, 0, 0LL);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_1B4D1EC(0LL, v28);
    if ( this->fields.isButtonOn )
      v30 = &StringLiteral_17182/*"btn_boostitem_on"*/;
    else
      v30 = &StringLiteral_17181/*"btn_boostitem_off"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v30, 0LL);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v31);
    return;
  }
  v24 = v22;
  v25 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  if ( v24 <= v25->static_fields->SECONDS_PER_DAY )
  {
    isButtonOn = this->fields.isButtonOn;
    goto LABEL_21;
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__Open(
        EventCraftNumConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *supportToolItem,
        System_Action_int____int__bool__o *decideAction,
        bool replenishment,
        const MethodInfo *method)
{
  ItemEntity_o *v9; // x22
  EventCraftNumConfirmDialogComponent_o *v12; // x19
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
  __int64 v38; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UserItemMaster_o *userItemMaster; // x25
  UserItemMaster_o **p_userItemMaster; // x24
  Il2CppObject *Master_object; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t id; // w3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t num; // w28
  struct ItemEntity_o *v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x24
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  UILabel_o *titleLabel; // x25
  _BOOL4 isReplenishment; // w29
  System_String_o **v69; // x8
  UILabel_o *detailLabel; // x25
  _BOOL4 v71; // w29
  System_String_o **v72; // x8
  UILabel_o *cancelButtonLb; // x25
  UILabel_o *decideButtonLb; // x25
  _BOOL4 v75; // w29
  System_String_o **v76; // x8
  UILabel_o *useSupportToolLb; // x25
  UILabel_o *supportToolMaskLb; // x25
  UILabel_o *supportToolPossessionLb; // x25
  System_String_o *v80; // x26
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x0
  UILabel_o *supportToolPossessionLbHeader; // x25
  UILabel_o *supportToolLeftTimeHeaderLb; // x25
  UISprite_o *supportToolItemSp; // x25
  CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x3
  struct EventTradeInfo_o *v96; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v98; // x22
  int64_t startedAt; // x25
  const MethodInfo *v100; // x7
  struct EventTradeInfo_o *v101; // x8
  EventCraftNumConfirmDialogComponent_o *v102; // x24
  int32_t v103; // w26
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int v105; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *v106; // x22
  EventTradeGoodsEntity_o *v107; // x20
  int32_t v108; // w20
  const MethodInfo *v109; // x2
  int32_t ItemSliderMax; // w21
  int32_t v111; // w0
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x1
  System_Action_o *v115; // x20
  int32_t v116; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v9 = supportToolItem;
  v12 = this;
  if ( (byte_49BEE60 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, item);
    sub_1B4CF90(&AtlasManager_TypeInfo, v13);
    sub_1B4CF90(&bool___TypeInfo, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonConsumeMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v18);
    sub_1B4CF90(&DataManager_TypeInfo, v19);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__, v20);
    sub_1B4CF90(&EventCraftTimeCalculation_TypeInfo, v21);
    sub_1B4CF90(&int_TypeInfo, v22);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v23);
    sub_1B4CF90(&System_Math_TypeInfo, v24);
    sub_1B4CF90(&NetworkManager_TypeInfo, v25);
    sub_1B4CF90(&StringLiteral_17181/*"btn_boostitem_off"*/, v26);
    sub_1B4CF90(&StringLiteral_3848/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/, v27);
    sub_1B4CF90(&StringLiteral_3846/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, v28);
    sub_1B4CF90(&StringLiteral_3858/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/, v29);
    sub_1B4CF90(&StringLiteral_3844/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/, v30);
    sub_1B4CF90(&StringLiteral_3842/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v31);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v32);
    sub_1B4CF90(&StringLiteral_3863/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v33);
    sub_1B4CF90(&StringLiteral_3841/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/, v34);
    sub_1B4CF90(&StringLiteral_3845/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, v35);
    sub_1B4CF90(&StringLiteral_3856/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/, v36);
    sub_1B4CF90(&StringLiteral_3847/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/, v37);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1B4CF90(&StringLiteral_3857/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/, v38);
    byte_49BEE60 = 1;
  }
  entity = 0LL;
  if ( !v12->fields.state )
  {
    if ( !item )
      goto LABEL_88;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    p_tradeGoodsEntity = &v12->fields.tradeGoodsEntity;
    v12->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&v12->fields.tradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      storeIndex,
      (const MethodInfo *)supportToolItem);
    v12->fields.onDecide = decideAction;
    sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.onDecide, (int32_t)decideAction, v41, v42);
    userItemMaster = v12->fields.userItemMaster;
    v12->fields.storeIdx = storeIndex;
    if ( !userItemMaster )
    {
      p_userItemMaster = &v12->fields.userItemMaster;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
      *p_userItemMaster = (UserItemMaster_o *)Master_object;
      sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.userItemMaster, (int32_t)Master_object, v46, v47);
      userItemMaster = *p_userItemMaster;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, item);
      byte_49B57A5 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( NetworkManager_TypeInfo->_2.cctor_finished )
    {
      if ( v9 )
        goto LABEL_15;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
      if ( v9 )
      {
LABEL_15:
        id = v9->fields.id;
        if ( !userItemMaster )
          goto LABEL_88;
LABEL_19:
        this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                          userItemMaster,
                                                          &entity,
                                                          *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                          id,
                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_88;
          num = entity->fields.num;
          if ( num <= 0 )
            v52 = 0LL;
          else
            v52 = v9;
        }
        else
        {
          num = 0;
          v52 = 0LL;
        }
        v12->fields.supportTool = v52;
        sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.supportTool, (int32_t)v52, v49, v50);
        supportTool = v12->fields.supportTool;
        if ( supportTool )
          LODWORD(supportTool) = ItemEntity__GetTradePickupTime(supportTool, 0LL);
        v12->fields.supportToolTime = (int)supportTool;
        v12->fields.isReplenishment = replenishment;
        if ( replenishment )
          TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
        else
          TradeInfo_k__BackingField = 0LL;
        p_eventTradeInfo = &v12->fields.eventTradeInfo;
        v12->fields.eventTradeInfo = TradeInfo_k__BackingField;
        sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.eventTradeInfo, (int32_t)TradeInfo_k__BackingField, v53, v54);
        PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
        v12->fields.craftPickupInfoList = PickupInfoList_k__BackingField;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&v12->fields.craftPickupInfoList,
          (int32_t)PickupInfoList_k__BackingField,
          v59,
          v60);
        if ( !v12->fields.itemMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v61 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
          v12->fields.itemMaster = (struct ItemMaster_o *)v61;
          sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.itemMaster, (int32_t)v61, v62, v63);
        }
        if ( !v12->fields.giftMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v64 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
          v12->fields.giftMaster = (struct GiftMaster_o *)v64;
          sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.giftMaster, (int32_t)v64, v65, v66);
        }
        titleLabel = v12->fields.titleLabel;
        isReplenishment = v12->fields.isReplenishment;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v69 = (System_String_o **)&StringLiteral_3847/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
        if ( isReplenishment )
          v69 = (System_String_o **)&StringLiteral_3858/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v69, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v12->fields.detailLabel;
          v71 = v12->fields.isReplenishment;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v72 = (System_String_o **)&StringLiteral_3842/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( v71 )
            v72 = (System_String_o **)&StringLiteral_3857/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v72, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v12->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v12->fields.decideButtonLb;
              v75 = v12->fields.isReplenishment;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v76 = (System_String_o **)&StringLiteral_3841/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
              if ( v75 )
                v76 = (System_String_o **)&StringLiteral_3856/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v76, 0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                this = (EventCraftNumConfirmDialogComponent_o *)v12->fields.useSupportToolBtnSp;
                v12->fields.isButtonOn = 0;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17181/*"btn_boostitem_off"*/, 0LL);
                  useSupportToolLb = v12->fields.useSupportToolLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3848/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                    0LL);
                  if ( useSupportToolLb )
                  {
                    UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0LL);
                    supportToolMaskLb = v12->fields.supportToolMaskLb;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3844/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                      0LL);
                    if ( supportToolMaskLb )
                    {
                      UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0LL);
                      supportToolPossessionLb = v12->fields.supportToolPossessionLb;
                      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0LL);
                      v116 = num;
                      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v81, v82, v83);
                      this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v80, v84, 0LL);
                      if ( supportToolPossessionLb )
                      {
                        UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0LL);
                        supportToolPossessionLbHeader = v12->fields.supportToolPossessionLbHeader;
                        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3846/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                          0LL);
                        if ( supportToolPossessionLbHeader )
                        {
                          UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0LL);
                          supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
                          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3863/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                            0LL);
                          if ( supportToolLeftTimeHeaderLb )
                          {
                            UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
                            supportToolItemSp = v12->fields.supportToolItemSp;
                            if ( v9 )
                              LODWORD(v9) = v9->fields.id;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(supportToolItemSp, (int32_t)v9, 0LL);
                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                            this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                            if ( *p_tradeGoodsEntity )
                            {
                              if ( this )
                              {
                                SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                                     (CommonConsumeMaster_o *)this,
                                                     (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                     0LL);
                                v12->fields.consumeItemList = SortedEntityList;
                                sub_1B4CF34(
                                  (CGThumbnailListItem_o *)&v12->fields.consumeItemList,
                                  (int32_t)SortedEntityList,
                                  v89,
                                  v90);
                                consumeItemList = v12->fields.consumeItemList;
                                if ( consumeItemList )
                                {
                                  v92 = sub_1B4D038(bool___TypeInfo, consumeItemList->max_length);
                                  v12->fields.isShortage = (struct System_Boolean_array *)v92;
                                  sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.isShortage, v92, v93, v94);
                                  if ( !v12->fields.isReplenishment || (v96 = *p_eventTradeInfo) == 0LL )
                                  {
                                    v105 = 0;
LABEL_82:
                                    v106 = item->fields._PickupInfoList_k__BackingField;
                                    v107 = *p_tradeGoodsEntity;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v108 = EventCraftTimeCalculation__GetCraftMaxNum(v106, 0LL, v107, v95) + v105;
                                    ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(
                                                      v12,
                                                      v108,
                                                      v109);
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    v111 = System_Math__Min_62622116(v108, ItemSliderMax, 0LL);
                                    v12->fields.max = v111;
                                    v12->fields.makeCount = v111;
                                    v12->fields.saveMakeCount = 0;
                                    EventCraftNumConfirmDialogComponent__InitItemSlider(v12, v112);
                                    EventCraftNumConfirmDialogComponent__SetExchangeBase(v12, v113);
                                    EventCraftNumConfirmDialogComponent__SetTimeLabel(v12, v114);
                                    v12->fields.state = 1;
                                    v115 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v115,
                                      (Il2CppObject *)v12,
                                      Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__,
                                      0LL);
                                    BaseDialog__Open((BaseDialog_o *)v12, v115, 0, 0LL);
                                    return;
                                  }
                                  tradeNum = v96->fields.tradeNum;
                                  v98 = *p_tradeGoodsEntity;
                                  startedAt = v96->fields.startedAt;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                                  v101 = *p_eventTradeInfo;
                                  if ( *p_eventTradeInfo )
                                  {
                                    v102 = this;
                                    v103 = v101->fields.tradeNum;
                                    craftPickupInfoList = v12->fields.craftPickupInfoList;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v105 = EventCraftTimeCalculation__GetCompleteNum_46373060(
                                             v98,
                                             startedAt,
                                             (int64_t)v102,
                                             v103,
                                             0,
                                             craftPickupInfoList,
                                             0LL,
                                             v100)
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
        sub_1B4D1EC(this, item);
      }
    }
    id = 0;
    if ( !userItemMaster )
      goto LABEL_88;
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__SetExchangeBase(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CommonConsumeEntity_array *consumeItemList; // x8
  il2cpp_array_size_t max_length; // w22
  UILabel_o *exchangeOriginLb; // x20
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  unsigned int v13; // w9
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v15; // x25
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v17; // x8
  int v18; // w10
  __int64 v19; // x9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v21; // w26
  struct UISprite_array *v22; // x10
  CommonConsumeEntity_o *v23; // x8
  UISprite_o *v24; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v26; // x8
  CommonConsumeEntity_o *v27; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v30; // w20
  struct CommonConsumeEntity_array *v31; // x8
  Il2CppObject *v32; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v34; // x8
  Il2CppObject *v35; // x21
  UILabel_o *v36; // x22
  System_String_o *v37; // x0
  struct UILabel_array *v38; // x8
  struct System_Boolean_array *isShortage; // x9
  float v40; // s1
  float v41; // s0
  float v42; // s3
  float v43; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v47; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  il2cpp_array_size_t v50; // [xsp+4h] [xbp-7Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_49BEE64 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&System_Math_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_13174/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v6);
    sub_1B4CF90(&StringLiteral_13173/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v7);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1B4CF90(&StringLiteral_3843/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v8);
    byte_49BEE64 = 1;
  }
  entity = 0LL;
  consumeItemList = v2->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_69;
  max_length = consumeItemList->max_length;
  exchangeOriginLb = v2->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13174/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_69;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exChangeOriginItemUi = v2->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_69;
  v13 = exChangeOriginItemUi->max_length;
  if ( max_length == 2 )
  {
    if ( !v13 )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v13 <= 1 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v15 = *m_Items;
  if ( !*m_Items )
    goto LABEL_69;
  exchangeOriginItemIcon = v15->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_69;
  v17 = v2->fields.consumeItemList;
  v50 = max_length;
  if ( !v17 )
    goto LABEL_69;
  v18 = exchangeOriginItemIcon->max_length;
  v19 = *(_QWORD *)&v17->max_length;
  if ( v18 >= (int)v19 )
  {
    exchangeOriginCountLb = v15->fields.exchangeOriginCountLb;
    if ( !exchangeOriginCountLb )
      goto LABEL_69;
    if ( (signed int)exchangeOriginCountLb->max_length >= (int)v19 )
    {
      if ( (int)v19 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = v15->fields.exchangeOriginItemIcon;
          if ( !v22 )
            break;
          if ( v21 >= v22->max_length || v21 >= (unsigned int)v19 )
            goto LABEL_70;
          v23 = v17->m_Items[v21];
          if ( !v23 )
            break;
          v24 = v22->m_Items[v21];
          objectId = v23->fields.objectId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v24, objectId, 0LL);
          v26 = v2->fields.consumeItemList;
          if ( !v26 )
            break;
          if ( v21 >= v26->max_length )
            goto LABEL_70;
          v27 = v26->m_Items[v21];
          if ( !v27 )
            break;
          num = v27->fields.num;
          makeCount = v2->fields.makeCount;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v30 = System_Math__Max_62621788(makeCount, 1, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v30 * num, 0LL);
          v31 = v2->fields.consumeItemList;
          if ( !v31 )
            break;
          if ( v21 >= v31->max_length )
            goto LABEL_70;
          v32 = (Il2CppObject *)this;
          this = (EventCraftNumConfirmDialogComponent_o *)v31->m_Items[v21];
          if ( !this )
            break;
          HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
          v34 = v15->fields.exchangeOriginCountLb;
          if ( !v34 )
            break;
          if ( v21 >= v34->max_length )
            goto LABEL_70;
          v35 = (Il2CppObject *)this;
          v36 = v34->m_Items[v21];
          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13173/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_61134760(v37, v32, v35, 0LL);
          if ( !v36 )
            break;
          UILabel__set_text(v36, (System_String_o *)this, 0LL);
          v38 = v15->fields.exchangeOriginCountLb;
          if ( !v38 )
            break;
          if ( v21 >= v38->max_length )
            goto LABEL_70;
          isShortage = v2->fields.isShortage;
          if ( !isShortage )
            break;
          if ( v21 >= isShortage->max_length )
            goto LABEL_70;
          this = (EventCraftNumConfirmDialogComponent_o *)v38->m_Items[v21];
          v40 = isShortage->m_Items[v21 + 4] ? 0.0 : 1.0;
          if ( !this )
            break;
          v41 = 1.0;
          v42 = 1.0;
          v43 = v40;
          UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)(&v40 - 1), 0LL);
          v17 = v2->fields.consumeItemList;
          if ( !v17 )
            break;
          LODWORD(v19) = v17->max_length;
          if ( (int)++v21 >= (int)v19 )
            goto LABEL_50;
        }
LABEL_69:
        sub_1B4D1EC(this, method);
      }
LABEL_50:
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent2;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v50 == 2, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent3;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v50 != 2, 0LL);
      exchangeDestinationLb = v2->fields.exchangeDestinationLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3843/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/,
                                                        0LL);
      if ( !exchangeDestinationLb )
        goto LABEL_69;
      UILabel__set_text(exchangeDestinationLb, (System_String_o *)this, 0LL);
      tradeGoodsEntity = v2->fields.tradeGoodsEntity;
      if ( !tradeGoodsEntity )
        goto LABEL_69;
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.giftMaster;
      if ( !this )
        goto LABEL_69;
      GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, tradeGoodsEntity->fields.giftId, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)GiftListById,
                                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_67;
      if ( !GiftListById )
        goto LABEL_69;
      if ( GiftListById->max_length )
      {
        v47 = GiftListById->m_Items[0];
        if ( !v47 )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.itemMaster;
        if ( !this )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                          &entity,
                                                          v47->fields.objectId,
                                                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          exchangeDestinationItemIcon = v2->fields.exchangeDestinationItemIcon;
          monitor = (int32_t)entity[2].monitor;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(exchangeDestinationItemIcon, monitor, 0LL);
        }
LABEL_67:
        EventCraftNumConfirmDialogComponent__SetRewardCount(v2, method);
        return;
      }
LABEL_70:
      sub_1B4D1F4(this, method);
    }
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__SetRewardCount(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL4 isReplenishment; // w21
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v11; // x21
  System_String_o *NumberFormat; // x0
  int32_t makeCount; // w23
  Il2CppObject *v14; // x22
  int32_t v15; // w0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // w21
  int32_t v19; // w0
  UILabel_o *exchangeDestinationItemCountLb; // x8

  if ( (byte_49BEE6A & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&System_Math_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_8617/*"MULTIPLE_INFO"*/, v4);
    sub_1B4CF90(&StringLiteral_13192/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, v5);
    byte_49BEE6A = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8617/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13192/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_15;
    v11 = v8;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
    makeCount = this->fields.makeCount;
    v14 = (Il2CppObject *)NumberFormat;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v15 = System_Math__Max_62621788(makeCount, 1, 0LL);
    v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0LL);
    v17 = (Il2CppObject *)System_String__Format_61134760(v11, v14, v16, 0LL);
  }
  else
  {
    v18 = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = System_Math__Max_62621788(v18, 1, 0LL);
    v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v19, 0LL);
  }
  v8 = System_String__Format(v7, v17, 0LL);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
LABEL_15:
    sub_1B4D1EC(v8, v9);
  UILabel__set_text(exchangeDestinationItemCountLb, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__SetTimeLabel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventCraftNumConfirmDialogComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ItemEntity_o *supportTool; // x20
  UILabel_o *v17; // x20
  System_String_o *v18; // x0
  const MethodInfo *v19; // x5
  EventTradeGoodsEntity_o *v20; // x22
  System_Collections_Generic_List_EventCraftPickupInfo__o *v21; // x23
  System_String_o *v22; // x21
  ItemEntity_o *v23; // x24
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int32_t tradeNum; // w21
  int64_t startedAt; // x22
  struct EventTradeInfo_o *v29; // x8
  ItemEntity_o *v30; // x21
  EventTradeGoodsEntity_o *v31; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *v32; // x23
  int32_t makeCount; // w22
  char *v34; // x20
  int64_t Time; // x25
  const MethodInfo *v36; // x5
  int64_t v37; // x25
  int64_t CraftFinishTime; // x0
  UILabel_o *craftCompletionTimeLabel; // x21
  int64_t v40; // x22
  System_String_o *v41; // x23
  int64_t v42; // x0
  int64_t v43; // x0
  System_String_o *RestTimeInFormat; // x20
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  Il2CppObject *v48; // x0
  EventCraftNumConfirmDialogComponent_o *v49; // x1
  UILabel_o *v50; // x0
  int32_t v51; // w25
  int64_t v52; // x22
  Il2CppObject *v53; // x0
  int64_t v54; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  EventCraftNumConfirmDialogComponent___c_c *v56; // x0
  System_Func_T__TResult__o *_9__51_0; // x21
  Il2CppObject *v58; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v62; // x0
  int64_t v63; // x21
  int64_t v64; // x0
  BalanceConfig_c *v65; // x8
  int64_t v66; // x20
  int64_t SECONDS_PER_DAY; // x21
  float v68; // s0
  float v69; // s3
  float v70; // s1
  float v71; // s2
  __int64 v72; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v74; // x0

  v3 = this;
  if ( (byte_49BEE61 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v4);
    sub_1B4CF90(&EventCraftTimeCalculation_TypeInfo, v5);
    sub_1B4CF90(&System_Func_EventCraftPickupInfo__long__TypeInfo, v6);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&System_Math_TypeInfo, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__, v10);
    sub_1B4CF90(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_3840/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, v12);
    sub_1B4CF90(&StringLiteral_13163/*"TRADE_EVENT_ADD_TIME_LABEL"*/, v13);
    sub_1B4CF90(&StringLiteral_24637/*"{0,2}:{1:D2}:{2:D2}"*/, v14);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1B4CF90(&StringLiteral_13098/*"TIME_FORMAT_1"*/, v15);
    byte_49BEE61 = 1;
  }
  if ( v3->fields.isReplenishment )
  {
    if ( v3->fields.isButtonOn )
      supportTool = v3->fields.supportTool;
    else
      supportTool = 0LL;
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
      v29 = v3->fields.eventTradeInfo;
      if ( v29 )
      {
        if ( v3->fields.isButtonOn )
          v30 = v3->fields.supportTool;
        else
          v30 = 0LL;
        v31 = v3->fields.tradeGoodsEntity;
        v32 = v3->fields.craftPickupInfoList;
        makeCount = v3->fields.makeCount;
        v34 = (char *)this + v29->fields.startedAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v37 = System_Math__Max_62621800((int64_t)v34, Time, 0LL);
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v31, v32, v30, makeCount, v37, v36);
        craftCompletionTimeLabel = v3->fields.craftCompletionTimeLabel;
        v40 = CraftFinishTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3840/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
        v42 = NetworkManager__getTime(0LL);
        v43 = System_Math__Max_62621800((int64_t)&v34[-v42], 0LL, 0LL);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v43 + v40,
                             0LL,
                             (System_String_o *)StringLiteral_24637/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0LL);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13163/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
        v46 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                v40,
                                0LL,
                                (System_String_o *)StringLiteral_24637/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0LL);
        v47 = System_String__Format(v45, v46, 0LL);
        v48 = (Il2CppObject *)System_String__Concat_61093468(RestTimeInFormat, v47, 0LL);
        this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v41, v48, 0LL);
        if ( craftCompletionTimeLabel )
        {
          v49 = this;
          v50 = craftCompletionTimeLabel;
          goto LABEL_35;
        }
      }
    }
LABEL_69:
    sub_1B4D1EC(this, method);
  }
  v17 = v3->fields.craftCompletionTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3840/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  v20 = v3->fields.tradeGoodsEntity;
  v21 = v3->fields.craftPickupInfoList;
  v22 = v18;
  if ( v3->fields.isButtonOn )
    v23 = v3->fields.supportTool;
  else
    v23 = 0LL;
  v51 = v3->fields.makeCount;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  v52 = EventCraftTimeCalculation__GetCraftFinishTime(v20, v21, v23, v51, -1LL, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v52, 0LL, (System_String_o *)StringLiteral_24637/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v22, v53, 0LL);
  if ( !v17 )
    goto LABEL_69;
  v49 = this;
  v50 = v17;
LABEL_35:
  UILabel__set_text(v50, (System_String_o *)v49, 0LL);
  v54 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.craftPickupInfoList, 0LL) )
  {
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.craftPickupInfoList;
    v56 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v56 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__51_0 = (System_Func_T__TResult__o *)v56->static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v56->static_fields->__9;
      _9__51_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v58,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__51_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v60, v61);
    }
    v62 = System_Linq_Enumerable__Select_object__long_(
            v55,
            (System_Func_TSource__TResult__o *)_9__51_0,
            (const MethodInfo_2F33EC4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v54 = System_Linq_Enumerable__Max_64099968((System_Collections_Generic_IEnumerable_long__o *)v62, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v63 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v64 = System_Math__Max_62621800(v54 - v63, 0LL, 0LL);
  v65 = BalanceConfig_TypeInfo;
  v66 = v64;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v65 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v65->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v66 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v66 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.useSupportToolBtnSp;
  v68 = 1.0;
  if ( v66 > SECONDS_PER_DAY )
    v68 = 0.5;
  if ( !this )
    goto LABEL_69;
  v69 = 1.0;
  v70 = v68;
  v71 = v68;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v68, 0LL);
  v72 = v3->fields.isButtonOn ? v3->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_13098/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v72 + v66, 0LL, v74, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_69;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__SliderValueChange(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *consumeItemList; // x8
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  __int64 v8; // x9
  unsigned int max_length; // w11
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

  if ( (byte_49BEE69 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&System_Math_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_13173/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v4);
    byte_49BEE69 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_31;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  consumeItemList = this->fields.consumeItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !consumeItemList )
    goto LABEL_31;
  exChangeOriginItemUi = this->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_31;
  v8 = *(_QWORD *)&consumeItemList->max_length;
  max_length = exChangeOriginItemUi->max_length;
  if ( (_DWORD)v8 == 2 )
  {
    if ( !max_length )
      goto LABEL_32;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( max_length <= 1 )
      goto LABEL_32;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v11 = *m_Items;
  if ( !*m_Items || (exchangeOriginCountLb = v11->fields.exchangeOriginCountLb) == 0LL )
LABEL_31:
    sub_1B4D1EC(itemSlider, method);
  if ( (signed int)exchangeOriginCountLb->max_length >= (int)v8 )
  {
    if ( (int)v8 >= 1 )
    {
      v13 = 0;
      while ( v13 < (unsigned int)v8 )
      {
        v14 = v13;
        v15 = consumeItemList->m_Items[v13];
        if ( !v15 )
          goto LABEL_31;
        num = v15->fields.num;
        makeCount = this->fields.makeCount;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v18 = System_Math__Max_62621788(makeCount, 1, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v18 * num, 0LL);
        v19 = this->fields.consumeItemList;
        if ( !v19 )
          goto LABEL_31;
        if ( (unsigned int)v14 >= v19->max_length )
          break;
        v20 = (Il2CppObject *)itemSlider;
        itemSlider = (UISliderWithButton_o *)v19->m_Items[v14];
        if ( !itemSlider )
          goto LABEL_31;
        HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0LL);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
        v22 = v11->fields.exchangeOriginCountLb;
        if ( !v22 )
          goto LABEL_31;
        if ( (unsigned int)v14 >= v22->max_length )
          break;
        v23 = (Il2CppObject *)itemSlider;
        v24 = v22->m_Items[v14];
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13173/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        itemSlider = (UISliderWithButton_o *)System_String__Format_61134760(v25, v20, v23, 0LL);
        if ( !v24 )
          goto LABEL_31;
        UILabel__set_text(v24, (System_String_o *)itemSlider, 0LL);
        consumeItemList = this->fields.consumeItemList;
        if ( !consumeItemList )
          goto LABEL_31;
        LODWORD(v8) = consumeItemList->max_length;
        v13 = v14 + 1;
        if ( (int)v14 + 1 >= (int)v8 )
          goto LABEL_30;
      }
LABEL_32:
      sub_1B4D1F4(itemSlider, method);
    }
LABEL_30:
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v26);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__Update(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_49BEE5F & 1) == 0 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, method);
    byte_49BEE5F = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0LL) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.updatedTime = floorf(time);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v3);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__UpdateDraw(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  ItemEntity_o *supportTool; // x21
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x22
  int32_t CraftMaxNum; // w0
  const MethodInfo *v9; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t v11; // w20
  int32_t ItemSliderMax; // w21
  int v13; // w0
  const MethodInfo *v14; // x1
  int32_t max; // w9
  int32_t makeCount; // w8
  __int64 v17; // x1
  int32_t saveMakeCount; // w10
  float v19; // s8
  UISliderWithButton_o *itemSlider; // x0
  int32_t v21; // w8
  const MethodInfo *v22; // x1

  if ( (byte_49BEE62 & 1) == 0 )
  {
    sub_1B4CF90(&EventCraftTimeCalculation_TypeInfo, method);
    sub_1B4CF90(&System_Math_TypeInfo, v4);
    byte_49BEE62 = 1;
  }
  craftPickupInfoList = this->fields.craftPickupInfoList;
  if ( this->fields.isButtonOn )
    supportTool = this->fields.supportTool;
  else
    supportTool = 0LL;
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(craftPickupInfoList, supportTool, tradeGoodsEntity, v2);
  eventTradeInfo = this->fields.eventTradeInfo;
  if ( eventTradeInfo )
    LODWORD(eventTradeInfo) = eventTradeInfo->fields.tradeNum;
  v11 = CraftMaxNum - (_DWORD)eventTradeInfo;
  ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(this, CraftMaxNum - (_DWORD)eventTradeInfo, v9);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Min_62622116(v11, ItemSliderMax, 0LL);
  max = this->fields.max;
  if ( max != v13 )
  {
    makeCount = this->fields.makeCount;
    v17 = (unsigned int)v13;
    if ( v13 < makeCount )
    {
      this->fields.saveMakeCount = makeCount;
      makeCount = v13;
      this->fields.makeCount = v13;
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
    v19 = 0.0;
    this->fields.max = v13;
    if ( v13 >= 2 )
      v19 = (float)(1.0 / (float)(v13 - 1)) * (float)(makeCount - 1);
    itemSlider = this->fields.itemSlider;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, v17, 1, 1, 0LL);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        UIProgressBar__set_value((UIProgressBar_o *)itemSlider, v19, 0LL);
        v21 = this->fields.max;
        if ( v21 == 1 )
        {
          itemSlider = this->fields.itemSlider;
          if ( itemSlider )
          {
            itemSlider = (UISliderWithButton_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)itemSlider,
                                                   0LL);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
              itemSlider = this->fields.itemSlider;
              if ( itemSlider )
              {
                UISliderWithButton__grayMode(itemSlider, 0LL);
                goto LABEL_36;
              }
            }
          }
        }
        else if ( v21 )
        {
          itemSlider = this->fields.itemSlider;
          if ( itemSlider )
          {
            itemSlider = (UISliderWithButton_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)itemSlider,
                                                   0LL);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
              itemSlider = this->fields.itemSlider;
              if ( itemSlider )
              {
                UISliderWithButton__normalMode(itemSlider, 0LL);
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
                                                   0LL);
            if ( itemSlider )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0LL);
              itemSlider = (UISliderWithButton_o *)this->fields.decideButton;
              if ( itemSlider )
              {
                ((void (__fastcall *)(UISliderWithButton_o *, _QWORD, Il2CppMethodPointer))itemSlider->klass->vtable._5_OnStart.method)(
                  itemSlider,
                  0LL,
                  itemSlider->klass->vtable._6_LocalToValue.methodPtr);
LABEL_36:
                EventCraftNumConfirmDialogComponent__SetExchangeBase(this, v22);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
    sub_1B4D1EC(itemSlider, v17);
  }
LABEL_37:
  EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v14);
}


void __fastcall EventCraftNumConfirmDialogComponent___Open_b__50_0(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventCraftNumConfirmDialogComponent__get_closeBtnObject(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_49BEE6B & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BEE6B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B4D1EC(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___ctor(
        EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BEE6D & 1) == 0 )
  {
    sub_1B4CF90(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v1);
    byte_49BEE6D = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventCraftNumConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventCraftNumConfirmDialogComponent___c___ctor(
        EventCraftNumConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___OnClickSupportToolButton_b__56_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__51_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.endedAt;
}