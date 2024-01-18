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

  if ( (byte_4189219 & 1) == 0 )
  {
    sub_B2C35C(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo, manager);
    byte_4189219 = 1;
  }
  v5 = sub_B2C42C(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo);
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44___ctor(
    (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = manager;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)manager, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_31A39F4[initMode - 1];
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ShopTopListViewItem_o **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v39; // x0
  const MethodInfo *v40; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v45; // x8
  bool v46; // w2
  const MethodInfo *v47; // x3
  struct ShopListNotice_o *v48; // x8
  const MethodInfo *v49; // x3
  struct ShopListNotice_o *v50; // x8
  const MethodInfo *v51; // x3
  struct ShopListNotice_o *v52; // x8
  const MethodInfo *v53; // x3
  struct ShopListNotice_o *v54; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_Object_o **v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Object_o *v63; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct UIAtlas_o *klass; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_String_o *monitor; // x1
  UnityEngine_Object_o *v79; // x22
  System_Action_o *v80; // x22
  struct ShopListNotice_o *v81; // x8
  const MethodInfo *v82; // x3
  struct ShopListNotice_o *v83; // x8
  const MethodInfo *v84; // x3
  struct ShopListNotice_o *v85; // x8
  const MethodInfo *v86; // x5
  const MethodInfo *v87; // x4
  struct ShopListNotice_o *v88; // x8
  int64_t v89; // x3
  const MethodInfo *v90; // x4
  struct ShopListNotice_o *v91; // x8
  int64_t v92; // x3
  const MethodInfo *v93; // x4
  struct ShopListNotice_o *v94; // x8
  int64_t v95; // x3
  const MethodInfo *v96; // x3
  struct ShopListNotice_o *v97; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  System_String_o *v99; // x0
  const MethodInfo *v100; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  System_String_o *v102; // x0
  const MethodInfo *v103; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  System_String_o *v105; // x0
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x3
  struct ShopListNotice_o *v108; // x8
  ShopTopListViewItemDraw_o *v109; // x0
  const MethodInfo *v110; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w21
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v115; // x3
  int v116; // w23
  BalanceConfig_c *v117; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  System_String_o *v119; // x21
  Il2CppObject *v120; // x0
  int v121; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418921B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&BalanceConfig_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__, v15);
    sub_B2C35C(&ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, v17);
    sub_B2C35C(&StringLiteral_12169/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v18);
    sub_B2C35C(&StringLiteral_12168/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v19);
    byte_418921B = 1;
  }
  v20 = sub_B2C42C(ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo);
  ShopTopListViewItemDraw___c__DisplayClass47_0___ctor((ShopTopListViewItemDraw___c__DisplayClass47_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_107;
  *(_QWORD *)(v20 + 16) = item;
  v29 = (ShopTopListViewItem_o **)(v20 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)item, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v29 )
    goto LABEL_107;
  shopListNotice = (*v29)->fields.shopListNotice;
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
          v37);
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
          v37);
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
          v37);
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
          v37);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v39,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v40);
        break;
      default:
        break;
    }
  }
  if ( !*v29 )
    goto LABEL_107;
  v45 = (*v29)->fields.shopListNotice;
  v46 = v45 && v45->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v46,
    v36);
  if ( !*v29 )
    goto LABEL_107;
  v48 = (*v29)->fields.shopListNotice;
  if ( v48 )
    LODWORD(v48) = v48->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v48 == 1,
    v47);
  if ( !*v29 )
    goto LABEL_107;
  v50 = (*v29)->fields.shopListNotice;
  if ( v50 )
    LODWORD(v50) = v50->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v50 == 2,
    v49);
  if ( !*v29 )
    goto LABEL_107;
  v52 = (*v29)->fields.shopListNotice;
  if ( v52 )
    LODWORD(v52) = v52->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v52 == 3,
    v51);
  if ( !*v29 )
    goto LABEL_107;
  v54 = (*v29)->fields.shopListNotice;
  if ( v54 && v54->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_107;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gameObject,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v20 + 32) = Component_srcLineSprite;
    v56 = (UnityEngine_Object_o **)(v20 + 32);
    sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), Component_srcLineSprite, v57, v58, v59, v60, v61, v62);
    v63 = *(UnityEngine_Object_o **)(v20 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
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
        if ( !*v56 )
          goto LABEL_107;
        klass = (struct UIAtlas_o *)(*v56)[19].klass;
        this->fields.exchangeServantDefaultAtlas = klass;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultAtlas,
          (System_Int32_array **)klass,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
        if ( !*v56 )
          goto LABEL_107;
        monitor = (struct System_String_o *)(*v56)[19].monitor;
        this->fields.exchangeServantDefaultSpriteName = monitor;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultSpriteName,
          (System_Int32_array **)monitor,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
      }
    }
    v79 = *v56;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v80 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v80,
        (Il2CppObject *)v20,
        Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v80, 1, 0LL);
    }
  }
  if ( !*v29 )
    goto LABEL_107;
  v81 = (*v29)->fields.shopListNotice;
  if ( v81 )
    LODWORD(v81) = v81->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v81 == 1,
    v53);
  if ( !*v29 )
    goto LABEL_107;
  v83 = (*v29)->fields.shopListNotice;
  if ( v83 )
    LODWORD(v83) = v83->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v83 == 2,
    v82);
  if ( !*v29 )
    goto LABEL_107;
  v85 = (*v29)->fields.shopListNotice;
  if ( v85 )
    LODWORD(v85) = v85->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v85 == 3,
    v84);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v29,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v86);
  if ( !*v29 )
    goto LABEL_107;
  v88 = (*v29)->fields.shopListNotice;
  v89 = v88 ? v88->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v89,
    v87);
  if ( !*v29 )
    goto LABEL_107;
  v91 = (*v29)->fields.shopListNotice;
  v92 = v91 ? v91->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v92,
    v90);
  if ( !*v29 )
    goto LABEL_107;
  v94 = (*v29)->fields.shopListNotice;
  v95 = v94 ? v94->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v95,
    v93);
  if ( !*v29 )
    goto LABEL_107;
  v97 = (*v29)->fields.shopListNotice;
  if ( v97 )
    LOBYTE(v97) = v97->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v97 != 1,
    v96);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v99, periodRemainTimeLabel, v99, v100);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v102, monthlyRemainTimeLabel, v102, v103);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v105, exchangeServantRemainTimeLabel, v105, v106);
  if ( !*v29 )
    goto LABEL_107;
  v108 = (*v29)->fields.shopListNotice;
  if ( v108 )
    LOBYTE(v108) = v108->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    (unsigned __int8)v108 != 1,
    v107);
  ShopTopListViewItemDraw__SetObjectActive(v109, this->fields.exchangeStoneFragmentsRoot, 0, v110);
  if ( !*v29 )
    goto LABEL_107;
  info = (*v29)->fields.info;
  if ( !info )
    goto LABEL_107;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_107;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, v22);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_107;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v115);
  v116 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  v117 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v117 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  if ( v116 > v117->static_fields->StoneFragmentExchangeNoticeDispMax )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12169/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_107;
    goto LABEL_102;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
  v121 = v116;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v119, v120, 0LL);
  if ( !exchangeStoneFragmentsLabel )
LABEL_107:
    sub_B2C434(gameObject, v22);
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
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !gameObject )
    goto LABEL_107;
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_418921C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
    byte_418921C = 1;
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
      sub_B2C434(0LL, v6);
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
  __int64 v3; // x1
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
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v17; // x20
  UILabel_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v22; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v24; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v26; // x4
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  struct UICommonButton_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v31; // x20
  unsigned __int128 v32; // [xsp+0h] [xbp-50h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_418921A & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10738/*"PreLabel"*/, v6);
    sub_B2C35C(&StringLiteral_14428/*"TimeLabel"*/, v7);
    sub_B2C35C(&StringLiteral_15166/*"ValueLabel"*/, v8);
    sub_B2C35C(&StringLiteral_3127/*"COIN_ROOM_CLOSED_MESSAGE"*/, v9);
    sub_B2C35C(&StringLiteral_7606/*"InfoLabel"*/, v10);
    sub_B2C35C(&StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, v11);
    sub_B2C35C(&StringLiteral_354/*"#6B6B6B"*/, v12);
    sub_B2C35C(&StringLiteral_10638/*"PeriodTimeRoot"*/, v13);
    sub_B2C35C(&StringLiteral_3125/*"COIN_ROOM_BANNER_INFO"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_B2C35C(&StringLiteral_10739/*"PreLabelRoot"*/, v15);
    byte_418921A = 1;
  }
  v32 = 0uLL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_33;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_354/*"#6B6B6B"*/,
                                          (UnityEngine_Color_o *)&v32,
                                          0LL);
    baseButton = v2->fields.baseButton;
    if ( baseButton )
    {
      baseButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v32;
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
                       (System_String_o *)StringLiteral_10739/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10738/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v31 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3127/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v31 )
            {
              UILabel__set_text(v31, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_33;
  }
  v17 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10638/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_7606/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v17 )
    goto LABEL_33;
  v18 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3125/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_33;
  v19 = (System_String_o *)this;
  if ( !System_String__Equals_44292872((System_String_o *)this, (System_String_o *)StringLiteral_3125/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v33 = CoinRoomUtility__MonthRemainingNum(0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    this = (ShopTopListViewItemDraw_o *)System_String__Format(v19, v20, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)this, 0LL);
      goto LABEL_17;
    }
LABEL_33:
    sub_B2C434(this, method);
  }
LABEL_17:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_14428/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_15166/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  v22 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v24 = (UILabel_o *)v22;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v24, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v26);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v27, Component_srcLineSprite, v27, v28);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UISprite_o *IsNullOrEmpty; // x0
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v19; // x8
  int32_t State_k__BackingField; // w9
  char v21; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v24; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v27; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x22
  struct ShopTopItemInfo_o *v34; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v36; // x3
  struct ShopTopItemInfo_o *v37; // x8
  UnityEngine_GameObject_o *startUpSummonSprite; // x1
  ShopTopListViewItemDraw_o *v39; // x0
  const MethodInfo *v40; // x3
  UnityEngine_GameObject_o *startUpSummonLimitedBase; // x1
  bool v42; // w2
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ShopTopItemInfo_o *v49; // x8
  UnityEngine_Object_o *coinRoomObject; // x21
  const MethodInfo *v51; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x1
  UnityEngine_Object_o *v53; // x20
  const MethodInfo *v54; // x1
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v56; // x23
  System_String_o *v57; // x24

  v8 = this;
  if ( (byte_4189218 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&string_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_19277/*"icon_balloon_blue"*/, v12);
    sub_B2C35C(&StringLiteral_12111/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v13);
    sub_B2C35C(&StringLiteral_19606/*"img_shop_0"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4189218 = 1;
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
  v19 = item->fields.info;
  if ( !v19 )
    goto LABEL_67;
  State_k__BackingField = v19->fields._State_k__BackingField;
  v21 = (char)IsNullOrEmpty;
  switch ( State_k__BackingField )
  {
    case 15:
    case 18:
    case 19:
    case 20:
      baseImageSprite = v8->fields.baseImageSprite;
      ImageName_k__BackingField = v19->fields._ImageName_k__BackingField;
      goto LABEL_9;
    case 17:
      v56 = v8->fields.baseImageSprite;
      v57 = v19->fields._ImageName_k__BackingField;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)AtlasManager__SetEventSprite(v56, v57, 0LL);
      goto LABEL_13;
    default:
      baseImageSprite = v8->fields.baseImageSprite;
      p_ImageName_k__BackingField = &v19->fields._ImageName_k__BackingField;
      if ( State_k__BackingField == 21 )
      {
        ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (UISprite_o *)AtlasManager__SetShopBanner_28452940(
                                        baseImageSprite,
                                        ImageName_k__BackingField,
                                        0LL);
      }
      else
      {
        if ( !baseImageSprite )
          goto LABEL_67;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19606/*"img_shop_0"*/;
        UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
        IsNullOrEmpty = v8->fields.baseImageSprite;
        if ( !IsNullOrEmpty )
          goto LABEL_67;
        UISprite__set_atlas(IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
      }
LABEL_13:
      infoTextLabel = v8->fields.infoTextLabel;
      if ( (v21 & 1) != 0 )
      {
        IsNullOrEmpty = (UISprite_o *)ShopTopListViewItem__get_InfoText(item, v24);
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
      IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v27);
      ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v29);
      ShopTopListViewItemDraw__SetInput(v8, item, v30);
      textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v33 = v8->fields.textOnMask;
        if ( item->fields._IsUse_k__BackingField )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !v33 )
            goto LABEL_67;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          IsNullOrEmpty = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12111/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
          Empty = (System_String_o *)IsNullOrEmpty;
          if ( !v33 )
            goto LABEL_67;
        }
        UILabel__set_text(v33, Empty, 0LL);
      }
      v34 = item->fields.info;
      if ( !v34 )
        goto LABEL_67;
      if ( v34->fields._State_k__BackingField == 4 )
      {
        exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_28452940(exchangeStoneFragmentsSprite, (System_String_o *)StringLiteral_19277/*"icon_balloon_blue"*/, 0LL);
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
        sub_B2C434(IsNullOrEmpty, Empty);
      }
LABEL_36:
      ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v32);
      v37 = item->fields.info;
      if ( !v37 )
        goto LABEL_67;
      startUpSummonSprite = v8->fields.startUpSummonSprite;
      if ( v37->fields._State_k__BackingField == 16 )
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          1,
          v36);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v42 = 1;
      }
      else
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          0,
          v36);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v42 = 0;
      }
      ShopTopListViewItemDraw__SetObjectActive(v39, startUpSummonLimitedBase, v42, v40);
      v49 = item->fields.info;
      if ( !v49 )
        goto LABEL_67;
      if ( v49->fields._State_k__BackingField == 17 )
      {
        v8->fields.coinRoomListItem = item;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v8->fields.coinRoomListItem,
          (System_Int32_array **)item,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
        {
          UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
          CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v51);
          UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v8, CoinRoomAsset, 0LL);
        }
        else
        {
          IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
          if ( !IsNullOrEmpty )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(v8, v54);
        }
      }
      else
      {
        v53 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
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

  if ( (byte_418921F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418921F = 1;
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
      sub_B2C434(gameObject, v7);
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

  if ( (byte_4189220 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_4189220 = 1;
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
      sub_B2C434(v6, v7);
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

  if ( (byte_418921D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, go);
    byte_418921D = 1;
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
      sub_B2C434(v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *RestTime5; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4189222 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, label);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&ShopNoticeRemainTimeLabel_TypeInfo, v10);
    byte_4189222 = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_B2C42C(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, v13),
          !shopNoticeRemainTimeLabel) )
    {
      sub_B2C434(RestTime5, v12);
    }
    shopNoticeRemainTimeLabel->fields.timeLimit = timeLimit;
    ShopNoticeRemainTimeLabel__Start(shopNoticeRemainTimeLabel, v12);
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

  if ( (byte_4189223 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4189223 = 1;
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
    sub_B2C2F8(
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
        sub_B2C434(v11, v12);
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

  if ( (byte_418921E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418921E = 1;
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
      sub_B2C434(gameObject, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  System_Collections_Generic_List_GameObject__o *v21; // x0

  if ( (byte_4189221 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, objects);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4189221 = 1;
  }
  if ( !*objects )
  {
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v13;
    sub_B2C2F8((BattleServantConfConponent_o *)objects, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v21 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)period,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v21 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)monthly,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v21 = *objects;
      if ( *objects )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)exchangeServant,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        return;
      }
LABEL_23:
      sub_B2C434(v21, v20);
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
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *v2; // x20
  __int64 v3; // x1
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_418545D & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)sub_B2C35C(&StringLiteral_4118/*"CoinRoomBanner"*/, v3);
    byte_418545D = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  manager = v2->fields.manager;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_B2C434(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4118/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( _4__this )
    {
      v7 = (UnityEngine_GameObject_o *)this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)_4__this, v7, transform, 0LL, 0LL);
        _4__this->fields.coinRoomObject = Object;
        sub_B2C2F8(&_4__this->fields.coinRoomObject, Object);
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
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  ShopTopListViewItem_o *item; // x0
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v10; // x8
  int32_t ExchangeServantEventId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418545C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_19363/*"icon_servant_exchange_available_{0}"*/, v4);
    byte_418545C = 1;
  }
  item = this->fields.item;
  if ( !item )
    goto LABEL_14;
  exchangeServantSprite = this->fields.exchangeServantSprite;
  ExchangeServantEventId = ShopTopListViewItem__get_ExchangeServantEventId(item, 0LL);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId);
  v8 = System_String__Format((System_String_o *)StringLiteral_19363/*"icon_servant_exchange_available_{0}"*/, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  item = (ShopTopListViewItem_o *)AtlasManager__SetEventUI(exchangeServantSprite, v8, 0LL);
  if ( ((unsigned __int8)item & 1) == 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
      if ( item )
      {
        UISprite__set_atlas((UISprite_o *)item, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v10 = this->fields.__4__this;
        if ( v10 )
        {
          item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
          if ( item )
          {
            UISprite__set_spriteName((UISprite_o *)item, v10->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B2C434(item, method);
  }
}