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
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EA6FF & 1) == 0 )
  {
    sub_B5D5C4(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo, (_DWORD)manager, (_DWORD)method, v3);
    byte_42EA6FF = 1;
  }
  v6 = sub_B5D694(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_TypeInfo);
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44___ctor(
    (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = manager;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)manager, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_32A4F74[initMode - 1];
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ShopTopListViewItem_o **v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v76; // x8
  bool v77; // w2
  const MethodInfo *v78; // x3
  struct ShopListNotice_o *v79; // x8
  const MethodInfo *v80; // x3
  struct ShopListNotice_o *v81; // x8
  const MethodInfo *v82; // x3
  struct ShopListNotice_o *v83; // x8
  const MethodInfo *v84; // x3
  struct ShopListNotice_o *v85; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_Object_o **v87; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_Object_o *v94; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct UIAtlas_o *klass; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct System_String_o *monitor; // x1
  UnityEngine_Object_o *v110; // x22
  System_Action_o *v111; // x22
  struct ShopListNotice_o *v112; // x8
  const MethodInfo *v113; // x3
  struct ShopListNotice_o *v114; // x8
  const MethodInfo *v115; // x3
  struct ShopListNotice_o *v116; // x8
  const MethodInfo *v117; // x5
  const MethodInfo *v118; // x4
  struct ShopListNotice_o *v119; // x8
  int64_t v120; // x3
  const MethodInfo *v121; // x4
  struct ShopListNotice_o *v122; // x8
  int64_t v123; // x3
  const MethodInfo *v124; // x4
  struct ShopListNotice_o *v125; // x8
  int64_t v126; // x3
  const MethodInfo *v127; // x3
  struct ShopListNotice_o *v128; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  System_String_o *v130; // x0
  const MethodInfo *v131; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  System_String_o *v133; // x0
  const MethodInfo *v134; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  System_String_o *v136; // x0
  const MethodInfo *v137; // x3
  const MethodInfo *v138; // x3
  struct ShopListNotice_o *v139; // x8
  ShopTopListViewItemDraw_o *v140; // x0
  const MethodInfo *v141; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w21
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v146; // x3
  int v147; // w23
  BalanceConfig_c *v148; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  System_String_o *v150; // x21
  Il2CppObject *v151; // x0
  int v152; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA701 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v24, v25, v26);
    sub_B5D5C4(&int_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__, v36, v37, v38);
    sub_B5D5C4(&ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12316/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12315/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v48, v49, v50);
    byte_42EA701 = 1;
  }
  v51 = sub_B5D694(ShopTopListViewItemDraw___c__DisplayClass47_0_TypeInfo);
  ShopTopListViewItemDraw___c__DisplayClass47_0___ctor((ShopTopListViewItemDraw___c__DisplayClass47_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_107;
  *(_QWORD *)(v51 + 16) = item;
  v60 = (ShopTopListViewItem_o **)(v51 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)item, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v51 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)this, v61, v62, v63, v64, v65, v66);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v60 )
    goto LABEL_107;
  shopListNotice = (*v60)->fields.shopListNotice;
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
          v68);
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
          v68);
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
          v68);
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
          v68);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v70,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v71);
        break;
      default:
        break;
    }
  }
  if ( !*v60 )
    goto LABEL_107;
  v76 = (*v60)->fields.shopListNotice;
  v77 = v76 && v76->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v77,
    v67);
  if ( !*v60 )
    goto LABEL_107;
  v79 = (*v60)->fields.shopListNotice;
  if ( v79 )
    LODWORD(v79) = v79->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v79 == 1,
    v78);
  if ( !*v60 )
    goto LABEL_107;
  v81 = (*v60)->fields.shopListNotice;
  if ( v81 )
    LODWORD(v81) = v81->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v81 == 2,
    v80);
  if ( !*v60 )
    goto LABEL_107;
  v83 = (*v60)->fields.shopListNotice;
  if ( v83 )
    LODWORD(v83) = v83->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v83 == 3,
    v82);
  if ( !*v60 )
    goto LABEL_107;
  v85 = (*v60)->fields.shopListNotice;
  if ( v85 && v85->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_107;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gameObject,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v51 + 32) = Component_srcLineSprite;
    v87 = (UnityEngine_Object_o **)(v51 + 32);
    sub_B5D560((BattleServantConfConponent_o *)(v51 + 32), Component_srcLineSprite, v88, v89, v90, v91, v92, v93);
    v94 = *(UnityEngine_Object_o **)(v51 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
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
        if ( !*v87 )
          goto LABEL_107;
        klass = (struct UIAtlas_o *)(*v87)[19].klass;
        this->fields.exchangeServantDefaultAtlas = klass;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultAtlas,
          (System_Int32_array **)klass,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        if ( !*v87 )
          goto LABEL_107;
        monitor = (struct System_String_o *)(*v87)[19].monitor;
        this->fields.exchangeServantDefaultSpriteName = monitor;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.exchangeServantDefaultSpriteName,
          (System_Int32_array **)monitor,
          v103,
          v104,
          v105,
          v106,
          v107,
          v108);
      }
    }
    v110 = *v87;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v110, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v111 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v111,
        (Il2CppObject *)v51,
        Method_ShopTopListViewItemDraw___c__DisplayClass47_0__ResetShopListNotice_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v111, 1, 0LL);
    }
  }
  if ( !*v60 )
    goto LABEL_107;
  v112 = (*v60)->fields.shopListNotice;
  if ( v112 )
    LODWORD(v112) = v112->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v112 == 1,
    v84);
  if ( !*v60 )
    goto LABEL_107;
  v114 = (*v60)->fields.shopListNotice;
  if ( v114 )
    LODWORD(v114) = v114->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v114 == 2,
    v113);
  if ( !*v60 )
    goto LABEL_107;
  v116 = (*v60)->fields.shopListNotice;
  if ( v116 )
    LODWORD(v116) = v116->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v116 == 3,
    v115);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v60,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v117);
  if ( !*v60 )
    goto LABEL_107;
  v119 = (*v60)->fields.shopListNotice;
  v120 = v119 ? v119->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v120,
    v118);
  if ( !*v60 )
    goto LABEL_107;
  v122 = (*v60)->fields.shopListNotice;
  v123 = v122 ? v122->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v123,
    v121);
  if ( !*v60 )
    goto LABEL_107;
  v125 = (*v60)->fields.shopListNotice;
  v126 = v125 ? v125->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v126,
    v124);
  if ( !*v60 )
    goto LABEL_107;
  v128 = (*v60)->fields.shopListNotice;
  if ( v128 )
    LOBYTE(v128) = v128->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v128 != 1,
    v127);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v130, periodRemainTimeLabel, v130, v131);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v133, monthlyRemainTimeLabel, v133, v134);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v136, exchangeServantRemainTimeLabel, v136, v137);
  if ( !*v60 )
    goto LABEL_107;
  v139 = (*v60)->fields.shopListNotice;
  if ( v139 )
    LOBYTE(v139) = v139->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    (unsigned __int8)v139 != 1,
    v138);
  ShopTopListViewItemDraw__SetObjectActive(v140, this->fields.exchangeStoneFragmentsRoot, 0, v141);
  if ( !*v60 )
    goto LABEL_107;
  info = (*v60)->fields.info;
  if ( !info )
    goto LABEL_107;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_107;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, v53);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_107;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v146);
  v147 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  v148 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v148 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  if ( v147 > v148->static_fields->StoneFragmentExchangeNoticeDispMax )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12316/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_107;
    goto LABEL_102;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
  v152 = v147;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v150, v151, 0LL);
  if ( !exchangeStoneFragmentsLabel )
LABEL_107:
    sub_B5D69C(gameObject, v53);
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
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !gameObject )
    goto LABEL_107;
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0LL);
}


void __fastcall ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_42EA702 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, state, (_DWORD)method, v3);
    byte_42EA702 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v8 = this->fields.baseButton;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
      v8,
      (unsigned int)state,
      1LL,
      v8->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopTopListViewItemDraw_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v45; // x20
  UILabel_o *v46; // x21
  System_String_o *v47; // x22
  Il2CppObject *v48; // x0
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v50; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v52; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v54; // x4
  System_String_o *v55; // x0
  const MethodInfo *v56; // x3
  struct UICommonButton_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v59; // x20
  unsigned __int128 v60; // [xsp+0h] [xbp-50h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42EA700 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10867/*"PreLabel"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_14585/*"TimeLabel"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15324/*"ValueLabel"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3192/*"COIN_ROOM_CLOSED_MESSAGE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_7690/*"InfoLabel"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_360/*"#6B6B6B"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_10758/*"PeriodTimeRoot"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3190/*"COIN_ROOM_BANNER_INFO"*/, v38, v39, v40);
    this = (ShopTopListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_10868/*"PreLabelRoot"*/, v41, v42, v43);
    byte_42EA700 = 1;
  }
  v60 = 0uLL;
  coinRoomListItem = v4->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_33;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_360/*"#6B6B6B"*/,
                                          (UnityEngine_Color_o *)&v60,
                                          0LL);
    baseButton = v4->fields.baseButton;
    if ( baseButton )
    {
      baseButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v60;
      this = (ShopTopListViewItemDraw_o *)v4->fields.baseButton;
      if ( this )
      {
        ((void (__fastcall *)(ShopTopListViewItemDraw_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          3LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        GameObject = GameObjectExtensions__FindGameObject(
                       v4->fields.coinRoomObject,
                       (System_String_o *)StringLiteral_10868/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10867/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v59 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3192/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v59 )
            {
              UILabel__set_text(v59, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_33;
  }
  v45 = GameObjectExtensions__FindGameObject(v4->fields.coinRoomObject, (System_String_o *)StringLiteral_10758/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v45,
                                        (System_String_o *)StringLiteral_7690/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v45 )
    goto LABEL_33;
  v46 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v45, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3190/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_33;
  v47 = (System_String_o *)this;
  if ( !System_String__Equals_44565128((System_String_o *)this, (System_String_o *)StringLiteral_3190/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v61 = CoinRoomUtility__MonthRemainingNum(0LL);
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    this = (ShopTopListViewItemDraw_o *)System_String__Format(v47, v48, 0LL);
    if ( v46 )
    {
      UILabel__set_text(v46, (System_String_o *)this, 0LL);
      goto LABEL_17;
    }
LABEL_33:
    sub_B5D69C(this, method);
  }
LABEL_17:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v45,
                                        (System_String_o *)StringLiteral_14585/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v45,
                                        (System_String_o *)StringLiteral_15324/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_33;
  v50 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v4->fields.coinRoomNoticeRemainTimeLabel;
  v52 = (UILabel_o *)v50;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v4, v52, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v54);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText((ShopTopListViewItemDraw_o *)v55, Component_srcLineSprite, v55, v56);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UISprite_o *IsNullOrEmpty; // x0
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v33; // x8
  int32_t State_k__BackingField; // w9
  char v35; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v38; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v41; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v46; // x2
  UILabel_o *v47; // x22
  struct ShopTopItemInfo_o *v48; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v50; // x3
  struct ShopTopItemInfo_o *v51; // x8
  UnityEngine_GameObject_o *startUpSummonSprite; // x1
  ShopTopListViewItemDraw_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_GameObject_o *startUpSummonLimitedBase; // x1
  bool v56; // w2
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct ShopTopItemInfo_o *v63; // x8
  UnityEngine_Object_o *coinRoomObject; // x21
  const MethodInfo *v65; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x1
  UnityEngine_Object_o *v67; // x20
  const MethodInfo *v68; // x1
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v70; // x23
  System_String_o *v71; // x24

  v8 = this;
  if ( (byte_42EA6FE & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, manager);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&string_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_19521/*"icon_balloon_blue"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12258/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_19855/*"img_shop_0"*/, v24, v25, v26);
    this = (ShopTopListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42EA6FE = 1;
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
  v33 = item->fields.info;
  if ( !v33 )
    goto LABEL_67;
  State_k__BackingField = v33->fields._State_k__BackingField;
  v35 = (char)IsNullOrEmpty;
  switch ( State_k__BackingField )
  {
    case 15:
    case 18:
    case 19:
    case 20:
      baseImageSprite = v8->fields.baseImageSprite;
      ImageName_k__BackingField = v33->fields._ImageName_k__BackingField;
      goto LABEL_9;
    case 17:
      v70 = v8->fields.baseImageSprite;
      v71 = v33->fields._ImageName_k__BackingField;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)AtlasManager__SetEventSprite(v70, v71, 0LL);
      goto LABEL_13;
    default:
      baseImageSprite = v8->fields.baseImageSprite;
      p_ImageName_k__BackingField = &v33->fields._ImageName_k__BackingField;
      if ( State_k__BackingField == 21 )
      {
        ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsNullOrEmpty = (UISprite_o *)AtlasManager__SetShopBanner_31192016(
                                        baseImageSprite,
                                        ImageName_k__BackingField,
                                        0LL);
      }
      else
      {
        if ( !baseImageSprite )
          goto LABEL_67;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_19855/*"img_shop_0"*/;
        UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
        IsNullOrEmpty = v8->fields.baseImageSprite;
        if ( !IsNullOrEmpty )
          goto LABEL_67;
        UISprite__set_atlas(IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
      }
LABEL_13:
      infoTextLabel = v8->fields.infoTextLabel;
      if ( (v35 & 1) != 0 )
      {
        IsNullOrEmpty = (UISprite_o *)ShopTopListViewItem__get_InfoText(item, v38);
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
      IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v41);
      ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v43);
      ShopTopListViewItemDraw__SetInput(v8, item, v44);
      textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v47 = v8->fields.textOnMask;
        if ( item->fields._IsUse_k__BackingField )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !v47 )
            goto LABEL_67;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          IsNullOrEmpty = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
          Empty = (System_String_o *)IsNullOrEmpty;
          if ( !v47 )
            goto LABEL_67;
        }
        UILabel__set_text(v47, Empty, 0LL);
      }
      v48 = item->fields.info;
      if ( !v48 )
        goto LABEL_67;
      if ( v48->fields._State_k__BackingField == 4 )
      {
        exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_31192016(exchangeStoneFragmentsSprite, (System_String_o *)StringLiteral_19521/*"icon_balloon_blue"*/, 0LL);
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
        sub_B5D69C(IsNullOrEmpty, Empty);
      }
LABEL_36:
      ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v46);
      v51 = item->fields.info;
      if ( !v51 )
        goto LABEL_67;
      startUpSummonSprite = v8->fields.startUpSummonSprite;
      if ( v51->fields._State_k__BackingField == 16 )
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          1,
          v50);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v56 = 1;
      }
      else
      {
        ShopTopListViewItemDraw__SetObjectActive(
          (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
          startUpSummonSprite,
          0,
          v50);
        startUpSummonLimitedBase = v8->fields.startUpSummonLimitedBase;
        v56 = 0;
      }
      ShopTopListViewItemDraw__SetObjectActive(v53, startUpSummonLimitedBase, v56, v54);
      v63 = item->fields.info;
      if ( !v63 )
        goto LABEL_67;
      if ( v63->fields._State_k__BackingField == 17 )
      {
        v8->fields.coinRoomListItem = item;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v8->fields.coinRoomListItem,
          (System_Int32_array **)item,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
        {
          UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
          CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v65);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v8, CoinRoomAsset, 0LL);
        }
        else
        {
          IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
          if ( !IsNullOrEmpty )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(v8, v68);
        }
      }
      else
      {
        v67 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
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

  if ( (byte_42EA705 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, isActive, method);
    byte_42EA705 = 1;
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
      sub_B5D69C(gameObject, v7);
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

  if ( (byte_42EA706 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EA706 = 1;
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
      sub_B5D69C(v6, v7);
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

  if ( (byte_42EA703 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)go, isActive, method);
    byte_42EA703 = 1;
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
      sub_B5D69C(v6, v7);
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
  ShopNoticeRemainTimeLabel_o *v6; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *RestTime5; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3

  v6 = shopNoticeRemainTimeLabel;
  if ( (byte_42EA708 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)label, (_DWORD)shopNoticeRemainTimeLabel, timeLimit);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ShopNoticeRemainTimeLabel_TypeInfo, v12, v13, v14);
    byte_42EA708 = 1;
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
      || (UILabel__set_text(label, RestTime5, 0LL), !v6)
      && (v6 = (ShopNoticeRemainTimeLabel_o *)sub_B5D694(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(v6, label, (UnityEngine_MonoBehaviour_o *)this, v17),
          !v6) )
    {
      sub_B5D69C(RestTime5, v16);
    }
    v6->fields.timeLimit = timeLimit;
    ShopNoticeRemainTimeLabel__Start(v6, v16);
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

  if ( (byte_42EA709 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)root, objects);
    byte_42EA709 = 1;
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
    sub_B5D560(
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
        sub_B5D69C(v11, v12);
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

  if ( (byte_42EA704 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EA704 = 1;
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
      sub_B5D69C(gameObject, v7);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  System_Collections_Generic_List_GameObject__o *v27; // x0

  if ( (byte_42EA707 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)objects, (_DWORD)period, monthly);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EA707 = 1;
  }
  if ( !*objects )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v19;
    sub_B5D560((BattleServantConfConponent_o *)objects, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v27 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)period,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v27 = *objects;
      if ( !*objects )
        goto LABEL_23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)monthly,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v27 = *objects;
      if ( *objects )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)exchangeServant,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        return;
      }
LABEL_23:
      sub_B5D69C(v27, v26);
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
  int v2; // w2
  __int64 v3; // x3
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x20

  v4 = this;
  if ( (byte_42E5DD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)sub_B5D5C4(&StringLiteral_4187/*"CoinRoomBanner"*/, v5, v6, v7);
    byte_42E5DD9 = 1;
  }
  if ( v4->fields.__1__state >= 2u )
    return 0;
  manager = v4->fields.manager;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_B5D69C(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4187/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( _4__this )
    {
      v11 = (UnityEngine_GameObject_o *)this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        _4__this->fields.coinRoomObject = BaseMonoBehaviour__createObject(
                                            (BaseMonoBehaviour_o *)_4__this,
                                            v11,
                                            transform,
                                            0LL,
                                            0LL);
        sub_B5D560(&_4__this->fields.coinRoomObject);
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
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__44_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ShopTopListViewItem_o *item; // x0
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v16; // x8
  int32_t ExchangeServantEventId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5DD8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19607/*"icon_servant_exchange_available_{0}"*/, v8, v9, v10);
    byte_42E5DD8 = 1;
  }
  item = this->fields.item;
  if ( !item )
    goto LABEL_14;
  exchangeServantSprite = this->fields.exchangeServantSprite;
  ExchangeServantEventId = ShopTopListViewItem__get_ExchangeServantEventId(item, 0LL);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId);
  v14 = System_String__Format((System_String_o *)StringLiteral_19607/*"icon_servant_exchange_available_{0}"*/, v13, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  item = (ShopTopListViewItem_o *)AtlasManager__SetEventUI(exchangeServantSprite, v14, 0LL);
  if ( ((unsigned __int8)item & 1) == 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
      if ( item )
      {
        UISprite__set_atlas((UISprite_o *)item, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v16 = this->fields.__4__this;
        if ( v16 )
        {
          item = (ShopTopListViewItem_o *)this->fields.exchangeServantSprite;
          if ( item )
          {
            UISprite__set_spriteName((UISprite_o *)item, v16->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B5D69C(item, method);
  }
}