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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FB7DD & 1) == 0 )
  {
    sub_B16FFC(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo, manager);
    byte_40FB7DD = 1;
  }
  v7 = sub_B170CC(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo, manager, method, v3, v4);
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44___ctor(
    (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = manager;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)manager, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_3137624[initMode - 1];
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x21
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
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL8 activeSelf; // x0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v41; // x0
  const MethodInfo *v42; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v47; // x8
  bool v48; // w2
  ShopTopListViewItemDraw_o *v49; // x0
  const MethodInfo *v50; // x3
  struct ShopListNotice_o *v51; // x8
  ShopTopListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  struct ShopListNotice_o *v54; // x8
  ShopTopListViewItemDraw_o *v55; // x0
  const MethodInfo *v56; // x3
  struct ShopListNotice_o *v57; // x8
  _BOOL8 v58; // x0
  const MethodInfo *v59; // x3
  struct ShopListNotice_o *v60; // x8
  UnityEngine_GameObject_o *exchangeServantLimitedSprite; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_Object_o **v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *v70; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct UIAtlas_o *klass; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_String_o *monitor; // x1
  UnityEngine_Object_o *v86; // x22
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x4
  System_Action_o *v90; // x22
  struct ShopListNotice_o *v91; // x8
  ShopTopListViewItemDraw_o *v92; // x0
  const MethodInfo *v93; // x3
  struct ShopListNotice_o *v94; // x8
  ShopTopListViewItemDraw_o *v95; // x0
  const MethodInfo *v96; // x3
  struct ShopListNotice_o *v97; // x8
  const MethodInfo *v98; // x5
  const MethodInfo *v99; // x4
  struct ShopListNotice_o *v100; // x8
  int64_t v101; // x3
  const MethodInfo *v102; // x4
  struct ShopListNotice_o *v103; // x8
  int64_t v104; // x3
  const MethodInfo *v105; // x4
  struct ShopListNotice_o *v106; // x8
  int64_t v107; // x3
  ShopTopListViewItemDraw_o *v108; // x0
  const MethodInfo *v109; // x3
  struct ShopListNotice_o *v110; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  System_String_o *v112; // x0
  const MethodInfo *v113; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  System_String_o *v115; // x0
  const MethodInfo *v116; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  System_String_o *v118; // x0
  const MethodInfo *v119; // x3
  ShopTopListViewItemDraw_o *v120; // x0
  const MethodInfo *v121; // x3
  struct ShopListNotice_o *v122; // x8
  ShopTopListViewItemDraw_o *v123; // x0
  const MethodInfo *v124; // x3
  struct ShopTopItemInfo_o *info; // x8
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v127; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  UserItemMaster_o *v129; // x0
  int32_t UserStoneFragmentNum; // w21
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v132; // x3
  int v133; // w23
  BalanceConfig_c *v134; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  System_String_o *v136; // x0
  System_String_o *v137; // x21
  Il2CppObject *v138; // x0
  UnityEngine_Component_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  CondensedScaleLabel_o *v141; // x0
  int v142; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB7DF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__, v17);
    sub_B16FFC(&ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, v19);
    sub_B16FFC(&StringLiteral_12117/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v20);
    sub_B16FFC(&StringLiteral_12116/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v21);
    byte_40FB7DF = 1;
  }
  v22 = sub_B170CC(ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo, item, method, v3, v4);
  ShopTopListViewItemDraw___c__DisplayClass47_0___ctor((ShopTopListViewItemDraw___c__DisplayClass47_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_107;
  *(_QWORD *)(v22 + 16) = item;
  v29 = (ShopTopListViewItem_o **)(v22 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)item, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( !activeSelf )
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
          (ShopTopListViewItemDraw_o *)activeSelf,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          this->fields.monthlyLimitedSprite,
          0LL,
          v39);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        exchangeServantRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xA:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)activeSelf,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          0LL,
          this->fields.exchangeServantLimitedSprite,
          v39);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        monthlyRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xC:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)activeSelf,
          &this->fields.switchingObjects,
          0LL,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v39);
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        periodRemainTimeRoot = 0LL;
        goto LABEL_13;
      case 0xE:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)activeSelf,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v39);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v41,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v42);
        break;
      default:
        break;
    }
  }
  if ( !*v29 )
    goto LABEL_107;
  v47 = (*v29)->fields.shopListNotice;
  v48 = v47 && v47->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)activeSelf,
    this->fields.newItemSprite,
    v48,
    v38);
  if ( !*v29 )
    goto LABEL_107;
  v51 = (*v29)->fields.shopListNotice;
  if ( v51 )
    LODWORD(v51) = v51->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(v49, this->fields.periodLimitedSprite, (_DWORD)v51 == 1, v50);
  if ( !*v29 )
    goto LABEL_107;
  v54 = (*v29)->fields.shopListNotice;
  if ( v54 )
    LODWORD(v54) = v54->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(v52, this->fields.monthlyLimitedSprite, (_DWORD)v54 == 2, v53);
  if ( !*v29 )
    goto LABEL_107;
  v57 = (*v29)->fields.shopListNotice;
  if ( v57 )
    LODWORD(v57) = v57->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(v55, this->fields.exchangeServantLimitedSprite, (_DWORD)v57 == 3, v56);
  if ( !*v29 )
    goto LABEL_107;
  v60 = (*v29)->fields.shopListNotice;
  if ( v60 && v60->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    exchangeServantLimitedSprite = this->fields.exchangeServantLimitedSprite;
    if ( !exchangeServantLimitedSprite )
      goto LABEL_107;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       exchangeServantLimitedSprite,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v22 + 32) = Component_srcLineSprite;
    v63 = (UnityEngine_Object_o **)(v22 + 32);
    sub_B16F98((BattleServantConfConponent_o *)(v22 + 32), Component_srcLineSprite, v64, v65, v66, v67, v68, v69);
    v70 = *(UnityEngine_Object_o **)(v22 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL) )
      {
        if ( !*v63 )
          goto LABEL_107;
        klass = (struct UIAtlas_o *)(*v63)[19].klass;
        this->fields.exchangeServantDefaultAtlas = klass;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultAtlas,
          (System_Int32_array **)klass,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        if ( !*v63 )
          goto LABEL_107;
        monitor = (struct System_String_o *)(*v63)[19].monitor;
        this->fields.exchangeServantDefaultSpriteName = monitor;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultSpriteName,
          (System_Int32_array **)monitor,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
      }
    }
    v86 = *v63;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v58 = UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
    if ( v58 )
    {
      v90 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v87, v88, v59, v89);
      System_Action___ctor(
        v90,
        (Il2CppObject *)v22,
        Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v90, 1, 0LL);
    }
  }
  if ( !*v29 )
    goto LABEL_107;
  v91 = (*v29)->fields.shopListNotice;
  if ( v91 )
    LODWORD(v91) = v91->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)v58,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v91 == 1,
    v59);
  if ( !*v29 )
    goto LABEL_107;
  v94 = (*v29)->fields.shopListNotice;
  if ( v94 )
    LODWORD(v94) = v94->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(v92, this->fields.monthlyRemainTimeRoot, (_DWORD)v94 == 2, v93);
  if ( !*v29 )
    goto LABEL_107;
  v97 = (*v29)->fields.shopListNotice;
  if ( v97 )
    LODWORD(v97) = v97->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(v95, this->fields.exchangeServantRemainTimeRoot, (_DWORD)v97 == 3, v96);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v29,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v98);
  if ( !*v29 )
    goto LABEL_107;
  v100 = (*v29)->fields.shopListNotice;
  v101 = v100 ? v100->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v101,
    v99);
  if ( !*v29 )
    goto LABEL_107;
  v103 = (*v29)->fields.shopListNotice;
  v104 = v103 ? v103->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v104,
    v102);
  if ( !*v29 )
    goto LABEL_107;
  v106 = (*v29)->fields.shopListNotice;
  v107 = v106 ? v106->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v107,
    v105);
  if ( !*v29 )
    goto LABEL_107;
  v110 = (*v29)->fields.shopListNotice;
  if ( v110 )
    LOBYTE(v110) = v110->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    v108,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v110 != 1,
    v109);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v112, periodRemainTimeLabel, v112, v113);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v115, monthlyRemainTimeLabel, v115, v116);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v118, exchangeServantRemainTimeLabel, v118, v119);
  if ( !*v29 )
    goto LABEL_107;
  v122 = (*v29)->fields.shopListNotice;
  if ( v122 )
    LOBYTE(v122) = v122->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    v120,
    this->fields.exchangeServantRemainTimeLabel,
    (unsigned __int8)v122 != 1,
    v121);
  ShopTopListViewItemDraw__SetObjectActive(v123, this->fields.exchangeStoneFragmentsRoot, 0, v124);
  if ( !*v29 )
    goto LABEL_107;
  info = (*v29)->fields.info;
  if ( !info )
    goto LABEL_107;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_107;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, v127);
  v129 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v129 )
    goto LABEL_107;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(v129, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v132);
  v133 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  v134 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v134 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  if ( v133 > v134->static_fields->StoneFragmentExchangeNoticeDispMax )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_107;
    goto LABEL_102;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12116/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
  v142 = v133;
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
  v136 = System_String__Format(v137, v138, 0LL);
  if ( !exchangeStoneFragmentsLabel )
LABEL_107:
    sub_B170D4();
LABEL_102:
  UILabel__set_text(exchangeStoneFragmentsLabel, v136, 0LL);
  v139 = (UnityEngine_Component_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !v139 )
    goto LABEL_107;
  v140 = UnityEngine_Component__get_gameObject(v139, 0LL);
  if ( !v140 )
    goto LABEL_107;
  v141 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v140,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !v141 )
    goto LABEL_107;
  CondensedScaleLabel__SetCondensedScale(v141, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0

  if ( (byte_40FB7E0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
    byte_40FB7E0 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v6 = this->fields.baseButton;
    if ( !v6 )
      sub_B170D4();
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v6->klass->vtable._14_SetState.method)(
      v6,
      (unsigned int)state,
      1LL,
      v6->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  srcLineSprite_o *v19; // x0
  UILabel_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UILabel_o *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  srcLineSprite_o *v28; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v30; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v32; // x4
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  struct UICommonButton_o *baseButton; // x8
  struct UICommonButton_o *v36; // x0
  UnityEngine_GameObject_o *GameObject; // x19
  UnityEngine_GameObject_o *v38; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v40; // x20
  System_String_o *Value; // x0
  unsigned __int128 v42; // [xsp+0h] [xbp-50h] BYREF
  int32_t v43; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FB7DE & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_10702/*"PreLabel"*/, v6);
    sub_B16FFC(&StringLiteral_14368/*"TimeLabel"*/, v7);
    sub_B16FFC(&StringLiteral_15106/*"ValueLabel"*/, v8);
    sub_B16FFC(&StringLiteral_3118/*"COIN_ROOM_CLOSED_MESSAGE"*/, v9);
    sub_B16FFC(&StringLiteral_7578/*"InfoLabel"*/, v10);
    sub_B16FFC(&StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, v11);
    sub_B16FFC(&StringLiteral_353/*"#6B6B6B"*/, v12);
    sub_B16FFC(&StringLiteral_10604/*"PeriodTimeRoot"*/, v13);
    sub_B16FFC(&StringLiteral_3116/*"COIN_ROOM_BANNER_INFO"*/, v14);
    sub_B16FFC(&StringLiteral_10703/*"PreLabelRoot"*/, v15);
    byte_40FB7DE = 1;
  }
  v42 = 0uLL;
  coinRoomListItem = this->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_33;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_353/*"#6B6B6B"*/, (UnityEngine_Color_o *)&v42, 0LL);
    baseButton = this->fields.baseButton;
    if ( baseButton )
    {
      baseButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v42;
      v36 = this->fields.baseButton;
      if ( v36 )
      {
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._14_SetState.method)(
          v36,
          3LL,
          1LL,
          v36->klass->vtable._15_OnPress.methodPtr);
        GameObject = GameObjectExtensions__FindGameObject(
                       this->fields.coinRoomObject,
                       (System_String_o *)StringLiteral_10703/*"PreLabelRoot"*/,
                       0LL);
        v38 = GameObjectExtensions__FindGameObject(GameObject, (System_String_o *)StringLiteral_10702/*"PreLabel"*/, 0LL);
        if ( v38 )
        {
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v38,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v40 = (UILabel_o *)Component_srcLineSprite;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_3118/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v40 )
            {
              UILabel__set_text(v40, Value, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_33;
  }
  v17 = GameObjectExtensions__FindGameObject(this->fields.coinRoomObject, (System_String_o *)StringLiteral_10604/*"PeriodTimeRoot"*/, 0LL);
  v18 = GameObjectExtensions__FindGameObject(v17, (System_String_o *)StringLiteral_7578/*"InfoLabel"*/, 0LL);
  if ( !v18 )
    goto LABEL_33;
  v19 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v18,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v17 )
    goto LABEL_33;
  v20 = (UILabel_o *)v19;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !v21 )
    goto LABEL_33;
  v22 = v21;
  if ( !System_String__Equals_43731072(v21, (System_String_o *)StringLiteral_3116/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v43 = CoinRoomUtility__MonthRemainingNum(0LL);
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
    v24 = System_String__Format(v22, v23, 0LL);
    if ( v20 )
    {
      UILabel__set_text(v20, v24, 0LL);
      goto LABEL_17;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_17:
  v25 = GameObjectExtensions__FindGameObject(v17, (System_String_o *)StringLiteral_14368/*"TimeLabel"*/, 0LL);
  if ( !v25 )
    goto LABEL_33;
  v26 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       v25,
                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  v27 = GameObjectExtensions__FindGameObject(v17, (System_String_o *)StringLiteral_15106/*"ValueLabel"*/, 0LL);
  if ( !v27 )
    goto LABEL_33;
  v28 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v27,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = this->fields.coinRoomNoticeRemainTimeLabel;
  v30 = (UILabel_o *)v28;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(this, v30, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v32);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v33, v26, v33, v34);
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
  struct ShopTopItemInfo_o *info; // x8
  bool IsNullOrEmpty; // w0
  struct ShopTopItemInfo_o *v18; // x8
  int32_t State_k__BackingField; // w9
  bool v20; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v23; // x1
  UILabel_o *infoTextLabel; // x23
  System_String_o *InfoText; // x1
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v27; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x22
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *v35; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  struct UISprite_o *v37; // x0
  ShopTopListViewItemDraw_o *v38; // x0
  const MethodInfo *v39; // x3
  struct ShopTopItemInfo_o *v40; // x8
  UnityEngine_GameObject_o *startUpSummonSprite; // x1
  ShopTopListViewItemDraw_o *v42; // x0
  const MethodInfo *v43; // x3
  UnityEngine_GameObject_o *startUpSummonLimitedBase; // x1
  bool v45; // w2
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ShopTopItemInfo_o *v52; // x8
  UnityEngine_Object_o *coinRoomObject; // x21
  const MethodInfo *v54; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x1
  UnityEngine_Object_o *v56; // x20
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  const MethodInfo *v59; // x1
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v61; // x23
  System_String_o *v62; // x24
  UISprite_o *v63; // x0

  v8 = this;
  if ( (byte_40FB7DC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_19203/*"icon_balloon_blue"*/, v12);
    sub_B16FFC(&StringLiteral_12060/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v13);
    sub_B16FFC(&StringLiteral_19532/*"img_shop_0"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FB7DC = 1;
  }
  if ( !item )
    return;
  ShopTopListViewItemDraw__SetSpriteActive(this, v8->fields.rangeSprite, mode == 0, (const MethodInfo *)manager);
  if ( !mode )
    return;
  info = item->fields.info;
  if ( !info )
    goto LABEL_67;
  IsNullOrEmpty = System_String__IsNullOrEmpty(info->fields._ImageName_k__BackingField, 0LL);
  v18 = item->fields.info;
  if ( !v18 )
    goto LABEL_67;
  State_k__BackingField = v18->fields._State_k__BackingField;
  v20 = IsNullOrEmpty;
  switch ( State_k__BackingField )
  {
    case 15:
    case 18:
    case 19:
    case 20:
      baseImageSprite = v8->fields.baseImageSprite;
      ImageName_k__BackingField = v18->fields._ImageName_k__BackingField;
      goto LABEL_9;
    case 17:
      v61 = v8->fields.baseImageSprite;
      v62 = v18->fields._ImageName_k__BackingField;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v61, v62, 0LL);
      goto LABEL_13;
    default:
      baseImageSprite = v8->fields.baseImageSprite;
      p_ImageName_k__BackingField = &v18->fields._ImageName_k__BackingField;
      if ( State_k__BackingField == 21 )
      {
        ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_28586476(baseImageSprite, ImageName_k__BackingField, 0LL);
      }
      else
      {
        if ( !baseImageSprite )
          goto LABEL_67;
        if ( IsNullOrEmpty )
          p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19532/*"img_shop_0"*/;
        UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
        v63 = v8->fields.baseImageSprite;
        if ( !v63 )
          goto LABEL_67;
        UISprite__set_atlas(v63, v8->fields.baseAtlas, 0LL);
      }
LABEL_13:
      infoTextLabel = v8->fields.infoTextLabel;
      if ( v20 )
      {
        InfoText = ShopTopListViewItem__get_InfoText(item, v23);
        if ( !infoTextLabel )
          goto LABEL_67;
      }
      else
      {
        InfoText = (System_String_o *)StringLiteral_1/*""*/;
        if ( !infoTextLabel )
          goto LABEL_67;
      }
      UILabel__set_text(infoTextLabel, InfoText, 0LL);
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
      if ( UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL) )
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
          Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
          if ( !v33 )
            goto LABEL_67;
        }
        UILabel__set_text(v33, Empty, 0LL);
      }
      v35 = item->fields.info;
      if ( !v35 )
        goto LABEL_67;
      if ( v35->fields._State_k__BackingField == 4 )
      {
        exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_28586476(exchangeStoneFragmentsSprite, (System_String_o *)StringLiteral_19203/*"icon_balloon_blue"*/, 0LL);
        v37 = v8->fields.exchangeStoneFragmentsSprite;
        if ( v37 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v37->klass->vtable._33_MakePixelPerfect.method)(
            v37,
            v37->klass->vtable._34_get_minWidth.methodPtr);
          AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0LL);
          goto LABEL_36;
        }
LABEL_67:
        sub_B170D4();
      }
LABEL_36:
      ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v32);
      v40 = item->fields.info;
      if ( !v40 )
        goto LABEL_67;
      startUpSummonSprite = v8->fields.startUpSummonSprite;
      if ( v40->fields._State_k__BackingField == 16 )
      {
        ShopTopListViewItemDraw__SetObjectActive(v38, startUpSummonSprite, 1, v39);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v45 = 1;
      }
      else
      {
        ShopTopListViewItemDraw__SetObjectActive(v38, startUpSummonSprite, 0, v39);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v45 = 0;
      }
      ShopTopListViewItemDraw__SetObjectActive(v42, startUpSummonLimitedBase, v45, v43);
      v52 = item->fields.info;
      if ( !v52 )
        goto LABEL_67;
      if ( v52->fields._State_k__BackingField == 17 )
      {
        v8->fields.coinRoomListItem = item;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v8->fields.coinRoomListItem,
          (System_Int32_array **)item,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
        {
          UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
          CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v54);
          UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v8, CoinRoomAsset, 0LL);
        }
        else
        {
          v58 = v8->fields.coinRoomObject;
          if ( !v58 )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive(v58, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(v8, v59);
        }
      }
      else
      {
        v56 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
        {
          v57 = v8->fields.coinRoomObject;
          if ( !v57 )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive(v57, 0, 0LL);
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

  if ( (byte_40FB7E3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FB7E3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetLabelText(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FB7E4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FB7E4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetObjectActive(
        ShopTopListViewItemDraw_o *this,
        UnityEngine_GameObject_o *go,
        bool isActive,
        const MethodInfo *method)
{
  if ( (byte_40FB7E1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, go);
    byte_40FB7E1 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL) )
  {
    if ( !go )
      sub_B170D4();
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  const MethodInfo *v16; // x3

  if ( (byte_40FB7E6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, label);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&ShopNoticeRemainTimeLabel_TypeInfo, v10);
    byte_40FB7E6 = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_B170CC(
                                                                       ShopNoticeRemainTimeLabel_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, v16),
          !shopNoticeRemainTimeLabel) )
    {
      sub_B170D4();
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
  bool v11; // w0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  const MethodInfo *v19; // x4
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8
  ShopNoticeTween_o *v22; // x0
  const MethodInfo *v23; // x2
  ShopNoticeTween_o *v24; // x0
  ShopNoticeTween_o *v25; // x0

  if ( (byte_40FB7E7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FB7E7 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0LL, 0LL);
  if ( labels && objects && !v11 )
  {
    if ( !item )
      goto LABEL_19;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
      (System_Int32_array **)ShopNoticeTween_k__BackingField,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    shopListNotice = item->fields.shopListNotice;
    if ( shopListNotice )
    {
      LimitedType_k__BackingField = shopListNotice->fields._LimitedType_k__BackingField;
      if ( LimitedType_k__BackingField <= 0xE && ((1 << LimitedType_k__BackingField) & 0x5440) != 0 )
      {
        v22 = item->fields._ShopNoticeTween_k__BackingField;
        if ( v22 )
        {
          ShopNoticeTween__AddTargets(
            v22,
            this->fields.limitedNoticeRoot,
            this->fields.switchingObjects,
            this->fields.switchingLabels,
            v19);
          v24 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v24 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v24, 0, v23);
            return;
          }
        }
LABEL_19:
        sub_B170D4();
      }
    }
    v25 = item->fields._ShopNoticeTween_k__BackingField;
    if ( !v25 )
      goto LABEL_19;
    ShopNoticeTween__RemoveTargets(
      v25,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      v19);
  }
}


void __fastcall ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB7E2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FB7E2 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
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

  if ( (byte_40FB7E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, objects);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB7E5 = 1;
  }
  if ( !*objects )
  {
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    objects,
                                                                                                    period,
                                                                                                    monthly,
                                                                                                    exchangeServant);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v13;
    sub_B16F98((BattleServantConfConponent_o *)objects, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*objects,
        (EventMissionProgressRequest_Argument_ProgressData_o *)period,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*objects,
        (EventMissionProgressRequest_Argument_ProgressData_o *)monthly,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      if ( *objects )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*objects,
          (EventMissionProgressRequest_Argument_ProgressData_o *)exchangeServant,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        return;
      }
LABEL_23:
      sub_B170D4();
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
  __int64 v9; // x1
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Object; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *coinRoomObject; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x20

  if ( (byte_40F79FC & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&StringLiteral_4100/*"CoinRoomBanner"*/, v9);
    byte_40F79FC = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  manager = this->fields.manager;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_B170D4();
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       coinRoomAsset,
                                       (System_String_o *)StringLiteral_4100/*"CoinRoomBanner"*/,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( _4__this )
    {
      v14 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        Object = (System_Int32_array **)BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)_4__this,
                                          v14,
                                          transform,
                                          0LL,
                                          0LL);
        _4__this->fields.coinRoomObject = (struct UnityEngine_GameObject_o *)Object;
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.coinRoomObject,
          Object,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        coinRoomObject = _4__this->fields.coinRoomObject;
        if ( coinRoomObject )
        {
          UnityEngine_GameObject__SetActive(coinRoomObject, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, 0LL);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  UISprite_o *v10; // x0
  struct ShopTopListViewItemDraw_o *v11; // x8
  UISprite_o *v12; // x0
  int32_t ExchangeServantEventId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F79FB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19289/*"icon_servant_exchange_available_{0}"*/, v4);
    byte_40F79FB = 1;
  }
  item = this->fields.item;
  if ( !item )
    goto LABEL_14;
  exchangeServantSprite = this->fields.exchangeServantSprite;
  ExchangeServantEventId = ShopTopListViewItem__get_ExchangeServantEventId(item, 0LL);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId);
  v8 = System_String__Format((System_String_o *)StringLiteral_19289/*"icon_servant_exchange_available_{0}"*/, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(exchangeServantSprite, v8, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      v10 = this->fields.exchangeServantSprite;
      if ( v10 )
      {
        UISprite__set_atlas(v10, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v11 = this->fields.__4__this;
        if ( v11 )
        {
          v12 = this->fields.exchangeServantSprite;
          if ( v12 )
          {
            UISprite__set_spriteName(v12, v11->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
}