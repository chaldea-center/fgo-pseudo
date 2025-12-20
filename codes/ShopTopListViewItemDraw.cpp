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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D28AB9 & 1) == 0 )
  {
    sub_1C94098(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
    byte_4D28AB9 = 1;
  }
  v5 = sub_1C942E4(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)manager, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_D31248[initMode - 1];
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ShopTopListViewItem_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UnityEngine_Object_o *v48; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct UIAtlas_o *monitor; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct System_String_o *m_CachedPtr; // x1
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
  ShopTopListViewItemDraw_o *v84; // x0
  const MethodInfo *v85; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v87; // x0
  const MethodInfo *v88; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  struct ShopListNotice_o *v93; // x8
  bool v94; // w2
  ShopTopListViewItemDraw_o *v95; // x0
  const MethodInfo *v96; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v101; // x3
  BalanceConfig_c *v102; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v104; // w22
  int32_t StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v106; // x21
  Il2CppObject *v107; // x0
  int v108; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D28ABB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__);
    sub_1C94098(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
    sub_1C94098(&StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1C94098(&StringLiteral_12180/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/);
    sub_1C94098(&StringLiteral_12179/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/);
    byte_4D28ABB = 1;
  }
  v5 = sub_1C942E4(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_97;
  *(_QWORD *)(v5 + 16) = item;
  v14 = (ShopTopListViewItem_o **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)item, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v14 )
    goto LABEL_97;
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
          0,
          v22);
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
          v22);
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
          v22);
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
    goto LABEL_97;
  v30 = (*v14)->fields.shopListNotice;
  v31 = v30 && v30->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v31,
    v21);
  if ( !*v14 )
    goto LABEL_97;
  v33 = (*v14)->fields.shopListNotice;
  if ( v33 )
    LODWORD(v33) = v33->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v33 == 1,
    v32);
  if ( !*v14 )
    goto LABEL_97;
  v35 = (*v14)->fields.shopListNotice;
  if ( v35 )
    LODWORD(v35) = v35->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v35 == 2,
    v34);
  if ( !*v14 )
    goto LABEL_97;
  v37 = (*v14)->fields.shopListNotice;
  if ( v37 )
    LODWORD(v37) = v37->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v37 == 3,
    v36);
  if ( !*v14 )
    goto LABEL_97;
  v39 = (*v14)->fields.shopListNotice;
  if ( v39 && v39->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v5 + 32) = Component_object;
    v41 = (UnityEngine_Object_o **)(v5 + 32);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)Component_object, v42, v43, v44, v45, v46, v47);
    v48 = *(UnityEngine_Object_o **)(v5 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v41 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v41)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.exchangeServantDefaultAtlas,
          (int32_t)monitor,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        if ( !*v41 )
          goto LABEL_97;
        m_CachedPtr = (struct System_String_o *)(*v41)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = m_CachedPtr;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int32_t)m_CachedPtr,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
    }
    v64 = *v41;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v64, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v65 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v65,
        (Il2CppObject *)v5,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v65, 1, 0);
    }
  }
  if ( !*v14 )
    goto LABEL_97;
  v66 = (*v14)->fields.shopListNotice;
  if ( v66 )
    LODWORD(v66) = v66->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v66 == 1,
    v38);
  if ( !*v14 )
    goto LABEL_97;
  v68 = (*v14)->fields.shopListNotice;
  if ( v68 )
    LODWORD(v68) = v68->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v68 == 2,
    v67);
  if ( !*v14 )
    goto LABEL_97;
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
    goto LABEL_97;
  v73 = (*v14)->fields.shopListNotice;
  v74 = v73 ? v73->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v74,
    v72);
  if ( !*v14 )
    goto LABEL_97;
  v76 = (*v14)->fields.shopListNotice;
  v77 = v76 ? v76->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v77,
    v75);
  if ( !*v14 )
    goto LABEL_97;
  v79 = (*v14)->fields.shopListNotice;
  v80 = v79 ? v79->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v80,
    v78);
  if ( !*v14 )
    goto LABEL_97;
  v82 = (*v14)->fields.shopListNotice;
  if ( v82 )
    LOBYTE(v82) = v82->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v82 != 1,
    v81);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v84 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v84, periodRemainTimeLabel, (System_String_o *)v84, v85);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v87 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v87, monthlyRemainTimeLabel, (System_String_o *)v87, v88);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v90 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v90, exchangeServantRemainTimeLabel, (System_String_o *)v90, v91);
  if ( !*v14 )
    goto LABEL_97;
  v93 = (*v14)->fields.shopListNotice;
  v94 = !v93 || !v93->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v94,
    v92);
  ShopTopListViewItemDraw__SetObjectActive(v95, this->fields.exchangeStoneFragmentsRoot, 0, v96);
  if ( !*v14 )
    goto LABEL_97;
  info = (*v14)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v101);
  v102 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v102 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v104 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v102->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v104 <= StoneFragmentExchangeNoticeDispMax )
  {
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12179/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0);
    v108 = v104;
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v106, v107, 0);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0 )
  {
LABEL_97:
    sub_1C942F0(gameObject, v7);
  }
  CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)gameObject, 0);
}


void ShopTopListViewItemDraw__SetBaseButtonState(
        ShopTopListViewItemDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_4D28ABC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28ABC = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_1C942F0(0, v6);
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
  ShopTopListViewItemDraw_o *v6; // x22
  Il2CppObject *v7; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x0
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v11; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v13; // x4
  ShopTopListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v18; // x20
  int32_t v19; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4D28ABA & 1) == 0 )
  {
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10753/*"PreLabel"*/);
    sub_1C94098(&StringLiteral_14523/*"TimeLabel"*/);
    sub_1C94098(&StringLiteral_15350/*"ValueLabel"*/);
    sub_1C94098(&StringLiteral_3545/*"COIN_ROOM_CLOSED_MESSAGE"*/);
    sub_1C94098(&StringLiteral_7662/*"InfoLabel"*/);
    sub_1C94098(&StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/);
    sub_1C94098(&StringLiteral_411/*"#6B6B6B"*/);
    sub_1C94098(&StringLiteral_10638/*"PeriodTimeRoot"*/);
    sub_1C94098(&StringLiteral_3543/*"COIN_ROOM_BANNER_INFO"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1C94098(&StringLiteral_10754/*"PreLabelRoot"*/);
    byte_4D28ABA = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_411/*"#6B6B6B"*/,
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
                       (System_String_o *)StringLiteral_10754/*"PreLabelRoot"*/,
                       0);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10753/*"PreLabel"*/,
                                              0);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v18 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3545/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0);
            if ( v18 )
            {
              UILabel__set_text(v18, (System_String_o *)this, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v4 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10638/*"PeriodTimeRoot"*/, 0);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(v4, (System_String_o *)StringLiteral_7662/*"InfoLabel"*/, 0);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v4 )
    goto LABEL_29;
  v5 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v4, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"COIN_ROOM_BANNER_INFO"*/, 0);
  if ( !this )
    goto LABEL_29;
  v6 = this;
  if ( !System_String__Equals_64453064((System_String_o *)this, (System_String_o *)StringLiteral_3543/*"COIN_ROOM_BANNER_INFO"*/, 0) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v19 = CoinRoomUtility__MonthRemainingNum(0);
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v6, v7, 0);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)this, 0);
      goto LABEL_15;
    }
LABEL_29:
    sub_1C942F0(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_14523/*"TimeLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v4,
                                        (System_String_o *)StringLiteral_15350/*"ValueLabel"*/,
                                        0);
  if ( !this )
    goto LABEL_29;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v11 = (UILabel_o *)v9;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v11, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v13);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_ITEM_TIME_LIMIT"*/, 0);
  ShopTopListViewItemDraw__SetLabelText(v14, (UILabel_o *)Component_object, (System_String_o *)v14, v15);
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
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct ShopTopItemInfo_o *v40; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v44; // x21
  const MethodInfo *v45; // x1
  struct ShopTopItemInfo_o *v46; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v48; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v50; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v54; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v56; // x23
  System_String_o *v57; // x24

  v8 = this;
  if ( (byte_4D28AB8 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_23676/*"shopmeu_notice_bg"*/);
    sub_1C94098(&StringLiteral_12439/*"STONE_SHOP_BANNER_INFO"*/);
    sub_1C94098(&StringLiteral_20297/*"icon_balloon_blue"*/);
    sub_1C94098(&StringLiteral_12114/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1C94098(&StringLiteral_20730/*"img_shop_0"*/);
    this = (ShopTopListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28AB8 = 1;
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
        case 21:
          baseImageSprite = v8->fields.baseImageSprite;
          ImageName_k__BackingField = v12->fields._ImageName_k__BackingField;
          goto LABEL_9;
        case 17:
          v56 = v8->fields.baseImageSprite;
          v57 = v12->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v56, v57, 0);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v12->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 22 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            IsNullOrEmpty = AtlasManager__SetShopBanner_41359164(baseImageSprite, ImageName_k__BackingField, 0);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20730/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0);
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
          UILabel__set_text(infoTextLabel, Empty, 0);
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
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v26 )
                goto LABEL_78;
            }
            UILabel__set_text(v26, Empty, 0);
          }
          v27 = item->fields.info;
          if ( !v27 )
            goto LABEL_78;
          if ( v27->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_41359164(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20297/*"icon_balloon_blue"*/,
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
          v40 = item->fields.info;
          if ( !v40 )
            goto LABEL_78;
          if ( v40->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v8->fields.coinRoomListItem,
              (int32_t)item,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0, 0) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v42);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_72096164(
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
              ShopTopListViewItemDraw__SetCoinRoom(v8, v45);
            }
          }
          else
          {
            v44 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v44, 0, 0);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
            }
          }
          v46 = item->fields.info;
          if ( !v46 )
            goto LABEL_78;
          if ( v46->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0, 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v48 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v50 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12439/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0);
                    ShopTopListViewItemDraw__SetLabelText(v50, spBankPeriodInfoLabel, (System_String_o *)v50, v51);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v48,
                      v52);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_41359164(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23676/*"shopmeu_notice_bg"*/,
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
              sub_1C942F0(IsNullOrEmpty, Empty);
            }
          }
          v54 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
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
  __int64 v7; // x1

  if ( (byte_4D28ABF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28ABF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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

  if ( (byte_4D28AC0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28AC0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C942F0(v6, v7);
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
  __int64 v7; // x1

  if ( (byte_4D28ABD & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28ABD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( !v6 )
  {
    if ( !go )
      sub_1C942F0(v6, v7);
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
  __int64 v10; // x1

  if ( (byte_4D28AC2 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_4D28AC2 = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1C942E4(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1C942F0(RestTime5, v10);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8

  if ( (byte_4D28AC3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28AC3 = 1;
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
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.shopNoticeTween,
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
        sub_1C942F0(v11, v12);
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
  __int64 v7; // x1

  if ( (byte_4D28ABE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28ABE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x8

  if ( (byte_4D28AC1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28AC1 = 1;
  }
  if ( !*objects )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)objects, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0, 0) )
    {
      v24 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v24->fields._items;
      v26 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)period,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v28[4] = (Il2CppClass *)period;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)period, v18, v19, v20, v21, v22, v23);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0, 0) )
    {
      v24 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v35 = v24->fields._items;
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v24->fields._version;
      if ( !v35 )
        goto LABEL_29;
      v37 = v24->fields._size;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)monthly,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v35->obj.klass + v37;
        v24->fields._size = v37 + 1;
        v38[4] = (Il2CppClass *)monthly;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)monthly, v29, v30, v31, v32, v33, v34);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0, 0) )
    {
      v24 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v45 = v24->fields._items;
        v46 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v24->fields._version;
        if ( v45 )
        {
          v47 = v24->fields._size;
          if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v24->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)exchangeServant;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)(v48 + 4),
              (int32_t)exchangeServant,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          }
          return;
        }
      }
LABEL_29:
      sub_1C942F0(v24, v17);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v8; // x20
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1
  bool result; // w0
  GrandQuestFolderBoardItem_o *p__2__current; // x20

  v8 = this;
  if ( (byte_4D28AC5 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1C94098(&StringLiteral_4532/*"CoinRoomBanner"*/);
    byte_4D28AC5 = 1;
  }
  if ( v8->fields.__1__state >= 2u )
    return 0;
  manager = v8->fields.manager;
  _4__this = v8->fields.__4__this;
  v8->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1C942F0(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__51893132(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4532/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
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
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.coinRoomObject,
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
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v9; // x8
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4D28AC4 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1C94098(&StringLiteral_20400/*"icon_servant_exchange_available_{0}"*/);
    byte_4D28AC4 = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v2->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v10 = (int)shopListNotice;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v7 = System_String__Format((System_String_o *)StringLiteral_20400/*"icon_servant_exchange_available_{0}"*/, v6, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v7, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v2->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0);
        v9 = v2->fields.__4__this;
        if ( v9 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v2->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v9->fields.exchangeServantDefaultSpriteName, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C942F0(this, method);
  }
}