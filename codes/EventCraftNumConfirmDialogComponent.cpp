void EventCraftNumConfirmDialogComponent___ctor(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596A548 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo);
    byte_596A548 = 1;
  }
  v3 = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_2213B20(
                                                                                  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo,
                                                                                  2);
  this->fields.exChangeOriginItemUi = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exChangeOriginItemUi,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftNumConfirmDialogComponent__Close(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596A544 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent_Init__);
    byte_596A544 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventCraftNumConfirmDialogComponent__GetItemSliderMax(
        EventCraftNumConfirmDialogComponent_o *this,
        int32_t craftMax,
        const MethodInfo *method)
{
  int v3; // w20
  EventCraftNumConfirmDialogComponent_o *v4; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  unsigned int v6; // w23
  UserItemMaster_o *userItemMaster; // x22
  struct CommonConsumeEntity_array *v8; // x8
  CommonConsumeEntity_o *v9; // x8
  CommonConsumeEntity_o *v10; // x10
  int32_t num; // w9
  int32_t v12; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v14; // x8
  char *v15; // x9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = craftMax;
  v4 = this;
  if ( (byte_596A53F & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A53F = 1;
  }
  consumeItemList = v4->fields.consumeItemList;
  entity = 0;
  if ( !consumeItemList )
LABEL_30:
    sub_2213CDC(this, *(_QWORD *)&craftMax);
  v6 = 0;
  while ( (signed int)v6 < SLODWORD(consumeItemList->max_length) )
  {
    userItemMaster = v4->fields.userItemMaster;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&craftMax, method);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&craftMax, method);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v8 = v4->fields.consumeItemList;
    if ( !v8 )
      goto LABEL_30;
    if ( v6 >= LODWORD(v8->max_length) )
      goto LABEL_32;
    v9 = v8->m_Items[v6];
    if ( !v9 || !userItemMaster )
      goto LABEL_30;
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      *(_QWORD *)&this->fields.exchangeDestinationItemCountLb->fields.updateAnchors,
                                                      v9->fields.objectId,
                                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      consumeItemList = v4->fields.consumeItemList;
      if ( !consumeItemList )
        goto LABEL_30;
      if ( v6 >= LODWORD(consumeItemList->max_length) )
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
      if ( v6 >= LODWORD(isShortage->max_length) )
        goto LABEL_32;
      isShortage->m_Items[v6] = v12 > num;
    }
    else
    {
      v14 = v4->fields.isShortage;
      if ( !v14 )
        goto LABEL_30;
      if ( v6 >= LODWORD(v14->max_length) )
LABEL_32:
        sub_2213CE4(this);
      v15 = (char *)v14 + (int)v6;
      consumeItemList = v4->fields.consumeItemList;
      v3 = 0;
      v15[32] = 1;
    }
    ++v6;
    if ( !consumeItemList )
      goto LABEL_30;
  }
  return v3;
}


void EventCraftNumConfirmDialogComponent__Init(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntity, 0, v3, v4, v5, v6, v7, v8);
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
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( max == 1 )
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
    v5 = this->fields.max;
    v6 = 0;
  }
  else
  {
    if ( !max )
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
      sub_2213CDC(itemSlider, method);
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

  if ( (byte_596A543 & 1) == 0 )
  {
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    byte_596A543 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
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
  int v7; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9
  System_Action_T1__T2__T3__o *onDecide; // x0
  bool isButtonOn; // w3

  if ( (byte_596A542 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int____int__bool___);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    sub_2213A60(&int___TypeInfo);
    byte_596A542 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = sub_2213B20(int___TypeInfo, 2);
    if ( v5 )
    {
      v7 = *(_DWORD *)(v5 + 24);
      v6 = v5;
      if ( !v7 )
        goto LABEL_13;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      *(_DWORD *)(v5 + 32) = this->fields.storeIdx;
      if ( tradeGoodsEntity )
      {
        if ( v7 != 1 )
        {
          onDecide = (System_Action_T1__T2__T3__o *)this->fields.onDecide;
          isButtonOn = this->fields.isButtonOn;
          *(_DWORD *)(v6 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            onDecide,
            (Il2CppObject *)v6,
            this->fields.makeCount,
            isButtonOn,
            (const MethodInfo_370056C *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_2213CE4(v5);
      }
    }
    sub_2213CDC(v5, v6);
  }
}


void EventCraftNumConfirmDialogComponent__OnClickSupportToolButton(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t v5; // x20
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  EventCraftNumConfirmDialogComponent___c_c *v7; // x0
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__56_0; // x21
  Il2CppObject *v10; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Time; // x21
  int64_t v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t isButtonOn; // w20
  int64_t v26; // x20
  BalanceConfig_c *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v32; // x8
  const MethodInfo *v33; // x1

  if ( (byte_596A541 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    sub_2213A60(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__);
    sub_2213A60(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_18232/*"btn_boostitem_off"*/);
    sub_2213A60(&StringLiteral_18233/*"btn_boostitem_on"*/);
    byte_596A541 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.craftPickupInfoList, 0) )
  {
    craftPickupInfoList = this->fields.craftPickupInfoList;
    v7 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !*(&EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo, v3, v4);
      v7 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__56_0 = (System_Func_object__long__o *)static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v3, v4);
        static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Func_object__long__o *)sub_2213CCC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__56_0,
        v10,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__,
        0);
      v11 = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      v11->__9__56_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__56_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__56_0, (int32_t)_9__56_0, v12, v13, v14, v15, v16, v17);
    }
    v18 = System_Linq_Enumerable__Select_object__long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
            (System_Func_TSource__TResult__o *)_9__56_0,
            (const MethodInfo_3890EA4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v5 = System_Linq_Enumerable__Max_78608412((System_Collections_Generic_IEnumerable_long__o *)v18, 0);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  Time = NetworkManager__getTime(0);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19, v20);
  v22 = System_Math__Max_77153272(v5 - Time, 0, 0);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = isButtonOn ^ 1;
    v28 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_2213A78(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, isButtonOn, 0, 0);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_2213CDC(0, v30);
    v32 = &StringLiteral_18232/*"btn_boostitem_off"*/;
    if ( this->fields.isButtonOn )
      v32 = &StringLiteral_18233/*"btn_boostitem_on"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v32, 0);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v33);
    return;
  }
  v26 = v22;
  v27 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23, v24);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v26 <= v27->static_fields->SECONDS_PER_DAY )
  {
    isButtonOn = this->fields.isButtonOn;
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftNumConfirmDialogComponent__Open(
        EventCraftNumConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *supportToolItem,
        System_Action_int____int__bool__o *decideAction,
        bool replenishment,
        const MethodInfo *method)
{
  bool v7; // w7
  ItemEntity_o *v10; // x21
  EventCraftNumConfirmDialogComponent_o *v13; // x19
  int32_t state; // w8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  char v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  UserItemMaster_o *userItemMaster; // x24
  Il2CppObject *Master_object; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  char v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t id; // w3
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  char v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t num; // w24
  struct ItemEntity_o *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  char v43; // w5
  bool v44; // w6
  bool v45; // w7
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  char v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  char v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  char v68; // w5
  bool v69; // w6
  bool v70; // w7
  UILabel_o *titleLabel; // x22
  _BOOL4 isReplenishment; // w26
  System_String_o **v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  UILabel_o *detailLabel; // x22
  _BOOL4 v77; // w26
  System_String_o **v78; // x8
  __int64 v79; // x1
  __int64 v80; // x2
  UILabel_o *cancelButtonLb; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  UILabel_o *decideButtonLb; // x22
  _BOOL4 v85; // w26
  System_String_o **v86; // x8
  __int64 v87; // x1
  __int64 v88; // x2
  UILabel_o *useSupportToolLb; // x22
  UILabel_o *supportToolMaskLb; // x22
  UILabel_o *supportToolPossessionLb; // x22
  System_String_o *v92; // x23
  Il2CppObject *v93; // x0
  UILabel_o *supportToolPossessionLbHeader; // x22
  UILabel_o *supportToolLeftTimeHeaderLb; // x22
  __int64 v96; // x1
  __int64 v97; // x2
  UISprite_o *supportToolItemSp; // x22
  __int64 v99; // x1
  __int64 v100; // x2
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  char v106; // w5
  bool v107; // w6
  bool v108; // w7
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  char v114; // w5
  bool v115; // w6
  bool v116; // w7
  __int64 v117; // x1
  __int64 v118; // x2
  const MethodInfo *v119; // x3
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w26
  EventTradeGoodsEntity_o *v122; // x21
  int64_t startedAt; // x22
  __int64 v124; // x2
  const MethodInfo *v125; // x7
  struct EventTradeInfo_o *v126; // x8
  EventCraftNumConfirmDialogComponent_o *v127; // x23
  int32_t v128; // w25
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x24
  int v130; // w22
  System_Collections_Generic_List_EventCraftPickupInfo__o *v131; // x21
  EventTradeGoodsEntity_o *v132; // x20
  int32_t CraftMaxNum; // w20
  const MethodInfo *v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  int32_t ItemSliderMax; // w21
  int32_t v138; // w0
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x1
  const MethodInfo *v141; // x1
  System_Action_o *v142; // x20
  int32_t v143; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v10 = supportToolItem;
  v13 = this;
  if ( (byte_596A53C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__);
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18232/*"btn_boostitem_off"*/);
    sub_2213A60(&StringLiteral_4040/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/);
    sub_2213A60(&StringLiteral_4038/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/);
    sub_2213A60(&StringLiteral_4050/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_4036/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/);
    sub_2213A60(&StringLiteral_4034/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_4055/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_2213A60(&StringLiteral_4033/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_4037/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/);
    sub_2213A60(&StringLiteral_4048/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_4039/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_4049/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_596A53C = 1;
  }
  state = v13->fields.state;
  entity = 0;
  if ( !state )
  {
    if ( !item )
      goto LABEL_88;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    v13->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v13->fields.tradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      *(System_String_o **)&storeIndex,
      (System_String_o *)supportToolItem,
      (int32_t)decideAction,
      replenishment,
      (bool)method,
      v7);
    v13->fields.onDecide = decideAction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v13->fields.onDecide,
      (int32_t)decideAction,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    userItemMaster = v13->fields.userItemMaster;
    v13->fields.storeIdx = storeIndex;
    if ( !userItemMaster )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v22);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
      v13->fields.userItemMaster = (struct UserItemMaster_o *)Master_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v13->fields.userItemMaster,
        (int32_t)Master_object,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      userItemMaster = v13->fields.userItemMaster;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v22);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( *(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( v10 )
        goto LABEL_15;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v22);
      this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
      if ( v10 )
      {
LABEL_15:
        id = v10->fields.id;
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
            v39 = 0;
          else
            v39 = v10;
        }
        else
        {
          num = 0;
          v39 = 0;
        }
        v13->fields.supportTool = v39;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->fields.supportTool,
          (int32_t)v39,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        supportTool = v13->fields.supportTool;
        if ( supportTool )
          LODWORD(supportTool) = ItemEntity__GetTradePickupTime(supportTool, 0);
        v13->fields.supportToolTime = (int)supportTool;
        v13->fields.isReplenishment = replenishment;
        if ( replenishment )
          TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
        else
          TradeInfo_k__BackingField = 0;
        v13->fields.eventTradeInfo = TradeInfo_k__BackingField;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->fields.eventTradeInfo,
          (int32_t)TradeInfo_k__BackingField,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
        v13->fields.craftPickupInfoList = PickupInfoList_k__BackingField;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->fields.craftPickupInfoList,
          (int32_t)PickupInfoList_k__BackingField,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        if ( !v13->fields.itemMaster )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
          v57 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
          v13->fields.itemMaster = (struct ItemMaster_o *)v57;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v13->fields.itemMaster,
            (int32_t)v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
        }
        if ( !v13->fields.giftMaster )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
          v64 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
          v13->fields.giftMaster = (struct GiftMaster_o *)v64;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v13->fields.giftMaster,
            (int32_t)v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
        }
        titleLabel = v13->fields.titleLabel;
        isReplenishment = v13->fields.isReplenishment;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
        v73 = (System_String_o **)&StringLiteral_4039/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
        if ( isReplenishment )
          v73 = (System_String_o **)&StringLiteral_4050/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v73, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0);
          detailLabel = v13->fields.detailLabel;
          v77 = v13->fields.isReplenishment;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74, v75);
          v78 = (System_String_o **)&StringLiteral_4034/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( v77 )
            v78 = (System_String_o **)&StringLiteral_4049/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v78, 0);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0);
            cancelButtonLb = v13->fields.cancelButtonLb;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79, v80);
            this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
              decideButtonLb = v13->fields.decideButtonLb;
              v85 = v13->fields.isReplenishment;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82, v83);
              v86 = (System_String_o **)&StringLiteral_4033/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
              if ( v85 )
                v86 = (System_String_o **)&StringLiteral_4048/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v86, 0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                this = (EventCraftNumConfirmDialogComponent_o *)v13->fields.useSupportToolBtnSp;
                v13->fields.isButtonOn = 0;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18232/*"btn_boostitem_off"*/, 0);
                  useSupportToolLb = v13->fields.useSupportToolLb;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87, v88);
                  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_4040/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                    0);
                  if ( useSupportToolLb )
                  {
                    UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0);
                    supportToolMaskLb = v13->fields.supportToolMaskLb;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_4036/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                      0);
                    if ( supportToolMaskLb )
                    {
                      UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0);
                      supportToolPossessionLb = v13->fields.supportToolPossessionLb;
                      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_4037/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0);
                      v143 = num;
                      v93 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v143);
                      this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v92, v93, 0);
                      if ( supportToolPossessionLb )
                      {
                        UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0);
                        supportToolPossessionLbHeader = v13->fields.supportToolPossessionLbHeader;
                        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_4038/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                          0);
                        if ( supportToolPossessionLbHeader )
                        {
                          UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0);
                          supportToolLeftTimeHeaderLb = v13->fields.supportToolLeftTimeHeaderLb;
                          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_4055/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                            0);
                          if ( supportToolLeftTimeHeaderLb )
                          {
                            UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0);
                            supportToolItemSp = v13->fields.supportToolItemSp;
                            if ( v10 )
                              LODWORD(v10) = v10->fields.id;
                            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v96, v97);
                            AtlasManager__SetItem(supportToolItemSp, (int32_t)v10, 0);
                            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99, v100);
                            this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                            tradeGoodsEntity = v13->fields.tradeGoodsEntity;
                            if ( tradeGoodsEntity )
                            {
                              if ( this )
                              {
                                SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                                     (CommonConsumeMaster_o *)this,
                                                     tradeGoodsEntity->fields.commonConsumeId,
                                                     0);
                                v13->fields.consumeItemList = SortedEntityList;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)&v13->fields.consumeItemList,
                                  (int32_t)SortedEntityList,
                                  v103,
                                  v104,
                                  v105,
                                  v106,
                                  v107,
                                  v108);
                                consumeItemList = v13->fields.consumeItemList;
                                if ( consumeItemList )
                                {
                                  v110 = sub_2213B20(bool___TypeInfo, LODWORD(consumeItemList->max_length));
                                  v13->fields.isShortage = (struct System_Boolean_array *)v110;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&v13->fields.isShortage,
                                    v110,
                                    v111,
                                    v112,
                                    v113,
                                    v114,
                                    v115,
                                    v116);
                                  if ( !v13->fields.isReplenishment
                                    || (eventTradeInfo = v13->fields.eventTradeInfo) == 0 )
                                  {
                                    v130 = 0;
LABEL_82:
                                    v131 = item->fields._PickupInfoList_k__BackingField;
                                    v132 = v13->fields.tradeGoodsEntity;
                                    if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v117, v118);
                                    CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v131, 0, v132, v119);
                                    ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(
                                                      v13,
                                                      CraftMaxNum + v130,
                                                      v134);
                                    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v135, v136);
                                    v138 = System_Math__Min_77153596(CraftMaxNum + v130, ItemSliderMax, 0);
                                    v13->fields.max = v138;
                                    v13->fields.makeCount = v138;
                                    v13->fields.saveMakeCount = 0;
                                    EventCraftNumConfirmDialogComponent__InitItemSlider(v13, v139);
                                    EventCraftNumConfirmDialogComponent__SetExchangeBase(v13, v140);
                                    EventCraftNumConfirmDialogComponent__SetTimeLabel(v13, v141);
                                    v13->fields.state = 1;
                                    v142 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v142,
                                      (Il2CppObject *)v13,
                                      Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__,
                                      0);
                                    BaseDialog__Open((BaseDialog_o *)v13, v142, 0, 0, 0);
                                    return;
                                  }
                                  tradeNum = eventTradeInfo->fields.tradeNum;
                                  v122 = v13->fields.tradeGoodsEntity;
                                  startedAt = eventTradeInfo->fields.startedAt;
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v117, v118);
                                  this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                                  v126 = v13->fields.eventTradeInfo;
                                  if ( v126 )
                                  {
                                    v127 = this;
                                    v128 = v126->fields.tradeNum;
                                    craftPickupInfoList = v13->fields.craftPickupInfoList;
                                    if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, item, v124);
                                    v130 = EventCraftTimeCalculation__GetCompleteNum_38114324(
                                             v122,
                                             startedAt,
                                             (int64_t)v127,
                                             v128,
                                             0,
                                             craftPickupInfoList,
                                             0,
                                             v125)
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
        sub_2213CDC(this, item);
      }
    }
    id = 0;
    if ( !userItemMaster )
      goto LABEL_88;
    goto LABEL_19;
  }
}


void EventCraftNumConfirmDialogComponent__SetExchangeBase(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventCraftNumConfirmDialogComponent_o *v3; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 max_length_low; // x22
  UILabel_o *exchangeOriginLb; // x20
  __int64 v7; // x2
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v10; // x26
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v12; // x8
  int max_length; // w10
  int v14; // w9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v16; // w29
  unsigned int v17; // w10
  struct UISprite_array *v18; // x9
  __int64 v19; // x25
  CommonConsumeEntity_o *v20; // x8
  int32_t objectId; // w21
  UISprite_o *v22; // x20
  __int64 v23; // x2
  struct CommonConsumeEntity_array *v24; // x8
  CommonConsumeEntity_o *v25; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  __int64 v28; // x1
  __int64 v29; // x2
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
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v47; // x8
  __int64 v48; // x2
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  __int64 v51; // [xsp+0h] [xbp-80h]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_596A540 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&StringLiteral_14027/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_2213A60(&StringLiteral_14026/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_4035/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_596A540 = 1;
  }
  consumeItemList = v3->fields.consumeItemList;
  entity = 0;
  if ( !consumeItemList )
    goto LABEL_50;
  max_length_low = LODWORD(consumeItemList->max_length);
  exchangeOriginLb = v3->fields.exchangeOriginLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14027/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_50;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0);
  exChangeOriginItemUi = v3->fields.exChangeOriginItemUi;
  if ( max_length_low == 2 )
  {
    if ( !exChangeOriginItemUi )
      goto LABEL_50;
    if ( !LODWORD(exChangeOriginItemUi->max_length) )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( !exChangeOriginItemUi )
      goto LABEL_50;
    if ( (exChangeOriginItemUi->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v10 = *m_Items;
  if ( !*m_Items )
    goto LABEL_50;
  exchangeOriginItemIcon = v10->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_50;
  v12 = v3->fields.consumeItemList;
  if ( !v12 )
    goto LABEL_50;
  max_length = exchangeOriginItemIcon->max_length;
  v14 = v12->max_length;
  if ( max_length < v14 )
    return;
  exchangeOriginCountLb = v10->fields.exchangeOriginCountLb;
  if ( !exchangeOriginCountLb )
    goto LABEL_50;
  if ( SLODWORD(exchangeOriginCountLb->max_length) < v14 )
    return;
  v51 = max_length_low;
  v16 = 0;
  while ( 1 )
  {
    v17 = v12->max_length;
    if ( (int)v16 >= (int)v17 )
      break;
    v18 = v10->fields.exchangeOriginItemIcon;
    if ( !v18 )
      goto LABEL_50;
    if ( v16 >= LODWORD(v18->max_length) || v16 >= v17 )
      goto LABEL_70;
    v19 = (int)v16;
    v20 = v12->m_Items[v16];
    if ( v20 )
    {
      objectId = v20->fields.objectId;
      v22 = v18->m_Items[v16];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v7);
      this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v22, objectId, 0);
      v24 = v3->fields.consumeItemList;
      if ( v24 )
      {
        if ( v16 >= LODWORD(v24->max_length) )
          goto LABEL_70;
        v25 = v24->m_Items[v16];
        if ( v25 )
        {
          num = v25->fields.num;
          makeCount = v3->fields.makeCount;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v23);
          v30 = System_Math__Max_77153260(makeCount, 1, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v30 * num, 0);
          v31 = v3->fields.consumeItemList;
          if ( v31 )
          {
            if ( v16 >= LODWORD(v31->max_length) )
              goto LABEL_70;
            v32 = (Il2CppObject *)this;
            this = (EventCraftNumConfirmDialogComponent_o *)v31->m_Items[v16];
            if ( this )
            {
              HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
              v34 = v10->fields.exchangeOriginCountLb;
              if ( v34 )
              {
                if ( v16 >= LODWORD(v34->max_length) )
                  goto LABEL_70;
                v35 = (Il2CppObject *)this;
                v36 = v34->m_Items[v16];
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_14026/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
                this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_75697880(v37, v32, v35, 0);
                if ( v36 )
                {
                  UILabel__set_text(v36, (System_String_o *)this, 0);
                  v38 = v10->fields.exchangeOriginCountLb;
                  if ( v38 )
                  {
                    if ( v16 >= LODWORD(v38->max_length) )
                      goto LABEL_70;
                    isShortage = v3->fields.isShortage;
                    if ( isShortage )
                    {
                      if ( v16 >= LODWORD(isShortage->max_length) )
                        goto LABEL_70;
                      this = (EventCraftNumConfirmDialogComponent_o *)v38->m_Items[v16];
                      if ( this )
                      {
                        v53.fields.r = 1.0;
                        v53.fields.a = 1.0;
                        ++v16;
                        v53.fields.g = isShortage->m_Items[v19] ? 0.0 : 1.0;
                        v53.fields.b = v53.fields.g;
                        UIWidget__set_color((UIWidget_o *)this, v53, 0);
                        v12 = v3->fields.consumeItemList;
                        if ( v12 )
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
    goto LABEL_50;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.exchangeOriginItemUiParent2;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51 == 2, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.exchangeOriginItemUiParent3;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51 != 2, 0);
  exchangeDestinationLb = v3->fields.exchangeDestinationLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4035/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_50;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)this, 0);
  tradeGoodsEntity = v3->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_50;
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.giftMaster;
  if ( !this )
    goto LABEL_50;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, tradeGoodsEntity->fields.giftId, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)BasicHelper__IsNullOrEmpty(
                                                    (System_Collections_ICollection_o *)GiftListById,
                                                    0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !GiftListById )
      goto LABEL_50;
    if ( LODWORD(GiftListById->max_length) )
    {
      v47 = GiftListById->m_Items[0];
      if ( !v47 )
        goto LABEL_50;
      this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.itemMaster;
      if ( !this )
        goto LABEL_50;
      this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        &entity,
                                                        v47->fields.objectId,
                                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( entity )
        {
          exchangeDestinationItemIcon = v3->fields.exchangeDestinationItemIcon;
          monitor = (int32_t)entity[2].monitor;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v48);
          AtlasManager__SetItem(exchangeDestinationItemIcon, monitor, 0);
          goto LABEL_68;
        }
LABEL_50:
        sub_2213CDC(this, method);
      }
      goto LABEL_68;
    }
LABEL_70:
    sub_2213CE4(this);
  }
LABEL_68:
  EventCraftNumConfirmDialogComponent__SetRewardCount(v3, method);
}


void EventCraftNumConfirmDialogComponent__SetRewardCount(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  System_String_o *v5; // x20
  UILabel_o *exchangeDestinationItemCountLb; // x0
  System_String_o *v7; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v9; // x21
  System_String_o *NumberFormat; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t makeCount; // w23
  Il2CppObject *v14; // x22
  int32_t v15; // w0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t v21; // w21
  int32_t v22; // w0

  if ( (byte_596A546 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&StringLiteral_9183/*"MULTIPLE_INFO"*/);
    sub_2213A60(&StringLiteral_14045/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_596A546 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isReplenishment )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9183/*"MULTIPLE_INFO"*/, 0);
    exchangeDestinationItemCountLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14045/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
LABEL_17:
      sub_2213CDC(exchangeDestinationItemCountLb, v7);
    v9 = (System_String_o *)exchangeDestinationItemCountLb;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
    makeCount = this->fields.makeCount;
    v14 = (Il2CppObject *)NumberFormat;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v12);
    v15 = System_Math__Max_77153260(makeCount, 1, 0);
    v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0);
    v17 = (Il2CppObject *)System_String__Format_75697880(v9, v14, v16, 0);
  }
  else
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9183/*"MULTIPLE_INFO"*/, 0);
    v21 = this->fields.makeCount;
    v5 = v18;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19, v20);
    v22 = System_Math__Max_77153260(v21, 1, 0);
    v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22, 0);
  }
  v7 = System_String__Format(v5, v17, 0);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
    goto LABEL_17;
  UILabel__set_text(exchangeDestinationItemCountLb, v7, 0);
}


void EventCraftNumConfirmDialogComponent__SetTimeLabel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  EventCraftNumConfirmDialogComponent_o *v4; // x19
  ItemEntity_o *supportTool; // x20
  UILabel_o *v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x5
  EventTradeGoodsEntity_o *v11; // x22
  System_String_o *v12; // x21
  System_Collections_Generic_List_EventCraftPickupInfo__o *v13; // x23
  ItemEntity_o *v14; // x24
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x21
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x24
  int32_t tradeNum; // w22
  int64_t startedAt; // x23
  __int64 v20; // x2
  struct EventTradeInfo_o *v21; // x8
  ItemEntity_o *v22; // x21
  EventTradeGoodsEntity_o *v23; // x23
  char *v24; // x20
  System_Collections_Generic_List_EventCraftPickupInfo__o *v25; // x24
  int32_t makeCount; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t Time; // x25
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x5
  int64_t v33; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t CraftFinishTime; // x22
  UILabel_o *craftCompletionTimeLabel; // x21
  System_String_o *v38; // x23
  int64_t v39; // x0
  int64_t v40; // x0
  System_String_o *RestTimeInFormat; // x20
  System_String_o *v42; // x24
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  Il2CppObject *v45; // x0
  EventCraftNumConfirmDialogComponent_o *v46; // x1
  UILabel_o *v47; // x0
  int32_t v48; // w25
  __int64 v49; // x1
  __int64 v50; // x2
  int64_t v51; // x22
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  int64_t v55; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  EventCraftNumConfirmDialogComponent___c_c *v57; // x0
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__51_0; // x21
  Il2CppObject *v60; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  int64_t v71; // x21
  int64_t v72; // x0
  __int64 v73; // x2
  BalanceConfig_c *v74; // x8
  int64_t v75; // x20
  int64_t SECONDS_PER_DAY; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v82; // x0
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_596A53D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__);
    sub_2213A60(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_4032/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/);
    sub_2213A60(&StringLiteral_14016/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_2213A60(&StringLiteral_26425/*"{0,2}:{1:D2}:{2:D2}"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_13950/*"TIME_FORMAT_1"*/);
    byte_596A53D = 1;
  }
  if ( v4->fields.isReplenishment )
  {
    if ( v4->fields.isButtonOn )
      supportTool = v4->fields.supportTool;
    else
      supportTool = 0;
    eventTradeInfo = v4->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      tradeGoodsEntity = v4->fields.tradeGoodsEntity;
      craftPickupInfoList = v4->fields.craftPickupInfoList;
      tradeNum = eventTradeInfo->fields.tradeNum;
      startedAt = eventTradeInfo->fields.startedAt;
      if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method, v2);
      this = (EventCraftNumConfirmDialogComponent_o *)EventCraftTimeCalculation__GetCraftFinishTime(
                                                        tradeGoodsEntity,
                                                        craftPickupInfoList,
                                                        supportTool,
                                                        tradeNum,
                                                        startedAt,
                                                        v3);
      v21 = v4->fields.eventTradeInfo;
      if ( v21 )
      {
        if ( v4->fields.isButtonOn )
          v22 = v4->fields.supportTool;
        else
          v22 = 0;
        v23 = v4->fields.tradeGoodsEntity;
        v24 = (char *)this + v21->fields.startedAt;
        v25 = v4->fields.craftPickupInfoList;
        makeCount = v4->fields.makeCount;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v20);
        Time = NetworkManager__getTime(0);
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v27, v28);
        v33 = System_Math__Max_77153272((int64_t)v24, Time, 0);
        if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v30, v31);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v23, v25, v22, makeCount, v33, v32);
        craftCompletionTimeLabel = v4->fields.craftCompletionTimeLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_4032/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0);
        v39 = NetworkManager__getTime(0);
        v40 = System_Math__Max_77153272((int64_t)&v24[-v39], 0, 0);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v40 + CraftFinishTime,
                             0,
                             (System_String_o *)StringLiteral_26425/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_14016/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
        v43 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                CraftFinishTime,
                                0,
                                (System_String_o *)StringLiteral_26425/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0);
        v44 = System_String__Format(v42, v43, 0);
        v45 = (Il2CppObject *)System_String__Concat_75651716(RestTimeInFormat, v44, 0);
        this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v38, v45, 0);
        if ( craftCompletionTimeLabel )
        {
          v46 = this;
          v47 = craftCompletionTimeLabel;
          goto LABEL_35;
        }
      }
    }
LABEL_69:
    sub_2213CDC(this, method);
  }
  v6 = v4->fields.craftCompletionTimeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_4032/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  v11 = v4->fields.tradeGoodsEntity;
  v12 = v7;
  v13 = v4->fields.craftPickupInfoList;
  if ( v4->fields.isButtonOn )
    v14 = v4->fields.supportTool;
  else
    v14 = 0;
  v48 = v4->fields.makeCount;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v8, v9);
  v51 = EventCraftTimeCalculation__GetCraftFinishTime(v11, v13, v14, v48, -1, v10);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
  v52 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v51, 0, (System_String_o *)StringLiteral_26425/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v12, v52, 0);
  if ( !v6 )
    goto LABEL_69;
  v46 = this;
  v47 = v6;
LABEL_35:
  UILabel__set_text(v47, (System_String_o *)v46, 0);
  v55 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.craftPickupInfoList, 0) )
  {
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.craftPickupInfoList;
    v57 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !*(&EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo, v53, v54);
      v57 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    static_fields = v57->static_fields;
    _9__51_0 = (System_Func_object__long__o *)static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !*(&v57->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v57, v53, v54);
        static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v60 = (Il2CppObject *)static_fields->__9;
      _9__51_0 = (System_Func_object__long__o *)sub_2213CCC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v60,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__,
        0);
      v61 = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      v61->__9__51_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__51_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v61->__9__51_0, (int32_t)_9__51_0, v62, v63, v64, v65, v66, v67);
    }
    v68 = System_Linq_Enumerable__Select_object__long_(
            v56,
            (System_Func_TSource__TResult__o *)_9__51_0,
            (const MethodInfo_3890EA4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v55 = System_Linq_Enumerable__Max_78608412((System_Collections_Generic_IEnumerable_long__o *)v68, 0);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53, v54);
  v71 = NetworkManager__getTime(0);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v69, v70);
  v72 = System_Math__Max_77153272(v55 - v71, 0, 0);
  v74 = BalanceConfig_TypeInfo;
  v75 = v72;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v73);
    v74 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v74->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  method = (const MethodInfo *)(v75 > SECONDS_PER_DAY && (unsigned __int64)!v4->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  method = (const MethodInfo *)(v75 > SECONDS_PER_DAY && (unsigned __int64)!v4->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.useSupportToolBtnSp;
  if ( !this )
    goto LABEL_69;
  v83.fields.r = 1.0;
  v83.fields.a = 1.0;
  if ( v75 > SECONDS_PER_DAY )
    v83.fields.r = 0.5;
  v83.fields.g = v83.fields.r;
  v83.fields.b = v83.fields.r;
  UIWidget__set_color((UIWidget_o *)this, v83, 0);
  v80 = v4->fields.isButtonOn ? v4->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v4->fields.supportToolLeftTimeLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78, v79);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_13950/*"TIME_FORMAT_1"*/, 0);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v80 + v75, 0, v82, 0);
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
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 max_length_low; // x9
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v9; // x23
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v11; // w27
  unsigned int max_length; // w9
  CommonConsumeEntity_o *v13; // x8
  int32_t num; // w22
  int32_t makeCount; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w20
  struct CommonConsumeEntity_array *v19; // x8
  Il2CppObject *v20; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v22; // x8
  Il2CppObject *v23; // x22
  UILabel_o *v24; // x21
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_596A545 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&StringLiteral_14026/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_596A545 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0),
        consumeItemList = this->fields.consumeItemList,
        this->fields.makeCount = (int)itemSlider,
        !consumeItemList) )
  {
LABEL_30:
    sub_2213CDC(itemSlider, method);
  }
  max_length_low = LODWORD(consumeItemList->max_length);
  exChangeOriginItemUi = this->fields.exChangeOriginItemUi;
  if ( max_length_low != 2 )
  {
    if ( !exChangeOriginItemUi )
      goto LABEL_30;
    if ( (exChangeOriginItemUi->max_length & 0xFFFFFFFE) != 0 )
    {
      m_Items = &exChangeOriginItemUi->m_Items[1];
      goto LABEL_12;
    }
LABEL_32:
    sub_2213CE4(itemSlider);
  }
  if ( !exChangeOriginItemUi )
    goto LABEL_30;
  if ( !LODWORD(exChangeOriginItemUi->max_length) )
    goto LABEL_32;
  m_Items = exChangeOriginItemUi->m_Items;
LABEL_12:
  v9 = *m_Items;
  if ( !*m_Items )
    goto LABEL_30;
  exchangeOriginCountLb = v9->fields.exchangeOriginCountLb;
  if ( !exchangeOriginCountLb )
    goto LABEL_30;
  if ( SLODWORD(exchangeOriginCountLb->max_length) >= (int)max_length_low )
  {
    v11 = 0;
    while ( 1 )
    {
      max_length = consumeItemList->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_32;
      v13 = consumeItemList->m_Items[v11];
      if ( v13 )
      {
        num = v13->fields.num;
        makeCount = this->fields.makeCount;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
        v18 = System_Math__Max_77153260(makeCount, 1, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v18 * num, 0);
        v19 = this->fields.consumeItemList;
        if ( v19 )
        {
          if ( v11 >= LODWORD(v19->max_length) )
            goto LABEL_32;
          v20 = (Il2CppObject *)itemSlider;
          itemSlider = (UISliderWithButton_o *)v19->m_Items[v11];
          if ( itemSlider )
          {
            HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0);
            itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
            v22 = v9->fields.exchangeOriginCountLb;
            if ( v22 )
            {
              if ( v11 >= LODWORD(v22->max_length) )
                goto LABEL_32;
              v23 = (Il2CppObject *)itemSlider;
              v24 = v22->m_Items[v11];
              v25 = LocalizationManager__Get((System_String_o *)StringLiteral_14026/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
              itemSlider = (UISliderWithButton_o *)System_String__Format_75697880(v25, v20, v23, 0);
              if ( v24 )
              {
                ++v11;
                UILabel__set_text(v24, (System_String_o *)itemSlider, 0);
                consumeItemList = this->fields.consumeItemList;
                if ( consumeItemList )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_30;
    }
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v26);
  }
}


void EventCraftNumConfirmDialogComponent__Update(EventCraftNumConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  float time; // s8

  if ( (byte_596A53B & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A53B = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3, v4);
    this->fields.updatedTime = floorf(time);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v3);
  }
}


void EventCraftNumConfirmDialogComponent__UpdateDraw(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  ItemEntity_o *supportTool; // x21
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x22
  int32_t CraftMaxNum; // w0
  const MethodInfo *v9; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t v11; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t ItemSliderMax; // w21
  int v15; // w0
  const MethodInfo *v16; // x1
  int32_t max; // w9
  int32_t makeCount; // w8
  __int64 v19; // x1
  int32_t saveMakeCount; // w10
  float v21; // s8
  UISliderWithButton_o *itemSlider; // x0
  int32_t v23; // w8
  const MethodInfo *v24; // x1

  if ( (byte_596A53E & 1) == 0 )
  {
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A53E = 1;
  }
  craftPickupInfoList = this->fields.craftPickupInfoList;
  if ( this->fields.isButtonOn )
    supportTool = this->fields.supportTool;
  else
    supportTool = 0;
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method, v2);
  CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(craftPickupInfoList, supportTool, tradeGoodsEntity, v3);
  eventTradeInfo = this->fields.eventTradeInfo;
  if ( eventTradeInfo )
    LODWORD(eventTradeInfo) = eventTradeInfo->fields.tradeNum;
  v11 = CraftMaxNum - (_DWORD)eventTradeInfo;
  ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(this, CraftMaxNum - (_DWORD)eventTradeInfo, v9);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12, v13);
  v15 = System_Math__Min_77153596(v11, ItemSliderMax, 0);
  max = this->fields.max;
  if ( max != v15 )
  {
    makeCount = this->fields.makeCount;
    v19 = (unsigned int)v15;
    if ( v15 < makeCount )
    {
      this->fields.saveMakeCount = makeCount;
      makeCount = v15;
      this->fields.makeCount = v15;
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
    v21 = 0.0;
    this->fields.max = v15;
    if ( v15 >= 2 )
      v21 = (float)(1.0 / (float)(v15 - 1)) * (float)(makeCount - 1);
    itemSlider = this->fields.itemSlider;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, v19, 1, 1, 0);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        UIProgressBar__set_value((UIProgressBar_o *)itemSlider, v21, 0);
        v23 = this->fields.max;
        itemSlider = this->fields.itemSlider;
        if ( v23 == 1 )
        {
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
        else if ( v23 )
        {
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
        else if ( itemSlider )
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
              EventCraftNumConfirmDialogComponent__SetExchangeBase(this, v24);
              goto LABEL_37;
            }
          }
        }
      }
    }
    sub_2213CDC(itemSlider, v19);
  }
LABEL_37:
  EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v16);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A547 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A547 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A549 & 1) == 0 )
  {
    sub_2213A60(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    byte_596A549 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventCraftNumConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.endedAt;
}


int64_t EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__51_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.endedAt;
}