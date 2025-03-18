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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C1E498 & 1) == 0 )
  {
    sub_1C3B764(&ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo, manager);
    byte_4C1E498 = 1;
  }
  v5 = sub_1C3B9B0(ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = manager;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)manager, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


int32_t __fastcall ShopTopListViewItemDraw__GetDispModeOnInit(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_C473AC[initMode - 1];
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  ShopTopListViewItem_o **v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o **v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UnityEngine_Object_o *v63; // x23
  UnityEngine_Object_o *exchangeServantDefaultAtlas; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct UIAtlas_o *monitor; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_String_o *v78; // x1
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
  ShopTopListViewItemDraw_o *v99; // x0
  const MethodInfo *v100; // x3
  UILabel_o *monthlyRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v102; // x0
  const MethodInfo *v103; // x3
  UILabel_o *exchangeServantRemainTimeLabel; // x21
  ShopTopListViewItemDraw_o *v105; // x0
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x3
  struct ShopListNotice_o *v108; // x8
  bool v109; // w2
  ShopTopListViewItemDraw_o *v110; // x0
  const MethodInfo *v111; // x3
  struct ShopTopItemInfo_o *info; // x8
  int32_t FragmentCountToExchangeForStone; // w21
  int32_t UserStoneFragmentNum; // w22
  ShopTopListViewItemDraw_o *PayMultiTimePrice; // x0
  const MethodInfo *v116; // x3
  BalanceConfig_c *v117; // x0
  UILabel_o *exchangeStoneFragmentsLabel; // x20
  int v119; // w22
  int StoneFragmentExchangeNoticeDispMax; // w23
  System_String_o *v121; // x21
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  Il2CppObject *v125; // x0
  int v126; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1E49A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, item);
    sub_1C3B764(&AtlasManager_TypeInfo, v5);
    sub_1C3B764(&BalanceConfig_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1C3B764(&int_TypeInfo, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__, v15);
    sub_1C3B764(&ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_12318/*"ScrollBar"*/, v17);
    sub_1C3B764(&StringLiteral_12322/*"ScrollRect.value"*/, v18);
    sub_1C3B764(&StringLiteral_12321/*"ScrollBarValue-"*/, v19);
    byte_4C1E49A = 1;
  }
  v20 = sub_1C3B9B0(ShopTopListViewItemDraw___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_97;
  *(_QWORD *)(v20 + 16) = item;
  v29 = (ShopTopListViewItem_o **)(v20 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)item, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_97;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !*v29 )
    goto LABEL_97;
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
    goto LABEL_97;
  v45 = (*v29)->fields.shopListNotice;
  v46 = v45 && v45->fields._IsShowNew_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.newItemSprite,
    v46,
    v36);
  if ( !*v29 )
    goto LABEL_97;
  v48 = (*v29)->fields.shopListNotice;
  if ( v48 )
    LODWORD(v48) = v48->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodLimitedSprite,
    (_DWORD)v48 == 1,
    v47);
  if ( !*v29 )
    goto LABEL_97;
  v50 = (*v29)->fields.shopListNotice;
  if ( v50 )
    LODWORD(v50) = v50->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyLimitedSprite,
    (_DWORD)v50 == 2,
    v49);
  if ( !*v29 )
    goto LABEL_97;
  v52 = (*v29)->fields.shopListNotice;
  if ( v52 )
    LODWORD(v52) = v52->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantLimitedSprite,
    (_DWORD)v52 == 3,
    v51);
  if ( !*v29 )
    goto LABEL_97;
  v54 = (*v29)->fields.shopListNotice;
  if ( v54 && v54->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    gameObject = this->fields.exchangeServantLimitedSprite;
    if ( !gameObject )
      goto LABEL_97;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    *(_QWORD *)(v20 + 32) = Component_object;
    v56 = (UnityEngine_Object_o **)(v20 + 32);
    sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)Component_object, v57, v58, v59, v60, v61, v62);
    v63 = *(UnityEngine_Object_o **)(v20 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
    {
      exchangeServantDefaultAtlas = (UnityEngine_Object_o *)this->fields.exchangeServantDefaultAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(exchangeServantDefaultAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*v56 )
          goto LABEL_97;
        monitor = (struct UIAtlas_o *)(*v56)[19].monitor;
        this->fields.exchangeServantDefaultAtlas = monitor;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.exchangeServantDefaultAtlas,
          (int64_t)monitor,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
        if ( !*v56 )
          goto LABEL_97;
        v78 = *(struct System_String_o **)&(*v56)[19].fields.m_CachedPtr;
        this->fields.exchangeServantDefaultSpriteName = v78;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.exchangeServantDefaultSpriteName,
          (int64_t)v78,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
      }
    }
    v79 = *v56;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v80 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v80,
        (Il2CppObject *)v20,
        Method_ShopTopListViewItemDraw___c__DisplayClass52_0__ResetShopListNotice_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v80, 1, 0LL);
    }
  }
  if ( !*v29 )
    goto LABEL_97;
  v81 = (*v29)->fields.shopListNotice;
  if ( v81 )
    LODWORD(v81) = v81->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.periodRemainTimeRoot,
    (_DWORD)v81 == 1,
    v53);
  if ( !*v29 )
    goto LABEL_97;
  v83 = (*v29)->fields.shopListNotice;
  if ( v83 )
    LODWORD(v83) = v83->fields._LimitedType_k__BackingField;
  ShopTopListViewItemDraw__SetObjectActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.monthlyRemainTimeRoot,
    (_DWORD)v83 == 2,
    v82);
  if ( !*v29 )
    goto LABEL_97;
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
    goto LABEL_97;
  v88 = (*v29)->fields.shopListNotice;
  v89 = v88 ? v88->fields._PeriodTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.periodRemainTimeValueLabel,
    this->fields.periodShopNoticeRemainTimeLabel,
    v89,
    v87);
  if ( !*v29 )
    goto LABEL_97;
  v91 = (*v29)->fields.shopListNotice;
  v92 = v91 ? v91->fields._MonthlyTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.monthlyRemainTimeValueLabel,
    this->fields.monthlyShopNoticeRemainTimeLabel,
    v92,
    v90);
  if ( !*v29 )
    goto LABEL_97;
  v94 = (*v29)->fields.shopListNotice;
  v95 = v94 ? v94->fields._ExchangeServatTimeLimit_k__BackingField : 0LL;
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
    this,
    this->fields.exchangeServantRemainTimeValueLabel,
    this->fields.exchangeServantShopNoticeRemainTimeLabel,
    v95,
    v93);
  if ( !*v29 )
    goto LABEL_97;
  v97 = (*v29)->fields.shopListNotice;
  if ( v97 )
    LOBYTE(v97) = v97->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeValueLabel,
    (unsigned __int8)v97 != 1,
    v96);
  periodRemainTimeLabel = this->fields.periodRemainTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v99 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"ScrollBar"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v99, periodRemainTimeLabel, (System_String_o *)v99, v100);
  monthlyRemainTimeLabel = this->fields.monthlyRemainTimeLabel;
  v102 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"ScrollBar"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v102, monthlyRemainTimeLabel, (System_String_o *)v102, v103);
  exchangeServantRemainTimeLabel = this->fields.exchangeServantRemainTimeLabel;
  v105 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"ScrollBar"*/, 0LL);
  ShopTopListViewItemDraw__SetLabelText(v105, exchangeServantRemainTimeLabel, (System_String_o *)v105, v106);
  if ( !*v29 )
    goto LABEL_97;
  v108 = (*v29)->fields.shopListNotice;
  v109 = !v108 || !v108->fields._IsIndefiniteExchangeServant_k__BackingField;
  ShopTopListViewItemDraw__SetLabelActive(
    (ShopTopListViewItemDraw_o *)gameObject,
    this->fields.exchangeServantRemainTimeLabel,
    v109,
    v107);
  ShopTopListViewItemDraw__SetObjectActive(v110, this->fields.exchangeStoneFragmentsRoot, 0, v111);
  if ( !*v29 )
    goto LABEL_97;
  info = (*v29)->fields.info;
  if ( !info )
    goto LABEL_97;
  if ( info->fields._State_k__BackingField != 4 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !gameObject )
    goto LABEL_97;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_97;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)gameObject, 0LL);
  PayMultiTimePrice = (ShopTopListViewItemDraw_o *)StoneShopMaster__GetPayMultiTimePrice(0LL);
  if ( UserStoneFragmentNum < (int)PayMultiTimePrice * FragmentCountToExchangeForStone )
    return;
  ShopTopListViewItemDraw__SetObjectActive(PayMultiTimePrice, this->fields.exchangeStoneFragmentsRoot, 1, v116);
  v117 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v117 = BalanceConfig_TypeInfo;
  }
  exchangeStoneFragmentsLabel = this->fields.exchangeStoneFragmentsLabel;
  v119 = UserStoneFragmentNum / FragmentCountToExchangeForStone;
  StoneFragmentExchangeNoticeDispMax = v117->static_fields->StoneFragmentExchangeNoticeDispMax;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v119 <= StoneFragmentExchangeNoticeDispMax )
  {
    v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"ScrollBarValue-"*/, 0LL);
    v126 = v119;
    v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v122, v123, v124);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v121, v125, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12322/*"ScrollRect.value"*/, 0LL);
    if ( !exchangeStoneFragmentsLabel )
      goto LABEL_97;
  }
  UILabel__set_text(exchangeStoneFragmentsLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeStoneFragmentsLabel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___)) == 0LL )
  {
LABEL_97:
    sub_1C3B9C0(gameObject, v22);
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

  if ( (byte_4C1E49B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
    byte_4C1E49B = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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
  if ( (byte_4C1E499 & 1) == 0 )
  {
    sub_1C3B764(&CoinRoomUtility_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1C3B764(&int_TypeInfo, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_10937/*"Reading would overrun buffer"*/, v6);
    sub_1C3B764(&StringLiteral_14744/*"UnityIAP:"*/, v7);
    sub_1C3B764(&StringLiteral_15597/*"[FFFFFF]"*/, v8);
    sub_1C3B764(&StringLiteral_3662/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v9);
    sub_1C3B764(&StringLiteral_7757/*"IsArabicPresentationForms-A"*/, v10);
    sub_1C3B764(&StringLiteral_12318/*"ScrollBar"*/, v11);
    sub_1C3B764(&StringLiteral_419/*"#E60000"*/, v12);
    sub_1C3B764(&StringLiteral_10821/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v13);
    sub_1C3B764(&StringLiteral_3660/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v14);
    this = (ShopTopListViewItemDraw_o *)sub_1C3B764(&StringLiteral_10938/*"Realtime: "*/, v15);
    byte_4C1E499 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  coinRoomListItem = v2->fields.coinRoomListItem;
  if ( !coinRoomListItem )
    goto LABEL_29;
  if ( !coinRoomListItem->fields._IsUse_k__BackingField )
  {
    this = (ShopTopListViewItemDraw_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_419/*"#E60000"*/,
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
                       (System_String_o *)StringLiteral_10938/*"Realtime: "*/,
                       0LL);
        this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                              GameObject,
                                              (System_String_o *)StringLiteral_10937/*"Reading would overrun buffer"*/,
                                              0LL);
        if ( this )
        {
          this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
          if ( GameObject )
          {
            v34 = (UILabel_o *)this;
            UnityEngine_GameObject__SetActive(GameObject, 1, 0LL);
            this = (ShopTopListViewItemDraw_o *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3662/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
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
  v17 = GameObjectExtensions__FindGameObject(v2->fields.coinRoomObject, (System_String_o *)StringLiteral_10821/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_7757/*"IsArabicPresentationForms-A"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  this = (ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v17 )
    goto LABEL_29;
  v18 = (UILabel_o *)this;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3660/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  if ( !this )
    goto LABEL_29;
  v19 = this;
  if ( !System_String__Equals_63376928((System_String_o *)this, (System_String_o *)StringLiteral_3660/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL) )
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
    sub_1C3B9C0(this, method);
  }
LABEL_15:
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_14744/*"UnityIAP:"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this = (ShopTopListViewItemDraw_o *)GameObjectExtensions__FindGameObject(
                                        v17,
                                        (System_String_o *)StringLiteral_15597/*"[FFFFFF]"*/,
                                        0LL);
  if ( !this )
    goto LABEL_29;
  v25 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  coinRoomNoticeRemainTimeLabel = v2->fields.coinRoomNoticeRemainTimeLabel;
  v27 = (UILabel_o *)v25;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime(0LL);
  ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(v2, v27, coinRoomNoticeRemainTimeLabel, MonthUnixTime, v29);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"ScrollBar"*/, 0LL);
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ShopTopItemInfo_o *v51; // x8
  UnityEngine_Object_o *coinRoomObject; // x22
  const MethodInfo *v53; // x2
  System_Collections_IEnumerator_o *CoinRoomAsset; // x0
  UnityEngine_Object_o *v55; // x21
  const MethodInfo *v56; // x1
  struct ShopTopItemInfo_o *v57; // x8
  UnityEngine_Object_o *spBankPeriodTimeRoot; // x20
  int64_t v59; // x20
  UILabel_o *spBankPeriodInfoLabel; // x21
  ShopTopListViewItemDraw_o *v61; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x4
  UISprite_o *spBankPeriodInfoSprite; // x19
  UnityEngine_Object_o *v65; // x20
  System_String_o **p_ImageName_k__BackingField; // x8
  UISprite_o *v67; // x23
  System_String_o *v68; // x24

  v8 = this;
  if ( (byte_4C1E497 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&Method_DataManager_GetMaster_BankShopMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&string_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_23769/*"tvOS"*/, v14);
    sub_1C3B764(&StringLiteral_12567/*"SkillRankUp"*/, v15);
    sub_1C3B764(&StringLiteral_20480/*"isPossessionInfoDisp"*/, v16);
    sub_1C3B764(&StringLiteral_12259/*"Sami, Inari (Finland)"*/, v17);
    sub_1C3B764(&StringLiteral_20857/*"lock_light_{0}"*/, v18);
    this = (ShopTopListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C1E497 = 1;
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
          v67 = v8->fields.baseImageSprite;
          v68 = v23->fields._ImageName_k__BackingField;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          IsNullOrEmpty = AtlasManager__SetEventSprite(v67, v68, 0LL);
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
            IsNullOrEmpty = AtlasManager__SetShopBanner_39284172(baseImageSprite, ImageName_k__BackingField, 0LL);
          }
          else
          {
            if ( !baseImageSprite )
              goto LABEL_78;
            if ( (IsNullOrEmpty & 1) != 0 )
              p_ImageName_k__BackingField = (System_String_o **)&StringLiteral_20857/*"lock_light_{0}"*/;
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
              IsNullOrEmpty = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"Sami, Inari (Finland)"*/, 0LL);
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
            AtlasManager__SetShopBanner_39284172(
              exchangeStoneFragmentsSprite,
              (System_String_o *)StringLiteral_20480/*"isPossessionInfoDisp"*/,
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
          v51 = item->fields.info;
          if ( !v51 )
            goto LABEL_78;
          if ( v51->fields._State_k__BackingField == 17 )
          {
            v8->fields.coinRoomListItem = item;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v8->fields.coinRoomListItem,
              (int64_t)item,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            coinRoomObject = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(coinRoomObject, 0LL, 0LL) )
            {
              UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)v8, 0LL);
              CoinRoomAsset = ShopTopListViewItemDraw__CreateCoinRoomAsset(v8, manager, v53);
              IsNullOrEmpty = (int64_t)UnityEngine_MonoBehaviour__StartCoroutine_71108020(
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
              ShopTopListViewItemDraw__SetCoinRoom(v8, v56);
            }
          }
          else
          {
            v55 = (UnityEngine_Object_o *)v8->fields.coinRoomObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              IsNullOrEmpty = (int64_t)v8->fields.coinRoomObject;
              if ( !IsNullOrEmpty )
                goto LABEL_78;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
            }
          }
          v57 = item->fields.info;
          if ( !v57 )
            goto LABEL_78;
          if ( v57->fields._State_k__BackingField == 10 )
          {
            spBankPeriodTimeRoot = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(spBankPeriodTimeRoot, 0LL, 0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              IsNullOrEmpty = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = BankShopMaster__GetSpBankEndedAt((BankShopMaster_o *)IsNullOrEmpty, 0LL);
                if ( v8->fields.spBankPeriodTimeRoot )
                {
                  v59 = IsNullOrEmpty;
                  if ( IsNullOrEmpty )
                  {
                    UnityEngine_GameObject__SetActive(v8->fields.spBankPeriodTimeRoot, 1, 0LL);
                    spBankPeriodInfoLabel = v8->fields.spBankPeriodInfoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v61 = (ShopTopListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12567/*"SkillRankUp"*/,
                                                         0LL);
                    ShopTopListViewItemDraw__SetLabelText(v61, spBankPeriodInfoLabel, (System_String_o *)v61, v62);
                    ShopTopListViewItemDraw__SetShopNoticeRemainTimeLabel(
                      v8,
                      v8->fields.spBankPeriodValueLabel,
                      v8->fields.spBankPeriodNoticeRemainTimeLabel,
                      v59,
                      v63);
                    spBankPeriodInfoSprite = v8->fields.spBankPeriodInfoSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetShopBanner_39284172(
                      spBankPeriodInfoSprite,
                      (System_String_o *)StringLiteral_23769/*"tvOS"*/,
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
              sub_1C3B9C0(IsNullOrEmpty, Empty);
            }
          }
          v65 = (UnityEngine_Object_o *)v8->fields.spBankPeriodTimeRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
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

  if ( (byte_4C1E49E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    byte_4C1E49E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E49F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    byte_4C1E49F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C1E49C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, go);
    byte_4C1E49C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !go )
      sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C1E4A1 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, label);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&ShopNoticeRemainTimeLabel_TypeInfo, v10);
    byte_4C1E4A1 = 1;
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
      && (shopNoticeRemainTimeLabel = (ShopNoticeRemainTimeLabel_o *)sub_1C3B9B0(ShopNoticeRemainTimeLabel_TypeInfo),
          ShopNoticeRemainTimeLabel___ctor(shopNoticeRemainTimeLabel, label, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          !shopNoticeRemainTimeLabel) )
    {
      sub_1C3B9C0(RestTime5, v12);
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

  if ( (byte_4C1E4A2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, item);
    byte_4C1E4A2 = 1;
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
    sub_1C3B708(
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
        sub_1C3B9C0(v11, v12);
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


void __fastcall ShopTopListViewItemDraw__SetSpriteActive(
        ShopTopListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C1E49D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, sprite);
    byte_4C1E49D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v7);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x8

  if ( (byte_4C1E4A0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, objects);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    byte_4C1E4A0 = 1;
  }
  if ( !*objects )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *objects = (System_Collections_Generic_List_GameObject__o *)v13;
    sub_1C3B708((PartyOrganizationUtility_o *)objects, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)period, 0LL, 0LL) )
    {
      v27 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      items = v27->fields._items;
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)period,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v31[4] = (Il2CppClass *)period;
        sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)period, v21, v22, v23, v24, v25, v26);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monthly, 0LL, 0LL) )
    {
      v27 = (System_Collections_Generic_List_object__o *)*objects;
      if ( !*objects )
        goto LABEL_29;
      v38 = v27->fields._items;
      v39 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v27->fields._version;
      if ( !v38 )
        goto LABEL_29;
      v40 = v27->fields._size;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)monthly,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v38->obj.klass + v40;
        v27->fields._size = v40 + 1;
        v41[4] = (Il2CppClass *)monthly;
        sub_1C3B708((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)monthly, v32, v33, v34, v35, v36, v37);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)exchangeServant, 0LL, 0LL) )
    {
      v27 = (System_Collections_Generic_List_object__o *)*objects;
      if ( *objects )
      {
        v48 = v27->fields._items;
        v49 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v27->fields._version;
        if ( v48 )
        {
          v50 = v27->fields._size;
          if ( (unsigned int)v50 >= v48->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)exchangeServant,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v27->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)exchangeServant;
            sub_1C3B708((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)exchangeServant, v42, v43, v44, v45, v46, v47);
          }
          return;
        }
      }
LABEL_29:
      sub_1C3B9C0(v27, v20);
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
  struct ShopTopListViewManager_o *manager; // x8
  struct ShopTopListViewItemDraw_o *_4__this; // x19
  AssetData_o *coinRoomAsset; // x0
  ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *v13; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x20

  v8 = this;
  if ( (byte_4C1E4A4 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, method);
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)sub_1C3B764(&StringLiteral_4640/*"ControlDark"*/, v9);
    byte_4C1E4A4 = 1;
  }
  if ( v8->fields.__1__state >= 2u )
    return 0;
  manager = v8->fields.manager;
  _4__this = v8->fields.__4__this;
  v8->fields.__1__state = -1;
  if ( !manager )
LABEL_12:
    sub_1C3B9C0(this, method);
  coinRoomAsset = manager->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)AssetData__GetObject_object__50142412(
                                                                     coinRoomAsset,
                                                                     (System_String_o *)StringLiteral_4640/*"ControlDark"*/,
                                                                     (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( _4__this )
    {
      v13 = this;
      this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   (UnityEngine_GameObject_o *)v13,
                   transform,
                   0LL,
                   0LL);
        _4__this->fields.coinRoomObject = Object;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&_4__this->fields.coinRoomObject,
          (int64_t)Object,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        this = (ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_o *)_4__this->fields.coinRoomObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ShopTopListViewItemDraw__SetCoinRoom(_4__this, v22);
          return 0;
        }
      }
    }
    goto LABEL_12;
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C3B708(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_ShopTopListViewItemDraw__CreateCoinRoomAsset_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  if ( (byte_4C1E4A3 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&int_TypeInfo, v6);
    this = (ShopTopListViewItemDraw___c__DisplayClass52_0_o *)sub_1C3B764(&StringLiteral_20578/*"java.io.EOFException"*/, v7);
    byte_4C1E4A3 = 1;
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
  v12 = System_String__Format((System_String_o *)StringLiteral_20578/*"java.io.EOFException"*/, v11, 0LL);
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
    sub_1C3B9C0(this, method);
  }
}