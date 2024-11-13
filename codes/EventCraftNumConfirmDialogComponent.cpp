void __fastcall EventCraftNumConfirmDialogComponent___ctor(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B1A008 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo, v4, v5);
    byte_4B1A008 = 1;
  }
  v6 = (struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *)sub_1BCA888(
                                                                                  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___TypeInfo,
                                                                                  2LL);
  this->fields.exChangeOriginItemUi = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.exChangeOriginItemUi, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__Close(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A004 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent_Init__, v5, v6);
    byte_4B1A004 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftNumConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v6; // x22
  UserItemMaster_o *userItemMaster; // x21
  struct CommonConsumeEntity_array *v8; // x8
  CommonConsumeEntity_o *v9; // x8
  CommonConsumeEntity_o *v10; // x10
  int32_t num; // w9
  int32_t v12; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v14; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = craftMax;
  v4 = this;
  if ( (byte_4B19FFF & 1) == 0 )
  {
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&craftMax, method);
    byte_4B19FFF = 1;
  }
  entity = 0LL;
  consumeItemList = v4->fields.consumeItemList;
  if ( !consumeItemList )
LABEL_26:
    sub_1BCAA3C(this, *(_QWORD *)&craftMax);
  v6 = 0LL;
  while ( (int)v6 < (signed int)consumeItemList->max_length )
  {
    userItemMaster = v4->fields.userItemMaster;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&craftMax);
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
    v8 = v4->fields.consumeItemList;
    if ( !v8 )
      goto LABEL_26;
    if ( (unsigned int)v6 >= v8->max_length )
      goto LABEL_28;
    v9 = v8->m_Items[v6];
    if ( !v9 || !userItemMaster )
      goto LABEL_26;
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      (int64_t)this,
                                                      v9->fields.objectId,
                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_26;
      consumeItemList = v4->fields.consumeItemList;
      if ( !consumeItemList )
        goto LABEL_26;
      if ( (unsigned int)v6 >= consumeItemList->max_length )
        goto LABEL_28;
      v10 = consumeItemList->m_Items[v6];
      if ( !v10 )
        goto LABEL_26;
      num = entity->fields.num;
      v12 = v10->fields.num;
      isShortage = v4->fields.isShortage;
      if ( v3 >= num / v12 )
        v3 = num / v12;
      if ( !isShortage )
        goto LABEL_26;
      if ( (unsigned int)v6 >= isShortage->max_length )
        goto LABEL_28;
      isShortage->m_Items[v6 + 4] = v12 > num;
    }
    else
    {
      v14 = v4->fields.isShortage;
      if ( !v14 )
        goto LABEL_26;
      if ( (unsigned int)v6 >= v14->max_length )
LABEL_28:
        sub_1BCAA44(this, *(_QWORD *)&craftMax);
      v14->m_Items[v6 + 4] = 1;
      consumeItemList = v4->fields.consumeItemList;
      v3 = 0;
    }
    ++v6;
    if ( !consumeItemList )
      goto LABEL_26;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntity, 0LL, v3, v4, v5, v6, v7, v8);
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
      sub_1BCAA3C(itemSlider, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B1A003 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A003 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventCraftNumConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventCraftNumConfirmDialogComponent__Close(this, v8);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickDecide(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int v12; // w8
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x9

  if ( (byte_4B1A002 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int____int__bool___, method, v2);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    byte_4B1A002 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_EventCraftNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventCraftNumConfirmDialogComponent_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v10 = sub_1BCA888(int___TypeInfo, 2LL);
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 24);
      v11 = v10;
      if ( !v12 )
        goto LABEL_13;
      *(_DWORD *)(v10 + 32) = this->fields.storeIdx;
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        if ( v12 > 1 )
        {
          *(_DWORD *)(v10 + 36) = tradeGoodsEntity->fields.id;
          ActionExtensions__Call_object__int__bool_(
            (System_Action_T1__T2__T3__o *)this->fields.onDecide,
            (Il2CppObject *)v10,
            this->fields.makeCount,
            this->fields.isButtonOn,
            (const MethodInfo_2E65AC0 *)Method_ActionExtensions_Call_int____int__bool___);
          return;
        }
LABEL_13:
        sub_1BCAA44(v10, v10);
      }
    }
    sub_1BCAA3C(v10, v11);
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__OnClickSupportToolButton(
        EventCraftNumConfirmDialogComponent_o *this,
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
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  int64_t v25; // x20
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x20
  EventCraftNumConfirmDialogComponent___c_c *v27; // x0
  System_Func_T__TResult__o *_9__54_0; // x21
  Il2CppObject *v29; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v37; // x0
  __int64 v38; // x1
  int64_t Time; // x21
  int64_t v40; // x0
  __int64 v41; // x1
  _BOOL4 isButtonOn; // w20
  int64_t v43; // x20
  BalanceConfig_c *v44; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  __int64 v47; // x1
  UISprite_o *useSupportToolBtnSp; // x0
  __int64 *v49; // x8

  if ( (byte_4B1A001 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v4, v5);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__, v6, v7);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Math_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__54_0__, v14, v15);
    sub_1BCA7E0(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_17672/*"btn_boostitem_off"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17673/*"btn_boostitem_on"*/, v20, v21);
    byte_4B1A001 = 1;
  }
  v25 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.craftPickupInfoList, 0LL) )
  {
    craftPickupInfoList = this->fields.craftPickupInfoList;
    v27 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo, v22);
      v27 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__54_0 = (System_Func_T__TResult__o *)v27->static_fields->__9__54_0;
    if ( !_9__54_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v22);
        v27 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__54_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                v22,
                                                v23,
                                                v24);
      System_Func_object__long____ctor(
        _9__54_0,
        v29,
        Method_EventCraftNumConfirmDialogComponent___c__OnClickSupportToolButton_b__54_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__54_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__54_0,
        (int64_t)_9__54_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = System_Linq_Enumerable__Select_object__long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)craftPickupInfoList,
            (System_Func_TSource__TResult__o *)_9__54_0,
            (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v25 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v37, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
  v40 = System_Math__Max_63220208(v25 - Time, 0LL, 0LL);
  if ( this->fields.isButtonOn )
  {
    isButtonOn = 1;
LABEL_21:
    this->fields.isButtonOn = !isButtonOn;
    v45 = Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__;
    if ( (*((_BYTE *)Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1BCA7F8(Method_EventCraftNumConfirmDialogComponent_OnClickSupportToolButton__);
    v46 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, isButtonOn, 0LL);
    useSupportToolBtnSp = this->fields.useSupportToolBtnSp;
    if ( !useSupportToolBtnSp )
      sub_1BCAA3C(0LL, v47);
    if ( this->fields.isButtonOn )
      v49 = &StringLiteral_17673/*"btn_boostitem_on"*/;
    else
      v49 = &StringLiteral_17672/*"btn_boostitem_off"*/;
    UISprite__set_spriteName(useSupportToolBtnSp, (System_String_o *)*v49, 0LL);
    return;
  }
  v43 = v40;
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v41);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( v43 <= v44->static_fields->SECONDS_PER_DAY )
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x1
  UserItemMaster_o *userItemMaster; // x25
  UserItemMaster_o **p_userItemMaster; // x24
  Il2CppObject *Master_object; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int32_t id; // w3
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int32_t num; // w28
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  ItemEntity_o *supportTool; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x24
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  __int64 v109; // x1
  Il2CppObject *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  UILabel_o *titleLabel; // x25
  _BOOL4 isReplenishment; // w29
  System_String_o **v126; // x8
  __int64 v127; // x1
  UILabel_o *detailLabel; // x25
  _BOOL4 v129; // w29
  System_String_o **v130; // x8
  __int64 v131; // x1
  UILabel_o *cancelButtonLb; // x25
  __int64 v133; // x1
  UILabel_o *decideButtonLb; // x25
  _BOOL4 v135; // w29
  System_String_o **v136; // x8
  __int64 v137; // x1
  UILabel_o *useSupportToolLb; // x25
  UILabel_o *supportToolMaskLb; // x25
  UILabel_o *supportToolPossessionLb; // x25
  System_String_o *v141; // x26
  Il2CppObject *v142; // x0
  UILabel_o *supportToolPossessionLbHeader; // x25
  UILabel_o *supportToolLeftTimeHeaderLb; // x25
  __int64 v145; // x1
  UISprite_o *supportToolItemSp; // x25
  __int64 v147; // x1
  CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct CommonConsumeEntity_array *consumeItemList; // x8
  int64_t v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  __int64 v163; // x1
  const MethodInfo *v164; // x3
  struct EventTradeInfo_o *v165; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v167; // x22
  int64_t startedAt; // x25
  const MethodInfo *v169; // x7
  struct EventTradeInfo_o *v170; // x8
  EventCraftNumConfirmDialogComponent_o *v171; // x24
  int32_t v172; // w26
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int v174; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *v175; // x22
  EventTradeGoodsEntity_o *v176; // x20
  int32_t v177; // w20
  const MethodInfo *v178; // x2
  __int64 v179; // x1
  int32_t ItemSliderMax; // w21
  int32_t v181; // w0
  const MethodInfo *v182; // x1
  const MethodInfo *v183; // x1
  const MethodInfo *v184; // x1
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  System_Action_o *v188; // x20
  int32_t v189; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v10 = supportToolItem;
  v13 = this;
  if ( (byte_4B19FFC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&storeIndex);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&bool___TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v24, v25);
    sub_1BCA7E0(&DataManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent__Open_b__48_0__, v28, v29);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v30, v31);
    sub_1BCA7E0(&int_TypeInfo, v32, v33);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&System_Math_TypeInfo, v36, v37);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_17672/*"btn_boostitem_off"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3976/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_3974/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_3985/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_3972/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_3970/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_3990/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_3969/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_3973/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_3983/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_3975/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/, v62, v63);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_3984/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/, v64, v65);
    byte_4B19FFC = 1;
  }
  entity = 0LL;
  if ( !v13->fields.state )
  {
    if ( !item )
      goto LABEL_84;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    p_tradeGoodsEntity = &v13->fields.tradeGoodsEntity;
    v13->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v13->fields.tradeGoodsEntity,
      (int64_t)TradeGoodsEntity_k__BackingField,
      *(int64_t *)&storeIndex,
      (int32_t)supportToolItem,
      (System_String_o *)decideAction,
      (BattleSetupInfo_o *)replenishment,
      (FollowerInfo_o *)method,
      v7);
    v13->fields.onDecide = decideAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v13->fields.onDecide,
      (int64_t)decideAction,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    userItemMaster = v13->fields.userItemMaster;
    v13->fields.storeIdx = storeIndex;
    if ( !userItemMaster )
    {
      p_userItemMaster = &v13->fields.userItemMaster;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
      *p_userItemMaster = (UserItemMaster_o *)Master_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v13->fields.userItemMaster,
        (int64_t)Master_object,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      userItemMaster = *p_userItemMaster;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v74);
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
    if ( v10 )
    {
      id = v10->fields.id;
      if ( !userItemMaster )
        goto LABEL_84;
    }
    else
    {
      id = 0;
      if ( !userItemMaster )
        goto LABEL_84;
    }
    this = (EventCraftNumConfirmDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                      userItemMaster,
                                                      &entity,
                                                      (int64_t)this,
                                                      id,
                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_84;
      num = entity->fields.num;
      if ( num <= 0 )
        v92 = 0LL;
      else
        v92 = (int64_t)v10;
    }
    else
    {
      num = 0;
      v92 = 0LL;
    }
    v13->fields.supportTool = (struct ItemEntity_o *)v92;
    sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.supportTool, v92, v85, v86, v87, v88, v89, v90);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v13->fields.eventTradeInfo,
      (int64_t)TradeInfo_k__BackingField,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
    v13->fields.craftPickupInfoList = PickupInfoList_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v13->fields.craftPickupInfoList,
      (int64_t)PickupInfoList_k__BackingField,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    if ( !v13->fields.itemMaster )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v109);
      v110 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      v13->fields.itemMaster = (struct ItemMaster_o *)v110;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v13->fields.itemMaster,
        (int64_t)v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    if ( !v13->fields.giftMaster )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v109);
      v117 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
      v13->fields.giftMaster = (struct GiftMaster_o *)v117;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v13->fields.giftMaster,
        (int64_t)v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
    }
    titleLabel = v13->fields.titleLabel;
    isReplenishment = v13->fields.isReplenishment;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109);
    v126 = (System_String_o **)&StringLiteral_3975/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/;
    if ( isReplenishment )
      v126 = (System_String_o **)&StringLiteral_3985/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v126, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
      detailLabel = v13->fields.detailLabel;
      v129 = v13->fields.isReplenishment;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v127);
      v130 = (System_String_o **)&StringLiteral_3970/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
      if ( v129 )
        v130 = (System_String_o **)&StringLiteral_3984/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v130, 0LL);
      if ( detailLabel )
      {
        UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
        cancelButtonLb = v13->fields.cancelButtonLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
        this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                          0LL);
        if ( cancelButtonLb )
        {
          UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
          decideButtonLb = v13->fields.decideButtonLb;
          v135 = v13->fields.isReplenishment;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
          v136 = (System_String_o **)&StringLiteral_3969/*"CRAFT_EVENT_CONFIRM_DIALOG_DECIDE"*/;
          if ( v135 )
            v136 = (System_String_o **)&StringLiteral_3983/*"CRAFT_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DECIDE"*/;
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(*v136, 0LL);
          if ( decideButtonLb )
          {
            UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
            this = (EventCraftNumConfirmDialogComponent_o *)v13->fields.useSupportToolBtnSp;
            v13->fields.isButtonOn = 0;
            if ( this )
            {
              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17672/*"btn_boostitem_off"*/, 0LL);
              useSupportToolLb = v13->fields.useSupportToolLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137);
              this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3976/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/,
                                                                0LL);
              if ( useSupportToolLb )
              {
                UILabel__set_text(useSupportToolLb, (System_String_o *)this, 0LL);
                supportToolMaskLb = v13->fields.supportToolMaskLb;
                this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3972/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/,
                                                                  0LL);
                if ( supportToolMaskLb )
                {
                  UILabel__set_text(supportToolMaskLb, (System_String_o *)this, 0LL);
                  supportToolPossessionLb = v13->fields.supportToolPossessionLb;
                  v141 = LocalizationManager__Get((System_String_o *)StringLiteral_3973/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, 0LL);
                  v189 = num;
                  v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
                  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v141, v142, 0LL);
                  if ( supportToolPossessionLb )
                  {
                    UILabel__set_text(supportToolPossessionLb, (System_String_o *)this, 0LL);
                    supportToolPossessionLbHeader = v13->fields.supportToolPossessionLbHeader;
                    this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3974/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/,
                                                                      0LL);
                    if ( supportToolPossessionLbHeader )
                    {
                      UILabel__set_text(supportToolPossessionLbHeader, (System_String_o *)this, 0LL);
                      supportToolLeftTimeHeaderLb = v13->fields.supportToolLeftTimeHeaderLb;
                      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3990/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                        0LL);
                      if ( supportToolLeftTimeHeaderLb )
                      {
                        UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
                        supportToolItemSp = v13->fields.supportToolItemSp;
                        if ( v10 )
                          LODWORD(v10) = v10->fields.id;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v145);
                        AtlasManager__SetItem(supportToolItemSp, (int32_t)v10, 0LL);
                        if ( !DataManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v147);
                        this = (EventCraftNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                        if ( *p_tradeGoodsEntity )
                        {
                          if ( this )
                          {
                            SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                                 (CommonConsumeMaster_o *)this,
                                                 (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                                 0LL);
                            v13->fields.consumeItemList = SortedEntityList;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)&v13->fields.consumeItemList,
                              (int64_t)SortedEntityList,
                              v149,
                              v150,
                              v151,
                              v152,
                              v153,
                              v154);
                            consumeItemList = v13->fields.consumeItemList;
                            if ( consumeItemList )
                            {
                              v156 = sub_1BCA888(bool___TypeInfo, consumeItemList->max_length);
                              v13->fields.isShortage = (struct System_Boolean_array *)v156;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)&v13->fields.isShortage,
                                v156,
                                v157,
                                v158,
                                v159,
                                v160,
                                v161,
                                v162);
                              if ( !v13->fields.isReplenishment || (v165 = *p_eventTradeInfo) == 0LL )
                              {
                                v174 = 0;
LABEL_78:
                                v175 = item->fields._PickupInfoList_k__BackingField;
                                v176 = *p_tradeGoodsEntity;
                                if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v163);
                                v177 = EventCraftTimeCalculation__GetCraftMaxNum(v175, 0LL, v176, v164) + v174;
                                ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(v13, v177, v178);
                                if ( !System_Math_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v179);
                                v181 = System_Math__Min_63220524(v177, ItemSliderMax, 0LL);
                                v13->fields.max = v181;
                                v13->fields.makeCount = v181;
                                v13->fields.saveMakeCount = 0;
                                EventCraftNumConfirmDialogComponent__InitItemSlider(v13, v182);
                                EventCraftNumConfirmDialogComponent__SetExchangeBase(v13, v183);
                                EventCraftNumConfirmDialogComponent__SetTimeLabel(v13, v184);
                                v13->fields.state = 1;
                                v188 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v185, v186, v187);
                                System_Action___ctor(
                                  v188,
                                  (Il2CppObject *)v13,
                                  Method_EventCraftNumConfirmDialogComponent__Open_b__48_0__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v13, v188, 0, 0LL);
                                return;
                              }
                              tradeNum = v165->fields.tradeNum;
                              v167 = *p_tradeGoodsEntity;
                              startedAt = v165->fields.startedAt;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v163);
                              this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                              v170 = *p_eventTradeInfo;
                              if ( *p_eventTradeInfo )
                              {
                                v171 = this;
                                v172 = v170->fields.tradeNum;
                                craftPickupInfoList = v13->fields.craftPickupInfoList;
                                if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, item);
                                v174 = EventCraftTimeCalculation__GetCompleteNum_46368688(
                                         v167,
                                         startedAt,
                                         (int64_t)v171,
                                         v172,
                                         0,
                                         craftPickupInfoList,
                                         0LL,
                                         v169)
                                     - tradeNum;
                                goto LABEL_78;
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
LABEL_84:
    sub_1BCAA3C(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__SetExchangeBase(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventCraftNumConfirmDialogComponent_o *v3; // x19
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
  struct CommonConsumeEntity_array *consumeItemList; // x8
  il2cpp_array_size_t max_length; // w22
  UILabel_o *exchangeOriginLb; // x20
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x8
  unsigned int v20; // w9
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x8
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v22; // x25
  struct UISprite_array *exchangeOriginItemIcon; // x9
  struct CommonConsumeEntity_array *v24; // x8
  int v25; // w10
  __int64 v26; // x9
  struct UILabel_array *exchangeOriginCountLb; // x10
  unsigned int v28; // w26
  struct UISprite_array *v29; // x10
  CommonConsumeEntity_o *v30; // x8
  UISprite_o *v31; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v33; // x8
  CommonConsumeEntity_o *v34; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  __int64 v37; // x1
  int32_t v38; // w20
  struct CommonConsumeEntity_array *v39; // x8
  Il2CppObject *v40; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v42; // x8
  Il2CppObject *v43; // x21
  UILabel_o *v44; // x22
  System_String_o *v45; // x0
  struct UILabel_array *v46; // x8
  struct System_Boolean_array *isShortage; // x9
  float v48; // s1
  float v49; // s0
  float v50; // s3
  float v51; // s2
  __int64 v52; // x1
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v56; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t monitor; // w21
  il2cpp_array_size_t v59; // [xsp+4h] [xbp-7Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  v3 = this;
  if ( (byte_4B1A000 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Math_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_13542/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v12, v13);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_3971/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v14, v15);
    byte_4B1A000 = 1;
  }
  entity = 0LL;
  consumeItemList = v3->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_69;
  max_length = consumeItemList->max_length;
  exchangeOriginLb = v3->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13542/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_69;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exChangeOriginItemUi = v3->fields.exChangeOriginItemUi;
  if ( !exChangeOriginItemUi )
    goto LABEL_69;
  v20 = exChangeOriginItemUi->max_length;
  if ( max_length == 2 )
  {
    if ( !v20 )
      goto LABEL_70;
    m_Items = exChangeOriginItemUi->m_Items;
  }
  else
  {
    if ( v20 <= 1 )
      goto LABEL_70;
    m_Items = &exChangeOriginItemUi->m_Items[1];
  }
  v22 = *m_Items;
  if ( !*m_Items )
    goto LABEL_69;
  exchangeOriginItemIcon = v22->fields.exchangeOriginItemIcon;
  if ( !exchangeOriginItemIcon )
    goto LABEL_69;
  v24 = v3->fields.consumeItemList;
  v59 = max_length;
  if ( !v24 )
    goto LABEL_69;
  v25 = exchangeOriginItemIcon->max_length;
  v26 = *(_QWORD *)&v24->max_length;
  if ( v25 >= (int)v26 )
  {
    exchangeOriginCountLb = v22->fields.exchangeOriginCountLb;
    if ( !exchangeOriginCountLb )
      goto LABEL_69;
    if ( (signed int)exchangeOriginCountLb->max_length >= (int)v26 )
    {
      if ( (int)v26 >= 1 )
      {
        v28 = 0;
        while ( 1 )
        {
          v29 = v22->fields.exchangeOriginItemIcon;
          if ( !v29 )
            break;
          if ( v28 >= v29->max_length || v28 >= (unsigned int)v26 )
            goto LABEL_70;
          v30 = v24->m_Items[v28];
          if ( !v30 )
            break;
          v31 = v29->m_Items[v28];
          objectId = v30->fields.objectId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
          this = (EventCraftNumConfirmDialogComponent_o *)AtlasManager__SetItem(v31, objectId, 0LL);
          v33 = v3->fields.consumeItemList;
          if ( !v33 )
            break;
          if ( v28 >= v33->max_length )
            goto LABEL_70;
          v34 = v33->m_Items[v28];
          if ( !v34 )
            break;
          num = v34->fields.num;
          makeCount = v3->fields.makeCount;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
          v38 = System_Math__Max_63220196(makeCount, 1, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(v38 * num, 0LL);
          v39 = v3->fields.consumeItemList;
          if ( !v39 )
            break;
          if ( v28 >= v39->max_length )
            goto LABEL_70;
          v40 = (Il2CppObject *)this;
          this = (EventCraftNumConfirmDialogComponent_o *)v39->m_Items[v28];
          if ( !this )
            break;
          HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
          v42 = v22->fields.exchangeOriginCountLb;
          if ( !v42 )
            break;
          if ( v28 >= v42->max_length )
            goto LABEL_70;
          v43 = (Il2CppObject *)this;
          v44 = v42->m_Items[v28];
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
          this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format_62415592(v45, v40, v43, 0LL);
          if ( !v44 )
            break;
          UILabel__set_text(v44, (System_String_o *)this, 0LL);
          v46 = v22->fields.exchangeOriginCountLb;
          if ( !v46 )
            break;
          if ( v28 >= v46->max_length )
            goto LABEL_70;
          isShortage = v3->fields.isShortage;
          if ( !isShortage )
            break;
          if ( v28 >= isShortage->max_length )
            goto LABEL_70;
          this = (EventCraftNumConfirmDialogComponent_o *)v46->m_Items[v28];
          v48 = isShortage->m_Items[v28 + 4] ? 0.0 : 1.0;
          if ( !this )
            break;
          v49 = 1.0;
          v50 = 1.0;
          v51 = v48;
          UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)(&v48 - 1), 0LL);
          v24 = v3->fields.consumeItemList;
          if ( !v24 )
            break;
          LODWORD(v26) = v24->max_length;
          if ( (int)++v28 >= (int)v26 )
            goto LABEL_50;
        }
LABEL_69:
        sub_1BCAA3C(this, method);
      }
LABEL_50:
      this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.exchangeOriginItemUiParent2;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v59 == 2, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.exchangeOriginItemUiParent3;
      if ( !this )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v59 != 2, 0LL);
      exchangeDestinationLb = v3->fields.exchangeDestinationLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
      this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3971/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/,
                                                        0LL);
      if ( !exchangeDestinationLb )
        goto LABEL_69;
      UILabel__set_text(exchangeDestinationLb, (System_String_o *)this, 0LL);
      tradeGoodsEntity = v3->fields.tradeGoodsEntity;
      if ( !tradeGoodsEntity )
        goto LABEL_69;
      this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.giftMaster;
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
        v56 = GiftListById->m_Items[0];
        if ( !v56 )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)v3->fields.itemMaster;
        if ( !this )
          goto LABEL_69;
        this = (EventCraftNumConfirmDialogComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                          &entity,
                                                          v56->fields.objectId,
                                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          exchangeDestinationItemIcon = v3->fields.exchangeDestinationItemIcon;
          monitor = (int32_t)entity[2].monitor;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
          AtlasManager__SetItem(exchangeDestinationItemIcon, monitor, 0LL);
        }
LABEL_67:
        EventCraftNumConfirmDialogComponent__SetRewardCount(v3, method);
        return;
      }
LABEL_70:
      sub_1BCAA44(this, method);
    }
  }
}


void __fastcall EventCraftNumConfirmDialogComponent__SetRewardCount(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _BOOL4 isReplenishment; // w21
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v16; // x21
  System_String_o *NumberFormat; // x0
  __int64 v18; // x1
  int32_t makeCount; // w23
  Il2CppObject *v20; // x22
  int32_t v21; // w0
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  int32_t v24; // w21
  int32_t v25; // w0
  UILabel_o *exchangeDestinationItemCountLb; // x8

  if ( (byte_4B1A006 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_13560/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, v8, v9);
    byte_4B1A006 = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_15;
    v16 = v13;
    NumberFormat = LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
    makeCount = this->fields.makeCount;
    v20 = (Il2CppObject *)NumberFormat;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
    v21 = System_Math__Max_63220196(makeCount, 1, 0LL);
    v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v21, 0LL);
    v23 = (Il2CppObject *)System_String__Format_62415592(v16, v20, v22, 0LL);
  }
  else
  {
    v24 = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
    v25 = System_Math__Max_63220196(v24, 1, 0LL);
    v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v25, 0LL);
  }
  v13 = System_String__Format(v12, v23, 0LL);
  exchangeDestinationItemCountLb = this->fields.exchangeDestinationItemCountLb;
  if ( !exchangeDestinationItemCountLb )
LABEL_15:
    sub_1BCAA3C(v13, v14);
  UILabel__set_text(exchangeDestinationItemCountLb, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftNumConfirmDialogComponent__SetTimeLabel(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  EventCraftNumConfirmDialogComponent_o *v4; // x19
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
  ItemEntity_o *supportTool; // x20
  UILabel_o *v30; // x20
  System_String_o *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x5
  EventTradeGoodsEntity_o *v34; // x22
  System_Collections_Generic_List_EventCraftPickupInfo__o *v35; // x23
  System_String_o *v36; // x21
  ItemEntity_o *v37; // x24
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x23
  int32_t tradeNum; // w21
  int64_t startedAt; // x22
  struct EventTradeInfo_o *v43; // x8
  ItemEntity_o *v44; // x21
  EventTradeGoodsEntity_o *v45; // x24
  System_Collections_Generic_List_EventCraftPickupInfo__o *v46; // x23
  int32_t makeCount; // w22
  char *v48; // x20
  __int64 v49; // x1
  int64_t Time; // x25
  __int64 v51; // x1
  const MethodInfo *v52; // x5
  int64_t v53; // x25
  int64_t CraftFinishTime; // x0
  __int64 v55; // x1
  UILabel_o *craftCompletionTimeLabel; // x21
  int64_t v57; // x22
  System_String_o *v58; // x23
  int64_t v59; // x0
  int64_t v60; // x0
  System_String_o *RestTimeInFormat; // x20
  System_String_o *v62; // x24
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  Il2CppObject *v65; // x0
  EventCraftNumConfirmDialogComponent_o *v66; // x1
  UILabel_o *v67; // x0
  int32_t v68; // w25
  __int64 v69; // x1
  int64_t v70; // x22
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  int64_t v75; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x20
  EventCraftNumConfirmDialogComponent___c_c *v77; // x0
  System_Func_T__TResult__o *_9__49_0; // x21
  Il2CppObject *v79; // x22
  struct EventCraftNumConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v87; // x0
  __int64 v88; // x1
  int64_t v89; // x21
  int64_t v90; // x0
  BalanceConfig_c *v91; // x8
  int64_t v92; // x20
  int64_t SECONDS_PER_DAY; // x21
  float v94; // s0
  float v95; // s3
  float v96; // s1
  float v97; // s2
  __int64 v98; // x1
  __int64 v99; // x21
  UILabel_o *supportToolLeftTimeLb; // x19
  System_String_o *v101; // x0

  v4 = this;
  if ( (byte_4B19FFD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v5, v6);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__49_0__, v17, v18);
    sub_1BCA7E0(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3968/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13531/*"TRADE_EVENT_ADD_TIME_LABEL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/, v25, v26);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13467/*"TIME_FORMAT_1"*/, v27, v28);
    byte_4B19FFD = 1;
  }
  if ( v4->fields.isReplenishment )
  {
    if ( v4->fields.isButtonOn )
      supportTool = v4->fields.supportTool;
    else
      supportTool = 0LL;
    eventTradeInfo = v4->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      tradeGoodsEntity = v4->fields.tradeGoodsEntity;
      craftPickupInfoList = v4->fields.craftPickupInfoList;
      tradeNum = eventTradeInfo->fields.tradeNum;
      startedAt = eventTradeInfo->fields.startedAt;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method);
      this = (EventCraftNumConfirmDialogComponent_o *)EventCraftTimeCalculation__GetCraftFinishTime(
                                                        tradeGoodsEntity,
                                                        craftPickupInfoList,
                                                        supportTool,
                                                        tradeNum,
                                                        startedAt,
                                                        v3);
      v43 = v4->fields.eventTradeInfo;
      if ( v43 )
      {
        if ( v4->fields.isButtonOn )
          v44 = v4->fields.supportTool;
        else
          v44 = 0LL;
        v45 = v4->fields.tradeGoodsEntity;
        v46 = v4->fields.craftPickupInfoList;
        makeCount = v4->fields.makeCount;
        v48 = (char *)this + v43->fields.startedAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
        Time = NetworkManager__getTime(0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v49);
        v53 = System_Math__Max_63220208((int64_t)v48, Time, 0LL);
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v51);
        CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(v45, v46, v44, makeCount, v53, v52);
        craftCompletionTimeLabel = v4->fields.craftCompletionTimeLabel;
        v57 = CraftFinishTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3968/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
        v59 = NetworkManager__getTime(0LL);
        v60 = System_Math__Max_63220208((int64_t)&v48[-v59], 0LL, 0LL);
        RestTimeInFormat = LocalizationManager__GetRestTimeInFormat(
                             v60 + v57,
                             0LL,
                             (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/,
                             0LL);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_13531/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
        v63 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                v57,
                                0LL,
                                (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/,
                                0LL);
        v64 = System_String__Format(v62, v63, 0LL);
        v65 = (Il2CppObject *)System_String__Concat_62401220(RestTimeInFormat, v64, 0LL);
        this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v58, v65, 0LL);
        if ( craftCompletionTimeLabel )
        {
          v66 = this;
          v67 = craftCompletionTimeLabel;
          goto LABEL_35;
        }
      }
    }
LABEL_69:
    sub_1BCAA3C(this, method);
  }
  v30 = v4->fields.craftCompletionTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3968/*"CRAFT_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  v34 = v4->fields.tradeGoodsEntity;
  v35 = v4->fields.craftPickupInfoList;
  v36 = v31;
  if ( v4->fields.isButtonOn )
    v37 = v4->fields.supportTool;
  else
    v37 = 0LL;
  v68 = v4->fields.makeCount;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v32);
  v70 = EventCraftTimeCalculation__GetCraftFinishTime(v34, v35, v37, v68, -1LL, v33);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
  v71 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v70, 0LL, (System_String_o *)StringLiteral_25181/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)System_String__Format(v36, v71, 0LL);
  if ( !v30 )
    goto LABEL_69;
  v66 = this;
  v67 = v30;
LABEL_35:
  UILabel__set_text(v67, (System_String_o *)v66, 0LL);
  v75 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.craftPickupInfoList, 0LL) )
  {
    v76 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.craftPickupInfoList;
    v77 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    if ( !EventCraftNumConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftNumConfirmDialogComponent___c_TypeInfo, v72);
      v77 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
    }
    _9__49_0 = (System_Func_T__TResult__o *)v77->static_fields->__9__49_0;
    if ( !_9__49_0 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77, v72);
        v77 = EventCraftNumConfirmDialogComponent___c_TypeInfo;
      }
      v79 = (Il2CppObject *)v77->static_fields->__9;
      _9__49_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                v72,
                                                v73,
                                                v74);
      System_Func_object__long____ctor(
        _9__49_0,
        v79,
        Method_EventCraftNumConfirmDialogComponent___c__SetTimeLabel_b__49_0__,
        0LL);
      static_fields = EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__49_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__49_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
        (int64_t)_9__49_0,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    v87 = System_Linq_Enumerable__Select_object__long_(
            v76,
            (System_Func_TSource__TResult__o *)_9__49_0,
            (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v75 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v87, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v72);
  v89 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v88);
  v90 = System_Math__Max_63220208(v75 - v89, 0LL, 0LL);
  v91 = BalanceConfig_TypeInfo;
  v92 = v90;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v91 = BalanceConfig_TypeInfo;
  }
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.supportToolMask;
  if ( !this )
    goto LABEL_69;
  SECONDS_PER_DAY = v91->static_fields->SECONDS_PER_DAY;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v92 > SECONDS_PER_DAY && (unsigned __int64)!v4->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.supportToolMaskLb;
  if ( !this )
    goto LABEL_69;
  this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  method = (const MethodInfo *)(v92 > SECONDS_PER_DAY && (unsigned __int64)!v4->fields.isButtonOn);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)method, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.useSupportToolBtnSp;
  v94 = 1.0;
  if ( v92 > SECONDS_PER_DAY )
    v94 = 0.5;
  if ( !this )
    goto LABEL_69;
  v95 = 1.0;
  v96 = v94;
  v97 = v94;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v94, 0LL);
  v99 = v4->fields.isButtonOn ? v4->fields.supportToolTime : 0LL;
  supportToolLeftTimeLb = v4->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftNumConfirmDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v99 + v92, 0LL, v101, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_69;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent__SliderValueChange(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *consumeItemList; // x8
  struct EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_array *exChangeOriginItemUi; // x10
  __int64 v11; // x9
  unsigned int max_length; // w11
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o **m_Items; // x10
  EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *v14; // x23
  struct UILabel_array *exchangeOriginCountLb; // x10
  signed int v16; // w10
  __int64 v17; // x27
  CommonConsumeEntity_o *v18; // x8
  int32_t num; // w21
  int32_t makeCount; // w20
  __int64 v21; // x1
  int32_t v22; // w20
  struct CommonConsumeEntity_array *v23; // x8
  Il2CppObject *v24; // x20
  int32_t HasNum; // w0
  struct UILabel_array *v26; // x8
  Il2CppObject *v27; // x21
  UILabel_o *v28; // x22
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4B1A005 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, v6, v7);
    byte_4B1A005 = 1;
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
  v11 = *(_QWORD *)&consumeItemList->max_length;
  max_length = exChangeOriginItemUi->max_length;
  if ( (_DWORD)v11 == 2 )
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
  v14 = *m_Items;
  if ( !*m_Items || (exchangeOriginCountLb = v14->fields.exchangeOriginCountLb) == 0LL )
LABEL_31:
    sub_1BCAA3C(itemSlider, method);
  if ( (signed int)exchangeOriginCountLb->max_length >= (int)v11 )
  {
    if ( (int)v11 >= 1 )
    {
      v16 = 0;
      while ( v16 < (unsigned int)v11 )
      {
        v17 = v16;
        v18 = consumeItemList->m_Items[v16];
        if ( !v18 )
          goto LABEL_31;
        num = v18->fields.num;
        makeCount = this->fields.makeCount;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
        v22 = System_Math__Max_63220196(makeCount, 1, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(v22 * num, 0LL);
        v23 = this->fields.consumeItemList;
        if ( !v23 )
          goto LABEL_31;
        if ( (unsigned int)v17 >= v23->max_length )
          break;
        v24 = (Il2CppObject *)itemSlider;
        itemSlider = (UISliderWithButton_o *)v23->m_Items[v17];
        if ( !itemSlider )
          goto LABEL_31;
        HasNum = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)itemSlider, 0LL);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
        v26 = v14->fields.exchangeOriginCountLb;
        if ( !v26 )
          goto LABEL_31;
        if ( (unsigned int)v17 >= v26->max_length )
          break;
        v27 = (Il2CppObject *)itemSlider;
        v28 = v26->m_Items[v17];
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        itemSlider = (UISliderWithButton_o *)System_String__Format_62415592(v29, v24, v27, 0LL);
        if ( !v28 )
          goto LABEL_31;
        UILabel__set_text(v28, (System_String_o *)itemSlider, 0LL);
        consumeItemList = this->fields.consumeItemList;
        if ( !consumeItemList )
          goto LABEL_31;
        LODWORD(v11) = consumeItemList->max_length;
        v16 = v17 + 1;
        if ( (int)v17 + 1 >= (int)v11 )
          goto LABEL_30;
      }
LABEL_32:
      sub_1BCAA44(itemSlider, method);
    }
LABEL_30:
    EventCraftNumConfirmDialogComponent__SetRewardCount(this, method);
    EventCraftNumConfirmDialogComponent__SetTimeLabel(this, v30);
  }
}


// attributes: thunk
void __fastcall EventCraftNumConfirmDialogComponent__Update(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent__UpdateDraw(this, method);
}


void __fastcall EventCraftNumConfirmDialogComponent__UpdateDraw(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventCraftNumConfirmDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x20
  int64_t startedAt; // x21
  const MethodInfo *v12; // x7
  struct EventTradeInfo_o *v13; // x8
  int32_t tradeNum; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *craftPickupInfoList; // x24
  EventCraftNumConfirmDialogComponent_o *v16; // x22
  ItemEntity_o *supportTool; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v18; // x20
  ItemEntity_o *v19; // x21
  EventTradeGoodsEntity_o *v20; // x22
  int32_t CraftMaxNum; // w0
  const MethodInfo *v22; // x2
  struct EventTradeInfo_o *v23; // x8
  int32_t v24; // w20
  __int64 v25; // x1
  int32_t ItemSliderMax; // w21
  int32_t v27; // w0
  const MethodInfo *v28; // x1
  int32_t max; // w9
  int32_t makeCount; // w8
  int32_t saveMakeCount; // w10
  float v32; // s8
  int32_t v33; // w8
  const MethodInfo *v34; // x1

  v4 = this;
  if ( (byte_4B19FFE & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    this = (EventCraftNumConfirmDialogComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B19FFE = 1;
  }
  if ( v4->fields.isReplenishment )
  {
    eventTradeInfo = v4->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_49;
    tradeGoodsEntity = v4->fields.tradeGoodsEntity;
    startedAt = eventTradeInfo->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    this = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
    v13 = v4->fields.eventTradeInfo;
    if ( !v13 )
      goto LABEL_49;
    tradeNum = v13->fields.tradeNum;
    craftPickupInfoList = v4->fields.craftPickupInfoList;
    v16 = this;
    if ( v4->fields.isButtonOn )
      supportTool = v4->fields.supportTool;
    else
      supportTool = 0LL;
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method);
    EventCraftTimeCalculation__GetCompleteNum_46368688(
      tradeGoodsEntity,
      startedAt,
      (int64_t)v16,
      tradeNum,
      0,
      craftPickupInfoList,
      supportTool,
      v12);
  }
  v18 = v4->fields.craftPickupInfoList;
  if ( v4->fields.isButtonOn )
    v19 = v4->fields.supportTool;
  else
    v19 = 0LL;
  v20 = v4->fields.tradeGoodsEntity;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method);
  CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v18, v19, v20, v3);
  v23 = v4->fields.eventTradeInfo;
  if ( v23 )
    LODWORD(v23) = v23->fields.tradeNum;
  v24 = CraftMaxNum - (_DWORD)v23;
  ItemSliderMax = EventCraftNumConfirmDialogComponent__GetItemSliderMax(v4, CraftMaxNum - (_DWORD)v23, v22);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25);
  v27 = System_Math__Min_63220524(v24, ItemSliderMax, 0LL);
  max = v4->fields.max;
  if ( max != v27 )
  {
    makeCount = v4->fields.makeCount;
    method = (const MethodInfo *)(unsigned int)v27;
    if ( v27 < makeCount )
    {
      v4->fields.saveMakeCount = makeCount;
      makeCount = v27;
      v4->fields.makeCount = v27;
    }
    if ( makeCount == max )
    {
      saveMakeCount = v4->fields.saveMakeCount;
      makeCount = max;
      if ( max < saveMakeCount )
      {
        makeCount = v4->fields.saveMakeCount;
        v4->fields.makeCount = saveMakeCount;
        v4->fields.saveMakeCount = 0;
      }
    }
    v32 = 0.0;
    v4->fields.max = v27;
    if ( v27 >= 2 )
      v32 = (float)(1.0 / (float)(v27 - 1)) * (float)(makeCount - 1);
    this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
    if ( this )
    {
      UISliderWithButton__init((UISliderWithButton_o *)this, (int32_t)method, 1, 1, 0LL);
      this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, v32, 0LL);
        v33 = v4->fields.max;
        if ( v33 == 1 )
        {
          this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
          if ( this )
          {
            this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
              if ( this )
              {
                UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0LL);
                goto LABEL_47;
              }
            }
          }
        }
        else if ( v33 )
        {
          this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
          if ( this )
          {
            this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
              if ( this )
              {
                UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0LL);
                goto LABEL_47;
              }
            }
          }
        }
        else
        {
          this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.itemSlider;
          if ( this )
          {
            this = (EventCraftNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = (EventCraftNumConfirmDialogComponent_o *)v4->fields.decideButton;
              if ( this )
              {
                ((void (__fastcall *)(EventCraftNumConfirmDialogComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
                  this,
                  0LL,
                  this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_47:
                EventCraftNumConfirmDialogComponent__SetExchangeBase(v4, v34);
                goto LABEL_48;
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(this, method);
  }
LABEL_48:
  EventCraftNumConfirmDialogComponent__SetTimeLabel(v4, v28);
}


void __fastcall EventCraftNumConfirmDialogComponent___Open_b__48_0(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventCraftNumConfirmDialogComponent__get_closeBtnObject(
        EventCraftNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A007 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A007 = 1;
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


void __fastcall EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo___ctor(
        EventCraftNumConfirmDialogComponent_ExChangeOriginUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftNumConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A009 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftNumConfirmDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A009 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftNumConfirmDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftNumConfirmDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftNumConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventCraftNumConfirmDialogComponent___c___ctor(
        EventCraftNumConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___OnClickSupportToolButton_b__54_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftNumConfirmDialogComponent___c___SetTimeLabel_b__49_0(
        EventCraftNumConfirmDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}