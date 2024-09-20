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

  if ( (byte_4A57862 & 1) == 0 )
  {
    sub_1B885B0(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
    byte_4A57862 = 1;
  }
  v5 = sub_1B887FC(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)manager, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_BED8A0[initMode - 1];
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
  __int64 v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ShopTopListViewItem_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v22; // x8
  bool v23; // w2
  const MethodInfo *v24; // x3
  struct ShopListNotice_o *v25; // x8
  const MethodInfo *v26; // x3
  struct ShopListNotice_o *v27; // x8
  const MethodInfo *v28; // x3
  struct ShopListNotice_o *v29; // x8
  const MethodInfo *v30; // x3
  struct ShopListNotice_o *v31; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Object_o *v36; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  struct UIAtlas_o *monitor; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_String_o *v43; // x1
  UnityEngine_Object_o *v44; // x22
  System_Action_o *v45; // x22
  struct ShopListNotice_o *v46; // x8
  const MethodInfo *v47; // x3
  struct ShopListNotice_o *v48; // x8
  const MethodInfo *v49; // x3
  struct ShopListNotice_o *v50; // x8
  const MethodInfo *v51; // x5
  const MethodInfo *v52; // x4
  struct ShopListNotice_o *v53; // x8
  int64_t v54; // x3
  const MethodInfo *v55; // x4
  struct ShopListNotice_o *v56; // x8
  int64_t v57; // x3
  const MethodInfo *v58; // x4
  struct ShopListNotice_o *v59; // x8
  int64_t v60; // x3
  const MethodInfo *v61; // x3
  struct ShopListNotice_o *v62; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v64; // x0
  const MethodInfo *v65; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  struct ShopListNotice_o *v73; // x8
  bool v74; // w2
  ShopTopListViewItemDraw_o *v75; // x0
  const MethodInfo *v76; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v81; // x3
  BalanceConfig_c *v82; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v84; // w22
  int StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  int v91; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A57864 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__);
    sub_1B885B0(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
    sub_1B885B0(&StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1B885B0(&StringLiteral_12064/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/);
    sub_1B885B0(&StringLiteral_12063/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/);
    byte_4A57864 = 1;
  }
  v5 = sub_1B887FC(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_97;
  *(_QWORD *)(v5 + 16) = item;
  v10 = (ShopTopListViewItem_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)item, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v10 )
    goto LABEL_97;
  shopListNotice = (*v10)->fields.shopListNotice;
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
          v14);
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
          v14);
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
          v14);
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
          v14);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v16,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v17);
        break;
      default:
        break;
    }
  }
  if ( !*v10 )
    goto LABEL_97;
  v22 = (*v10)->fields.shopListNotice;
  v23 = v22 && v22->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v23,
    v13);
  if ( !*v10 )
    goto LABEL_97;
  v25 = (*v10)->fields.shopListNotice;
  if ( v25 )
    LODWORD(v25) = v25->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v25 == 1,
    v24);
  if ( !*v10 )
    goto LABEL_97;
  v27 = (*v10)->fields.shopListNotice;
  if ( v27 )
    LODWORD(v27) = v27->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v27 == 2,
    v26);
  if ( !*v10 )
    goto LABEL_97;
  v29 = (*v10)->fields.shopListNotice;
  if ( v29 )
    LODWORD(v29) = v29->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v29 == 3,
    v28);
  if ( !*v10 )
    goto LABEL_97;
  v31 = (*v10)->fields.shopListNotice;
  if ( v31 && v31->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v5 + 32) = Component_object;
    v33 = (UnityEngine_Object_o **)(v5 + 32);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)Component_object, v34, v35);
    v36 = *(UnityEngine_Object_o **)(v5 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v33 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v33)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantDefaultAtlas,
          (int32_t)monitor,
          v38,
          v39);
        if ( !*v33 )
          goto LABEL_97;
        v43 = *(struct System_String_o **)&(*v33)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = v43;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int32_t)v43,
          v41,
          v42);
      }
    }
    v44 = *v33;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v5,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v45, 1, 0LL);
    }
  }
  if ( !*v10 )
    goto LABEL_97;
  v46 = (*v10)->fields.shopListNotice;
  if ( v46 )
    LODWORD(v46) = v46->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v46 == 1,
    v30);
  if ( !*v10 )
    goto LABEL_97;
  v48 = (*v10)->fields.shopListNotice;
  if ( v48 )
    LODWORD(v48) = v48->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v48 == 2,
    v47);
  if ( !*v10 )
    goto LABEL_97;
  v50 = (*v10)->fields.shopListNotice;
  if ( v50 )
    LODWORD(v50) = v50->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v50 == 3,
    v49);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v10,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v51);
  if ( !*v10 )
    goto LABEL_97;
  v53 = (*v10)->fields.shopListNotice;
  v54 = v53 ? v53->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v54,
    v52);
  if ( !*v10 )
    goto LABEL_97;
  v56 = (*v10)->fields.shopListNotice;
  v57 = v56 ? v56->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v57,
    v55);
  if ( !*v10 )
    goto LABEL_97;
  v59 = (*v10)->fields.shopListNotice;
  v60 = v59 ? v59->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v60,
    v58);
  if ( !*v10 )
    goto LABEL_97;
  v62 = (*v10)->fields.shopListNotice;
  if ( v62 )
    LOBYTE(v62) = v62->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v62 != 1,
    v61);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v64, periodRemainTimeLabel, (System_String_o *)v64, v65);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v67 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v67, monthlyRemainTimeLabel, (System_String_o *)v67, v68);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v70 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v70, exchangeServantRemainTimeLabel, (System_String_o *)v70, v71);
  if ( !*v10 )
    goto LABEL_97;
  v73 = (*v10)->fields.shopListNotice;
  v74 = !v73 || !v73->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v74,
    v72);
  ShopTopListViewItemDraw__SetObjectActive(v75, this->fields.exchangeStoneFragmentsRoot, 0, v76);
  if ( !*v10 )
    goto LABEL_97;
  info = (*v10)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v81);
  v82 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v82 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v84 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v82->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v84 <= StoneFragmentExchangeNoticeDispMax )
  {
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
    v91 = v84;
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v87, v88, v89);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v86, v90, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0LL )
  {
LABEL_97:
    sub_1B8880C(gameObject, v7);
  }
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

  if ( (byte_4A57865 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57865 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  ShopTopListViewItemDraw_o *v6; // x22
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v14; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v16; // x4
  ShopTopListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v21; // x20
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4A57863 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10713/*"PreLabel"*/);
    sub_1B885B0(&StringLiteral_14447/*"TimeLabel"*/);
    sub_1B885B0(&StringLiteral_15291/*"ValueLabel"*/);
    sub_1B885B0(&StringLiteral_3620/*"COIN_ROOM_CLOSED_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_7587/*"InfoLabel"*/);
    sub_1B885B0(&StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1B885B0(&StringLiteral_443/*"#6B6B6B"*/);
    sub_1B885B0(&StringLiteral_10603/*"PeriodTimeRoot"*/);
    sub_1B885B0(&StringLiteral_3618/*"COIN_ROOM_BANNER_INFO"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1B885B0(&StringLiteral_10714/*"PreLabelRoot"*/);
    byte_4A57863 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_443/*"#6B6B6B"*/,
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
                       (System_String_o *)StringLiteral_10714/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10713/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v21 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3620/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v21 )
            {
              UILabel__set_text(v21, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v4 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10603/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_7587/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v4 )
    goto LABEL_29;
  v5 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v4, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3618/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_29;
  v6 = this;
  if ( !System_String__Equals_61715348((System_String_o *)this, (System_String_o *)StringLiteral_3618/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v22 = CoinRoomUtility__MonthRemainingNum(0LL);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v7, v8, v9);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v6, v10, 0LL);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)this, 0LL);
      goto LABEL_15;
    }
LABEL_29:
    sub_1B8880C(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_14447/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15291/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v14 = (UILabel_o *)v12;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v14, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v17, (UILabel_o *)Component_object, (System_String_o *)v17, v18);
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
  int64_t IsNullOrEmpty; // x0
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
  bool v31; // w22
  ShopTopListViewItemDraw_o *v32; // x0
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  struct ShopTopItemInfo_o *v36; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v40; // x21
  const MethodInfo *v41; // x1
  struct ShopTopItemInfo_o *v42; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v44; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v46; // x0
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v50; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v52; // x23
  System_String_o *v53; // x24

  v8 = this;
  if ( (byte_4A57861 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_23278/*"shopmeu_notice_bg"*/);
    sub_1B885B0(&StringLiteral_12289/*"STONE_SHOP_BANNER_INFO"*/);
    sub_1B885B0(&StringLiteral_20085/*"icon_balloon_blue"*/);
    sub_1B885B0(&StringLiteral_12006/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1B885B0(&StringLiteral_20443/*"img_shop_0"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57861 = 1;
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
      v12 = item->fields.info;
      if ( !v12 )
        goto LABEL_78;
      State_k__BackingField = v12->fields._State_k__BackingField;
      v14 = IsNullOrEmpty;
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
          v52 = v8->fields.baseImageSprite;
          v53 = v12->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v52, v53, 0LL);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v12->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 21 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            IsNullOrEmpty = AtlasManager__SetShopBanner_37860916(baseImageSprite, ImageName_k__BackingField, 0LL);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20443/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
          }
LABEL_12:
          infoTextLabel = v8->fields.infoTextLabel;
          if ( (v14 & 1) != 0 )
          {
            IsNullOrEmpty = (int64_t)ShopTopListViewItem__get_InfoText(item, v17);
            Empty = (System_String_o *)IsNullOrEmpty;
          }
          else
          {
            Empty = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( !infoTextLabel )
            goto LABEL_78;
          UILabel__set_text(infoTextLabel, Empty, 0LL);
          periodBase = v8->fields.periodBase;
          IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v20);
          ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v22);
          ShopTopListViewItemDraw__SetInput(v8, item, v23);
          textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNullOrEmpty = UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v26 = v8->fields.textOnMask;
            if ( item->fields._IsUse_k__BackingField )
            {
              Empty = string_TypeInfo->static_fields->Empty;
              if ( !v26 )
                goto LABEL_78;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v26 )
                goto LABEL_78;
            }
            UILabel__set_text(v26, Empty, 0LL);
          }
          v27 = item->fields.info;
          if ( !v27 )
            goto LABEL_78;
          if ( v27->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_37860916(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20085/*"icon_balloon_blue"*/,
              0LL);
            IsNullOrEmpty = (int64_t)v8->fields.exchangeStoneFragmentsSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
              IsNullOrEmpty,
              *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
            AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0LL);
          }
          ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v25);
          v30 = item->fields.info;
          if ( !v30 )
            goto LABEL_78;
          v31 = v30->fields._State_k__BackingField == 16;
          ShopTopListViewItemDraw__SetObjectActive(
            (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
            v8->fields.startUpSummonSprite,
            v31,
            v29);
          ShopTopListViewItemDraw__SetObjectActive(v32, v8->fields.startUpSummonLimitedBase, v31, v33);
          v36 = item->fields.info;
          if ( !v36 )
            goto LABEL_78;
          if ( v36->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.coinRoomListItem, (int32_t)item, v34, v35);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v38);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
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
              ShopTopListViewItemDraw__SetCoinRoom(v8, v41);
            }
          }
          else
          {
            v40 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
            }
          }
          v42 = item->fields.info;
          if ( !v42 )
            goto LABEL_78;
          if ( v42->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0LL, 0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0LL);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v44 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0LL);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v46 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12289/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0LL);
                    ShopTopListViewItemDraw__SetLabelText(v46, spBankPeriodInfoLabel, (System_String_o *)v46, v47);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v44,
                      v48);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_37860916(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23278/*"shopmeu_notice_bg"*/,
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
              sub_1B8880C(IsNullOrEmpty, Empty);
            }
          }
          v50 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
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
  __int64 v7; // x1

  if ( (byte_4A57868 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57868 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A57869 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57869 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A57866 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57866 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_1B8880C(v6, v7);
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
  __int64 v10; // x1

  if ( (byte_4A5786B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_4A5786B = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1B887FC(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1B8880C(RestTime5, v10);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8

  if ( (byte_4A5786C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5786C = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeTween,
      (int32_t)ShopNoticeTween_k__BackingField,
      v13,
      v14);
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
        sub_1B8880C(v11, v12);
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
  __int64 v7; // x1

  if ( (byte_4A57867 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57867 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *v16; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x8

  if ( (byte_4A5786A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5786A = 1;
  }
  if ( !*objects )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)objects, (int32_t)v10, v11, v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v16 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v16->fields._items;
      v18 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)period,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v20[4] = (Il2CppClass *)period;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)period, v14, v15);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v16 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v23 = v16->fields._items;
      v24 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v16->fields._version;
      if ( !v23 )
        goto LABEL_29;
      v25 = v16->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)monthly,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + v25;
        v16->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)monthly;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)monthly, v21, v22);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v16 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v29 = v16->fields._items;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v16->fields._version;
        if ( v29 )
        {
          v31 = v16->fields._size;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &v29->obj.klass + v31;
            v16->fields._size = v31 + 1;
            v32[4] = (Il2CppClass *)exchangeServant;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)exchangeServant, v27, v28);
          }
          return;
        }
      }
LABEL_29:
      sub_1B8880C(v16, v13);
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
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x20

  v4 = this;
  if ( (byte_4A5786E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1B885B0(&StringLiteral_4558/*"CoinRoomBanner"*/);
    byte_4A5786E = 1;
  }
  if ( v4->fields.__1__state >= 2u )
    return 0;
  manager = v4->fields.manager;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1B8880C(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__48635516(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4558/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( _4__this )
    {
      v8 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v8,
                   transform,
                   0LL,
                   0LL);
        _4__this->fields.coinRoomObject = Object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.coinRoomObject, (int32_t)Object, v11, v12);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v13);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, 0, v2, v3);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ShopTopListViewItemDraw___c__DisplayClass52_0_o *v5; // x19
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v12; // x8
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4A5786D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1B885B0(&StringLiteral_20177/*"icon_servant_exchange_available_{0}"*/);
    byte_4A5786D = 1;
  }
  item = v5->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v5->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v13 = (int)shopListNotice;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_20177/*"icon_servant_exchange_available_{0}"*/, v9, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v10, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v5->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v5->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v12 = v5->fields.__4__this;
        if ( v12 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v5->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v12->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(this, method);
  }
}