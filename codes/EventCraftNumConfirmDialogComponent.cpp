void __fastcall EventCraftNumConfirmDialogComponent___ctor(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B16871 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo, v3);
    byte_4B16871 = 1;
  }
  this->fields.exChangeOriginItemUi = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_1BCB0A0(EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo, 2LL);
  sub_1BCAF9C(&this->fields.exChangeOriginItemUi);
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

  if ( (byte_4B1686D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent_Init__, v3);
    byte_4B1686D = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventCraftNumConfirmDialogComponent__GetItemSliderMax(
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
  if ( (byte_4B16868 & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&craftMax);
    byte_4B16868 = 1;
  }
  entity = 0LL;
  consumeItemList = v5->fields.consumeItemList;
  if ( !consumeItemList )
LABEL_30:
    sub_1BCB254(this, *(_QWORD *)&craftMax);
  v7 = 0LL;
  while ( (int)v7 < (signed int)consumeItemList->max_length )
  {
    userItemMaster = v5->fields.userItemMaster;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&craftMax);
      byte_4B165D1 = 1;
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
    if ( (unsigned int)v7 >= v9->max_length )
      goto LABEL_32;
    v10 = v9->m_Items[v7];
    if ( !v10 || !userItemMaster )
      goto LABEL_30;
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                      v10->fields.objectId,
                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      consumeItemList = v5->fields.consumeItemList;
      if ( !consumeItemList )
        goto LABEL_30;
      if ( (unsigned int)v7 >= consumeItemList->max_length )
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
      if ( (unsigned int)v7 >= isShortage->max_length )
        goto LABEL_32;
      isShortage->m_Items[v7 + 4] = v13 > num;
    }
    else
    {
      v15 = v5->fields.isShortage;
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)v7 >= v15->max_length )
LABEL_32:
        sub_1BCB25C(this, *(_QWORD *)&craftMax, method, v3);
      v15->m_Items[v7 + 4] = 1;
      consumeItemList = v5->fields.consumeItemList;
      v4 = 0;
    }
    ++v7;
    if ( !consumeItemList )
      goto LABEL_30;
  }
  return v4;
}


void __fastcall EventCraftNumConfirmDialogComponent__Init(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BCAF9C(&this->fields.tradeGoodsEntity);
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
      sub_1BCB254(itemSlider, method);
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

  if ( (byte_4B1686C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__, method);
    byte_4B1686C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCB254(0LL, v5);
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
  __int64 v9; // x2
  __int64 v10; // x3
  unsigned int v11; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9

  if ( (byte_4B1686B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int____int__bool___, method);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__, v3);
    sub_1BCAFF8(&int___TypeInfo, v4);
    byte_4B1686B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = sub_1BCB0A0(int___TypeInfo, 2LL);
    if ( v7 )
    {
      v11 = *(_DWORD *)(v7 + 24);
      v8 = v7;
      if ( !v11 )
        goto LABEL_13;
      *(_DWORD *)(v7 + 32) = this->fields.storeIdx;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        if ( v11 > 1 )
        {
          *(_DWORD *)(v7 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            (System_Action_T1__T2__T3__o *)this->fields.onDecide,
            (Il2CppObject *)v7,
            this->fields.makeCount,
            this->fields.isButtonOn,
            (const MethodInfo_2F6A740 *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_1BCB25C(v7, v7, v9, v10);
      }
    }
    sub_1BCB254(v7, v8);
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
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  int64_t Time; // x21
  int64_t v20; // x0
  _BOOL4 isButtonOn; // w20
  int64_t v22; // x20
  BalanceConfig_c *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v28; // x8
  const MethodInfo *v29; // x1

  if ( (byte_4B1686A & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v3);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__, v4);
    sub_1BCAFF8(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5);
    sub_1BCAFF8(&System_Math_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__, v8);
    sub_1BCAFF8(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_17327/*"btn_boostitem_off"*/, v10);
    sub_1BCAFF8(&StringLiteral_17328/*"btn_boostitem_on"*/, v11);
    byte_4B1686A = 1;
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
      _9__56_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__56_0,
        v16,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__56_0;
      sub_1BCAF9C(&static_fields->__9__56_0);
    }
    v18 = System_Linq_Enumerable__Select_object__long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
            (System_Func_TSource__TResult__o *)_9__56_0,
            (const MethodInfo_304ECD8 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v12 = System_Linq_Enumerable__Max_65451264((System_Collections_Generic_IEnumerable_long__o *)v18, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = System_Math__Max_63972472(v12 - Time, 0LL, 0LL);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = !isButtonOn;
    v24 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BCB010(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, isButtonOn, 0, 0LL);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_1BCB254(0LL, v26);
    if ( this->fields.isButtonOn )
      v28 = &StringLiteral_17328/*"btn_boostitem_on"*/;
    else
      v28 = &StringLiteral_17327/*"btn_boostitem_off"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v28, 0LL);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v29);
    return;
  }
  v22 = v20;
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v22 <= v23->static_fields->SECONDS_PER_DAY )
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
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UserItemMaster_o *userItemMaster; // x25
  UserItemMaster_o **p_userItemMaster; // x24
  int32_t id; // w3
  int32_t num; // w28
  ItemEntity_o *v44; // x1
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x24
  UILabel_o *titleLabel; // x25
  _BOOL4 isReplenishment; // w29
  System_String_o **v50; // x8
  UILabel_o *detailLabel; // x25
  _BOOL4 v52; // w29
  System_String_o **v53; // x8
  UILabel_o *cancelButtonLb; // x25
  UILabel_o *decideButtonLb; // x25
  _BOOL4 v56; // w29
  System_String_o **v57; // x8
  UILabel_o *useSupportToolLb; // x25
  UILabel_o *supportToolMaskLb; // x25
  UILabel_o *supportToolPossessionLb; // x25
  System_String_o *v61; // x26
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  UILabel_o *supportToolPossessionLbHeader; // x25
  UILabel_o *supportToolLeftTimeHeaderLb; // x25
  UISprite_o *supportToolItemSp; // x25
  struct CommonConsumeEntity_array *consumeItemList; // x8
  const MethodInfo *v70; // x3
  struct EventTradeInfo_o *v71; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v73; // x22
  int64_t startedAt; // x25
  const MethodInfo *v75; // x7
  struct EventTradeInfo_o *v76; // x8
  EventCraftNumConfirmDialogComponent_o *v77; // x24
  int32_t v78; // w26
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int v80; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventTradeGoodsEntity_o *v82; // x20
  int32_t v83; // w20
  const MethodInfo *v84; // x2
  int32_t ItemSliderMax; // w21
  int32_t v86; // w0
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  System_Action_o *v90; // x20
  int32_t v91; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v12 = this;
  if ( (byte_4B16865 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, item);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v13);
    sub_1BCAFF8(&bool___TypeInfo, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonConsumeMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GiftMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v18);
    sub_1BCAFF8(&DataManager_TypeInfo, v19);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__, v20);
    sub_1BCAFF8(&EventCraftTimeCalculation_TypeInfo, v21);
    sub_1BCAFF8(&int_TypeInfo, v22);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v23);
    sub_1BCAFF8(&System_Math_TypeInfo, v24);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_17327/*"btn_boostitem_off"*/, v26);
    sub_1BCAFF8(&StringLiteral_3859/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/, v27);
    sub_1BCAFF8(&StringLiteral_3857/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, v28);
    sub_1BCAFF8(&StringLiteral_3869/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/, v29);
    sub_1BCAFF8(&StringLiteral_3855/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/, v30);
    sub_1BCAFF8(&StringLiteral_3853/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v31);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v32);
    sub_1BCAFF8(&StringLiteral_3874/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v33);
    sub_1BCAFF8(&StringLiteral_3852/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/, v34);
    sub_1BCAFF8(&StringLiteral_3856/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, v35);
    sub_1BCAFF8(&StringLiteral_3867/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/, v36);
    sub_1BCAFF8(&StringLiteral_3858/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/, v37);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCAFF8(&StringLiteral_3868/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/, v38);
    byte_4B16865 = 1;
  }
  entity = 0LL;
  if ( !v12->fields.state )
  {
    if ( !item )
      goto LABEL_88;
    p_tradeGoodsEntity = &v12->fields.tradeGoodsEntity;
    v12->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
    sub_1BCAF9C(&v12->fields.tradeGoodsEntity);
    v12->fields.onDecide = decideAction;
    sub_1BCAF9C(&v12->fields.onDecide);
    userItemMaster = v12->fields.userItemMaster;
    v12->fields.storeIdx = storeIndex;
    if ( !userItemMaster )
    {
      p_userItemMaster = &v12->fields.userItemMaster;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      *p_userItemMaster = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
      sub_1BCAF9C(&v12->fields.userItemMaster);
      userItemMaster = *p_userItemMaster;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, item);
      byte_4B165D1 = 1;
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
                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_88;
          num = entity->fields.num;
          if ( num <= 0 )
            v44 = 0LL;
          else
            v44 = supportToolItem;
        }
        else
        {
          num = 0;
          v44 = 0LL;
        }
        v12->fields.supportTool = v44;
        sub_1BCAF9C(&v12->fields.supportTool);
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
        sub_1BCAF9C(&v12->fields.eventTradeInfo);
        v12->fields.craftPickupInfoList = item->fields._PickupInfoList_k__BackingField;
        sub_1BCAF9C(&v12->fields.craftPickupInfoList);
        if ( !v12->fields.itemMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v12->fields.itemMaster = (struct ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
          sub_1BCAF9C(&v12->fields.itemMaster);
        }
        if ( !v12->fields.giftMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v12->fields.giftMaster = (struct GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GiftMaster___);
          sub_1BCAF9C(&v12->fields.giftMaster);
        }
        titleLabel = v12->fields.titleLabel;
        isReplenishment = v12->fields.isReplenishment;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = (System_String_o **)&StringLiteral_3858/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
        if ( isReplenishment )
          v50 = (System_String_o **)&StringLiteral_3869/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v50, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v12->fields.detailLabel;
          v52 = v12->fields.isReplenishment;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = (System_String_o **)&StringLiteral_3853/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( v52 )
            v53 = (System_String_o **)&StringLiteral_3868/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v53, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v12->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v12->fields.decideButtonLb;
              v56 = v12->fields.isReplenishment;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v57 = (System_String_o **)&StringLiteral_3852/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
              if ( v56 )
                v57 = (System_String_o **)&StringLiteral_3867/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v57, 0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                this = (EventCraftNumConfirmDialogComponent_o *)v12->fields.useSupportToolBtnSp;
                v12->fields.isButtonOn = 0;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17327/*"btn_boostitem_off"*/, 0LL);
                  useSupportToolLb = v12->fields.useSupportToolLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3859/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                    0LL);
                  if ( useSupportToolLb )
                  {
                    UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0LL);
                    supportToolMaskLb = v12->fields.supportToolMaskLb;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3855/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                      0LL);
                    if ( supportToolMaskLb )
                    {
                      UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0LL);
                      supportToolPossessionLb = v12->fields.supportToolPossessionLb;
                      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3856/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0LL);
                      v91 = num;
                      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v62, v63, v64);
                      this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v61, v65, 0LL);
                      if ( supportToolPossessionLb )
                      {
                        UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0LL);
                        supportToolPossessionLbHeader = v12->fields.supportToolPossessionLbHeader;
                        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3857/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                          0LL);
                        if ( supportToolPossessionLbHeader )
                        {
                          UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0LL);
                          supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
                          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3874/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                            0LL);
                          if ( supportToolLeftTimeHeaderLb )
                          {
                            UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
                            supportToolItemSp = v12->fields.supportToolItemSp;
                            if ( supportToolItem )
                              LODWORD(supportToolItem) = supportToolItem->fields.id;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(supportToolItemSp, (int32_t)supportToolItem, 0LL);
                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                            this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                            if ( *p_tradeGoodsEntity )
                            {
                              if ( this )
                              {
                                v12->fields.consumeItemList = CommonConsumeMaster__GetSortedEntityList(
                                                                (CommonConsumeMaster_o *)this,
                                                                (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                                0LL);
                                this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCAF9C(&v12->fields.consumeItemList);
                                consumeItemList = v12->fields.consumeItemList;
                                if ( consumeItemList )
                                {
                                  v12->fields.isShortage = (struct System_Boolean_array *)sub_1BCB0A0(
                                                                                            bool___TypeInfo,
                                                                                            consumeItemList->max_length);
                                  sub_1BCAF9C(&v12->fields.isShortage);
                                  if ( !v12->fields.isReplenishment || (v71 = *p_eventTradeInfo) == 0LL )
                                  {
                                    v80 = 0;
LABEL_82:
                                    PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
                                    v82 = *p_tradeGoodsEntity;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v83 = EventCraftTimeCalculation__GetCraftMaxNum(
                                            PickupInfoList_k__BackingField,
                                            0LL,
                                            v82,
                                            v70)
                                        + v80;
                                    ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(v12, v83, v84);
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    v86 = System_Math__Min_63972788(v83, ItemSliderMax, 0LL);
                                    v12->fields.max = v86;
                                    v12->fields.makeCount = v86;
                                    v12->fields.saveMakeCount = 0;
                                    EventCraftNumConfirmDialogComponent__InitItemSlider(v12, v87);
                                    EventCraftNumConfirmDialogComponent__SetExchangeBase(v12, v88);
                                    EventCraftNumConfirmDialogComponent__SetTimeLabel(v12, v89);
                                    v12->fields.state = 1;
                                    v90 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v90,
                                      (Il2CppObject *)v12,
                                      Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__,
                                      0LL);
                                    BaseDialog__Open((BaseDialog_o *)v12, v90, 0, 0LL);
                                    return;
                                  }
                                  tradeNum = v71->fields.tradeNum;
                                  v73 = *p_tradeGoodsEntity;
                                  startedAt = v71->fields.startedAt;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                                  v76 = *p_eventTradeInfo;
                                  if ( *p_eventTradeInfo )
                                  {
                                    v77 = this;
                                    v78 = v76->fields.tradeNum;
                                    craftPickupInfoList = v12->fields.craftPickupInfoList;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v80 = EventCraftTimeCalculation__GetCompleteNum_30977192(
                                            v73,
                                            startedAt,
                                            (int64_t)v77,
                                            v78,
                                            0,
                                            craftPickupInfoList,
                                            0LL,
                                            v75)
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
        sub_1BCB254(this, item);
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
  __int64 v12; // x2
  __int64 v13; // x3
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  unsigned int v15; // w9
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v17; // x25
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v19; // x8
  int v20; // w10
  __int64 v21; // x9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v23; // w26
  struct UISprite_array *v24; // x10
  CommonConsumeEntity_o *v25; // x8
  UISprite_o *v26; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v28; // x8
  CommonConsumeEntity_o *v29; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v32; // w20
  struct CommonConsumeEntity_array *v33; // x8
  Il2CppObject *v34; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v36; // x8
  Il2CppObject *v37; // x21
  UILabel_o *v38; // x22
  System_String_o *v39; // x0
  struct UILabel_array *v40; // x8
  struct System_Boolean_array *isShortage; // x9
  float v42; // s1
  float v43; // s0
  float v44; // s3
  float v45; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v49; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  il2cpp_array_size_t v52; // [xsp+4h] [xbp-7Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_4B16869 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&System_Math_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_13354/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v6);
    sub_1BCAFF8(&StringLiteral_13353/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v7);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCAFF8(&StringLiteral_3854/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v8);
    byte_4B16869 = 1;
  }
  entity = 0LL;
  consumeItemList = v2->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_69;
  max_length = consumeItemList->max_length;
  exchangeOriginLb = v2->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13354/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_69;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exChangeOriginItemUi = v2->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_69;
  v15 = exChangeOriginItemUi->max_length;
  if ( max_length == 2 )
  {
    if ( !v15 )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v15 <= 1 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v17 = *m_Items;
  if ( !*m_Items )
    goto LABEL_69;
  exchangeOriginItemIcon = v17->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_69;
  v19 = v2->fields.consumeItemList;
  v52 = max_length;
  if ( !v19 )
    goto LABEL_69;
  v20 = exchangeOriginItemIcon->max_length;
  v21 = *(_QWORD *)&v19->max_length;
  if ( v20 >= (int)v21 )
  {
    exchangeOriginCountLb = v17->fields.exchangeOriginCountLb;
    if ( !exchangeOriginCountLb )
      goto LABEL_69;
    if ( (signed int)exchangeOriginCountLb->max_length >= (int)v21 )
    {
      if ( (int)v21 >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          v24 = v17->fields.exchangeOriginItemIcon;
          if ( !v24 )
            break;
          if ( v23 >= v24->max_length || v23 >= (unsigned int)v21 )
            goto LABEL_70;
          v25 = v19->m_Items[v23];
          if ( !v25 )
            break;
          v26 = v24->m_Items[v23];
          objectId = v25->fields.objectId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v26, objectId, 0LL);
          v28 = v2->fields.consumeItemList;
          if ( !v28 )
            break;
          if ( v23 >= v28->max_length )
            goto LABEL_70;
          v29 = v28->m_Items[v23];
          if ( !v29 )
            break;
          num = v29->fields.num;
          makeCount = v2->fields.makeCount;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v32 = System_Math__Max_63972460(makeCount, 1, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v32 * num, 0LL);
          v33 = v2->fields.consumeItemList;
          if ( !v33 )
            break;
          if ( v23 >= v33->max_length )
            goto LABEL_70;
          v34 = (Il2CppObject *)this;
          this = (EventCraftNumConfirmDialogComponent_o *)v33->m_Items[v23];
          if ( !this )
            break;
          HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
          v36 = v17->fields.exchangeOriginCountLb;
          if ( !v36 )
            break;
          if ( v23 >= v36->max_length )
            goto LABEL_70;
          v37 = (Il2CppObject *)this;
          v38 = v36->m_Items[v23];
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_62491716(v39, v34, v37, 0LL);
          if ( !v38 )
            break;
          UILabel__set_text(v38, (System_String_o *)this, 0LL);
          v40 = v17->fields.exchangeOriginCountLb;
          if ( !v40 )
            break;
          if ( v23 >= v40->max_length )
            goto LABEL_70;
          isShortage = v2->fields.isShortage;
          if ( !isShortage )
            break;
          if ( v23 >= isShortage->max_length )
            goto LABEL_70;
          this = (EventCraftNumConfirmDialogComponent_o *)v40->m_Items[v23];
          v42 = isShortage->m_Items[v23 + 4] ? 0.0 : 1.0;
          if ( !this )
            break;
          v43 = 1.0;
          v44 = 1.0;
          v45 = v42;
          UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)(&v42 - 1), 0LL);
          v19 = v2->fields.consumeItemList;
          if ( !v19 )
            break;
          LODWORD(v21) = v19->max_length;
          if ( (int)++v23 >= (int)v21 )
            goto LABEL_50;
        }
LABEL_69:
        sub_1BCB254(this, method);
      }
LABEL_50:
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent2;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52 == 2, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent3;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52 != 2, 0LL);
      exchangeDestinationLb = v2->fields.exchangeDestinationLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3854/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/,
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
        v49 = GiftListById->m_Items[0];
        if ( !v49 )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.itemMaster;
        if ( !this )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                          &entity,
                                                          v49->fields.objectId,
                                                          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
      sub_1BCB25C(this, method, v12, v13);
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

  if ( (byte_4B1686F & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&System_Math_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_8747/*"MULTIPLE_INFO"*/, v4);
    sub_1BCAFF8(&StringLiteral_13372/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, v5);
    byte_4B1686F = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8747/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13372/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_15;
    v11 = v8;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
    makeCount = this->fields.makeCount;
    v14 = (Il2CppObject *)NumberFormat;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v15 = System_Math__Max_63972460(makeCount, 1, 0LL);
    v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0LL);
    v17 = (Il2CppObject *)System_String__Format_62491716(v11, v14, v16, 0LL);
  }
  else
  {
    v18 = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = System_Math__Max_63972460(v18, 1, 0LL);
    v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v19, 0LL);
  }
  v8 = System_String__Format(v7, v17, 0LL);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
LABEL_15:
    sub_1BCB254(v8, v9);
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
  System_Collections_Generic_IEnumerable_TResult__o *v60; // x0
  int64_t v61; // x21
  int64_t v62; // x0
  BalanceConfig_c *v63; // x8
  int64_t v64; // x20
  int64_t SECONDS_PER_DAY; // x21
  float v66; // s0
  float v67; // s3
  float v68; // s1
  float v69; // s2
  __int64 v70; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v72; // x0

  v3 = this;
  if ( (byte_4B16866 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v4);
    sub_1BCAFF8(&EventCraftTimeCalculation_TypeInfo, v5);
    sub_1BCAFF8(&System_Func_EventCraftPickupInfo__long__TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&System_Math_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__, v10);
    sub_1BCAFF8(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_3851/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, v12);
    sub_1BCAFF8(&StringLiteral_13343/*"TRADE_EVENT_ADD_TIME_LABEL"*/, v13);
    sub_1BCAFF8(&StringLiteral_24826/*"{0,2}:{1:D2}:{2:D2}"*/, v14);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCAFF8(&StringLiteral_13278/*"TIME_FORMAT_1"*/, v15);
    byte_4B16866 = 1;
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
        v37 = System_Math__Max_63972472((int64_t)v34, Time, 0LL);
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v31, v32, v30, makeCount, v37, v36);
        craftCompletionTimeLabel = v3->fields.craftCompletionTimeLabel;
        v40 = CraftFinishTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3851/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
        v42 = NetworkManager__getTime(0LL);
        v43 = System_Math__Max_63972472((int64_t)&v34[-v42], 0LL, 0LL);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v43 + v40,
                             0LL,
                             (System_String_o *)StringLiteral_24826/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0LL);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13343/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
        v46 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                v40,
                                0LL,
                                (System_String_o *)StringLiteral_24826/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0LL);
        v47 = System_String__Format(v45, v46, 0LL);
        v48 = (Il2CppObject *)System_String__Concat_62450424(RestTimeInFormat, v47, 0LL);
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
    sub_1BCB254(this, method);
  }
  v17 = v3->fields.craftCompletionTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3851/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
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
  v53 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v52, 0LL, (System_String_o *)StringLiteral_24826/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
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
      _9__51_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v58,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__51_0;
      sub_1BCAF9C(&static_fields->__9__51_0);
    }
    v60 = System_Linq_Enumerable__Select_object__long_(
            v55,
            (System_Func_TSource__TResult__o *)_9__51_0,
            (const MethodInfo_304ECD8 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v54 = System_Linq_Enumerable__Max_65451264((System_Collections_Generic_IEnumerable_long__o *)v60, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v61 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v62 = System_Math__Max_63972472(v54 - v61, 0LL, 0LL);
  v63 = BalanceConfig_TypeInfo;
  v64 = v62;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v63 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v63->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v64 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v64 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.useSupportToolBtnSp;
  v66 = 1.0;
  if ( v64 > SECONDS_PER_DAY )
    v66 = 0.5;
  if ( !this )
    goto LABEL_69;
  v67 = 1.0;
  v68 = v66;
  v69 = v66;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v66, 0LL);
  v70 = v3->fields.isButtonOn ? v3->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_13278/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v70 + v64, 0LL, v72, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x3
  struct CommonConsumeEntity_array *consumeItemList; // x8
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  __int64 v10; // x9
  unsigned int max_length; // w11
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v13; // x23
  struct UILabel_array *exchangeOriginCountLb; // x10
  signed int v15; // w10
  __int64 v16; // x27
  CommonConsumeEntity_o *v17; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v20; // w20
  struct CommonConsumeEntity_array *v21; // x8
  Il2CppObject *v22; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v24; // x8
  Il2CppObject *v25; // x21
  UILabel_o *v26; // x22
  System_String_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_4B1686E & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&System_Math_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_13353/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v4);
    byte_4B1686E = 1;
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
  v10 = *(_QWORD *)&consumeItemList->max_length;
  max_length = exChangeOriginItemUi->max_length;
  if ( (_DWORD)v10 == 2 )
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
  v13 = *m_Items;
  if ( !*m_Items || (exchangeOriginCountLb = v13->fields.exchangeOriginCountLb) == 0LL )
LABEL_31:
    sub_1BCB254(itemSlider, method);
  if ( (signed int)exchangeOriginCountLb->max_length >= (int)v10 )
  {
    if ( (int)v10 >= 1 )
    {
      v15 = 0;
      while ( v15 < (unsigned int)v10 )
      {
        v16 = v15;
        v17 = consumeItemList->m_Items[v15];
        if ( !v17 )
          goto LABEL_31;
        num = v17->fields.num;
        makeCount = this->fields.makeCount;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v20 = System_Math__Max_63972460(makeCount, 1, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v20 * num, 0LL);
        v21 = this->fields.consumeItemList;
        if ( !v21 )
          goto LABEL_31;
        if ( (unsigned int)v16 >= v21->max_length )
          break;
        v22 = (Il2CppObject *)itemSlider;
        itemSlider = (UISliderWithButton_o *)v21->m_Items[v16];
        if ( !itemSlider )
          goto LABEL_31;
        HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0LL);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
        v24 = v13->fields.exchangeOriginCountLb;
        if ( !v24 )
          goto LABEL_31;
        if ( (unsigned int)v16 >= v24->max_length )
          break;
        v25 = (Il2CppObject *)itemSlider;
        v26 = v24->m_Items[v16];
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        itemSlider = (UISliderWithButton_o *)System_String__Format_62491716(v27, v22, v25, 0LL);
        if ( !v26 )
          goto LABEL_31;
        UILabel__set_text(v26, (System_String_o *)itemSlider, 0LL);
        consumeItemList = this->fields.consumeItemList;
        if ( !consumeItemList )
          goto LABEL_31;
        LODWORD(v10) = consumeItemList->max_length;
        v15 = v16 + 1;
        if ( (int)v16 + 1 >= (int)v10 )
          goto LABEL_30;
      }
LABEL_32:
      sub_1BCB25C(itemSlider, method, v6, v7);
    }
LABEL_30:
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v28);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__Update(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4B16864 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    byte_4B16864 = 1;
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

  if ( (byte_4B16867 & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftTimeCalculation_TypeInfo, method);
    sub_1BCAFF8(&System_Math_TypeInfo, v4);
    byte_4B16867 = 1;
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
  v13 = System_Math__Min_63972788(v11, ItemSliderMax, 0LL);
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
    sub_1BCB254(itemSlider, v17);
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

  if ( (byte_4B16870 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16870 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
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

  if ( (byte_4B16872 & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v1);
    byte_4B16872 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventCraftNumConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v2;
  sub_1BCAF9C(EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BCB254(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__51_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.endedAt;
}