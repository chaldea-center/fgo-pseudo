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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B738A & 1) == 0 )
  {
    sub_1B4CF90(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager);
    byte_49B738A = 1;
  }
  v5 = sub_1B4D1DC(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)manager, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_BE2450[initMode - 1];
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
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ShopTopListViewItem_o **v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v37; // x8
  bool v38; // w2
  const MethodInfo *v39; // x3
  struct ShopListNotice_o *v40; // x8
  const MethodInfo *v41; // x3
  struct ShopListNotice_o *v42; // x8
  const MethodInfo *v43; // x3
  struct ShopListNotice_o *v44; // x8
  const MethodInfo *v45; // x3
  struct ShopListNotice_o *v46; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  UnityEngine_Object_o *v51; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct UIAtlas_o *monitor; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_String_o *v58; // x1
  UnityEngine_Object_o *v59; // x22
  System_Action_o *v60; // x22
  struct ShopListNotice_o *v61; // x8
  const MethodInfo *v62; // x3
  struct ShopListNotice_o *v63; // x8
  const MethodInfo *v64; // x3
  struct ShopListNotice_o *v65; // x8
  const MethodInfo *v66; // x5
  const MethodInfo *v67; // x4
  struct ShopListNotice_o *v68; // x8
  int64_t v69; // x3
  const MethodInfo *v70; // x4
  struct ShopListNotice_o *v71; // x8
  int64_t v72; // x3
  const MethodInfo *v73; // x4
  struct ShopListNotice_o *v74; // x8
  int64_t v75; // x3
  const MethodInfo *v76; // x3
  struct ShopListNotice_o *v77; // x8
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v79; // x0
  const MethodInfo *v80; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v82; // x0
  const MethodInfo *v83; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v85; // x0
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x3
  struct ShopListNotice_o *v88; // x8
  bool v89; // w2
  ShopTopListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v96; // x3
  BalanceConfig_c *v97; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v99; // w22
  int StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v101; // x21
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  Il2CppObject *v105; // x0
  int v106; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B738C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, item);
    sub_1B4CF90(&AtlasManager_TypeInfo, v5);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v10);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1B4CF90(&int_TypeInfo, v12);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v14);
    sub_1B4CF90(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__, v15);
    sub_1B4CF90(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, v17);
    sub_1B4CF90(&StringLiteral_11856/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v18);
    sub_1B4CF90(&StringLiteral_11855/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v19);
    byte_49B738C = 1;
  }
  v20 = sub_1B4D1DC(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_97;
  *(_QWORD *)(v20 + 16) = item;
  v25 = (ShopTopListViewItem_o **)(v20 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 16), (int32_t)item, v23, v24);
  *(_QWORD *)(v20 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 24), (int32_t)this, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v25 )
    goto LABEL_97;
  shopListNotice = (*v25)->fields.shopListNotice;
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
          v29);
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
          v29);
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
          v29);
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
          v29);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v31,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v32);
        break;
      default:
        break;
    }
  }
  if ( !*v25 )
    goto LABEL_97;
  v37 = (*v25)->fields.shopListNotice;
  v38 = v37 && v37->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v38,
    v28);
  if ( !*v25 )
    goto LABEL_97;
  v40 = (*v25)->fields.shopListNotice;
  if ( v40 )
    LODWORD(v40) = v40->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v40 == 1,
    v39);
  if ( !*v25 )
    goto LABEL_97;
  v42 = (*v25)->fields.shopListNotice;
  if ( v42 )
    LODWORD(v42) = v42->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v42 == 2,
    v41);
  if ( !*v25 )
    goto LABEL_97;
  v44 = (*v25)->fields.shopListNotice;
  if ( v44 )
    LODWORD(v44) = v44->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v44 == 3,
    v43);
  if ( !*v25 )
    goto LABEL_97;
  v46 = (*v25)->fields.shopListNotice;
  if ( v46 && v46->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v20 + 32) = Component_object;
    v48 = (UnityEngine_Object_o **)(v20 + 32);
    sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 32), (int32_t)Component_object, v49, v50);
    v51 = *(UnityEngine_Object_o **)(v20 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v48 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v48)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.exchangeServantDefaultAtlas, (int32_t)monitor, v53, v54);
        if ( !*v48 )
          goto LABEL_97;
        v58 = *(struct System_String_o **)&(*v48)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = v58;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.exchangeServantDefaultSpriteName, (int32_t)v58, v56, v57);
      }
    }
    v59 = *v48;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v60 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v20,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v60, 1, 0LL);
    }
  }
  if ( !*v25 )
    goto LABEL_97;
  v61 = (*v25)->fields.shopListNotice;
  if ( v61 )
    LODWORD(v61) = v61->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v61 == 1,
    v45);
  if ( !*v25 )
    goto LABEL_97;
  v63 = (*v25)->fields.shopListNotice;
  if ( v63 )
    LODWORD(v63) = v63->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v63 == 2,
    v62);
  if ( !*v25 )
    goto LABEL_97;
  v65 = (*v25)->fields.shopListNotice;
  if ( v65 )
    LODWORD(v65) = v65->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v65 == 3,
    v64);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v25,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v66);
  if ( !*v25 )
    goto LABEL_97;
  v68 = (*v25)->fields.shopListNotice;
  v69 = v68 ? v68->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v69,
    v67);
  if ( !*v25 )
    goto LABEL_97;
  v71 = (*v25)->fields.shopListNotice;
  v72 = v71 ? v71->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v72,
    v70);
  if ( !*v25 )
    goto LABEL_97;
  v74 = (*v25)->fields.shopListNotice;
  v75 = v74 ? v74->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v75,
    v73);
  if ( !*v25 )
    goto LABEL_97;
  v77 = (*v25)->fields.shopListNotice;
  if ( v77 )
    LOBYTE(v77) = v77->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v77 != 1,
    v76);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v79 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v79, periodRemainTimeLabel, (System_String_o *)v79, v80);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v82 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v82, monthlyRemainTimeLabel, (System_String_o *)v82, v83);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v85 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v85, exchangeServantRemainTimeLabel, (System_String_o *)v85, v86);
  if ( !*v25 )
    goto LABEL_97;
  v88 = (*v25)->fields.shopListNotice;
  v89 = !v88 || !v88->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v89,
    v87);
  ShopTopListViewItemDraw__SetObjectActive(v90, this->fields.exchangeStoneFragmentsRoot, 0, v91);
  if ( !*v25 )
    goto LABEL_97;
  info = (*v25)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v96);
  v97 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v97 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v99 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v97->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v99 <= StoneFragmentExchangeNoticeDispMax )
  {
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
    v106 = v99;
    v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v102, v103, v104);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v101, v105, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0LL )
  {
LABEL_97:
    sub_1B4D1EC(gameObject, v22);
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
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_49B738D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
    byte_49B738D = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
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
  ShopTopListViewItemDraw_o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v25; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v27; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v29; // x4
  ShopTopListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v34; // x20
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_49B738B & 1) == 0 )
  {
    sub_1B4CF90(&CoinRoomUtility_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1B4CF90(&int_TypeInfo, v4);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_10498/*"PreLabel"*/, v6);
    sub_1B4CF90(&StringLiteral_14166/*"TimeLabel"*/, v7);
    sub_1B4CF90(&StringLiteral_14992/*"ValueLabel"*/, v8);
    sub_1B4CF90(&StringLiteral_3518/*"COIN_ROOM_CLOSED_MESSAGE"*/, v9);
    sub_1B4CF90(&StringLiteral_7455/*"InfoLabel"*/, v10);
    sub_1B4CF90(&StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, v11);
    sub_1B4CF90(&StringLiteral_411/*"#6B6B6B"*/, v12);
    sub_1B4CF90(&StringLiteral_10388/*"PeriodTimeRoot"*/, v13);
    sub_1B4CF90(&StringLiteral_3516/*"COIN_ROOM_BANNER_INFO"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_10499/*"PreLabelRoot"*/, v15);
    byte_49B738B = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_411/*"#6B6B6B"*/,
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
                       (System_String_o *)StringLiteral_10499/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10498/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v34 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3518/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v34 )
            {
              UILabel__set_text(v34, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v17 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10388/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_7455/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v17 )
    goto LABEL_29;
  v18 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_29;
  v19 = this;
  if ( !System_String__Equals_61128772((System_String_o *)this, (System_String_o *)StringLiteral_3516/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v35 = CoinRoomUtility__MonthRemainingNum(0LL);
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v20, v21, v22);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v19, v23, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)this, 0LL);
      goto LABEL_15;
    }
LABEL_29:
    sub_1B4D1EC(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_14166/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_14992/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  v25 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v27 = (UILabel_o *)v25;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v27, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v29);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v30, (UILabel_o *)Component_object, (System_String_o *)v30, v31);
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
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v23; // x8
  int32_t State_k__BackingField; // w9
  char v25; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v28; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v31; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v36; // x2
  UILabel_o *v37; // x22
  struct ShopTopItemInfo_o *v38; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v40; // x3
  struct ShopTopItemInfo_o *v41; // x8
  bool v42; // w22
  ShopTopListViewItemDraw_o *v43; // x0
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ShopTopItemInfo_o *v47; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v49; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v51; // x21
  const MethodInfo *v52; // x1
  struct ShopTopItemInfo_o *v53; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v55; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v57; // x0
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v61; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v63; // x23
  System_String_o *v64; // x24

  v8 = this;
  if ( (byte_49B7389 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&Method_DataManager_GetMaster_BankShopMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    sub_1B4CF90(&string_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_23006/*"shopmeu_notice_bg"*/, v14);
    sub_1B4CF90(&StringLiteral_12095/*"STONE_SHOP_BANNER_INFO"*/, v15);
    sub_1B4CF90(&StringLiteral_19777/*"icon_balloon_blue"*/, v16);
    sub_1B4CF90(&StringLiteral_11793/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v17);
    sub_1B4CF90(&StringLiteral_20152/*"img_shop_0"*/, v18);
    this = (ShopTopListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v19);
    byte_49B7389 = 1;
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
      v23 = item->fields.info;
      if ( !v23 )
        goto LABEL_78;
      State_k__BackingField = v23->fields._State_k__BackingField;
      v25 = IsNullOrEmpty;
      switch ( State_k__BackingField )
      {
        case 15:
        case 18:
        case 19:
        case 20:
          baseImageSprite = v8->fields.baseImageSprite;
          ImageName_k__BackingField = v23->fields._ImageName_k__BackingField;
          goto LABEL_9;
        case 17:
          v63 = v8->fields.baseImageSprite;
          v64 = v23->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v63, v64, 0LL);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v23->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 21 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            IsNullOrEmpty = AtlasManager__SetShopBanner_38400588(baseImageSprite, ImageName_k__BackingField, 0LL);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20152/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
          }
LABEL_12:
          infoTextLabel = v8->fields.infoTextLabel;
          if ( (v25 & 1) != 0 )
          {
            IsNullOrEmpty = (int64_t)ShopTopListViewItem__get_InfoText(item, v28);
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
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11793/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v37 )
                goto LABEL_78;
            }
            UILabel__set_text(v37, Empty, 0LL);
          }
          v38 = item->fields.info;
          if ( !v38 )
            goto LABEL_78;
          if ( v38->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_38400588(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_19777/*"icon_balloon_blue"*/,
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
          v41 = item->fields.info;
          if ( !v41 )
            goto LABEL_78;
          v42 = v41->fields._State_k__BackingField == 16;
          ShopTopListViewItemDraw__SetObjectActive(
            (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
            v8->fields.startUpSummonSprite,
            v42,
            v40);
          ShopTopListViewItemDraw__SetObjectActive(v43, v8->fields.startUpSummonLimitedBase, v42, v44);
          v47 = item->fields.info;
          if ( !v47 )
            goto LABEL_78;
          if ( v47->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1B4CF34((CGThumbnailListItem_o *)&v8->fields.coinRoomListItem, (int32_t)item, v45, v46);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v49);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_68789728(
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
              ShopTopListViewItemDraw__SetCoinRoom(v8, v52);
            }
          }
          else
          {
            v51 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
            }
          }
          v53 = item->fields.info;
          if ( !v53 )
            goto LABEL_78;
          if ( v53->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0LL, 0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0LL);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v55 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0LL);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v57 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12095/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0LL);
                    ShopTopListViewItemDraw__SetLabelText(v57, spBankPeriodInfoLabel, (System_String_o *)v57, v58);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v55,
                      v59);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_38400588(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23006/*"shopmeu_notice_bg"*/,
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
              sub_1B4D1EC(IsNullOrEmpty, Empty);
            }
          }
          v61 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
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

  if ( (byte_49B7390 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, label);
    byte_49B7390 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B4D1EC(gameObject, v7);
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

  if ( (byte_49B7391 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, label);
    byte_49B7391 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B4D1EC(v6, v7);
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

  if ( (byte_49B738E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, go);
    byte_49B738E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_1B4D1EC(v6, v7);
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

  if ( (byte_49B7393 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, label);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&ShopNoticeRemainTimeLabel_TypeInfo, v10);
    byte_49B7393 = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1B4D1DC(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1B4D1EC(RestTime5, v12);
    }
    ShopNoticeRemainTimeLabel__SetTimeLimit(shopNoticeRemainTimeLabel, timeLimit, 0, 0LL);
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
  const MethodInfo *v14; // x3
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  const MethodInfo *v16; // x4
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8
  const MethodInfo *v19; // x2

  if ( (byte_49B7394 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    byte_49B7394 = 1;
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
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&this->fields.shopNoticeTween,
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
            v16);
          v11 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v11 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v11, 0, v19);
            return;
          }
        }
LABEL_18:
        sub_1B4D1EC(v11, v12);
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
      v16);
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

  if ( (byte_49B738F & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, sprite);
    byte_49B738F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B4D1EC(gameObject, v7);
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
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8

  if ( (byte_49B7392 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, objects);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    byte_49B7392 = 1;
  }
  if ( !*objects )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v13;
    sub_1B4CF34((CGThumbnailListItem_o *)objects, (int32_t)v13, v14, v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v19 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)period,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v23[4] = (Il2CppClass *)period;
        sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)period, v17, v18);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v19 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v26 = v19->fields._items;
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v19->fields._version;
      if ( !v26 )
        goto LABEL_29;
      v28 = v19->fields._size;
      if ( (unsigned int)v28 >= v26->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)monthly,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v26->obj.klass + v28;
        v19->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)monthly;
        sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)monthly, v24, v25);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v19 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v32 = v19->fields._items;
        v33 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v19->fields._version;
        if ( v32 )
        {
          v34 = v19->fields._size;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            v19->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)exchangeServant;
            sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), (int32_t)exchangeServant, v30, v31);
          }
          return;
        }
      }
LABEL_29:
      sub_1B4D1EC(v19, v16);
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
  const MethodInfo *v3; // x3
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v4; // x20
  __int64 v5; // x1
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x20

  v4 = this;
  if ( (byte_49B7396 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, method);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1B4CF90(&StringLiteral_4472/*"CoinRoomBanner"*/, v5);
    byte_49B7396 = 1;
  }
  if ( v4->fields.__1__state >= 2u )
    return 0;
  manager = v4->fields.manager;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1B4D1EC(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__49169892(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4472/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
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
        sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.coinRoomObject, (int32_t)Object, v12, v13);
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
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B4CF34(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v14; // x8
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_49B7395 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&int_TypeInfo, v6);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1B4CF90(&StringLiteral_19876/*"icon_servant_exchange_available_{0}"*/, v7);
    byte_49B7395 = 1;
  }
  item = v5->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v5->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v15 = (int)shopListNotice;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4);
  v12 = System_String__Format((System_String_o *)StringLiteral_19876/*"icon_servant_exchange_available_{0}"*/, v11, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v12, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v5->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v5->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v14 = v5->fields.__4__this;
        if ( v14 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v5->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v14->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B4D1EC(this, method);
  }
}