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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C91F & 1) == 0 )
  {
    sub_2213A60(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
    byte_596C91F = 1;
  }
  v5 = sub_2213CCC(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = manager;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)manager, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_ED8B08[initMode - 1];
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ShopTopListViewItem_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  int LimitedType_k__BackingField; // w8
  ShopTopListViewItemDraw_o *v25; // x0
  const MethodInfo *v26; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  struct ShopListNotice_o *v31; // x8
  bool v32; // w2
  const MethodInfo *v33; // x3
  struct ShopListNotice_o *v34; // x8
  const MethodInfo *v35; // x3
  struct ShopListNotice_o *v36; // x8
  const MethodInfo *v37; // x3
  struct ShopListNotice_o *v38; // x8
  const MethodInfo *v39; // x3
  struct ShopListNotice_o *v40; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Object_o *v51; // x23
  System_String_o *v52; // x2
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UIAtlas_o *monitor; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_String_o *m_CachedPtr; // x1
  UnityEngine_Object_o *v67; // x22
  System_Action_o *v68; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  struct ShopListNotice_o *v71; // x8
  const MethodInfo *v72; // x3
  struct ShopListNotice_o *v73; // x8
  const MethodInfo *v74; // x3
  struct ShopListNotice_o *v75; // x8
  const MethodInfo *v76; // x5
  const MethodInfo *v77; // x4
  struct ShopListNotice_o *v78; // x8
  int64_t v79; // x3
  const MethodInfo *v80; // x4
  struct ShopListNotice_o *v81; // x8
  int64_t v82; // x3
  const MethodInfo *v83; // x4
  struct ShopListNotice_o *v84; // x8
  int64_t v85; // x3
  const MethodInfo *v86; // x3
  struct ShopListNotice_o *v87; // x8
  __int64 v88; // x1
  __int64 v89; // x2
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v91; // x0
  const MethodInfo *v92; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v94; // x0
  const MethodInfo *v95; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v97; // x0
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  struct ShopListNotice_o *v100; // x8
  ShopTopListViewItemDraw_o *v101; // x0
  const MethodInfo *v102; // x3
  __int64 v103; // x2
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w21
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v108; // x3
  __int64 v109; // x1
  __int64 v110; // x2
  int v111; // w23
  BalanceConfig_c *v112; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v114; // w8
  System_String_o *v115; // x21
  Il2CppObject *v116; // x0
  int v117; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C921 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__);
    sub_2213A60(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
    sub_2213A60(&StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_2213A60(&StringLiteral_12649/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/);
    sub_2213A60(&StringLiteral_12648/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/);
    byte_596C921 = 1;
  }
  v5 = sub_2213CCC(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_102;
  *(_QWORD *)(v5 + 16) = item;
  v14 = (ShopTopListViewItem_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)item, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_102;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v14 )
    goto LABEL_102;
  shopListNotice = (*v14)->fields.shopListNotice;
  if ( !shopListNotice )
    goto LABEL_18;
  LimitedType_k__BackingField = shopListNotice->fields._LimitedType_k__BackingField;
  if ( LimitedType_k__BackingField > 11 )
  {
    if ( LimitedType_k__BackingField == 12 )
    {
      ShopTopListViewItemDraw__SetSwitchingObjects(
        (ShopTopListViewItemDraw_o *)gameObject,
        &this->fields.switchingObjects,
        0,
        this->fields.monthlyLimitedSprite,
        this->fields.exchangeServantLimitedSprite,
        v22);
      monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
      exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
      p_switchingLabels = &this->fields.switchingLabels;
      periodRemainTimeRoot = 0;
      goto LABEL_17;
    }
    if ( LimitedType_k__BackingField == 14 )
    {
      ShopTopListViewItemDraw__SetSwitchingObjects(
        (ShopTopListViewItemDraw_o *)gameObject,
        &this->fields.switchingObjects,
        this->fields.periodLimitedSprite,
        this->fields.monthlyLimitedSprite,
        this->fields.exchangeServantLimitedSprite,
        v22);
      periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
      monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
      p_switchingLabels = &this->fields.switchingLabels;
      exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
      goto LABEL_17;
    }
  }
  else
  {
    if ( LimitedType_k__BackingField == 6 )
    {
      ShopTopListViewItemDraw__SetSwitchingObjects(
        (ShopTopListViewItemDraw_o *)gameObject,
        &this->fields.switchingObjects,
        this->fields.periodLimitedSprite,
        this->fields.monthlyLimitedSprite,
        0,
        v22);
      periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
      monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
      p_switchingLabels = &this->fields.switchingLabels;
      exchangeServantRemainTimeRoot = 0;
      goto LABEL_17;
    }
    if ( LimitedType_k__BackingField == 10 )
    {
      ShopTopListViewItemDraw__SetSwitchingObjects(
        (ShopTopListViewItemDraw_o *)gameObject,
        &this->fields.switchingObjects,
        this->fields.periodLimitedSprite,
        0,
        this->fields.exchangeServantLimitedSprite,
        v22);
      periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
      exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
      p_switchingLabels = &this->fields.switchingLabels;
      monthlyRemainTimeRoot = 0;
LABEL_17:
      ShopTopListViewItemDraw__SetSwitchingObjects(
        v25,
        p_switchingLabels,
        periodRemainTimeRoot,
        monthlyRemainTimeRoot,
        exchangeServantRemainTimeRoot,
        v26);
    }
  }
LABEL_18:
  if ( !*v14 )
    goto LABEL_102;
  v31 = (*v14)->fields.shopListNotice;
  v32 = v31 && v31->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v32,
    v21);
  if ( !*v14 )
    goto LABEL_102;
  v34 = (*v14)->fields.shopListNotice;
  if ( v34 )
    LODWORD(v34) = v34->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v34 == 1,
    v33);
  if ( !*v14 )
    goto LABEL_102;
  v36 = (*v14)->fields.shopListNotice;
  if ( v36 )
    LODWORD(v36) = v36->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v36 == 2,
    v35);
  if ( !*v14 )
    goto LABEL_102;
  v38 = (*v14)->fields.shopListNotice;
  if ( v38 )
    LODWORD(v38) = v38->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v38 == 3,
    v37);
  if ( !*v14 )
    goto LABEL_102;
  v40 = (*v14)->fields.shopListNotice;
  if ( v40 && v40->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_102;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v5 + 32) = Component_object;
    v42 = (UnityEngine_Object_o **)(v5 + 32);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Component_object, v43, v44, v45, v46, v47, v48);
    v51 = *(UnityEngine_Object_o **)(v5 + 32);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
    if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v52);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v42 )
          goto LABEL_102;
        monitor = (struct UIAtlas_o *)(*v42)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.exchangeServantDefaultAtlas,
          (int32_t)monitor,
          v52,
          v54,
          v55,
          v56,
          v57,
          v58);
        if ( !*v42 )
          goto LABEL_102;
        m_CachedPtr = (struct System_String_o *)(*v42)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = m_CachedPtr;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int32_t)m_CachedPtr,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
    }
    v67 = *v42;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v52);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v67, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v68 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v68,
        (Il2CppObject *)v5,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69, v70);
      AtlasManager__LoadEventUI(v68, 1, 0);
    }
  }
  if ( !*v14 )
    goto LABEL_102;
  v71 = (*v14)->fields.shopListNotice;
  if ( v71 )
    LODWORD(v71) = v71->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v71 == 1,
    v39);
  if ( !*v14 )
    goto LABEL_102;
  v73 = (*v14)->fields.shopListNotice;
  if ( v73 )
    LODWORD(v73) = v73->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v73 == 2,
    v72);
  if ( !*v14 )
    goto LABEL_102;
  v75 = (*v14)->fields.shopListNotice;
  if ( v75 )
    LODWORD(v75) = v75->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v75 == 3,
    v74);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v14,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v76);
  if ( !*v14 )
    goto LABEL_102;
  v78 = (*v14)->fields.shopListNotice;
  v79 = v78 ? v78->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v79,
    v77);
  if ( !*v14 )
    goto LABEL_102;
  v81 = (*v14)->fields.shopListNotice;
  v82 = v81 ? v81->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v82,
    v80);
  if ( !*v14 )
    goto LABEL_102;
  v84 = (*v14)->fields.shopListNotice;
  v85 = v84 ? v84->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v85,
    v83);
  if ( !*v14 )
    goto LABEL_102;
  v87 = (*v14)->fields.shopListNotice;
  if ( v87 )
    LOBYTE(v87) = v87->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v87 != 1,
    v86);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88, v89);
  v91 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v91, periodRemainTimeLabel, (System_String_o *)v91, v92);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v94 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v94, monthlyRemainTimeLabel, (System_String_o *)v94, v95);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v97 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v97, exchangeServantRemainTimeLabel, (System_String_o *)v97, v98);
  if ( !*v14 )
    goto LABEL_102;
  v100 = (*v14)->fields.shopListNotice;
  if ( v100 )
    LOBYTE(v100) = v100->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    (unsigned __int8)v100 != 1,
    v99);
  ShopTopListViewItemDraw__SetObjectActive(v101, this->fields.exchangeStoneFragmentsRoot, 0, v102);
  if ( !*v14 )
    goto LABEL_102;
  info = (*v14)->fields.info;
  if ( !info )
    goto LABEL_102;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v103);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_102;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_102;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v108);
  v111 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  v112 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v109, v110);
    v112 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v114 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v111 > v112->static_fields->StoneFragmentExchangeNoticeDispMax )
  {
    if ( !v114 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109, v110);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12649/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_102;
    goto LABEL_97;
  }
  if ( !v114 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109, v110);
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12648/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0);
  v117 = v111;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v117);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v115, v116, 0);
  if ( !exchangeStoneFragmentsLabel )
LABEL_102:
    sub_2213CDC(gameObject, v7);
LABEL_97:
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject )
    goto LABEL_102;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_102;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !gameObject )
    goto LABEL_102;
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_596C922 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C922 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state, method);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_2213CDC(0, v6);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v7->klass->vtable._14_SetState.methodPtr)(
      v7,
      (unsigned int)state,
      1,
      v7->klass->vtable._14_SetState.method);
  }
}


void ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v2; // x19
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v4; // x20
  UILabel_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  ShopTopListViewItemDraw_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v17; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  __int64 v21; // x2
  ShopTopListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v26; // x20
  unsigned __int128 v27; // [xsp+0h] [xbp-60h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_596C920 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11179/*"PreLabel"*/);
    sub_2213A60(&StringLiteral_15055/*"TimeLabel"*/);
    sub_2213A60(&StringLiteral_15903/*"ValueLabel"*/);
    sub_2213A60(&StringLiteral_3682/*"COIN_ROOM_CLOSED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_7975/*"InfoLabel"*/);
    sub_2213A60(&StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_2213A60(&StringLiteral_437/*"#6B6B6B"*/);
    sub_2213A60(&StringLiteral_11046/*"PeriodTimeRoot"*/);
    sub_2213A60(&StringLiteral_3680/*"COIN_ROOM_BANNER_INFO"*/);
    this = (ShopTopListViewItemDraw_o *)sub_2213A60(&StringLiteral_11180/*"PreLabelRoot"*/);
    byte_596C920 = 1;
  }
  coinRoomListItem = v2->fields.coinRoomListItem;
  v27 = 0u;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_437/*"#6B6B6B"*/,
                                          (UnityEngine_Color_o *)&v27,
                                          0);
    baseButton = (UnityEngine_Color_o *)v2->fields.baseButton;
    if ( baseButton )
    {
      baseButton[3] = (UnityEngine_Color_o)v27;
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
                       (System_String_o *)StringLiteral_11180/*"PreLabelRoot"*/,
                       0);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_11179/*"PreLabel"*/,
                                              0);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v26 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3682/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0);
            if ( v26 )
            {
              UILabel__set_text(v26, (System_String_o *)this, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v4 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_11046/*"PeriodTimeRoot"*/, 0);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(v4, (System_String_o *)StringLiteral_7975/*"InfoLabel"*/, 0);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v4 )
    goto LABEL_29;
  v5 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v4, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COIN_ROOM_BANNER_INFO"*/, 0);
  if ( !this )
    goto LABEL_29;
  v8 = this;
  if ( !System_String__Equals_75686512((System_String_o *)this, (System_String_o *)StringLiteral_3680/*"COIN_ROOM_BANNER_INFO"*/, 0) )
  {
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v9, v10);
    v28 = CoinRoomUtility__MonthRemainingNum(0);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v8, v11, 0);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)this, 0);
      goto LABEL_15;
    }
LABEL_29:
    sub_2213CDC(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15055/*"TimeLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15903/*"ValueLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v17 = (UILabel_o *)v13;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v14, v15);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v17, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v19);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  v22 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v22, (UILabel_o *)Component_object, (System_String_o *)v22, v23);
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
  UISprite_o *IsNullOrEmpty; // x0
  System_String_o *v10; // x1
  struct ShopTopItemInfo_o *info; // x8
  __int64 v12; // x2
  struct ShopTopItemInfo_o *v13; // x8
  int State_k__BackingField; // w9
  UISprite_o *baseImageSprite; // x23
  char v16; // w22
  System_String_o *v17; // x24
  const MethodInfo *v18; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v21; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  int32_t v25; // w1
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v29; // x2
  UILabel_o *v30; // x22
  struct ShopTopItemInfo_o *v31; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v33; // x3
  struct ShopTopItemInfo_o *v34; // x8
  bool v35; // w22
  ShopTopListViewItemDraw_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct ShopTopItemInfo_o *v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v48; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  __int64 v50; // x2
  UnityEngine_Object_o *v51; // x21
  const MethodInfo *v52; // x1
  struct ShopTopItemInfo_o *v53; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t SpBankEndedAt; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v59; // x0
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x4
  __int64 v62; // x1
  __int64 v63; // x2
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v65; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  System_String_o *ImageName_k__BackingField; // x24

  v8 = this;
  if ( (byte_596C91E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24680/*"shopmeu_notice_bg"*/);
    sub_2213A60(&StringLiteral_12908/*"STONE_SHOP_BANNER_INFO"*/);
    sub_2213A60(&StringLiteral_21098/*"icon_balloon_blue"*/);
    sub_2213A60(&StringLiteral_12583/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_2213A60(&StringLiteral_21547/*"img_shop_0"*/);
    this = (ShopTopListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C91E = 1;
  }
  if ( !item )
    return;
  ShopTopListViewItemDraw__SetSpriteActive(this, v8->fields.rangeSprite, mode == 0, (const MethodInfo *)manager);
  if ( !mode )
    return;
  info = item->fields.info;
  if ( !info )
    goto LABEL_85;
  IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(info->fields._ImageName_k__BackingField, 0);
  v13 = item->fields.info;
  if ( !v13 )
    goto LABEL_85;
  State_k__BackingField = v13->fields._State_k__BackingField;
  baseImageSprite = v8->fields.baseImageSprite;
  v16 = (char)IsNullOrEmpty;
  if ( State_k__BackingField <= 18 )
  {
    switch ( State_k__BackingField )
    {
      case 15:
        goto LABEL_15;
      case 17:
        ImageName_k__BackingField = v13->fields._ImageName_k__BackingField;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v12);
        IsNullOrEmpty = (UISprite_o *)AtlasManager__SetEventSprite(baseImageSprite, ImageName_k__BackingField, 0);
        goto LABEL_18;
      case 18:
LABEL_15:
        v17 = v13->fields._ImageName_k__BackingField;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v12);
        IsNullOrEmpty = (UISprite_o *)AtlasManager__SetShopBanner_47571044(baseImageSprite, v17, 0);
        goto LABEL_18;
    }
  }
  else if ( State_k__BackingField <= 21 || State_k__BackingField == 22 )
  {
    goto LABEL_15;
  }
  if ( !baseImageSprite )
    goto LABEL_85;
  p_ImageName_k__BackingField = &v13->fields._ImageName_k__BackingField;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_21547/*"img_shop_0"*/;
  UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0);
  IsNullOrEmpty = v8->fields.baseImageSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_85;
  UISprite__set_atlas(IsNullOrEmpty, v8->fields.baseAtlas, 0);
LABEL_18:
  infoTextLabel = v8->fields.infoTextLabel;
  if ( (v16 & 1) != 0 )
  {
    IsNullOrEmpty = (UISprite_o *)ShopTopListViewItem__get_InfoText(item, v18);
    v10 = (System_String_o *)IsNullOrEmpty;
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !infoTextLabel )
    goto LABEL_85;
  UILabel__set_text(infoTextLabel, v10, 0);
  periodBase = v8->fields.periodBase;
  IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v21);
  ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v23);
  if ( item->fields._IsUse_k__BackingField )
    v25 = 0;
  else
    v25 = 3;
  ShopTopListViewItemDraw__SetBaseButtonState(v8, v25, v24);
  textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Inequality(textOnMask, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v30 = v8->fields.textOnMask;
    if ( item->fields._IsUse_k__BackingField )
    {
      v10 = **(System_String_o ***)(qword_5984390 + 184);
      if ( !v30 )
        goto LABEL_85;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v29);
      IsNullOrEmpty = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12583/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
      v10 = (System_String_o *)IsNullOrEmpty;
      if ( !v30 )
        goto LABEL_85;
    }
    UILabel__set_text(v30, v10, 0);
  }
  v31 = item->fields.info;
  if ( !v31 )
    goto LABEL_85;
  if ( v31->fields._State_k__BackingField == 4 )
  {
    exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v29);
    AtlasManager__SetShopBanner_47571044(exchangeStoneFragmentsSprite, (System_String_o *)StringLiteral_21098/*"icon_balloon_blue"*/, 0);
    IsNullOrEmpty = v8->fields.exchangeStoneFragmentsSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_85;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
      IsNullOrEmpty,
      IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0);
  }
  ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v29);
  v34 = item->fields.info;
  if ( !v34 )
    goto LABEL_85;
  v35 = v34->fields._State_k__BackingField == 16;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
    v8->fields.startUpSummonSprite,
    v35,
    v33);
  ShopTopListViewItemDraw__SetObjectActive(v36, v8->fields.startUpSummonLimitedBase, v35, v37);
  v44 = item->fields.info;
  if ( !v44 )
    goto LABEL_85;
  if ( v44->fields._State_k__BackingField == 17 )
  {
    v8->fields.coinRoomListItem = item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.coinRoomListItem,
      (int32_t)item,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
    if ( UnityEngine_Object__op_Equality(coinRoomObject, 0, 0) )
    {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0);
      CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v48);
      IsNullOrEmpty = (UISprite_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                      (UnityEngine_MonoBehaviour_o *)v8,
                                      CoinRoomAsset,
                                      0);
    }
    else
    {
      IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
      if ( !IsNullOrEmpty )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
      ShopTopListViewItemDraw__SetCoinRoom(v8, v52);
    }
  }
  else
  {
    v51 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v38);
    IsNullOrEmpty = (UISprite_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      IsNullOrEmpty = (UISprite_o *)v8->fields.coinRoomObject;
      if ( !IsNullOrEmpty )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
    }
  }
  v53 = item->fields.info;
  if ( !v53 )
    goto LABEL_85;
  if ( v53->fields._State_k__BackingField != 10 )
    goto LABEL_70;
  spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v50);
  if ( !UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0, 0) )
  {
LABEL_70:
    v65 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v50);
    if ( !UnityEngine_Object__op_Inequality(v65, 0, 0) )
      return;
    IsNullOrEmpty = (UISprite_o *)v8->fields.spBankPeriodTimeRoot;
    if ( !IsNullOrEmpty )
      goto LABEL_85;
LABEL_74:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v50);
  IsNullOrEmpty = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BankShopMaster___);
  if ( !IsNullOrEmpty )
LABEL_85:
    sub_2213CDC(IsNullOrEmpty, v10);
  SpBankEndedAt = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0);
  IsNullOrEmpty = (UISprite_o *)v8->fields.spBankPeriodTimeRoot;
  if ( !SpBankEndedAt )
  {
    if ( !IsNullOrEmpty )
      goto LABEL_85;
    goto LABEL_74;
  }
  if ( !IsNullOrEmpty )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
  spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
  v59 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12908/*"STONE_SHOP_BANNER_INFO"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v59, spBankPeriodInfoLabel, (System_String_o *)v59, v60);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    v8,
    v8->fields.spBankPeriodValueLabel,
    v8->fields.spBankPeriodNoticeRemainTimeLabel,
    SpBankEndedAt,
    v61);
  spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62, v63);
  AtlasManager__SetShopBanner_47571044(spBankPeriodInfoSprite, (System_String_o *)StringLiteral_24680/*"shopmeu_notice_bg"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewItemDraw__SetLabelActive(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C925 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C925 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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
  __int64 v7; // x1

  if ( (byte_596C926 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C926 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
    UILabel__set_text(label, text, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewItemDraw__SetObjectActive(
        ShopTopListViewItemDraw_o *this,
        UnityEngine_GameObject_o *go,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596C923 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C923 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go, isActive);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( !v6 )
  {
    if ( !go )
      sub_2213CDC(v6, v7);
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
  ShopNoticeRemainTimeLabel_o *v6; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *RestTime5; // x0
  __int64 v12; // x1

  v6 = shopNoticeRemainTimeLabel;
  if ( (byte_596C928 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_596C928 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, shopNoticeRemainTimeLabel);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1, 0);
    if ( !label
      || (UILabel__set_text(label, RestTime5, 0), !v6)
      && (v6 = (ShopNoticeRemainTimeLabel_o *)sub_2213CCC(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(v6, label, (UnityEngine_MonoBehaviour_o *)this, 0),
          !v6) )
    {
      sub_2213CDC(RestTime5, v12);
    }
    ShopNoticeRemainTimeLabel__SetTimeLimit(v6, timeLimit, 0, 0);
    ShopNoticeRemainTimeLabel__Start(v6, 0);
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
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8

  if ( (byte_596C929 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C929 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, root);
  v11 = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0, 0);
  if ( labels && objects && ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_18;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.shopNoticeTween,
      (int32_t)ShopNoticeTween_k__BackingField,
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
            0);
          v11 = item->fields._ShopNoticeTween_k__BackingField;
          if ( v11 )
          {
            ShopNoticeTween__SetActiveSwitchingTargets(v11, 0, 0);
            return;
          }
        }
LABEL_18:
        sub_2213CDC(v11, v12);
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


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C924 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C924 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_GameObject__o *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_List_object__o *v47; // x8
  struct System_Object_array *v48; // x9
  _QWORD *v49; // x10
  __int64 v50; // x11
  Il2CppClass **v51; // x0

  if ( (byte_596C927 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C927 = 1;
  }
  if ( !*objects )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)objects, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0, 0) )
    {
      v26 = *objects;
      if ( !*objects )
        goto LABEL_29;
      items = (struct System_Object_array *)v26->fields._items;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v26->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v26,
          (Il2CppObject *)period,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v30[4] = (Il2CppClass *)period;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)period, v20, v21, v22, v23, v24, v25);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0, 0) )
    {
      v26 = *objects;
      if ( !*objects )
        goto LABEL_29;
      v37 = (struct System_Object_array *)v26->fields._items;
      v38 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v26->fields._version;
      if ( !v37 )
        goto LABEL_29;
      v39 = v26->fields._size;
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v26,
          (Il2CppObject *)monthly,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &v37->obj.klass + v39;
        v26->fields._size = v39 + 1;
        v40[4] = (Il2CppClass *)monthly;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)monthly, v31, v32, v33, v34, v35, v36);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v31);
    v26 = (System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(
                                                             (UnityEngine_Object_o *)exchangeServant,
                                                             0,
                                                             0);
    if ( ((unsigned __int8)v26 & 1) != 0 )
    {
      v47 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v48 = v47->fields._items;
        v49 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v47->fields._version;
        if ( v48 )
        {
          v50 = v47->fields._size;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v47,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v47->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)exchangeServant;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v51 + 4),
              (int32_t)exchangeServant,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
          return;
        }
      }
LABEL_29:
      sub_2213CDC(v26, v19);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v8; // x20
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x20

  v8 = this;
  if ( (byte_596C92B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_2213A60(&StringLiteral_4702/*"CoinRoomBanner"*/);
    byte_596C92B = 1;
  }
  if ( v8->fields.__1__state >= 2u )
    return 0;
  manager = v8->fields.manager;
  _4__this = v8->fields.__4__this;
  v8->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_2213CDC(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__58532980(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4702/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( _4__this )
    {
      v12 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v12,
                   transform,
                   0,
                   0);
        _4__this->fields.coinRoomObject = Object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.coinRoomObject,
          (int32_t)Object,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v21);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v8->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  ShopTopListViewItemDraw___c__DisplayClass52_0_o *v2; // x19
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x8
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v11; // x8
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_596C92A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_2213A60(&StringLiteral_21206/*"icon_servant_exchange_available_{0}"*/);
    byte_596C92A = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v2->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v12 = (int)shopListNotice;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v9 = System_String__Format((System_String_o *)StringLiteral_21206/*"icon_servant_exchange_available_{0}"*/, v6, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v9, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v2->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0);
        v11 = v2->fields.__4__this;
        if ( v11 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v11->fields.exchangeServantDefaultSpriteName, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
}