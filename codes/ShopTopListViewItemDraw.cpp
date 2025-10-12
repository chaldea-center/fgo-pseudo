void ShopTopListViewItemDraw___ctor(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ShopTopListViewItemDraw__Awake(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *ShopTopListViewItemDraw__CreateCoinRoomAsset(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C33D0F & 1) == 0 )
  {
    sub_1C32C20(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
    byte_4C33D0F = 1;
  }
  v5 = sub_1C32E6C(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)manager, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_C4546C[initMode - 1];
}


void ShopTopListViewItemDraw__OnDestroy(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ShopNoticeTween_o *shopNoticeTween; // x0

  shopNoticeTween = this->fields.shopNoticeTween;
  if ( shopNoticeTween )
    ShopNoticeTween__RemoveTargets(
      shopNoticeTween,
      this->fields.limitedNoticeRoot,
      this->fields.switchingObjects,
      this->fields.switchingLabels,
      0);
}


void ShopTopListViewItemDraw__ResetShopListNotice(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ShopTopListViewItem_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v21; // x8
  bool v22; // w2
  const MethodInfo *v23; // x3
  struct ShopListNotice_o *v24; // x8
  const MethodInfo *v25; // x3
  struct ShopListNotice_o *v26; // x8
  const MethodInfo *v27; // x3
  struct ShopListNotice_o *v28; // x8
  const MethodInfo *v29; // x3
  struct ShopListNotice_o *v30; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UIAtlas_o *monitor; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_String_o *m_CachedPtr; // x1
  UnityEngine_Object_o *v43; // x22
  System_Action_o *v44; // x22
  struct ShopListNotice_o *v45; // x8
  const MethodInfo *v46; // x3
  struct ShopListNotice_o *v47; // x8
  const MethodInfo *v48; // x3
  struct ShopListNotice_o *v49; // x8
  const MethodInfo *v50; // x5
  const MethodInfo *v51; // x4
  struct ShopListNotice_o *v52; // x8
  int64_t v53; // x3
  const MethodInfo *v54; // x4
  struct ShopListNotice_o *v55; // x8
  int64_t v56; // x3
  const MethodInfo *v57; // x4
  struct ShopListNotice_o *v58; // x8
  int64_t v59; // x3
  const MethodInfo *v60; // x3
  struct ShopListNotice_o *v61; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v63; // x0
  const MethodInfo *v64; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v66; // x0
  const MethodInfo *v67; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v69; // x0
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  struct ShopListNotice_o *v72; // x8
  bool v73; // w2
  ShopTopListViewItemDraw_o *v74; // x0
  const MethodInfo *v75; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v80; // x3
  BalanceConfig_c *v81; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v83; // w22
  int32_t StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 v89; // x5
  __int64 v90; // x6
  __int64 v91; // x7
  Il2CppObject *v92; // x0
  int v93; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C33D11 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__);
    sub_1C32C20(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
    sub_1C32C20(&StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1C32C20(&StringLiteral_12132/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/);
    sub_1C32C20(&StringLiteral_12131/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/);
    byte_4C33D11 = 1;
  }
  v5 = sub_1C32E6C(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_97;
  *(_QWORD *)(v5 + 16) = item;
  v9 = (ShopTopListViewItem_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)item, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v9 )
    goto LABEL_97;
  shopListNotice = (*v9)->fields.shopListNotice;
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
          0,
          v13);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        exchangeServantRemainTimeRoot = 0;
        goto LABEL_13;
      case 0xA:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          0,
          this->fields.exchangeServantLimitedSprite,
          v13);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        monthlyRemainTimeRoot = 0;
        goto LABEL_13;
      case 0xC:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          0,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v13);
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
        periodRemainTimeRoot = 0;
        goto LABEL_13;
      case 0xE:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          (ShopTopListViewItemDraw_o *)gameObject,
          &this->fields.switchingObjects,
          this->fields.periodLimitedSprite,
          this->fields.monthlyLimitedSprite,
          this->fields.exchangeServantLimitedSprite,
          v13);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v15,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v16);
        break;
      default:
        break;
    }
  }
  if ( !*v9 )
    goto LABEL_97;
  v21 = (*v9)->fields.shopListNotice;
  v22 = v21 && v21->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v22,
    v12);
  if ( !*v9 )
    goto LABEL_97;
  v24 = (*v9)->fields.shopListNotice;
  if ( v24 )
    LODWORD(v24) = v24->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v24 == 1,
    v23);
  if ( !*v9 )
    goto LABEL_97;
  v26 = (*v9)->fields.shopListNotice;
  if ( v26 )
    LODWORD(v26) = v26->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v26 == 2,
    v25);
  if ( !*v9 )
    goto LABEL_97;
  v28 = (*v9)->fields.shopListNotice;
  if ( v28 )
    LODWORD(v28) = v28->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v28 == 3,
    v27);
  if ( !*v9 )
    goto LABEL_97;
  v30 = (*v9)->fields.shopListNotice;
  if ( v30 && v30->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v5 + 32) = Component_object;
    v32 = (UnityEngine_Object_o **)(v5 + 32);
    sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)Component_object, v33, v34);
    v35 = *(UnityEngine_Object_o **)(v5 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v32 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v32)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exchangeServantDefaultAtlas, (int32_t)monitor, v37, v38);
        if ( !*v32 )
          goto LABEL_97;
        m_CachedPtr = (struct System_String_o *)(*v32)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = m_CachedPtr;
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int32_t)m_CachedPtr,
          v40,
          v41);
      }
    }
    v43 = *v32;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v44 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v5,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v44, 1, 0);
    }
  }
  if ( !*v9 )
    goto LABEL_97;
  v45 = (*v9)->fields.shopListNotice;
  if ( v45 )
    LODWORD(v45) = v45->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v45 == 1,
    v29);
  if ( !*v9 )
    goto LABEL_97;
  v47 = (*v9)->fields.shopListNotice;
  if ( v47 )
    LODWORD(v47) = v47->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v47 == 2,
    v46);
  if ( !*v9 )
    goto LABEL_97;
  v49 = (*v9)->fields.shopListNotice;
  if ( v49 )
    LODWORD(v49) = v49->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v49 == 3,
    v48);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v9,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v50);
  if ( !*v9 )
    goto LABEL_97;
  v52 = (*v9)->fields.shopListNotice;
  v53 = v52 ? v52->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v53,
    v51);
  if ( !*v9 )
    goto LABEL_97;
  v55 = (*v9)->fields.shopListNotice;
  v56 = v55 ? v55->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v56,
    v54);
  if ( !*v9 )
    goto LABEL_97;
  v58 = (*v9)->fields.shopListNotice;
  v59 = v58 ? v58->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v59,
    v57);
  if ( !*v9 )
    goto LABEL_97;
  v61 = (*v9)->fields.shopListNotice;
  if ( v61 )
    LOBYTE(v61) = v61->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v61 != 1,
    v60);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v63 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v63, periodRemainTimeLabel, (System_String_o *)v63, v64);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v66 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v66, monthlyRemainTimeLabel, (System_String_o *)v66, v67);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v69 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v69, exchangeServantRemainTimeLabel, (System_String_o *)v69, v70);
  if ( !*v9 )
    goto LABEL_97;
  v72 = (*v9)->fields.shopListNotice;
  v73 = !v72 || !v72->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v73,
    v71);
  ShopTopListViewItemDraw__SetObjectActive(v74, this->fields.exchangeStoneFragmentsRoot, 0, v75);
  if ( !*v9 )
    goto LABEL_97;
  info = (*v9)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v80);
  v81 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v81 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v83 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v81->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v83 <= StoneFragmentExchangeNoticeDispMax )
  {
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0);
    v93 = v83;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v86, v87, v88, v89, v90, v91);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v85, v92, 0);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0 )
  {
LABEL_97:
    sub_1C32E7C(gameObject);
  }
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0);
}


void ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0

  if ( (byte_4C33D12 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D12 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    v6 = this->fields.baseButton;
    if ( !v6 )
      sub_1C32E7C(0);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v6->klass->vtable._14_SetState.methodPtr)(
      v6,
      (unsigned int)state,
      1,
      v6->klass->vtable._14_SetState.method);
  }
}


void ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v2; // x19
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v4; // x20
  UILabel_o *v5; // x21
  ShopTopListViewItemDraw_o *v6; // x22
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v15; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v17; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v19; // x4
  ShopTopListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v24; // x20
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4C33D10 & 1) == 0 )
  {
    sub_1C32C20(&CoinRoomUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10713/*"PreLabel"*/);
    sub_1C32C20(&StringLiteral_14469/*"TimeLabel"*/);
    sub_1C32C20(&StringLiteral_15292/*"ValueLabel"*/);
    sub_1C32C20(&StringLiteral_3540/*"COIN_ROOM_CLOSED_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_7644/*"InfoLabel"*/);
    sub_1C32C20(&StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1C32C20(&StringLiteral_412/*"#6B6B6B"*/);
    sub_1C32C20(&StringLiteral_10603/*"PeriodTimeRoot"*/);
    sub_1C32C20(&StringLiteral_3538/*"COIN_ROOM_BANNER_INFO"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1C32C20(&StringLiteral_10714/*"PreLabelRoot"*/);
    byte_4C33D10 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_412/*"#6B6B6B"*/,
                                          &color,
                                          0);
    baseButton = (UnityEngine_Color_o *)v2->fields.baseButton;
    if ( baseButton )
    {
      baseButton[3] = color;
      this = (ShopTopListViewItemDraw_o *)v2->fields.baseButton;
      if ( this )
      {
        ((void (__fastcall *)(ShopTopListViewItemDraw_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          3,
          1,
          this->klass[1]._1.implementedInterfaces);
        GameObject = GameObjectExtensions__FindGameObject(
                       v2->fields.coinRoomObject,
                       (System_String_o *)StringLiteral_10714/*"PreLabelRoot"*/,
                       0);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10713/*"PreLabel"*/,
                                              0);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v24 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3540/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0);
            if ( v24 )
            {
              UILabel__set_text(v24, (System_String_o *)this, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v4 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10603/*"PeriodTimeRoot"*/, 0);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(v4, (System_String_o *)StringLiteral_7644/*"InfoLabel"*/, 0);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v4 )
    goto LABEL_29;
  v5 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v4, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3538/*"COIN_ROOM_BANNER_INFO"*/, 0);
  if ( !this )
    goto LABEL_29;
  v6 = this;
  if ( !System_String__Equals_63553848((System_String_o *)this, (System_String_o *)StringLiteral_3538/*"COIN_ROOM_BANNER_INFO"*/, 0) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v25 = CoinRoomUtility__MonthRemainingNum(0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v7, v8, v9, v10, v11, v12);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v6, v13, 0);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)this, 0);
      goto LABEL_15;
    }
LABEL_29:
    sub_1C32E7C(this);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_14469/*"TimeLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15292/*"ValueLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  v15 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v17 = (UILabel_o *)v15;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v17, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v20, (UILabel_o *)Component_object, (System_String_o *)v20, v21);
}


void ShopTopListViewItemDraw__SetInput(
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


void ShopTopListViewItemDraw__SetItem(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        int32_t mode,
        ShopTopListViewManager_o *manager,
        const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v8; // x19
  int64_t IsNullOrEmpty; // x0
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v11; // x8
  int32_t State_k__BackingField; // w9
  char v13; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v16; // x1
  UILabel_o *infoTextLabel; // x23
  System_String_o *v18; // x1
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v20; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v25; // x2
  UILabel_o *v26; // x22
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *v28; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v30; // x3
  struct ShopTopItemInfo_o *v31; // x8
  bool v32; // w22
  ShopTopListViewItemDraw_o *v33; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct ShopTopItemInfo_o *v37; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v41; // x21
  const MethodInfo *v42; // x1
  struct ShopTopItemInfo_o *v43; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v45; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v51; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v53; // x23
  System_String_o *v54; // x24

  v8 = this;
  if ( (byte_4C33D0E & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_23448/*"shopmeu_notice_bg"*/);
    sub_1C32C20(&StringLiteral_12383/*"STONE_SHOP_BANNER_INFO"*/);
    sub_1C32C20(&StringLiteral_20125/*"icon_balloon_blue"*/);
    sub_1C32C20(&StringLiteral_12066/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1C32C20(&StringLiteral_20550/*"img_shop_0"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33D0E = 1;
  }
  if ( item )
  {
    ShopTopListViewItemDraw__SetSpriteActive(this, v8->fields.rangeSprite, mode == 0, (const MethodInfo *)manager);
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_78;
      IsNullOrEmpty = System_String__IsNullOrEmpty(info->fields._ImageName_k__BackingField, 0);
      v11 = item->fields.info;
      if ( !v11 )
        goto LABEL_78;
      State_k__BackingField = v11->fields._State_k__BackingField;
      v13 = IsNullOrEmpty;
      switch ( State_k__BackingField )
      {
        case 15:
        case 18:
        case 19:
        case 20:
        case 21:
          baseImageSprite = v8->fields.baseImageSprite;
          ImageName_k__BackingField = v11->fields._ImageName_k__BackingField;
          goto LABEL_9;
        case 17:
          v53 = v8->fields.baseImageSprite;
          v54 = v11->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v53, v54, 0);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v11->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 22 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            IsNullOrEmpty = AtlasManager__SetShopBanner_40509152(baseImageSprite, ImageName_k__BackingField, 0);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20550/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0);
          }
LABEL_12:
          infoTextLabel = v8->fields.infoTextLabel;
          if ( (v13 & 1) != 0 )
          {
            IsNullOrEmpty = (int64_t)ShopTopListViewItem__get_InfoText(item, v16);
            v18 = (System_String_o *)IsNullOrEmpty;
          }
          else
          {
            v18 = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( !infoTextLabel )
            goto LABEL_78;
          UILabel__set_text(infoTextLabel, v18, 0);
          periodBase = v8->fields.periodBase;
          IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v20);
          ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v22);
          ShopTopListViewItemDraw__SetInput(v8, item, v23);
          textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNullOrEmpty = UnityEngine_Object__op_Inequality(textOnMask, 0, 0);
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
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v26 )
                goto LABEL_78;
            }
            UILabel__set_text(v26, Empty, 0);
          }
          v28 = item->fields.info;
          if ( !v28 )
            goto LABEL_78;
          if ( v28->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_40509152(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20125/*"icon_balloon_blue"*/,
              0);
            IsNullOrEmpty = (int64_t)v8->fields.exchangeStoneFragmentsSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
              IsNullOrEmpty,
              *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
            AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0);
          }
          ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v25);
          v31 = item->fields.info;
          if ( !v31 )
            goto LABEL_78;
          v32 = v31->fields._State_k__BackingField == 16;
          ShopTopListViewItemDraw__SetObjectActive(
            (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
            v8->fields.startUpSummonSprite,
            v32,
            v30);
          ShopTopListViewItemDraw__SetObjectActive(v33, v8->fields.startUpSummonLimitedBase, v32, v34);
          v37 = item->fields.info;
          if ( !v37 )
            goto LABEL_78;
          if ( v37->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.coinRoomListItem, (int32_t)item, v35, v36);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0, 0) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v39);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                                         (UnityEngine_MonoBehaviour_o *)v8,
                                         CoinRoomAsset,
                                         0);
            }
            else
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
              ShopTopListViewItemDraw__SetCoinRoom(v8, v42);
            }
          }
          else
          {
            v41 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v41, 0, 0);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
            }
          }
          v43 = item->fields.info;
          if ( !v43 )
            goto LABEL_78;
          if ( v43->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0, 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v45 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v47 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12383/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0);
                    ShopTopListViewItemDraw__SetLabelText(v47, spBankPeriodInfoLabel, (System_String_o *)v47, v48);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v45,
                      v49);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_40509152(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23448/*"shopmeu_notice_bg"*/,
                      0);
                    return;
                  }
                  IsNullOrEmpty = (int64_t)v8->fields.spBankPeriodTimeRoot;
LABEL_65:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
                  return;
                }
              }
LABEL_78:
              sub_1C32E7C(IsNullOrEmpty);
            }
          }
          v51 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
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


void ShopTopListViewItemDraw__SetLabelActive(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C33D15 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D15 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C32E7C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopTopListViewItemDraw__SetLabelText(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4C33D16 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D16 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C32E7C(v6);
    UILabel__set_text(label, text, 0);
  }
}


void ShopTopListViewItemDraw__SetObjectActive(
        ShopTopListViewItemDraw_o *this,
        UnityEngine_GameObject_o *go,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4C33D13 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D13 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( !v6 )
  {
    if ( !go )
      sub_1C32E7C(v6);
    UnityEngine_GameObject__SetActive(go, isActive, 0);
  }
}


void ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        ShopNoticeRemainTimeLabel_o *shopNoticeRemainTimeLabel,
        int64_t timeLimit,
        const MethodInfo *method)
{
  System_String_o *RestTime5; // x0

  if ( (byte_4C33D18 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_4C33D18 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1, 0);
    if ( !label
      || (UILabel__set_text(label, RestTime5, 0), !shopNoticeRemainTimeLabel)
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1C32E6C(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1C32E7C(RestTime5);
    }
    ShopNoticeRemainTimeLabel__SetTimeLimit(shopNoticeRemainTimeLabel, timeLimit, 0, 0);
    ShopNoticeRemainTimeLabel__Start(shopNoticeRemainTimeLabel, 0);
  }
}


void ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        UnityEngine_GameObject_o *root,
        System_Collections_Generic_List_GameObject__o *objects,
        System_Collections_Generic_List_GameObject__o *labels,
        const MethodInfo *method)
{
  ShopNoticeTween_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8

  if ( (byte_4C33D19 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D19 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0, 0);
  if ( labels && objects && ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_18;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.shopNoticeTween,
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
            0);
          v11 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v11 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v11, 0, 0);
            return;
          }
        }
LABEL_18:
        sub_1C32E7C(v11);
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
      0);
  }
}


void ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C33D14 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D14 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C32E7C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopTopListViewItemDraw__SetSwitchingObjects(
        ShopTopListViewItemDraw_o *this,
        System_Collections_Generic_List_GameObject__o **objects,
        UnityEngine_GameObject_o *period,
        UnityEngine_GameObject_o *monthly,
        UnityEngine_GameObject_o *exchangeServant,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x8

  if ( (byte_4C33D17 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33D17 = 1;
  }
  if ( !*objects )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v10;
    sub_1C32BC4((CGThumbnailListItem_o *)objects, (int32_t)v10, v11, v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0, 0) )
    {
      v15 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v15->fields._items;
      v17 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)period,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v19[4] = (Il2CppClass *)period;
        sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)period, v13, v14);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0, 0) )
    {
      v15 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v22 = v15->fields._items;
      v23 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( !v22 )
        goto LABEL_29;
      v24 = v15->fields._size;
      if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)monthly,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &v22->obj.klass + v24;
        v15->fields._size = v24 + 1;
        v25[4] = (Il2CppClass *)monthly;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)monthly, v20, v21);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0, 0) )
    {
      v15 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v28 = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v15->fields._version;
        if ( v28 )
        {
          v30 = v15->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v15->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)exchangeServant;
            sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)exchangeServant, v26, v27);
          }
          return;
        }
      }
LABEL_29:
      sub_1C32E7C(v15);
    }
  }
}


void ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49___ctor(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__MoveNext(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v4; // x20
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x20

  v4 = this;
  if ( (byte_4C33D1B & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1C32C20(&StringLiteral_4529/*"CoinRoomBanner"*/);
    byte_4C33D1B = 1;
  }
  if ( v4->fields.__1__state >= 2u )
    return 0;
  manager = v4->fields.manager;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1C32E7C(this);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__51111776(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4529/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( _4__this )
    {
      v8 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v8,
                   transform,
                   0,
                   0);
        _4__this->fields.coinRoomObject = Object;
        sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.coinRoomObject, (int32_t)Object, v11, v12);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v13);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v4->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C32BC4(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_IEnumerator_Reset(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_Collections_IEnumerator_get_Current(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49__System_IDisposable_Dispose(
        ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopTopListViewItemDraw___c__DisplayClass52_0___ctor(
        ShopTopListViewItemDraw___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopTopListViewItemDraw___c__DisplayClass52_0___ResetShopListNotice_b__0(
        ShopTopListViewItemDraw___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  ShopTopListViewItemDraw___c__DisplayClass52_0_o *v8; // x19
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v15; // x8
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C33D1A & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1C32C20(&StringLiteral_20226/*"icon_servant_exchange_available_{0}"*/);
    byte_4C33D1A = 1;
  }
  item = v8->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v8->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v16 = (int)shopListNotice;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4, v5, v6, v7);
  v13 = System_String__Format((System_String_o *)StringLiteral_20226/*"icon_servant_exchange_available_{0}"*/, v12, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v13, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v8->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v8->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0);
        v15 = v8->fields.__4__this;
        if ( v15 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v8->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v15->fields.exchangeServantDefaultSpriteName, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C32E7C(this);
  }
}