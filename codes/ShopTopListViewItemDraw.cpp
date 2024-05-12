void __fastcall ShopTopListViewItemDraw___ctor(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopTopListViewItemDraw__Awake(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438D00A & 1) == 0 )
  {
    sub_B775C4(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo);
    byte_438D00A = 1;
  }
  v5 = sub_B77694(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo);
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44___ctor(
    (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = manager;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)manager, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_331FF34[initMode - 1];
}


void __fastcall ShopTopListViewItemDraw__OnDestroy(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ShopNoticeTween_o *shopNoticeTween; // x0

  shopNoticeTween = this->fields.shopNoticeTween;
  if ( shopNoticeTween )
    ShopNoticeTween__RemoveTargets(
      shopNoticeTween,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      v2);
}


void __fastcall ShopTopListViewItemDraw__ResetShopListNotice(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ShopTopListViewItem_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v24; // x0
  const MethodInfo *v25; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v30; // x8
  bool v31; // w2
  const MethodInfo *v32; // x3
  struct ShopListNotice_o *v33; // x8
  const MethodInfo *v34; // x3
  struct ShopListNotice_o *v35; // x8
  const MethodInfo *v36; // x3
  struct ShopListNotice_o *v37; // x8
  const MethodInfo *v38; // x3
  struct ShopListNotice_o *v39; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_Object_o **v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *v48; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UIAtlas_o *klass; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_String_o *monitor; // x1
  UnityEngine_Object_o *v64; // x22
  System_Action_o *v65; // x22
  struct ShopListNotice_o *v66; // x8
  const MethodInfo *v67; // x3
  struct ShopListNotice_o *v68; // x8
  const MethodInfo *v69; // x3
  struct ShopListNotice_o *v70; // x8
  const MethodInfo *v71; // x5
  const MethodInfo *v72; // x4
  struct ShopListNotice_o *v73; // x8
  int64_t v74; // x3
  const MethodInfo *v75; // x4
  struct ShopListNotice_o *v76; // x8
  int64_t v77; // x3
  const MethodInfo *v78; // x4
  struct ShopListNotice_o *v79; // x8
  int64_t v80; // x3
  const MethodInfo *v81; // x3
  struct ShopListNotice_o *v82; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  System_String_o *v84; // x0
  const MethodInfo *v85; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  System_String_o *v90; // x0
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  struct ShopListNotice_o *v93; // x8
  ShopTopListViewItemDraw_o *v94; // x0
  const MethodInfo *v95; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w21
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v100; // x3
  int v101; // w23
  BalanceConfig_c *v102; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  System_String_o *v104; // x21
  __int64 v105; // x2
  Il2CppObject *v106; // x0
  int v107; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438D00C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__);
    sub_B775C4(&ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo);
    sub_B775C4(&StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_B775C4(&StringLiteral_12401/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/);
    sub_B775C4(&StringLiteral_12400/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/);
    byte_438D00C = 1;
  }
  v5 = sub_B77694(ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo);
  ShopTopListViewItemDraw___c__DisplayClass47_0___ctor((ShopTopListViewItemDraw___c__DisplayClass47_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_107;
  *(_QWORD *)(v5 + 16) = item;
  v14 = (ShopTopListViewItem_o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)item, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v14 )
    goto LABEL_107;
  shopListNotice = (*v14)->fields.shopListNotice;
  if ( shopListNotice )
  {
    switch ( shopListNotice->fields._LimitedType_k__BackingField )
    {
      case 6:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          this->fields.monthlyLimitedSprite,
          0LL,
          v22);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        exchangeServantRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xA:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          0LL,
          this->fields.exchangeServantLimitedSprite,
          v22);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        monthlyRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xC:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          0LL,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v22);
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        periodRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xE:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v22);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v24,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v25);
        break;
      default:
        break;
    }
  }
  if ( !*v14 )
    goto LABEL_107;
  v30 = (*v14)->fields.shopListNotice;
  v31 = v30 && v30->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v31,
    v21);
  if ( !*v14 )
    goto LABEL_107;
  v33 = (*v14)->fields.shopListNotice;
  if ( v33 )
    LODWORD(v33) = v33->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v33 == 1,
    v32);
  if ( !*v14 )
    goto LABEL_107;
  v35 = (*v14)->fields.shopListNotice;
  if ( v35 )
    LODWORD(v35) = v35->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v35 == 2,
    v34);
  if ( !*v14 )
    goto LABEL_107;
  v37 = (*v14)->fields.shopListNotice;
  if ( v37 )
    LODWORD(v37) = v37->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v37 == 3,
    v36);
  if ( !*v14 )
    goto LABEL_107;
  v39 = (*v14)->fields.shopListNotice;
  if ( v39 && v39->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_107;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gameObject,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v5 + 32) = Component_srcLineSprite;
    v41 = (UnityEngine_Object_o **)(v5 + 32);
    sub_B77560((BattleServantConfConponent_o *)(v5 + 32), Component_srcLineSprite, v42, v43, v44, v45, v46, v47);
    v48 = *(UnityEngine_Object_o **)(v5 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v41 )
          goto LABEL_107;
        klass = (struct UIAtlas_o *)(*v41)[19].klass;
        this->fields.exchangeServantDefaultAtlas = klass;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultAtlas,
          (System_Int32_array **)klass,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        if ( !*v41 )
          goto LABEL_107;
        monitor = (struct System_String_o *)(*v41)[19].monitor;
        this->fields.exchangeServantDefaultSpriteName = monitor;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultSpriteName,
          (System_Int32_array **)monitor,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
    }
    v64 = *v41;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v65 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v65,
        (Il2CppObject *)v5,
        Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v65, 1, 0LL);
    }
  }
  if ( !*v14 )
    goto LABEL_107;
  v66 = (*v14)->fields.shopListNotice;
  if ( v66 )
    LODWORD(v66) = v66->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v66 == 1,
    v38);
  if ( !*v14 )
    goto LABEL_107;
  v68 = (*v14)->fields.shopListNotice;
  if ( v68 )
    LODWORD(v68) = v68->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v68 == 2,
    v67);
  if ( !*v14 )
    goto LABEL_107;
  v70 = (*v14)->fields.shopListNotice;
  if ( v70 )
    LODWORD(v70) = v70->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v70 == 3,
    v69);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v14,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v71);
  if ( !*v14 )
    goto LABEL_107;
  v73 = (*v14)->fields.shopListNotice;
  v74 = v73 ? v73->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v74,
    v72);
  if ( !*v14 )
    goto LABEL_107;
  v76 = (*v14)->fields.shopListNotice;
  v77 = v76 ? v76->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v77,
    v75);
  if ( !*v14 )
    goto LABEL_107;
  v79 = (*v14)->fields.shopListNotice;
  v80 = v79 ? v79->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v80,
    v78);
  if ( !*v14 )
    goto LABEL_107;
  v82 = (*v14)->fields.shopListNotice;
  if ( v82 )
    LOBYTE(v82) = v82->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v82 != 1,
    v81);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v84, periodRemainTimeLabel, v84, v85);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v87, monthlyRemainTimeLabel, v87, v88);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v90, exchangeServantRemainTimeLabel, v90, v91);
  if ( !*v14 )
    goto LABEL_107;
  v93 = (*v14)->fields.shopListNotice;
  if ( v93 )
    LOBYTE(v93) = v93->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    (unsigned __int8)v93 != 1,
    v92);
  ShopTopListViewItemDraw__SetObjectActive(v94, this->fields.exchangeStoneFragmentsRoot, 0, v95);
  if ( !*v14 )
    goto LABEL_107;
  info = (*v14)->fields.info;
  if ( !info )
    goto LABEL_107;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_107;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, v7);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_107;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v100);
  v101 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  v102 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v102 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  if ( v101 > v102->static_fields->StoneFragmentExchangeNoticeDispMax )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_107;
    goto LABEL_102;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12400/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
  v107 = v101;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v105);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v104, v106, 0LL);
  if ( !exchangeStoneFragmentsLabel )
LABEL_107:
    sub_B7769C(gameObject, v7);
LABEL_102:
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject )
    goto LABEL_107;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !gameObject )
    goto LABEL_107;
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0LL);
}


void __fastcall ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_438D00D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D00D = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      (unsigned int)state,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v2; // x19
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v4; // x20
  UILabel_o *v5; // x21
  System_String_o *v6; // x22
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v10; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v12; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v14; // x4
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UICommonButton_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v19; // x20
  unsigned __int128 v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_438D00B & 1) == 0 )
  {
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_10947/*"PreLabel"*/);
    sub_B775C4(&StringLiteral_14679/*"TimeLabel"*/);
    sub_B775C4(&StringLiteral_15425/*"ValueLabel"*/);
    sub_B775C4(&StringLiteral_3252/*"COIN_ROOM_CLOSED_MESSAGE"*/);
    sub_B775C4(&StringLiteral_7761/*"InfoLabel"*/);
    sub_B775C4(&StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_B775C4(&StringLiteral_364/*"#6B6B6B"*/);
    sub_B775C4(&StringLiteral_10838/*"PeriodTimeRoot"*/);
    sub_B775C4(&StringLiteral_3250/*"COIN_ROOM_BANNER_INFO"*/);
    this = (ShopTopListViewItemDraw_o *)sub_B775C4(&StringLiteral_10948/*"PreLabelRoot"*/);
    byte_438D00B = 1;
  }
  v20 = 0uLL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_33;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_364/*"#6B6B6B"*/,
                                          (UnityEngine_Color_o *)&v20,
                                          0LL);
    baseButton = v2->fields.baseButton;
    if ( baseButton )
    {
      baseButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v20;
      this = (ShopTopListViewItemDraw_o *)v2->fields.baseButton;
      if ( this )
      {
        ((void (__fastcall *)(ShopTopListViewItemDraw_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          3LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        GameObject = GameObjectExtensions__FindGameObject(
                       v2->fields.coinRoomObject,
                       (System_String_o *)StringLiteral_10948/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10947/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v19 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3252/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v19 )
            {
              UILabel__set_text(v19, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_33;
  }
  v4 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10838/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_7761/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v4 )
    goto LABEL_33;
  v5 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v4, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3250/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_33;
  v6 = (System_String_o *)this;
  if ( !System_String__Equals_44889276((System_String_o *)this, (System_String_o *)StringLiteral_3250/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v21 = CoinRoomUtility__MonthRemainingNum(0LL);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v7);
    this = (ShopTopListViewItemDraw_o *)System_String__Format(v6, v8, 0LL);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)this, 0LL);
      goto LABEL_17;
    }
LABEL_33:
    sub_B7769C(this, method);
  }
LABEL_17:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_14679/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15425/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  v10 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v12 = (UILabel_o *)v10;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v12, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v14);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v15, Component_srcLineSprite, v15, v16);
}


void __fastcall ShopTopListViewItemDraw__SetInput(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w1

  if ( item )
  {
    if ( item->fields._IsUse_k__BackingField )
      v3 = 0;
    else
      v3 = 3;
    ShopTopListViewItemDraw__SetBaseButtonState(this, v3, method);
  }
}


void __fastcall ShopTopListViewItemDraw__SetItem(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        int32_t mode,
        ShopTopListViewManager_o *manager,
        const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v8; // x19
  UISprite_o *IsNullOrEmpty; // x0
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v12; // x8
  int32_t State_k__BackingField; // w9
  char v14; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v17; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v20; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v25; // x2
  UILabel_o *v26; // x22
  struct ShopTopItemInfo_o *v27; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v29; // x3
  struct ShopTopItemInfo_o *v30; // x8
  UnityEngine_GameObject_o *startUpSummonSprite; // x1
  ShopTopListViewItemDraw_o *v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *startUpSummonLimitedBase; // x1
  bool v35; // w2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ShopTopItemInfo_o *v42; // x8
  UnityEngine_Object_o *coinRoomObject; // x21
  const MethodInfo *v44; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x1
  UnityEngine_Object_o *v46; // x20
  const MethodInfo *v47; // x1
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v49; // x23
  System_String_o *v50; // x24

  v8 = this;
  if ( (byte_438D009 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_19669/*"icon_balloon_blue"*/);
    sub_B775C4(&StringLiteral_12343/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_B775C4(&StringLiteral_20004/*"img_shop_0"*/);
    this = (ShopTopListViewItemDraw_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D009 = 1;
  }
  if ( !item )
    return;
  ShopTopListViewItemDraw__SetSpriteActive(this, v8->fields.rangeSprite, mode == 0, (const MethodInfo *)manager);
  if ( !mode )
    return;
  info = item->fields.info;
  if ( !info )
    goto LABEL_67;
  IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(info->fields._ImageName_k__BackingField, 0LL);
  v12 = item->fields.info;
  if ( !v12 )
    goto LABEL_67;
  State_k__BackingField = v12->fields._State_k__BackingField;
  v14 = (char)IsNullOrEmpty;
  switch ( State_k__BackingField )
  {
    case 15:
    case 18:
    case 19:
    case 20:
      baseImageSprite = v8->fields.baseImageSprite;
      ImageName_k__BackingField = v12->fields._ImageName_k__BackingField;
      goto LABEL_9;
    case 17:
      v49 = v8->fields.baseImageSprite;
      v50 = v12->fields._ImageName_k__BackingField;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)AtlasManager__SetEventSprite(v49, v50, 0LL);
      goto LABEL_13;
    default:
      baseImageSprite = v8->fields.baseImageSprite;
      p_ImageName_k__BackingField = &v12->fields._ImageName_k__BackingField;
      if ( State_k__BackingField == 21 )
      {
        ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (UISprite_o *)AtlasManager__SetShopBanner_24481352(
                                        baseImageSprite,
                                        ImageName_k__BackingField,
                                        0LL);
      }
      else
      {
        if ( !baseImageSprite )
          goto LABEL_67;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20004/*"img_shop_0"*/;
        UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
        IsNullOrEmpty = v8->fields.baseImageSprite;
        if ( !IsNullOrEmpty )
          goto LABEL_67;
        UISprite__set_atlas(IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
      }
LABEL_13:
      infoTextLabel = v8->fields.infoTextLabel;
      if ( (v14 & 1) != 0 )
      {
        IsNullOrEmpty = (UISprite_o *)ShopTopListViewItem__get_InfoText(item, v17);
        Empty = (System_String_o *)IsNullOrEmpty;
        if ( !infoTextLabel )
          goto LABEL_67;
      }
      else
      {
        Empty = (System_String_o *)StringLiteral_1/*""*/;
        if ( !infoTextLabel )
          goto LABEL_67;
      }
      UILabel__set_text(infoTextLabel, Empty, 0LL);
      periodBase = v8->fields.periodBase;
      IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v20);
      ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v22);
      ShopTopListViewItemDraw__SetInput(v8, item, v23);
      textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v26 = v8->fields.textOnMask;
        if ( item->fields._IsUse_k__BackingField )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !v26 )
            goto LABEL_67;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          IsNullOrEmpty = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12343/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
          Empty = (System_String_o *)IsNullOrEmpty;
          if ( !v26 )
            goto LABEL_67;
        }
        UILabel__set_text(v26, Empty, 0LL);
      }
      v27 = item->fields.info;
      if ( !v27 )
        goto LABEL_67;
      if ( v27->fields._State_k__BackingField == 4 )
      {
        exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_24481352(exchangeStoneFragmentsSprite, (System_String_o *)StringLiteral_19669/*"icon_balloon_blue"*/, 0LL);
        IsNullOrEmpty = v8->fields.exchangeStoneFragmentsSprite;
        if ( IsNullOrEmpty )
        {
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method)(
            IsNullOrEmpty,
            IsNullOrEmpty->klass->vtable._34_get_minWidth.methodPtr);
          AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0LL);
          goto LABEL_36;
        }
LABEL_67:
        sub_B7769C(IsNullOrEmpty, Empty);
      }
LABEL_36:
      ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v25);
      v30 = item->fields.info;
      if ( !v30 )
        goto LABEL_67;
      startUpSummonSprite = v8->fields.startUpSummonSprite;
      if ( v30->fields._State_k__BackingField == 16 )
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          1,
          v29);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v35 = 1;
      }
      else
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          0,
          v29);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v35 = 0;
      }
      ShopTopListViewItemDraw__SetObjectActive(v32, startUpSummonLimitedBase, v35, v33);
      v42 = item->fields.info;
      if ( !v42 )
        goto LABEL_67;
      if ( v42->fields._State_k__BackingField == 17 )
      {
        v8->fields.coinRoomListItem = item;
        sub_B77560(
          (BattleServantConfConponent_o *)&v8->fields.coinRoomListItem,
          (System_Int32_array **)item,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
        {
          UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
          CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v44);
          UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v8, CoinRoomAsset, 0LL);
        }
        else
        {
          IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
          if ( !IsNullOrEmpty )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(v8, v47);
        }
      }
      else
      {
        v46 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
        {
          IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
          if ( !IsNullOrEmpty )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
        }
      }
      return;
  }
}


void __fastcall ShopTopListViewItemDraw__SetLabelActive(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_438D010 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D010 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B7769C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetLabelText(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438D011 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D011 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B7769C(v6, v7);
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetObjectActive(
        ShopTopListViewItemDraw_o *this,
        UnityEngine_GameObject_o *go,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438D00E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D00E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_B7769C(v6, v7);
    UnityEngine_GameObject__SetActive(go, isActive, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        ShopNoticeRemainTimeLabel_o *shopNoticeRemainTimeLabel,
        int64_t timeLimit,
        const MethodInfo *method)
{
  System_String_o *RestTime5; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_438D013 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_438D013 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1LL, 0LL);
    if ( !label
      || (UILabel__set_text(label, RestTime5, 0LL), !shopNoticeRemainTimeLabel)
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_B77694(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, v11),
          !shopNoticeRemainTimeLabel) )
    {
      sub_B7769C(RestTime5, v10);
    }
    shopNoticeRemainTimeLabel->fields.timeLimit = timeLimit;
    ShopNoticeRemainTimeLabel__Start(shopNoticeRemainTimeLabel, v10);
  }
}


void __fastcall ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        UnityEngine_GameObject_o *root,
        System_Collections_Generic_List_GameObject__o *objects,
        System_Collections_Generic_List_GameObject__o *labels,
        const MethodInfo *method)
{
  ShopNoticeTween_o *v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  const MethodInfo *v20; // x4
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8
  const MethodInfo *v23; // x2

  if ( (byte_438D014 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D014 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0LL, 0LL);
  if ( labels && objects && ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_19;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
      (System_Int32_array **)ShopNoticeTween_k__BackingField,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    shopListNotice = item->fields.shopListNotice;
    if ( shopListNotice )
    {
      LimitedType_k__BackingField = shopListNotice->fields._LimitedType_k__BackingField;
      if ( LimitedType_k__BackingField <= 0xE && ((1 << LimitedType_k__BackingField) & 0x5440) != 0 )
      {
        v11 = item->fields._ShopNoticeTween_k__BackingField;
        if ( v11 )
        {
          ShopNoticeTween__AddTargets(
            v11,
            this->fields.limitedNoticeRoot,
            this->fields.switchingObjects,
            this->fields.switchingLabels,
            v20);
          v11 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v11 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v11, 0, v23);
            return;
          }
        }
LABEL_19:
        sub_B7769C(v11, v12);
      }
    }
    v11 = item->fields._ShopNoticeTween_k__BackingField;
    if ( !v11 )
      goto LABEL_19;
    ShopNoticeTween__RemoveTargets(
      v11,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      v20);
  }
}


void __fastcall ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_438D00F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D00F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B7769C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetSwitchingObjects(
        ShopTopListViewItemDraw_o *this,
        System_Collections_Generic_List_GameObject__o **objects,
        UnityEngine_GameObject_o *period,
        UnityEngine_GameObject_o *monthly,
        UnityEngine_GameObject_o *exchangeServant,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  System_Collections_Generic_List_GameObject__o *v18; // x0

  if ( (byte_438D012 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D012 = 1;
  }
  if ( !*objects )
  {
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v10;
    sub_B77560((BattleServantConfConponent_o *)objects, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v18 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)period,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v18 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)monthly,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v18 = *objects;
      if ( *objects )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)exchangeServant,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
        return;
      }
LABEL_23:
      sub_B7769C(v18, v17);
    }
  }
}


void __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44___ctor(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44__MoveNext(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *v8; // x20
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Object; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x20

  v8 = this;
  if ( (byte_4388E8C & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)sub_B775C4(&StringLiteral_4247/*"CoinRoomBanner"*/);
    byte_4388E8C = 1;
  }
  if ( v8->fields.__1__state >= 2u )
    return 0;
  manager = v8->fields.manager;
  _4__this = v8->fields.__4__this;
  v8->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_B7769C(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4247/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
    if ( _4__this )
    {
      v12 = (UnityEngine_GameObject_o *)this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = (System_Int32_array **)BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)_4__this,
                                          v12,
                                          transform,
                                          0LL,
                                          0LL);
        _4__this->fields.coinRoomObject = (struct UnityEngine_GameObject_o *)Object;
        sub_B77560(
          (BattleServantConfConponent_o *)&_4__this->fields.coinRoomObject,
          Object,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, 0LL);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44__System_Collections_IEnumerator_Reset(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44__System_Collections_IEnumerator_get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44__System_IDisposable_Dispose(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopTopListViewItemDraw___c__DisplayClass47_0___ctor(
        ShopTopListViewItemDraw___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopTopListViewItemDraw___c__DisplayClass47_0___ResetShopListNotice_b__0(
        ShopTopListViewItemDraw___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  ShopTopListViewItem_o *item; // x0
  UISprite_o *exchangeServantSprite; // x20
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v9; // x8
  int32_t ExchangeServantEventId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4388E8B & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_19756/*"icon_servant_exchange_available_{0}"*/);
    byte_4388E8B = 1;
  }
  item = this->fields.item;
  if ( !item )
    goto LABEL_14;
  exchangeServantSprite = this->fields.exchangeServantSprite;
  ExchangeServantEventId = ShopTopListViewItem__get_ExchangeServantEventId(item, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId, v5);
  v7 = System_String__Format((System_String_o *)StringLiteral_19756/*"icon_servant_exchange_available_{0}"*/, v6, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  item = (ShopTopListViewItem_o *)AtlasManager__SetEventUI(exchangeServantSprite, v7, 0LL);
  if ( ((unsigned __int8)item & 1) == 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
      if ( item )
      {
        UISprite__set_atlas((UISprite_o *)item, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
          if ( item )
          {
            UISprite__set_spriteName((UISprite_o *)item, v9->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B7769C(item, method);
  }
}