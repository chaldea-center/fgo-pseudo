void __fastcall EventCraftNumConfirmDialogComponent___ctor(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE0458 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo);
    byte_4BE0458 = 1;
  }
  v3 = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_1C21EE0(
                                                                                  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo,
                                                                                  2LL);
  this->fields.exChangeOriginItemUi = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.exChangeOriginItemUi, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__Close(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BE0454 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent_Init__);
    byte_4BE0454 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
  if ( (byte_4BE044F & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE044F = 1;
  }
  entity = 0LL;
  consumeItemList = v4->fields.consumeItemList;
  if ( !consumeItemList )
LABEL_30:
    sub_1C22094(this, *(_QWORD *)&craftMax);
  v6 = 0LL;
  while ( (int)v6 < (signed int)consumeItemList->max_length )
  {
    userItemMaster = v4->fields.userItemMaster;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
                                                      *(_QWORD *)&this->fields.useSupportToolBtnSp->fields.updateAnchors,
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
        sub_1C2209C(this, *(_QWORD *)&craftMax);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntity, 0LL, v3, v4, v5, v6, v7, v8);
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
      sub_1C22094(itemSlider, method);
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

  if ( (byte_4BE0453 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    byte_4BE0453 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C22094(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventCraftNumConfirmDialogComponent__Close(this, v7);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickDecide(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int v7; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9

  if ( (byte_4BE0452 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int____int__bool___);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    sub_1C21E38(&int___TypeInfo);
    byte_4BE0452 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    v5 = sub_1C21EE0(int___TypeInfo, 2LL);
    if ( v5 )
    {
      v7 = *(_DWORD *)(v5 + 24);
      v6 = v5;
      if ( !v7 )
        goto LABEL_13;
      *(_DWORD *)(v5 + 32) = this->fields.storeIdx;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        if ( v7 > 1 )
        {
          *(_DWORD *)(v5 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            (System_Action_T1__T2__T3__o *)this->fields.onDecide,
            (Il2CppObject *)v5,
            this->fields.makeCount,
            this->fields.isButtonOn,
            (const MethodInfo_2F02B48 *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_1C2209C(v5, v5);
      }
    }
    sub_1C22094(v5, v6);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickSupportToolButton(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x20
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  EventCraftNumConfirmDialogComponent___c_c *v5; // x0
  System_Func_T__TResult__o *_9__56_0; // x21
  Il2CppObject *v7; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  int64_t Time; // x21
  int64_t v17; // x0
  _BOOL4 isButtonOn; // w20
  int64_t v19; // x20
  BalanceConfig_c *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 v23; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v25; // x8
  const MethodInfo *v26; // x1

  if ( (byte_4BE0451 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__);
    sub_1C21E38(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_17788/*"btn_boostitem_off"*/);
    sub_1C21E38(&StringLiteral_17789/*"btn_boostitem_on"*/);
    byte_4BE0451 = 1;
  }
  v3 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.craftPickupInfoList, 0LL) )
  {
    craftPickupInfoList = this->fields.craftPickupInfoList;
    v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__56_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__56_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__56_0,
        v7,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__56_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__56_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__56_0,
        (int64_t)_9__56_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = System_Linq_Enumerable__Select_object__long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
            (System_Func_TSource__TResult__o *)_9__56_0,
            (const MethodInfo_2FE12C4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v3 = System_Linq_Enumerable__Max_65339244((System_Collections_Generic_IEnumerable_long__o *)v15, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = System_Math__Max_63934632(v3 - Time, 0LL, 0LL);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = !isButtonOn;
    v21 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1C21E50(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v22 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, isButtonOn, 0, 0LL);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_1C22094(0LL, v23);
    if ( this->fields.isButtonOn )
      v25 = &StringLiteral_17789/*"btn_boostitem_on"*/;
    else
      v25 = &StringLiteral_17788/*"btn_boostitem_off"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v25, 0LL);
    EventCraftNumConfirmDialogComponent__UpdateDraw(this, v26);
    return;
  }
  v19 = v17;
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( v19 <= v20->static_fields->SECONDS_PER_DAY )
  {
    isButtonOn = this->fields.isButtonOn;
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__Open(
        EventCraftNumConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *supportToolItem,
        System_Action_int____int__bool__o *decideAction,
        bool replenishment,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  ItemEntity_o *v10; // x22
  EventCraftNumConfirmDialogComponent_o *v13; // x19
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UserItemMaster_o *userItemMaster; // x25
  UserItemMaster_o **p_userItemMaster; // x24
  Il2CppObject *Master_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t id; // w3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t num; // w28
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x24
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UILabel_o *titleLabel; // x25
  _BOOL4 isReplenishment; // w29
  System_String_o **v72; // x8
  UILabel_o *detailLabel; // x25
  _BOOL4 v74; // w29
  System_String_o **v75; // x8
  UILabel_o *cancelButtonLb; // x25
  UILabel_o *decideButtonLb; // x25
  _BOOL4 v78; // w29
  System_String_o **v79; // x8
  UILabel_o *useSupportToolLb; // x25
  UILabel_o *supportToolMaskLb; // x25
  UILabel_o *supportToolPossessionLb; // x25
  System_String_o *v83; // x26
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  UILabel_o *supportToolPossessionLbHeader; // x25
  UILabel_o *supportToolLeftTimeHeaderLb; // x25
  UISprite_o *supportToolItemSp; // x25
  CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct CommonConsumeEntity_array *consumeItemList; // x8
  int64_t v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  const MethodInfo *v106; // x3
  struct EventTradeInfo_o *v107; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v109; // x22
  int64_t startedAt; // x25
  const MethodInfo *v111; // x7
  struct EventTradeInfo_o *v112; // x8
  EventCraftNumConfirmDialogComponent_o *v113; // x24
  int32_t v114; // w26
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int v116; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *v117; // x22
  EventTradeGoodsEntity_o *v118; // x20
  int32_t v119; // w20
  const MethodInfo *v120; // x2
  int32_t ItemSliderMax; // w21
  int32_t v122; // w0
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x1
  const MethodInfo *v125; // x1
  System_Action_o *v126; // x20
  int32_t v127; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v10 = supportToolItem;
  v13 = this;
  if ( (byte_4BE044C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17788/*"btn_boostitem_off"*/);
    sub_1C21E38(&StringLiteral_4001/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/);
    sub_1C21E38(&StringLiteral_3999/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/);
    sub_1C21E38(&StringLiteral_4011/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_3997/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/);
    sub_1C21E38(&StringLiteral_3995/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_4016/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_1C21E38(&StringLiteral_3994/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3998/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/);
    sub_1C21E38(&StringLiteral_4009/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C21E38(&StringLiteral_4000/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_4010/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4BE044C = 1;
  }
  entity = 0LL;
  if ( !v13->fields.state )
  {
    if ( !item )
      goto LABEL_88;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    p_tradeGoodsEntity = &v13->fields.tradeGoodsEntity;
    v13->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v13->fields.tradeGoodsEntity,
      (int64_t)TradeGoodsEntity_k__BackingField,
      *(int64_t *)&storeIndex,
      (int32_t)supportToolItem,
      (System_String_o *)decideAction,
      (BattleSetupInfo_o *)replenishment,
      (FollowerInfo_o *)method,
      v7);
    v13->fields.onDecide = decideAction;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v13->fields.onDecide,
      (int64_t)decideAction,
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
      p_userItemMaster = &v13->fields.userItemMaster;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
      *p_userItemMaster = (UserItemMaster_o *)Master_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v13->fields.userItemMaster,
        (int64_t)Master_object,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      userItemMaster = *p_userItemMaster;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( NetworkManager_TypeInfo->_2.cctor_finished )
    {
      if ( v10 )
        goto LABEL_15;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
                                                          *(_QWORD *)&this->fields.useSupportToolBtnSp->fields.updateAnchors,
                                                          id,
                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_88;
          num = entity->fields.num;
          if ( num <= 0 )
            v39 = 0LL;
          else
            v39 = (int64_t)v10;
        }
        else
        {
          num = 0;
          v39 = 0LL;
        }
        v13->fields.supportTool = (struct ItemEntity_o *)v39;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.supportTool, v39, v32, v33, v34, v35, v36, v37);
        supportTool = v13->fields.supportTool;
        if ( supportTool )
          LODWORD(supportTool) = ItemEntity__GetTradePickupTime(supportTool, 0LL);
        v13->fields.supportToolTime = (int)supportTool;
        v13->fields.isReplenishment = replenishment;
        if ( replenishment )
          TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
        else
          TradeInfo_k__BackingField = 0LL;
        p_eventTradeInfo = &v13->fields.eventTradeInfo;
        v13->fields.eventTradeInfo = TradeInfo_k__BackingField;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v13->fields.eventTradeInfo,
          (int64_t)TradeInfo_k__BackingField,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
        v13->fields.craftPickupInfoList = PickupInfoList_k__BackingField;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v13->fields.craftPickupInfoList,
          (int64_t)PickupInfoList_k__BackingField,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        if ( !v13->fields.itemMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v56 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
          v13->fields.itemMaster = (struct ItemMaster_o *)v56;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.itemMaster, (int64_t)v56, v57, v58, v59, v60, v61, v62);
        }
        if ( !v13->fields.giftMaster )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v63 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
          v13->fields.giftMaster = (struct GiftMaster_o *)v63;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.giftMaster, (int64_t)v63, v64, v65, v66, v67, v68, v69);
        }
        titleLabel = v13->fields.titleLabel;
        isReplenishment = v13->fields.isReplenishment;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v72 = (System_String_o **)&StringLiteral_4000/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
        if ( isReplenishment )
          v72 = (System_String_o **)&StringLiteral_4011/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v72, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v13->fields.detailLabel;
          v74 = v13->fields.isReplenishment;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v75 = (System_String_o **)&StringLiteral_3995/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( v74 )
            v75 = (System_String_o **)&StringLiteral_4010/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v75, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v13->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v13->fields.decideButtonLb;
              v78 = v13->fields.isReplenishment;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v79 = (System_String_o **)&StringLiteral_3994/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
              if ( v78 )
                v79 = (System_String_o **)&StringLiteral_4009/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v79, 0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                this = (EventCraftNumConfirmDialogComponent_o *)v13->fields.useSupportToolBtnSp;
                v13->fields.isButtonOn = 0;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17788/*"btn_boostitem_off"*/, 0LL);
                  useSupportToolLb = v13->fields.useSupportToolLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_4001/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                    0LL);
                  if ( useSupportToolLb )
                  {
                    UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0LL);
                    supportToolMaskLb = v13->fields.supportToolMaskLb;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3997/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                      0LL);
                    if ( supportToolMaskLb )
                    {
                      UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0LL);
                      supportToolPossessionLb = v13->fields.supportToolPossessionLb;
                      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3998/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0LL);
                      v127 = num;
                      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127, v84, v85, v86);
                      this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v83, v87, 0LL);
                      if ( supportToolPossessionLb )
                      {
                        UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0LL);
                        supportToolPossessionLbHeader = v13->fields.supportToolPossessionLbHeader;
                        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3999/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                          0LL);
                        if ( supportToolPossessionLbHeader )
                        {
                          UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0LL);
                          supportToolLeftTimeHeaderLb = v13->fields.supportToolLeftTimeHeaderLb;
                          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_4016/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                            0LL);
                          if ( supportToolLeftTimeHeaderLb )
                          {
                            UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
                            supportToolItemSp = v13->fields.supportToolItemSp;
                            if ( v10 )
                              LODWORD(v10) = v10->fields.id;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(supportToolItemSp, (int32_t)v10, 0LL);
                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                            this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                            if ( *p_tradeGoodsEntity )
                            {
                              if ( this )
                              {
                                SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                                     (CommonConsumeMaster_o *)this,
                                                     (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                     0LL);
                                v13->fields.consumeItemList = SortedEntityList;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)&v13->fields.consumeItemList,
                                  (int64_t)SortedEntityList,
                                  v92,
                                  v93,
                                  v94,
                                  v95,
                                  v96,
                                  v97);
                                consumeItemList = v13->fields.consumeItemList;
                                if ( consumeItemList )
                                {
                                  v99 = sub_1C21EE0(bool___TypeInfo, consumeItemList->max_length);
                                  v13->fields.isShortage = (struct System_Boolean_array *)v99;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)&v13->fields.isShortage,
                                    v99,
                                    v100,
                                    v101,
                                    v102,
                                    v103,
                                    v104,
                                    v105);
                                  if ( !v13->fields.isReplenishment || (v107 = *p_eventTradeInfo) == 0LL )
                                  {
                                    v116 = 0;
LABEL_82:
                                    v117 = item->fields._PickupInfoList_k__BackingField;
                                    v118 = *p_tradeGoodsEntity;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v119 = EventCraftTimeCalculation__GetCraftMaxNum(v117, 0LL, v118, v106) + v116;
                                    ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(
                                                      v13,
                                                      v119,
                                                      v120);
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    v122 = System_Math__Min_63934948(v119, ItemSliderMax, 0LL);
                                    v13->fields.max = v122;
                                    v13->fields.makeCount = v122;
                                    v13->fields.saveMakeCount = 0;
                                    EventCraftNumConfirmDialogComponent__InitItemSlider(v13, v123);
                                    EventCraftNumConfirmDialogComponent__SetExchangeBase(v13, v124);
                                    EventCraftNumConfirmDialogComponent__SetTimeLabel(v13, v125);
                                    v13->fields.state = 1;
                                    v126 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v126,
                                      (Il2CppObject *)v13,
                                      Method_EventCraftNumConfirmDialogComponent__Open_b__50_0__,
                                      0LL);
                                    BaseDialog__Open((BaseDialog_o *)v13, v126, 0, 0LL);
                                    return;
                                  }
                                  tradeNum = v107->fields.tradeNum;
                                  v109 = *p_tradeGoodsEntity;
                                  startedAt = v107->fields.startedAt;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                                  v112 = *p_eventTradeInfo;
                                  if ( *p_eventTradeInfo )
                                  {
                                    v113 = this;
                                    v114 = v112->fields.tradeNum;
                                    craftPickupInfoList = v13->fields.craftPickupInfoList;
                                    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                    v116 = EventCraftTimeCalculation__GetCompleteNum_46972716(
                                             v109,
                                             startedAt,
                                             (int64_t)v113,
                                             v114,
                                             0,
                                             craftPickupInfoList,
                                             0LL,
                                             v111)
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
        sub_1C22094(this, item);
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
  struct CommonConsumeEntity_array *consumeItemList; // x8
  il2cpp_array_size_t max_length; // w22
  UILabel_o *exchangeOriginLb; // x20
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  unsigned int v7; // w9
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v9; // x25
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v11; // x8
  int v12; // w10
  __int64 v13; // x9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v15; // w26
  struct UISprite_array *v16; // x10
  CommonConsumeEntity_o *v17; // x8
  UISprite_o *v18; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v20; // x8
  CommonConsumeEntity_o *v21; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v24; // w20
  struct CommonConsumeEntity_array *v25; // x8
  Il2CppObject *v26; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v28; // x8
  Il2CppObject *v29; // x21
  UILabel_o *v30; // x22
  System_String_o *v31; // x0
  struct UILabel_array *v32; // x8
  struct System_Boolean_array *isShortage; // x9
  float v34; // s1
  float v35; // s0
  float v36; // s3
  float v37; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v41; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  il2cpp_array_size_t v44; // [xsp+4h] [xbp-7Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_4BE0450 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&StringLiteral_13635/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C21E38(&StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_3996/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4BE0450 = 1;
  }
  entity = 0LL;
  consumeItemList = v2->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_69;
  max_length = consumeItemList->max_length;
  exchangeOriginLb = v2->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_69;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exChangeOriginItemUi = v2->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_69;
  v7 = exChangeOriginItemUi->max_length;
  if ( max_length == 2 )
  {
    if ( !v7 )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v7 <= 1 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v9 = *m_Items;
  if ( !*m_Items )
    goto LABEL_69;
  exchangeOriginItemIcon = v9->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_69;
  v11 = v2->fields.consumeItemList;
  v44 = max_length;
  if ( !v11 )
    goto LABEL_69;
  v12 = exchangeOriginItemIcon->max_length;
  v13 = *(_QWORD *)&v11->max_length;
  if ( v12 >= (int)v13 )
  {
    exchangeOriginCountLb = v9->fields.exchangeOriginCountLb;
    if ( !exchangeOriginCountLb )
      goto LABEL_69;
    if ( (signed int)exchangeOriginCountLb->max_length >= (int)v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          v16 = v9->fields.exchangeOriginItemIcon;
          if ( !v16 )
            break;
          if ( v15 >= v16->max_length || v15 >= (unsigned int)v13 )
            goto LABEL_70;
          v17 = v11->m_Items[v15];
          if ( !v17 )
            break;
          v18 = v16->m_Items[v15];
          objectId = v17->fields.objectId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v18, objectId, 0LL);
          v20 = v2->fields.consumeItemList;
          if ( !v20 )
            break;
          if ( v15 >= v20->max_length )
            goto LABEL_70;
          v21 = v20->m_Items[v15];
          if ( !v21 )
            break;
          num = v21->fields.num;
          makeCount = v2->fields.makeCount;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v24 = System_Math__Max_63934620(makeCount, 1, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v24 * num, 0LL);
          v25 = v2->fields.consumeItemList;
          if ( !v25 )
            break;
          if ( v15 >= v25->max_length )
            goto LABEL_70;
          v26 = (Il2CppObject *)this;
          this = (EventCraftNumConfirmDialogComponent_o *)v25->m_Items[v15];
          if ( !this )
            break;
          HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
          v28 = v9->fields.exchangeOriginCountLb;
          if ( !v28 )
            break;
          if ( v15 >= v28->max_length )
            goto LABEL_70;
          v29 = (Il2CppObject *)this;
          v30 = v28->m_Items[v15];
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_63129848(v31, v26, v29, 0LL);
          if ( !v30 )
            break;
          UILabel__set_text(v30, (System_String_o *)this, 0LL);
          v32 = v9->fields.exchangeOriginCountLb;
          if ( !v32 )
            break;
          if ( v15 >= v32->max_length )
            goto LABEL_70;
          isShortage = v2->fields.isShortage;
          if ( !isShortage )
            break;
          if ( v15 >= isShortage->max_length )
            goto LABEL_70;
          this = (EventCraftNumConfirmDialogComponent_o *)v32->m_Items[v15];
          v34 = isShortage->m_Items[v15 + 4] ? 0.0 : 1.0;
          if ( !this )
            break;
          v35 = 1.0;
          v36 = 1.0;
          v37 = v34;
          UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)(&v34 - 1), 0LL);
          v11 = v2->fields.consumeItemList;
          if ( !v11 )
            break;
          LODWORD(v13) = v11->max_length;
          if ( (int)++v15 >= (int)v13 )
            goto LABEL_50;
        }
LABEL_69:
        sub_1C22094(this, method);
      }
LABEL_50:
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent2;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44 == 2, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.exchangeOriginItemUiParent3;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44 != 2, 0LL);
      exchangeDestinationLb = v2->fields.exchangeDestinationLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3996/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/,
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
        v41 = GiftListById->m_Items[0];
        if ( !v41 )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)v2->fields.itemMaster;
        if ( !this )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                          &entity,
                                                          v41->fields.objectId,
                                                          (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
      sub_1C2209C(this, method);
    }
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__SetRewardCount(
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

  if ( (byte_4BE0456 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&StringLiteral_8965/*"MULTIPLE_INFO"*/);
    sub_1C21E38(&StringLiteral_13653/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4BE0456 = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13653/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_15;
    v8 = v5;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
    makeCount = this->fields.makeCount;
    v11 = (Il2CppObject *)NumberFormat;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Max_63934620(makeCount, 1, 0LL);
    v13 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12, 0LL);
    v14 = (Il2CppObject *)System_String__Format_63129848(v8, v11, v13, 0LL);
  }
  else
  {
    v15 = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_63934620(v15, 1, 0LL);
    v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v16, 0LL);
  }
  v5 = System_String__Format(v4, v14, 0LL);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
LABEL_15:
    sub_1C22094(v5, v6);
  UILabel__set_text(exchangeDestinationItemCountLb, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__SetTimeLabel(
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
  System_Func_T__TResult__o *_9__51_0; // x21
  Il2CppObject *v46; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v54; // x0
  int64_t v55; // x21
  int64_t v56; // x0
  BalanceConfig_c *v57; // x8
  int64_t v58; // x20
  int64_t SECONDS_PER_DAY; // x21
  float v60; // s0
  float v61; // s3
  float v62; // s1
  float v63; // s2
  __int64 v64; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v66; // x0

  v3 = this;
  if ( (byte_4BE044D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__);
    sub_1C21E38(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3993/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/);
    sub_1C21E38(&StringLiteral_13624/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C21E38(&StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_13560/*"TIME_FORMAT_1"*/);
    byte_4BE044D = 1;
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
      v17 = v3->fields.eventTradeInfo;
      if ( v17 )
      {
        if ( v3->fields.isButtonOn )
          v18 = v3->fields.supportTool;
        else
          v18 = 0LL;
        v19 = v3->fields.tradeGoodsEntity;
        v20 = v3->fields.craftPickupInfoList;
        makeCount = v3->fields.makeCount;
        v22 = (char *)this + v17->fields.startedAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v25 = System_Math__Max_63934632((int64_t)v22, Time, 0LL);
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v19, v20, v18, makeCount, v25, v24);
        craftCompletionTimeLabel = v3->fields.craftCompletionTimeLabel;
        v28 = CraftFinishTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3993/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
        v30 = NetworkManager__getTime(0LL);
        v31 = System_Math__Max_63934632((int64_t)&v22[-v30], 0LL, 0LL);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v31 + v28,
                             0LL,
                             (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0LL);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13624/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
        v34 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                v28,
                                0LL,
                                (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0LL);
        v35 = System_String__Format(v33, v34, 0LL);
        v36 = (Il2CppObject *)System_String__Concat_63115476(RestTimeInFormat, v35, 0LL);
        this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v29, v36, 0LL);
        if ( craftCompletionTimeLabel )
        {
          v37 = this;
          v38 = craftCompletionTimeLabel;
          goto LABEL_35;
        }
      }
    }
LABEL_69:
    sub_1C22094(this, method);
  }
  v5 = v3->fields.craftCompletionTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3993/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  v8 = v3->fields.tradeGoodsEntity;
  v9 = v3->fields.craftPickupInfoList;
  v10 = v6;
  if ( v3->fields.isButtonOn )
    v11 = v3->fields.supportTool;
  else
    v11 = 0LL;
  v39 = v3->fields.makeCount;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  v40 = EventCraftTimeCalculation__GetCraftFinishTime(v8, v9, v11, v39, -1LL, v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v40, 0LL, (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v10, v41, 0LL);
  if ( !v5 )
    goto LABEL_69;
  v37 = this;
  v38 = v5;
LABEL_35:
  UILabel__set_text(v38, (System_String_o *)v37, 0LL);
  v42 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.craftPickupInfoList, 0LL) )
  {
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.craftPickupInfoList;
    v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo);
      v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__51_0 = (System_Func_T__TResult__o *)v44->static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__51_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v46,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__51_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__51_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
        (int64_t)_9__51_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = System_Linq_Enumerable__Select_object__long_(
            v43,
            (System_Func_TSource__TResult__o *)_9__51_0,
            (const MethodInfo_2FE12C4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v42 = System_Linq_Enumerable__Max_65339244((System_Collections_Generic_IEnumerable_long__o *)v54, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v55 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v56 = System_Math__Max_63934632(v42 - v55, 0LL, 0LL);
  v57 = BalanceConfig_TypeInfo;
  v58 = v56;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v57->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v58 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v58 > SECONDS_PER_DAY && (unsigned __int64)!v3->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.useSupportToolBtnSp;
  v60 = 1.0;
  if ( v58 > SECONDS_PER_DAY )
    v60 = 0.5;
  if ( !this )
    goto LABEL_69;
  v61 = 1.0;
  v62 = v60;
  v63 = v60;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v60, 0LL);
  v64 = v3->fields.isButtonOn ? v3->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v64 + v58, 0LL, v66, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_69;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__SliderValueChange(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *consumeItemList; // x8
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  __int64 v6; // x9
  unsigned int max_length; // w11
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v9; // x23
  struct UILabel_array *exchangeOriginCountLb; // x10
  signed int v11; // w10
  __int64 v12; // x27
  CommonConsumeEntity_o *v13; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  int32_t v16; // w20
  struct CommonConsumeEntity_array *v17; // x8
  Il2CppObject *v18; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v20; // x8
  Il2CppObject *v21; // x21
  UILabel_o *v22; // x22
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4BE0455 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4BE0455 = 1;
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
  v6 = *(_QWORD *)&consumeItemList->max_length;
  max_length = exChangeOriginItemUi->max_length;
  if ( (_DWORD)v6 == 2 )
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
  v9 = *m_Items;
  if ( !*m_Items || (exchangeOriginCountLb = v9->fields.exchangeOriginCountLb) == 0LL )
LABEL_31:
    sub_1C22094(itemSlider, method);
  if ( (signed int)exchangeOriginCountLb->max_length >= (int)v6 )
  {
    if ( (int)v6 >= 1 )
    {
      v11 = 0;
      while ( v11 < (unsigned int)v6 )
      {
        v12 = v11;
        v13 = consumeItemList->m_Items[v11];
        if ( !v13 )
          goto LABEL_31;
        num = v13->fields.num;
        makeCount = this->fields.makeCount;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v16 = System_Math__Max_63934620(makeCount, 1, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v16 * num, 0LL);
        v17 = this->fields.consumeItemList;
        if ( !v17 )
          goto LABEL_31;
        if ( (unsigned int)v12 >= v17->max_length )
          break;
        v18 = (Il2CppObject *)itemSlider;
        itemSlider = (UISliderWithButton_o *)v17->m_Items[v12];
        if ( !itemSlider )
          goto LABEL_31;
        HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0LL);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
        v20 = v9->fields.exchangeOriginCountLb;
        if ( !v20 )
          goto LABEL_31;
        if ( (unsigned int)v12 >= v20->max_length )
          break;
        v21 = (Il2CppObject *)itemSlider;
        v22 = v20->m_Items[v12];
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        itemSlider = (UISliderWithButton_o *)System_String__Format_63129848(v23, v18, v21, 0LL);
        if ( !v22 )
          goto LABEL_31;
        UILabel__set_text(v22, (System_String_o *)itemSlider, 0LL);
        consumeItemList = this->fields.consumeItemList;
        if ( !consumeItemList )
          goto LABEL_31;
        LODWORD(v6) = consumeItemList->max_length;
        v11 = v12 + 1;
        if ( (int)v12 + 1 >= (int)v6 )
          goto LABEL_30;
      }
LABEL_32:
      sub_1C2209C(itemSlider, method);
    }
LABEL_30:
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v24);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__Update(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4BE044B & 1) == 0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BE044B = 1;
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

  if ( (byte_4BE044E & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BE044E = 1;
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
  v10 = CraftMaxNum - (_DWORD)eventTradeInfo;
  ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(this, CraftMaxNum - (_DWORD)eventTradeInfo, v8);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Min_63934948(v10, ItemSliderMax, 0LL);
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
      UISliderWithButton__init(itemSlider, v16, 1, 1, 0LL);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        UIProgressBar__set_value((UIProgressBar_o *)itemSlider, v18, 0LL);
        v20 = this->fields.max;
        if ( v20 == 1 )
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
        else if ( v20 )
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
                EventCraftNumConfirmDialogComponent__SetExchangeBase(this, v21);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
    sub_1C22094(itemSlider, v16);
  }
LABEL_37:
  EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v13);
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

  if ( (byte_4BE0457 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0457 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0459 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftNumConfirmDialogComponent___c_TypeInfo);
    byte_4BE0459 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventCraftNumConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__51_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.endedAt;
}