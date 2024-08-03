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
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F8B94 & 1) == 0 )
  {
    sub_1B640C8(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager);
    byte_49F8B94 = 1;
  }
  v5 = sub_1B64314(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)manager, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_BDBEEC[initMode - 1];
}


void __fastcall ShopTopListViewItemDraw__OnDestroy(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ShopNoticeTween_o *shopNoticeTween; // x0

  shopNoticeTween = this->fields.shopNoticeTween;
  if ( shopNoticeTween )
    ShopNoticeTween__RemoveTargets(
      shopNoticeTween,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      0LL);
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
  int32_t v22; // w2
  int32_t v23; // w3
  ShopTopListViewItem_o **v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v36; // x8
  bool v37; // w2
  const MethodInfo *v38; // x3
  struct ShopListNotice_o *v39; // x8
  const MethodInfo *v40; // x3
  struct ShopListNotice_o *v41; // x8
  const MethodInfo *v42; // x3
  struct ShopListNotice_o *v43; // x8
  const MethodInfo *v44; // x3
  struct ShopListNotice_o *v45; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_Object_o *v50; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  struct UIAtlas_o *monitor; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_String_o *v57; // x1
  UnityEngine_Object_o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x22
  struct ShopListNotice_o *v62; // x8
  const MethodInfo *v63; // x3
  struct ShopListNotice_o *v64; // x8
  const MethodInfo *v65; // x3
  struct ShopListNotice_o *v66; // x8
  const MethodInfo *v67; // x5
  const MethodInfo *v68; // x4
  struct ShopListNotice_o *v69; // x8
  int64_t v70; // x3
  const MethodInfo *v71; // x4
  struct ShopListNotice_o *v72; // x8
  int64_t v73; // x3
  const MethodInfo *v74; // x4
  struct ShopListNotice_o *v75; // x8
  int64_t v76; // x3
  const MethodInfo *v77; // x3
  struct ShopListNotice_o *v78; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v80; // x0
  const MethodInfo *v81; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v83; // x0
  const MethodInfo *v84; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v86; // x0
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x3
  struct ShopListNotice_o *v89; // x8
  bool v90; // w2
  ShopTopListViewItemDraw_o *v91; // x0
  const MethodInfo *v92; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v97; // x3
  BalanceConfig_c *v98; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v100; // w22
  int StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v102; // x21
  Il2CppObject *v103; // x0
  int v104; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8B96 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&BalanceConfig_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__, v15);
    sub_1B640C8(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, v17);
    sub_1B640C8(&StringLiteral_12009/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v18);
    sub_1B640C8(&StringLiteral_12008/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v19);
    byte_49F8B96 = 1;
  }
  v20 = sub_1B64314(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_97;
  *(_QWORD *)(v20 + 16) = item;
  v24 = (ShopTopListViewItem_o **)(v20 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)item, v22, v23);
  *(_QWORD *)(v20 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v24 )
    goto LABEL_97;
  shopListNotice = (*v24)->fields.shopListNotice;
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
          v28);
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
          v28);
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
          v28);
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
          v28);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v30,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v31);
        break;
      default:
        break;
    }
  }
  if ( !*v24 )
    goto LABEL_97;
  v36 = (*v24)->fields.shopListNotice;
  v37 = v36 && v36->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v37,
    v27);
  if ( !*v24 )
    goto LABEL_97;
  v39 = (*v24)->fields.shopListNotice;
  if ( v39 )
    LODWORD(v39) = v39->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v39 == 1,
    v38);
  if ( !*v24 )
    goto LABEL_97;
  v41 = (*v24)->fields.shopListNotice;
  if ( v41 )
    LODWORD(v41) = v41->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v41 == 2,
    v40);
  if ( !*v24 )
    goto LABEL_97;
  v43 = (*v24)->fields.shopListNotice;
  if ( v43 )
    LODWORD(v43) = v43->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v43 == 3,
    v42);
  if ( !*v24 )
    goto LABEL_97;
  v45 = (*v24)->fields.shopListNotice;
  if ( v45 && v45->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v20 + 32) = Component_object;
    v47 = (UnityEngine_Object_o **)(v20 + 32);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)Component_object, v48, v49);
    v50 = *(UnityEngine_Object_o **)(v20 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v47 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v47)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantDefaultAtlas,
          (int32_t)monitor,
          v52,
          v53);
        if ( !*v47 )
          goto LABEL_97;
        v57 = *(struct System_String_o **)&(*v47)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = v57;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int32_t)v57,
          v55,
          v56);
      }
    }
    v58 = *v47;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v20,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v61, 1, 0LL);
    }
  }
  if ( !*v24 )
    goto LABEL_97;
  v62 = (*v24)->fields.shopListNotice;
  if ( v62 )
    LODWORD(v62) = v62->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v62 == 1,
    v44);
  if ( !*v24 )
    goto LABEL_97;
  v64 = (*v24)->fields.shopListNotice;
  if ( v64 )
    LODWORD(v64) = v64->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v64 == 2,
    v63);
  if ( !*v24 )
    goto LABEL_97;
  v66 = (*v24)->fields.shopListNotice;
  if ( v66 )
    LODWORD(v66) = v66->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v66 == 3,
    v65);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v24,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v67);
  if ( !*v24 )
    goto LABEL_97;
  v69 = (*v24)->fields.shopListNotice;
  v70 = v69 ? v69->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v70,
    v68);
  if ( !*v24 )
    goto LABEL_97;
  v72 = (*v24)->fields.shopListNotice;
  v73 = v72 ? v72->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v73,
    v71);
  if ( !*v24 )
    goto LABEL_97;
  v75 = (*v24)->fields.shopListNotice;
  v76 = v75 ? v75->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v76,
    v74);
  if ( !*v24 )
    goto LABEL_97;
  v78 = (*v24)->fields.shopListNotice;
  if ( v78 )
    LOBYTE(v78) = v78->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v78 != 1,
    v77);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v80, periodRemainTimeLabel, (System_String_o *)v80, v81);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v83 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v83, monthlyRemainTimeLabel, (System_String_o *)v83, v84);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v86 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v86, exchangeServantRemainTimeLabel, (System_String_o *)v86, v87);
  if ( !*v24 )
    goto LABEL_97;
  v89 = (*v24)->fields.shopListNotice;
  v90 = !v89 || !v89->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v90,
    v88);
  ShopTopListViewItemDraw__SetObjectActive(v91, this->fields.exchangeStoneFragmentsRoot, 0, v92);
  if ( !*v24 )
    goto LABEL_97;
  info = (*v24)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v97);
  v98 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v98 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v100 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v98->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v100 <= StoneFragmentExchangeNoticeDispMax )
  {
    v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12008/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
    v104 = v100;
    v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v102, v103, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12009/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0LL )
  {
LABEL_97:
    sub_1B64324(gameObject);
  }
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0

  if ( (byte_49F8B97 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
    byte_49F8B97 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v6 = this->fields.baseButton;
    if ( !v6 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v6->klass->vtable._14_SetState.method)(
      v6,
      (unsigned int)state,
      1LL,
      v6->klass->vtable._15_OnPress.methodPtr);
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
  ShopTopListViewItemDraw_o *v19; // x22
  Il2CppObject *v20; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v22; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v24; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v26; // x4
  ShopTopListViewItemDraw_o *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v31; // x20
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_49F8B95 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_10661/*"PreLabel"*/, v6);
    sub_1B640C8(&StringLiteral_14377/*"TimeLabel"*/, v7);
    sub_1B640C8(&StringLiteral_15222/*"ValueLabel"*/, v8);
    sub_1B640C8(&StringLiteral_3598/*"COIN_ROOM_CLOSED_MESSAGE"*/, v9);
    sub_1B640C8(&StringLiteral_7553/*"InfoLabel"*/, v10);
    sub_1B640C8(&StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, v11);
    sub_1B640C8(&StringLiteral_444/*"#6B6B6B"*/, v12);
    sub_1B640C8(&StringLiteral_10553/*"PeriodTimeRoot"*/, v13);
    sub_1B640C8(&StringLiteral_3596/*"COIN_ROOM_BANNER_INFO"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_1B640C8(&StringLiteral_10662/*"PreLabelRoot"*/, v15);
    byte_49F8B95 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_444/*"#6B6B6B"*/,
                                          &color,
                                          0LL);
    baseButton = (UnityEngine_Color_o *)v2->fields.baseButton;
    if ( baseButton )
    {
      baseButton[3] = color;
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
                       (System_String_o *)StringLiteral_10662/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10661/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v31 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3598/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v31 )
            {
              UILabel__set_text(v31, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v17 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10553/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_7553/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v17 )
    goto LABEL_29;
  v18 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3596/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_29;
  v19 = this;
  if ( !System_String__Equals_61383712((System_String_o *)this, (System_String_o *)StringLiteral_3596/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v32 = CoinRoomUtility__MonthRemainingNum(0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v19, v20, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)this, 0LL);
      goto LABEL_15;
    }
LABEL_29:
    sub_1B64324(this);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_14377/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_15222/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  v22 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v24 = (UILabel_o *)v22;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v24, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v26);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v27, (UILabel_o *)Component_object, (System_String_o *)v27, v28);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int64_t IsNullOrEmpty; // x0
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v22; // x8
  int32_t State_k__BackingField; // w9
  char v24; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v27; // x1
  UILabel_o *infoTextLabel; // x23
  System_String_o *v29; // x1
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v31; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v36; // x2
  UILabel_o *v37; // x22
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *v39; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v41; // x3
  struct ShopTopItemInfo_o *v42; // x8
  bool v43; // w22
  ShopTopListViewItemDraw_o *v44; // x0
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  int32_t v47; // w3
  struct ShopTopItemInfo_o *v48; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v52; // x21
  const MethodInfo *v53; // x1
  struct ShopTopItemInfo_o *v54; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v56; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v58; // x0
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v62; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v64; // x23
  System_String_o *v65; // x24

  v8 = this;
  if ( (byte_49F8B93 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMaster_BankShopMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&string_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_23182/*"shopmeu_notice_bg"*/, v14);
    sub_1B640C8(&StringLiteral_12234/*"STONE_SHOP_BANNER_INFO"*/, v15);
    sub_1B640C8(&StringLiteral_20006/*"icon_balloon_blue"*/, v16);
    sub_1B640C8(&StringLiteral_11951/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v17);
    sub_1B640C8(&StringLiteral_20362/*"img_shop_0"*/, v18);
    this = (ShopTopListViewItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49F8B93 = 1;
  }
  if ( item )
  {
    ShopTopListViewItemDraw__SetSpriteActive(this, v8->fields.rangeSprite, mode == 0, (const MethodInfo *)manager);
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_78;
      IsNullOrEmpty = System_String__IsNullOrEmpty(info->fields._ImageName_k__BackingField, 0LL);
      v22 = item->fields.info;
      if ( !v22 )
        goto LABEL_78;
      State_k__BackingField = v22->fields._State_k__BackingField;
      v24 = IsNullOrEmpty;
      switch ( State_k__BackingField )
      {
        case 15:
        case 18:
        case 19:
        case 20:
          baseImageSprite = v8->fields.baseImageSprite;
          ImageName_k__BackingField = v22->fields._ImageName_k__BackingField;
          goto LABEL_9;
        case 17:
          v64 = v8->fields.baseImageSprite;
          v65 = v22->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v64, v65, 0LL);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v22->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 21 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            IsNullOrEmpty = AtlasManager__SetShopBanner_37546252(baseImageSprite, ImageName_k__BackingField, 0LL);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20362/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
          }
LABEL_12:
          infoTextLabel = v8->fields.infoTextLabel;
          if ( (v24 & 1) != 0 )
          {
            IsNullOrEmpty = (int64_t)ShopTopListViewItem__get_InfoText(item, v27);
            v29 = (System_String_o *)IsNullOrEmpty;
          }
          else
          {
            v29 = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( !infoTextLabel )
            goto LABEL_78;
          UILabel__set_text(infoTextLabel, v29, 0LL);
          periodBase = v8->fields.periodBase;
          IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v31);
          ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v33);
          ShopTopListViewItemDraw__SetInput(v8, item, v34);
          textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNullOrEmpty = UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v37 = v8->fields.textOnMask;
            if ( item->fields._IsUse_k__BackingField )
            {
              Empty = string_TypeInfo->static_fields->Empty;
              if ( !v37 )
                goto LABEL_78;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v37 )
                goto LABEL_78;
            }
            UILabel__set_text(v37, Empty, 0LL);
          }
          v39 = item->fields.info;
          if ( !v39 )
            goto LABEL_78;
          if ( v39->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_37546252(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20006/*"icon_balloon_blue"*/,
              0LL);
            IsNullOrEmpty = (int64_t)v8->fields.exchangeStoneFragmentsSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
              IsNullOrEmpty,
              *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
            AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0LL);
          }
          ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v36);
          v42 = item->fields.info;
          if ( !v42 )
            goto LABEL_78;
          v43 = v42->fields._State_k__BackingField == 16;
          ShopTopListViewItemDraw__SetObjectActive(
            (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
            v8->fields.startUpSummonSprite,
            v43,
            v41);
          ShopTopListViewItemDraw__SetObjectActive(v44, v8->fields.startUpSummonLimitedBase, v43, v45);
          v48 = item->fields.info;
          if ( !v48 )
            goto LABEL_78;
          if ( v48->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.coinRoomListItem, (int32_t)item, v46, v47);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v50);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                         (UnityEngine_MonoBehaviour_o *)v8,
                                         CoinRoomAsset,
                                         0LL);
            }
            else
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
              ShopTopListViewItemDraw__SetCoinRoom(v8, v53);
            }
          }
          else
          {
            v52 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
            }
          }
          v54 = item->fields.info;
          if ( !v54 )
            goto LABEL_78;
          if ( v54->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0LL, 0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0LL);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v56 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0LL);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v58 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12234/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0LL);
                    ShopTopListViewItemDraw__SetLabelText(v58, spBankPeriodInfoLabel, (System_String_o *)v58, v59);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v56,
                      v60);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_37546252(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23182/*"shopmeu_notice_bg"*/,
                      0LL);
                    return;
                  }
                  IsNullOrEmpty = (int64_t)v8->fields.spBankPeriodTimeRoot;
LABEL_65:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
                  return;
                }
              }
LABEL_78:
              sub_1B64324(IsNullOrEmpty);
            }
          }
          v62 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
          {
            IsNullOrEmpty = (int64_t)v8->fields.spBankPeriodTimeRoot;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            goto LABEL_65;
          }
          break;
      }
    }
  }
}


void __fastcall ShopTopListViewItemDraw__SetLabelActive(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8B9A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8B9A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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

  if ( (byte_49F8B9B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8B9B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B64324(v6);
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

  if ( (byte_49F8B98 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, go);
    byte_49F8B98 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_1B64324(v6);
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
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_49F8B9D & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, label);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&ShopNoticeRemainTimeLabel_TypeInfo, v10);
    byte_49F8B9D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1LL, 0LL);
    if ( !label
      || (UILabel__set_text(label, RestTime5, 0LL), !shopNoticeRemainTimeLabel)
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1B64314(
                                                                       ShopNoticeRemainTimeLabel_TypeInfo,
                                                                       v12,
                                                                       v13),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1B64324(RestTime5);
    }
    shopNoticeRemainTimeLabel->fields.timeLimit = timeLimit;
    ShopNoticeRemainTimeLabel__Start(shopNoticeRemainTimeLabel, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8

  if ( (byte_49F8B9E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49F8B9E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0LL, 0LL);
  if ( labels && objects && ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_18;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeTween,
      (int32_t)ShopNoticeTween_k__BackingField,
      v12,
      v13);
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
            0LL);
          v11 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v11 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v11, 0, 0LL);
            return;
          }
        }
LABEL_18:
        sub_1B64324(v11);
      }
    }
    v11 = item->fields._ShopNoticeTween_k__BackingField;
    if ( !v11 )
      goto LABEL_18;
    ShopNoticeTween__RemoveTargets(
      v11,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      0LL);
  }
}


void __fastcall ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8B99 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49F8B99 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8

  if ( (byte_49F8B9C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, objects);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49F8B9C = 1;
  }
  if ( !*objects )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         objects,
                                                         period);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)objects, (int32_t)v13, v14, v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v18 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v18->fields._items;
      v20 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)period,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v22[4] = (Il2CppClass *)period;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)period, v16, v17);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v18 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v25 = v18->fields._items;
      v26 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v18->fields._version;
      if ( !v25 )
        goto LABEL_29;
      v27 = v18->fields._size;
      if ( (unsigned int)v27 >= v25->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)monthly,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v25->obj.klass + v27;
        v18->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)monthly;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)monthly, v23, v24);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v18 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v31 = v18->fields._items;
        v32 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v18->fields._version;
        if ( v31 )
        {
          v33 = v18->fields._size;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &v31->obj.klass + v33;
            v18->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)exchangeServant;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)exchangeServant, v29, v30);
          }
          return;
        }
      }
LABEL_29:
      sub_1B64324(v18);
    }
  }
}


void __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49___ctor(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__MoveNext(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v4; // x20
  __int64 v5; // x1
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x20

  v4 = this;
  if ( (byte_49F8BA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1B640C8(&StringLiteral_4535/*"CoinRoomBanner"*/, v5);
    byte_49F8BA0 = 1;
  }
  if ( v4->fields.__1__state >= 2u )
    return 0;
  manager = v4->fields.manager;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1B64324(this);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__48347676(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4535/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( _4__this )
    {
      v9 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v9,
                   transform,
                   0LL,
                   0LL);
        _4__this->fields.coinRoomObject = Object;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.coinRoomObject, (int32_t)Object, v12, v13);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v14);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_IEnumerator_Reset(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_IEnumerator_get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_IDisposable_Dispose(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopTopListViewItemDraw___c__DisplayClass52_0___ctor(
        ShopTopListViewItemDraw___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopTopListViewItemDraw___c__DisplayClass52_0___ResetShopListNotice_b__0(
        ShopTopListViewItemDraw___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  ShopTopListViewItemDraw___c__DisplayClass52_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v11; // x8
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49F8B9F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1B640C8(&StringLiteral_20097/*"icon_servant_exchange_available_{0}"*/, v4);
    byte_49F8B9F = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v2->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v12 = (int)shopListNotice;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v9 = System_String__Format((System_String_o *)StringLiteral_20097/*"icon_servant_exchange_available_{0}"*/, v8, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v9, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v2->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v11 = v2->fields.__4__this;
        if ( v11 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v11->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(this);
  }
}