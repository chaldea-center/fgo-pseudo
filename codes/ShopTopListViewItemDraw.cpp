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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B127EF & 1) == 0 )
  {
    sub_1BCA7E0(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager, method);
    byte_4B127EF = 1;
  }
  v6 = sub_1BCAA2C(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = manager;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)manager, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_C0C0A0[initMode - 1];
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ShopTopListViewItem_o **v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x5
  struct ShopListNotice_o *shopListNotice; // x8
  ShopTopListViewItemDraw_o *v55; // x0
  const MethodInfo *v56; // x5
  UnityEngine_GameObject_o *periodRemainTimeRoot; // x2
  UnityEngine_GameObject_o *monthlyRemainTimeRoot; // x3
  System_Collections_Generic_List_GameObject__o **p_switchingLabels; // x1
  UnityEngine_GameObject_o *exchangeServantRemainTimeRoot; // x4
  struct ShopListNotice_o *v61; // x8
  bool v62; // w2
  const MethodInfo *v63; // x3
  struct ShopListNotice_o *v64; // x8
  const MethodInfo *v65; // x3
  struct ShopListNotice_o *v66; // x8
  const MethodInfo *v67; // x3
  struct ShopListNotice_o *v68; // x8
  const MethodInfo *v69; // x3
  struct ShopListNotice_o *v70; // x8
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v72; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x1
  UnityEngine_Object_o *v80; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct UIAtlas_o *monitor; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct System_String_o *v95; // x1
  UnityEngine_Object_o *v96; // x22
  __int64 v97; // x2
  System_Action_o *v98; // x22
  __int64 v99; // x1
  struct ShopListNotice_o *v100; // x8
  const MethodInfo *v101; // x3
  struct ShopListNotice_o *v102; // x8
  const MethodInfo *v103; // x3
  struct ShopListNotice_o *v104; // x8
  const MethodInfo *v105; // x5
  const MethodInfo *v106; // x4
  struct ShopListNotice_o *v107; // x8
  int64_t v108; // x3
  const MethodInfo *v109; // x4
  struct ShopListNotice_o *v110; // x8
  int64_t v111; // x3
  const MethodInfo *v112; // x4
  struct ShopListNotice_o *v113; // x8
  int64_t v114; // x3
  const MethodInfo *v115; // x3
  struct ShopListNotice_o *v116; // x8
  __int64 v117; // x1
  UILabel_o *periodRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v119; // x0
  const MethodInfo *v120; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v122; // x0
  const MethodInfo *v123; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v125; // x0
  const MethodInfo *v126; // x3
  const MethodInfo *v127; // x3
  struct ShopListNotice_o *v128; // x8
  bool v129; // w2
  ShopTopListViewItemDraw_o *v130; // x0
  const MethodInfo *v131; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v136; // x3
  __int64 v137; // x1
  BalanceConfig_c *v138; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v140; // w22
  int StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v142; // x21
  Il2CppObject *v143; // x0
  int v144; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B127F1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__, v26, v27);
    sub_1BCA7E0(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_12209/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_12208/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, v34, v35);
    byte_4B127F1 = 1;
  }
  v36 = sub_1BCAA2C(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_97;
  *(_QWORD *)(v36 + 16) = item;
  v45 = (ShopTopListViewItem_o **)(v36 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)item, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)this, v46, v47, v48, v49, v50, v51);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v45 )
    goto LABEL_97;
  shopListNotice = (*v45)->fields.shopListNotice;
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
          v53);
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
          v53);
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
          v53);
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
          v53);
        periodRemainTimeRoot = this->fields.periodRemainTimeRoot;
        monthlyRemainTimeRoot = this->fields.monthlyRemainTimeRoot;
        exchangeServantRemainTimeRoot = this->fields.exchangeServantRemainTimeRoot;
        p_switchingLabels = &this->fields.switchingLabels;
LABEL_13:
        ShopTopListViewItemDraw__SetSwitchingObjects(
          v55,
          p_switchingLabels,
          periodRemainTimeRoot,
          monthlyRemainTimeRoot,
          exchangeServantRemainTimeRoot,
          v56);
        break;
      default:
        break;
    }
  }
  if ( !*v45 )
    goto LABEL_97;
  v61 = (*v45)->fields.shopListNotice;
  v62 = v61 && v61->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v62,
    v52);
  if ( !*v45 )
    goto LABEL_97;
  v64 = (*v45)->fields.shopListNotice;
  if ( v64 )
    LODWORD(v64) = v64->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v64 == 1,
    v63);
  if ( !*v45 )
    goto LABEL_97;
  v66 = (*v45)->fields.shopListNotice;
  if ( v66 )
    LODWORD(v66) = v66->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v66 == 2,
    v65);
  if ( !*v45 )
    goto LABEL_97;
  v68 = (*v45)->fields.shopListNotice;
  if ( v68 )
    LODWORD(v68) = v68->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v68 == 3,
    v67);
  if ( !*v45 )
    goto LABEL_97;
  v70 = (*v45)->fields.shopListNotice;
  if ( v70 && v70->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v36 + 32) = Component_object;
    v72 = (UnityEngine_Object_o **)(v36 + 32);
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)Component_object, v73, v74, v75, v76, v77, v78);
    v80 = *(UnityEngine_Object_o **)(v36 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
    if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v72 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v72)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.exchangeServantDefaultAtlas,
          (int64_t)monitor,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
        if ( !*v72 )
          goto LABEL_97;
        v95 = *(struct System_String_o **)&(*v72)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = v95;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int64_t)v95,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
    }
    v96 = *v72;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v96, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v98 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v97, v69);
      System_Action___ctor(
        v98,
        (Il2CppObject *)v36,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v99);
      AtlasManager__LoadEventUI(v98, 1, 0LL);
    }
  }
  if ( !*v45 )
    goto LABEL_97;
  v100 = (*v45)->fields.shopListNotice;
  if ( v100 )
    LODWORD(v100) = v100->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v100 == 1,
    v69);
  if ( !*v45 )
    goto LABEL_97;
  v102 = (*v45)->fields.shopListNotice;
  if ( v102 )
    LODWORD(v102) = v102->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v102 == 2,
    v101);
  if ( !*v45 )
    goto LABEL_97;
  v104 = (*v45)->fields.shopListNotice;
  if ( v104 )
    LODWORD(v104) = v104->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeRoot,
    (_DWORD)v104 == 3,
    v103);
  ShopTopListViewItemDraw__SetShopNoticeTweenTarget(
    this,
    *v45,
    this->fields.limitedNoticeRoot,
    this->fields.switchingObjects,
    this->fields.switchingLabels,
    v105);
  if ( !*v45 )
    goto LABEL_97;
  v107 = (*v45)->fields.shopListNotice;
  v108 = v107 ? v107->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v108,
    v106);
  if ( !*v45 )
    goto LABEL_97;
  v110 = (*v45)->fields.shopListNotice;
  v111 = v110 ? v110->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v111,
    v109);
  if ( !*v45 )
    goto LABEL_97;
  v113 = (*v45)->fields.shopListNotice;
  v114 = v113 ? v113->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v114,
    v112);
  if ( !*v45 )
    goto LABEL_97;
  v116 = (*v45)->fields.shopListNotice;
  if ( v116 )
    LOBYTE(v116) = v116->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v116 != 1,
    v115);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
  v119 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v119, periodRemainTimeLabel, (System_String_o *)v119, v120);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v122 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v122, monthlyRemainTimeLabel, (System_String_o *)v122, v123);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v125 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v125, exchangeServantRemainTimeLabel, (System_String_o *)v125, v126);
  if ( !*v45 )
    goto LABEL_97;
  v128 = (*v45)->fields.shopListNotice;
  v129 = !v128 || !v128->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v129,
    v127);
  ShopTopListViewItemDraw__SetObjectActive(v130, this->fields.exchangeStoneFragmentsRoot, 0, v131);
  if ( !*v45 )
    goto LABEL_97;
  info = (*v45)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v136);
  v138 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v137);
    v138 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v140 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v138->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137);
  if ( v140 <= StoneFragmentExchangeNoticeDispMax )
  {
    v142 = LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS"*/, 0LL);
    v144 = v140;
    v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v142, v143, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12209/*"SHOP_NOTICE_EXCHANGE_STONE_FRAGMENTS_OVER"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0LL )
  {
LABEL_97:
    sub_1BCAA3C(gameObject, v38);
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

  if ( (byte_4B127F2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state, method);
    byte_4B127F2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      (unsigned int)state,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall ShopTopListViewItemDraw__SetCoinRoom(ShopTopListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopTopListViewItemDraw_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct ShopTopListViewItem_o *coinRoomListItem; // x8
  UnityEngine_GameObject_o *v31; // x20
  UILabel_o *v32; // x21
  __int64 v33; // x1
  ShopTopListViewItemDraw_o *v34; // x22
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  ShopNoticeRemainTimeLabel_o *coinRoomNoticeRemainTimeLabel; // x20
  UILabel_o *v41; // x22
  int64_t MonthUnixTime; // x0
  const MethodInfo *v43; // x4
  __int64 v44; // x1
  ShopTopListViewItemDraw_o *v45; // x0
  const MethodInfo *v46; // x3
  UnityEngine_Color_o *baseButton; // x8
  UnityEngine_GameObject_o *GameObject; // x19
  UILabel_o *v49; // x20
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF

  v3 = this;
  if ( (byte_4B127F0 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_10848/*"PreLabel"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_14612/*"TimeLabel"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15458/*"ValueLabel"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3650/*"COIN_ROOM_CLOSED_MESSAGE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_7712/*"InfoLabel"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_438/*"#6B6B6B"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_10736/*"PeriodTimeRoot"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3648/*"COIN_ROOM_BANNER_INFO"*/, v26, v27);
    this = (ShopTopListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_10849/*"PreLabelRoot"*/, v28, v29);
    byte_4B127F0 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  coinRoomListItem = v3->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_438/*"#6B6B6B"*/,
                                          &color,
                                          0LL);
    baseButton = (UnityEngine_Color_o *)v3->fields.baseButton;
    if ( baseButton )
    {
      baseButton[3] = color;
      this = (ShopTopListViewItemDraw_o *)v3->fields.baseButton;
      if ( this )
      {
        ((void (__fastcall *)(ShopTopListViewItemDraw_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          3LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        GameObject = GameObjectExtensions__FindGameObject(
                       v3->fields.coinRoomObject,
                       (System_String_o *)StringLiteral_10849/*"PreLabelRoot"*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10848/*"PreLabel"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v49 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3650/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
            if ( v49 )
            {
              UILabel__set_text(v49, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  v31 = GameObjectExtensions__FindGameObject(v3->fields.coinRoomObject, (System_String_o *)StringLiteral_10736/*"PeriodTimeRoot"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v31,
                                        (System_String_o *)StringLiteral_7712/*"InfoLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v31 )
    goto LABEL_29;
  v32 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COIN_ROOM_BANNER_INFO"*/, 0LL);
  if ( !this )
    goto LABEL_29;
  v34 = this;
  if ( !System_String__Equals_62409536((System_String_o *)this, (System_String_o *)StringLiteral_3648/*"COIN_ROOM_BANNER_INFO"*/, 0LL) )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v35);
    v50 = CoinRoomUtility__MonthRemainingNum(0LL);
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    this = (ShopTopListViewItemDraw_o *)System_String__Format((System_String_o *)v34, v36, 0LL);
    if ( v32 )
    {
      UILabel__set_text(v32, (System_String_o *)this, 0LL);
      goto LABEL_15;
    }
LABEL_29:
    sub_1BCAA3C(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v31,
                                        (System_String_o *)StringLiteral_14612/*"TimeLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v31,
                                        (System_String_o *)StringLiteral_15458/*"ValueLabel"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  v38 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v3->fields.coinRoomNoticeRemainTimeLabel;
  v41 = (UILabel_o *)v38;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v39);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v3, v41, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v43);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  v45 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SHOP_ITEM_TIME_LIMIT"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v45, (UILabel_o *)Component_object, (System_String_o *)v45, v46);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetItem(
        ShopTopListViewItemDraw_o *this,
        ShopTopListViewItem_o *item,
        int32_t mode,
        ShopTopListViewManager_o *manager,
        const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t IsNullOrEmpty; // x0
  System_String_o *Empty; // x1
  struct ShopTopItemInfo_o *info; // x8
  struct ShopTopItemInfo_o *v34; // x8
  int32_t State_k__BackingField; // w9
  char v36; // w22
  UISprite_o *baseImageSprite; // x23
  System_String_o *ImageName_k__BackingField; // x24
  const MethodInfo *v39; // x1
  UILabel_o *infoTextLabel; // x23
  UnityEngine_GameObject_o *periodBase; // x22
  const MethodInfo *v42; // x1
  _BOOL8 IsPeriod; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  UnityEngine_Object_o *textOnMask; // x22
  const MethodInfo *v48; // x2
  UILabel_o *v49; // x22
  struct ShopTopItemInfo_o *v50; // x8
  UISprite_o *exchangeStoneFragmentsSprite; // x22
  const MethodInfo *v52; // x3
  struct ShopTopItemInfo_o *v53; // x8
  bool v54; // w22
  ShopTopListViewItemDraw_o *v55; // x0
  const MethodInfo *v56; // x3
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct ShopTopItemInfo_o *v63; // x8
  __int64 v64; // x1
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v66; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v68; // x21
  const MethodInfo *v69; // x1
  struct ShopTopItemInfo_o *v70; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v72; // x20
  __int64 v73; // x1
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v75; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x4
  __int64 v78; // x1
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v80; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v82; // x23
  System_String_o *v83; // x24

  v8 = this;
  if ( (byte_4B127EE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BankShopMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&string_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_23526/*"shopmeu_notice_bg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12445/*"STONE_SHOP_BANNER_INFO"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20293/*"icon_balloon_blue"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12146/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20662/*"img_shop_0"*/, v27, v28);
    this = (ShopTopListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    byte_4B127EE = 1;
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
      v34 = item->fields.info;
      if ( !v34 )
        goto LABEL_78;
      State_k__BackingField = v34->fields._State_k__BackingField;
      v36 = IsNullOrEmpty;
      switch ( State_k__BackingField )
      {
        case 15:
        case 18:
        case 19:
        case 20:
          baseImageSprite = v8->fields.baseImageSprite;
          ImageName_k__BackingField = v34->fields._ImageName_k__BackingField;
          goto LABEL_9;
        case 17:
          v82 = v8->fields.baseImageSprite;
          v83 = v34->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, Empty);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v82, v83, 0LL);
          goto LABEL_12;
        default:
          baseImageSprite = v8->fields.baseImageSprite;
          p_ImageName_k__BackingField = &v34->fields._ImageName_k__BackingField;
          if ( State_k__BackingField == 21 )
          {
            ImageName_k__BackingField = *p_ImageName_k__BackingField;
LABEL_9:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, Empty);
            IsNullOrEmpty = AtlasManager__SetShopBanner_38576124(baseImageSprite, ImageName_k__BackingField, 0LL);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20662/*"img_shop_0"*/;
            UISprite__set_spriteName(v8->fields.baseImageSprite, *p_ImageName_k__BackingField, 0LL);
            IsNullOrEmpty = (int64_t)v8->fields.baseImageSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, v8->fields.baseAtlas, 0LL);
          }
LABEL_12:
          infoTextLabel = v8->fields.infoTextLabel;
          if ( (v36 & 1) != 0 )
          {
            IsNullOrEmpty = (int64_t)ShopTopListViewItem__get_InfoText(item, v39);
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
          IsPeriod = ShopTopListViewItem__get_IsPeriod(item, v42);
          ShopTopListViewItemDraw__SetObjectActive((ShopTopListViewItemDraw_o *)IsPeriod, periodBase, IsPeriod, v44);
          ShopTopListViewItemDraw__SetInput(v8, item, v45);
          textOnMask = (UnityEngine_Object_o *)v8->fields.textOnMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
          IsNullOrEmpty = UnityEngine_Object__op_Inequality(textOnMask, 0LL, 0LL);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            v49 = v8->fields.textOnMask;
            if ( item->fields._IsUse_k__BackingField )
            {
              Empty = string_TypeInfo->static_fields->Empty;
              if ( !v49 )
                goto LABEL_78;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, Empty);
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
              Empty = (System_String_o *)IsNullOrEmpty;
              if ( !v49 )
                goto LABEL_78;
            }
            UILabel__set_text(v49, Empty, 0LL);
          }
          v50 = item->fields.info;
          if ( !v50 )
            goto LABEL_78;
          if ( v50->fields._State_k__BackingField == 4 )
          {
            exchangeStoneFragmentsSprite = v8->fields.exchangeStoneFragmentsSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, Empty);
            AtlasManager__SetShopBanner_38576124(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20293/*"icon_balloon_blue"*/,
              0LL);
            IsNullOrEmpty = (int64_t)v8->fields.exchangeStoneFragmentsSprite;
            if ( !IsNullOrEmpty )
              goto LABEL_78;
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
              IsNullOrEmpty,
              *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
            AtlasManager__SetItem(v8->fields.exchangeStoneIconSprite, 6, 0LL);
          }
          ShopTopListViewItemDraw__ResetShopListNotice(v8, item, v48);
          v53 = item->fields.info;
          if ( !v53 )
            goto LABEL_78;
          v54 = v53->fields._State_k__BackingField == 16;
          ShopTopListViewItemDraw__SetObjectActive(
            (ShopTopListViewItemDraw_o *)IsNullOrEmpty,
            v8->fields.startUpSummonSprite,
            v54,
            v52);
          ShopTopListViewItemDraw__SetObjectActive(v55, v8->fields.startUpSummonLimitedBase, v54, v56);
          v63 = item->fields.info;
          if ( !v63 )
            goto LABEL_78;
          if ( v63->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields.coinRoomListItem,
              (int64_t)item,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v66);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
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
              ShopTopListViewItemDraw__SetCoinRoom(v8, v69);
            }
          }
          else
          {
            v68 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, Empty);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
            }
          }
          v70 = item->fields.info;
          if ( !v70 )
            goto LABEL_78;
          if ( v70->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, Empty);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0LL, 0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, Empty);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0LL);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v72 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0LL);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
                    v75 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12445/*"STONE_SHOP_BANNER_INFO"*/,
                                                         0LL);
                    ShopTopListViewItemDraw__SetLabelText(v75, spBankPeriodInfoLabel, (System_String_o *)v75, v76);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v72,
                      v77);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v78);
                    AtlasManager__SetShopBanner_38576124(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23526/*"shopmeu_notice_bg"*/,
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
              sub_1BCAA3C(IsNullOrEmpty, Empty);
            }
          }
          v80 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, Empty);
          if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetLabelActive(
        ShopTopListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B127F5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, isActive);
    byte_4B127F5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B127F6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B127F6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
    UILabel__set_text(label, text, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetObjectActive(
        ShopTopListViewItemDraw_o *this,
        UnityEngine_GameObject_o *go,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B127F3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, go, isActive);
    byte_4B127F3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_1BCAA3C(v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  System_String_o *RestTime5; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  const MethodInfo *v18; // x3

  v6 = shopNoticeRemainTimeLabel;
  if ( (byte_4B127F8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, label, shopNoticeRemainTimeLabel);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ShopNoticeRemainTimeLabel_TypeInfo, v11, v12);
    byte_4B127F8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1LL, 0LL);
    if ( !label
      || (UILabel__set_text(label, RestTime5, 0LL), !v6)
      && (v6 = (ShopNoticeRemainTimeLabel_o *)sub_1BCAA2C(ShopNoticeRemainTimeLabel_TypeInfo, v15, v16, v17),
          ShopNoticeRemainTimeLabel___ctor(v6, label, (UnityEngine_MonoBehaviour_o *)this, v18),
          !v6) )
    {
      sub_1BCAA3C(RestTime5, v15);
    }
    v6->fields.timeLimit = timeLimit;
    ShopNoticeRemainTimeLabel__Start(v6, v15);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ShopNoticeTween_o *ShopNoticeTween_k__BackingField; // x1
  const MethodInfo *v20; // x4
  struct ShopListNotice_o *shopListNotice; // x8
  unsigned int LimitedType_k__BackingField; // w8
  const MethodInfo *v23; // x2

  if ( (byte_4B127F9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, root);
    byte_4B127F9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v11 = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)root, 0LL, 0LL);
  if ( labels && objects && ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_18;
    ShopNoticeTween_k__BackingField = item->fields._ShopNoticeTween_k__BackingField;
    this->fields.shopNoticeTween = ShopNoticeTween_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.shopNoticeTween,
      (int64_t)ShopNoticeTween_k__BackingField,
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
LABEL_18:
        sub_1BCAA3C(v11, v12);
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
      v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B127F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B127F4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x8
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x8

  if ( (byte_4B127F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, objects, period);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B127F7 = 1;
  }
  if ( !*objects )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         objects,
                                                         period,
                                                         monthly);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)objects, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v31 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v31->fields._items;
      v33 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)period,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v35[4] = (Il2CppClass *)period;
        sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)period, v25, v26, v27, v28, v29, v30);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v31 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v42 = v31->fields._items;
      v43 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v31->fields._version;
      if ( !v42 )
        goto LABEL_29;
      v44 = v31->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)monthly,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v42->obj.klass + v44;
        v31->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)monthly;
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)monthly, v36, v37, v38, v39, v40, v41);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v31 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v52 = v31->fields._items;
        v53 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v31->fields._version;
        if ( v52 )
        {
          v54 = v31->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v31->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)exchangeServant;
            sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)exchangeServant, v46, v47, v48, v49, v50, v51);
          }
          return;
        }
      }
LABEL_29:
      sub_1BCAA3C(v31, v24);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v14; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x20

  v8 = this;
  if ( (byte_4B127FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1BCA7E0(&StringLiteral_4626/*"CoinRoomBanner"*/, v9, v10);
    byte_4B127FB = 1;
  }
  if ( v8->fields.__1__state >= 2u )
    return 0;
  manager = v8->fields.manager;
  _4__this = v8->fields.__4__this;
  v8->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1BCAA3C(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__49237568(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4626/*"CoinRoomBanner"*/,
                                                                     (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( _4__this )
    {
      v14 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v14,
                   transform,
                   0LL,
                   0LL);
        _4__this->fields.coinRoomObject = Object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.coinRoomObject,
          (int64_t)Object,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v23);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  ShopTopListViewItemDraw___c__DisplayClass52_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopTopListViewItem_o *item; // x8
  struct ShopListNotice_o *shopListNotice; // x9
  UISprite_o *exchangeServantSprite; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  struct ShopTopListViewItemDraw_o *_4__this; // x8
  struct ShopTopListViewItemDraw_o *v15; // x8
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B127FA & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1BCA7E0(&StringLiteral_20391/*"icon_servant_exchange_available_{0}"*/, v6, v7);
    byte_4B127FA = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_15;
  shopListNotice = item->fields.shopListNotice;
  exchangeServantSprite = v3->fields.exchangeServantSprite;
  if ( shopListNotice )
    LODWORD(shopListNotice) = shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  v16 = (int)shopListNotice;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format((System_String_o *)StringLiteral_20391/*"icon_servant_exchange_available_{0}"*/, v11, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
  this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)AtlasManager__SetEventUI(exchangeServantSprite, v13, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    _4__this = v3->fields.__4__this;
    if ( _4__this )
    {
      this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v3->fields.exchangeServantSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, _4__this->fields.exchangeServantDefaultAtlas, 0LL);
        v15 = v3->fields.__4__this;
        if ( v15 )
        {
          this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)v3->fields.exchangeServantSprite;
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, v15->fields.exchangeServantDefaultSpriteName, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
}