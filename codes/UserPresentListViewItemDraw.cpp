void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct UserPresentListViewItemDraw_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct UserPresentListViewItemDraw_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct UserPresentListViewItemDraw_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BDB362 & 1) == 0 )
  {
    sub_1C21E38(&UserPresentListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_23357/*"ribon_present_important_1"*/);
    sub_1C21E38(&StringLiteral_20716/*"img_listboard_bg02"*/);
    sub_1C21E38(&StringLiteral_20717/*"img_listboard_bg03"*/);
    sub_1C21E38(&StringLiteral_23358/*"ribon_present_limited_period"*/);
    byte_4BDB362 = 1;
  }
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = 0xFFFFFFEAFFFFFFF5LL;
  v8 = StringLiteral_20716/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_20716/*"img_listboard_bg02"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20717/*"img_listboard_bg03"*/;
  v10 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v10->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_20717/*"img_listboard_bg03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->BOARD_BG_SP_NAME_IMPORTANT, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_23358/*"ribon_present_limited_period"*/;
  v18 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v18->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_23358/*"ribon_present_limited_period"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->ICON_SP_NAME_LIMITED, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_23357/*"ribon_present_important_1"*/;
  v26 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v26->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_23357/*"ribon_present_important_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->ICON_SP_NAME_IMPORTANT, v25, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)&UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH = 0xF43C38000LL;
}


void __fastcall UserPresentListViewItemDraw___ctor(UserPresentListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentListViewItemDraw__SetBlocked(
        UserPresentListViewItemDraw_o *this,
        bool val,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *blockObj; // x0

  blockObj = this->fields.blockObj;
  if ( !blockObj )
    sub_1C22094(0LL, val);
  UnityEngine_GameObject__SetActive(blockObj, val, 0LL);
}


void __fastcall UserPresentListViewItemDraw__SetCheck(
        UserPresentListViewItemDraw_o *this,
        bool val,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkObj; // x0

  checkObj = this->fields.checkObj;
  if ( !checkObj )
    sub_1C22094(0LL, val);
  UnityEngine_GameObject__SetActive(checkObj, val, 0LL);
}


void __fastcall UserPresentListViewItemDraw__SetCheckCnt(
        UserPresentListViewItemDraw_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *checkCntLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = count;
  if ( (byte_4BDB361 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB361 = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v5 = this->fields.checkCntLabel;
    v6 = System_Int32__ToString((int32_t)&v9, 0LL);
    if ( !v5 )
      sub_1C22094(v6, v7);
    if ( v6 )
      v8 = v6;
    else
      v8 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v5, v8, 0LL);
  }
}


void __fastcall UserPresentListViewItemDraw__SetInput(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4BDB35E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB35E = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                          Component_object,
                                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Component_object,
                                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_1C22094(Component_object, v7);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
  }
}


void __fastcall UserPresentListViewItemDraw__SetItem(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *limitedPeriodSprite; // x21
  UserPresentListViewItemDraw_c *v8; // x0
  System_String_o *ICON_SP_NAME_LIMITED; // x22
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  ItemIconComponent_o *itemIcon; // x0
  __int64 giftType; // x1
  int32_t objectId; // w2
  System_String_o *v14; // x21
  const MethodInfo *v15; // x1
  Il2CppObject *NameText; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v25; // x21
  UserPresentListViewManager_c *v26; // x8
  __int64 methodPtr_low; // x9
  struct UserPresentListViewManager_o **p_mManager; // x0
  UserPresentBoxEntity_o *v29; // x22
  UserPresentBoxMaster_c *v30; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v35; // w1
  UserPresentBoxMaster_c *v36; // x0
  UIButton_o *v37; // x22
  UISprite_o *v38; // x22
  System_String_o *v39; // x23
  UnityEngine_GameObject_o *v40; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v42; // x22
  UISprite_o *v43; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v48; // x0
  const MethodInfo *v49; // x2
  struct UserPresentBoxEntity_o *v50; // x8
  const MethodInfo *v51; // x2

  if ( (byte_4BDB35D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UserPresentBoxMaster_TypeInfo);
    sub_1C21E38(&UserPresentListViewItemDraw_TypeInfo);
    sub_1C21E38(&UserPresentListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10660/*"PRESENT_INFO"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB35D = 1;
  }
  if ( item && mode )
  {
    limitedPeriodSprite = this->fields.limitedPeriodSprite;
    v8 = UserPresentListViewItemDraw_TypeInfo;
    if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      v8 = UserPresentListViewItemDraw_TypeInfo;
    }
    ICON_SP_NAME_LIMITED = v8->static_fields->ICON_SP_NAME_LIMITED;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(limitedPeriodSprite, ICON_SP_NAME_LIMITED, 0LL);
    usrPresentEnt = item->fields.usrPresentEnt;
    itemIcon = this->fields.itemIcon;
    if ( usrPresentEnt )
    {
      giftType = (unsigned int)usrPresentEnt->fields.giftType;
      objectId = usrPresentEnt->fields.objectId;
      if ( !itemIcon )
        goto LABEL_79;
    }
    else
    {
      giftType = 0LL;
      objectId = 0;
      if ( !itemIcon )
        goto LABEL_79;
    }
    ItemIconComponent__SetGift_39386620(itemIcon, giftType, objectId, -1, 0, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10660/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v15);
    itemIcon = (ItemIconComponent_o *)System_String__Format_63129848(
                                        v14,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_79;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v25 = (System_String_o *)itemIcon;
    if ( manager )
    {
      v26 = UserPresentListViewManager_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewManager_TypeInfo )
      {
        this->fields.mManager = manager;
        p_mManager = &this->fields.mManager;
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == v26 )
        {
          goto LABEL_24;
        }
      }
      sub_1C22354(manager);
    }
    this->fields.mManager = manager;
    p_mManager = &this->fields.mManager;
LABEL_24:
    sub_1C21DDC((PartyOrganizationUtility_o *)p_mManager, (int64_t)manager, v17, v18, v19, v20, v21, v22);
    v29 = item->fields.usrPresentEnt;
    if ( !v29 )
      goto LABEL_50;
    v30 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v30 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v29, v30->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
    {
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      baseButton = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !baseButton )
        goto LABEL_79;
      UIButton__set_normalSprite(
        baseButton,
        UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
        0LL);
      baseSprite = this->fields.baseSprite;
      BOARD_BG_SP_NAME_IMPORTANT = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, BOARD_BG_SP_NAME_IMPORTANT, 0LL);
      AtlasManager__SetEventUI(
        this->fields.imortantSprite,
        UserPresentListViewItemDraw_TypeInfo->static_fields->ICON_SP_NAME_IMPORTANT,
        0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        (float)UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y,
        0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
      if ( !itemIcon )
        goto LABEL_79;
      v35 = 0;
      goto LABEL_61;
    }
    v36 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v36 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v29, v36->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
    {
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v37 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v37 )
        goto LABEL_79;
      UIButton__set_normalSprite(
        v37,
        UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
        0LL);
      v38 = this->fields.baseSprite;
      v39 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v38, v39, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
    }
    else
    {
LABEL_50:
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v42 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v42 )
        goto LABEL_79;
      UIButton__set_normalSprite(v42, UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL, 0LL);
      v43 = this->fields.baseSprite;
      BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v43, BOARD_BG_SP_NAME_NORMAL, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
    }
    GameObjectExtensions__SetLocalPositionY(v40, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
    itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
    if ( !itemIcon )
      goto LABEL_79;
    v35 = 1;
LABEL_61:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v35, 0LL);
    itemIcon = (ItemIconComponent_o *)this->fields.friendShipSprite;
    if ( itemIcon )
    {
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      if ( itemIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.chocolateSprite;
        if ( itemIcon )
        {
          itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIcon,
                                              0LL);
          if ( itemIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
            itemIcon = (ItemIconComponent_o *)this->fields.nameTextLabel;
            if ( itemIcon )
            {
              UILabel__set_text((UILabel_o *)itemIcon, v25, 0LL);
              itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
              nameTextLabel = this->fields.nameTextLabel;
              if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
              if ( nameTextLabel )
              {
                UILabel__SetCondensedScale_48213524(
                  nameTextLabel,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                  0.0,
                  0LL);
                msgTextLabel = this->fields.msgTextLabel;
                presentMsg = item->fields.presentMsg;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v48 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                WrapControlText__textAdjust(
                  msgTextLabel,
                  v48,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                  0,
                  0LL);
                itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                if ( itemIcon )
                {
                  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  v50 = item->fields.usrPresentEnt;
                  if ( v50 && v50->fields.giftType == 2 )
                    UserPresentListViewItemDraw__SetItemInfo(this, item, v49);
                  else
                    UserPresentListViewItemDraw__SetNormalInfo(this, item, v49);
                  itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)itemIcon,
                      item->fields.checkBoxed,
                      0LL);
                    UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v51);
                    itemIcon = (ItemIconComponent_o *)this->fields.blockObj;
                    if ( itemIcon )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, item->fields.blocked, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_79:
    sub_1C22094(itemIcon, giftType);
  }
}


void __fastcall UserPresentListViewItemDraw__SetItemInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v6; // x1
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v8; // x8
  System_String_o *detail; // x1
  ItemMaster_o *v10; // x21
  const MethodInfo *v11; // x2
  struct ItemEntity_o *v12; // x8
  struct ItemEntity_o *v13; // x8
  System_String_o *OverwritePresentboxDetail; // x21
  UnityEngine_GameObject_o *limitedPeriod; // x21
  bool activeSelf; // w0
  UILabel_o *resTimeLb; // x21
  bool v18; // w22
  struct ItemEntity_o *v19; // x8
  UILabel_o *resLimitedTimeLb; // x21
  UILabel_o *resLimitedTimeLbAlt; // x21
  UnityEngine_GameObject_o *v22; // x21
  float v23; // s0
  struct UILabel_o *v24; // x8
  bool v25; // w1
  UILabel_o *v26; // x21
  int64_t v27; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxMaster_c *v29; // x0
  UILabel_o *v30; // x20
  UILabel_o *v31; // x19
  UILabel_o *holdNumTitleLb; // x22
  struct ItemEntity_o *v33; // x8
  LocalizationManager_c *v34; // x8
  struct UILabel_o *holdNumCntLb; // x21
  int32_t num; // w22
  struct ItemEntity_o *v37; // x8
  int type; // w8
  Il2CppObject *Master_object; // x21
  struct ItemEntity_o *v40; // x8
  LocalizationManager_c *v41; // x0
  Il2CppObject *MasterData_object; // x21
  struct ItemEntity_o *v43; // x8
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB35F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserPresentBoxMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_13604/*"TIME_REST_STRING"*/);
    sub_1C21E38(&StringLiteral_13592/*"TIME_REST_PRESENT_LIMITED"*/);
    sub_1C21E38(&StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_1C21E38(&StringLiteral_13589/*"TIME_REST_PRESENT"*/);
    sub_1C21E38(&StringLiteral_13590/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_1C21E38(&StringLiteral_13591/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BDB35F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !item )
    goto LABEL_126;
  itemEnt = item->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_126;
  if ( itemEnt->fields.type == 24 )
  {
    Instance = this->fields.holdNumTitleLb;
    if ( !Instance )
      goto LABEL_126;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_126;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = this->fields.checkRoot;
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v8 = item->fields.itemEnt;
    if ( !v8 )
      goto LABEL_126;
    Instance = this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v8->fields.detail;
    goto LABEL_15;
  }
  v10 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = item->fields.itemEnt;
    if ( !v12 )
      goto LABEL_126;
    Instance = (void *)ItemMaster__isFriendPoint(v10, v12->fields.id, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v13 = item->fields.itemEnt;
      if ( !v13 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v10, v13->fields.id, 0LL) )
      {
        Instance = this->fields.holdNumCntLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = this->fields.holdNumTitleLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        holdNumTitleLb = this->fields.holdNumTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v33 = item->fields.itemEnt;
        if ( !v33 )
          goto LABEL_126;
        Instance = (void *)ItemMaster__isMana(v10, v33->fields.id, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_126;
          v34 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *((_DWORD *)Instance + 46);
          goto LABEL_118;
        }
        v37 = item->fields.itemEnt;
        if ( !v37 )
          goto LABEL_126;
        type = v37->fields.type;
        if ( type <= 21 )
        {
          if ( type != 2 && type != 17 )
          {
LABEL_107:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            v43 = item->fields.itemEnt;
            if ( !v43 )
              goto LABEL_126;
            if ( !MasterData_object )
              goto LABEL_126;
            Instance = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)MasterData_object,
                         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                         v43->fields.id,
                         0LL);
            if ( !Instance )
              goto LABEL_126;
            v34 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *((_DWORD *)Instance + 7);
LABEL_118:
            if ( !v34->_2.cctor_finished )
            {
              v41 = v34;
LABEL_120:
              j_il2cpp_runtime_class_init_0(v41);
            }
LABEL_121:
            Instance = LocalizationManager__GetNumberFormat(num, 0LL);
            if ( !holdNumCntLb )
              goto LABEL_126;
            detail = (System_String_o *)Instance;
LABEL_123:
            Instance = holdNumCntLb;
LABEL_15:
            UILabel__set_text((UILabel_o *)Instance, detail, 0LL);
            goto LABEL_23;
          }
        }
        else if ( type != 36 )
        {
          if ( type == 29 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            v40 = item->fields.itemEnt;
            if ( !v40 || !Master_object )
              goto LABEL_126;
            Instance = (void *)UserSvtCoinMaster__TryGetEntity(
                                 (UserSvtCoinMaster_o *)Master_object,
                                 &entity,
                                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                                 v40->fields.value,
                                 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_1212/*"0"*/;
              goto LABEL_123;
            }
            if ( !entity )
              goto LABEL_126;
            v41 = LocalizationManager_TypeInfo;
            num = entity->fields.num;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              goto LABEL_120;
            goto LABEL_121;
          }
          if ( type == 22 )
          {
            Instance = UserGameMaster__getSelfUserGame(0LL);
            if ( !Instance )
              goto LABEL_126;
            v34 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *((_DWORD *)Instance + 47);
            goto LABEL_118;
          }
          goto LABEL_107;
        }
        Instance = UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_126;
        v34 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *((_DWORD *)Instance + 44);
        goto LABEL_118;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v11);
LABEL_23:
  Instance = item->fields.itemEnt;
  if ( !Instance )
    goto LABEL_126;
  OverwritePresentboxDetail = ItemEntity__GetOverwritePresentboxDetail((ItemEntity_o *)Instance, 0LL);
  if ( System_String__op_Inequality(OverwritePresentboxDetail, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    Instance = this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)Instance, OverwritePresentboxDetail, 0LL);
  }
  limitedPeriod = this->fields.limitedPeriod;
  Instance = (void *)UserPresentListViewItem__isItemLimitedPeriod(item, v6);
  if ( !limitedPeriod )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive(limitedPeriod, (unsigned __int8)Instance & 1, 0LL);
  Instance = this->fields.limitedPeriod;
  if ( !Instance )
    goto LABEL_126;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  resTimeLb = this->fields.resTimeLb;
  v18 = activeSelf;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( activeSelf )
      goto LABEL_31;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v18 )
    {
LABEL_31:
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13592/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
      if ( !resTimeLb )
        goto LABEL_126;
      UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
      v19 = item->fields.itemEnt;
      if ( !v19 )
        goto LABEL_126;
      resLimitedTimeLb = this->fields.resLimitedTimeLb;
      Instance = LocalizationManager__GetRestTime2(v19->fields.endedAt, -1LL, 0LL);
      if ( !resLimitedTimeLb )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
      Instance = this->fields.resLimitedTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v45.fields.g = 0.92157;
      v45.fields.b = 0.015686;
      v45.fields.r = 1.0;
      v45.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v45, 0LL);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13604/*"TIME_REST_STRING"*/, 0LL);
      if ( !resLimitedTimeLbAlt )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.resLimitedTimeLb )
        goto LABEL_126;
      v22 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resLimitedTimeLb, 0LL);
      if ( !Instance )
        goto LABEL_126;
      LODWORD(v23) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      v24 = this->fields.resLimitedTimeLb;
      if ( !v24 )
        goto LABEL_126;
      GameObjectExtensions__SetLocalPositionX(v22, v23 - (float)v24->fields.mWidth, 0LL);
      Instance = this->fields.resTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v25 = 1;
      goto LABEL_53;
    }
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13589/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_126;
  UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
  Instance = item->fields.usrPresentEnt;
  if ( !Instance )
    goto LABEL_126;
  v26 = this->fields.resLimitedTimeLb;
  v27 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
  Instance = LocalizationManager__GetRestTime2(v27, -1LL, 0LL);
  if ( !v26 )
    goto LABEL_126;
  UILabel__set_text(v26, (System_String_o *)Instance, 0LL);
  Instance = this->fields.resLimitedTimeLb;
  if ( !Instance )
    goto LABEL_126;
  v46.fields.r = 1.0;
  v46.fields.g = 1.0;
  v46.fields.b = 1.0;
  v46.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v46, 0LL);
  Instance = this->fields.resLimitedTimeLbAlt;
  if ( !Instance )
    goto LABEL_126;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.resTimeLb;
  if ( !Instance )
    goto LABEL_126;
  v25 = 0;
LABEL_53:
  UILabel__set_applyGradient((UILabel_o *)Instance, v25, 0LL);
  usrPresentEnt = item->fields.usrPresentEnt;
  if ( usrPresentEnt )
  {
    v29 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v29 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(usrPresentEnt, v29->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = this->fields.limitedPeriod;
      if ( !Instance )
        goto LABEL_126;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
      {
        v30 = this->fields.resTimeLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13590/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v30 )
          goto LABEL_126;
        UILabel__set_text(v30, (System_String_o *)Instance, 0LL);
      }
      v31 = this->fields.resLimitedTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13591/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v31 )
      {
        UILabel__set_text(v31, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_126:
      sub_1C22094(Instance, v6);
    }
  }
}


void __fastcall UserPresentListViewItemDraw__SetNormalInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  void *holdNumTitleLb; // x0
  UILabel_o *resTimeLb; // x21
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v8; // x0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v11; // w0
  __int64 v12; // x8
  _QWORD *v13; // x21
  __int64 v14; // x28
  __int64 v15; // x23
  struct UserPresentBoxEntity_o *v16; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v18; // x8
  EventServantMaster_o *v19; // x22
  int32_t v20; // w23
  __int64 v21; // x24
  __int64 v22; // x25
  UILabel_o *v23; // x22
  int64_t v24; // x23
  UserPresentBoxEntity_o *v25; // x20
  UserPresentBoxMaster_c *v26; // x0
  UILabel_o *v27; // x20
  UILabel_o *v28; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB360 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserPresentBoxMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_13589/*"TIME_REST_PRESENT"*/);
    sub_1C21E38(&StringLiteral_13590/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_1C21E38(&StringLiteral_13591/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    byte_4BDB360 = 1;
  }
  holdNumTitleLb = this->fields.holdNumTitleLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.holdNumCntLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.checkRoot;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
  holdNumTitleLb = this->fields.limitedPeriod;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  resTimeLb = this->fields.resTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13589/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_66;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  if ( !item )
    goto LABEL_66;
  holdNumTitleLb = item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v8 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = LocalizationManager__GetRestTime2(v8, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_66;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = this->fields.resLimitedTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  v30.fields.r = 1.0;
  v30.fields.g = 1.0;
  v30.fields.b = 1.0;
  v30.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)holdNumTitleLb, v30, 0LL);
  holdNumTitleLb = this->fields.resLimitedTimeLbAlt;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.resTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UILabel__set_applyGradient((UILabel_o *)holdNumTitleLb, 0, 0LL);
  svtEnt = item->fields.svtEnt;
  if ( svtEnt )
  {
    if ( ServantEntity__get_IsFriendShipSvtEquip(svtEnt, 0LL) )
    {
      holdNumTitleLb = this->fields.friendShipSprite;
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
    }
    holdNumTitleLb = item->fields.svtEnt;
    if ( !holdNumTitleLb )
      goto LABEL_66;
    if ( ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)holdNumTitleLb, 0LL) )
    {
      holdNumTitleLb = this->fields.chocolateSprite;
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
    }
    usrPresentEnt = item->fields.usrPresentEnt;
    v11 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v11, 0LL) )
    {
      holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = DataManager__GetMasterData_object_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0, 0LL);
      if ( holdNumTitleLb )
      {
        v12 = *((_QWORD *)holdNumTitleLb + 3);
        v13 = holdNumTitleLb;
        if ( v12 )
        {
          if ( (int)v12 >= 1 )
          {
            v14 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v14 >= (unsigned int)v12 )
                sub_1C2209C(holdNumTitleLb, item);
              v15 = v13[v14 + 4];
              if ( !v15 )
                break;
              v16 = item->fields.usrPresentEnt;
              if ( !v16 )
                break;
              createdAt = v16->fields.createdAt;
              if ( *(_QWORD *)(v15 + 88) < createdAt && createdAt < *(_QWORD *)(v15 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_object_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventServantMaster___);
                v18 = item->fields.svtEnt;
                if ( !v18 )
                  break;
                v19 = (EventServantMaster_o *)holdNumTitleLb;
                v20 = *(_DWORD *)(v15 + 16);
                v22 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
                v21 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v29.fields.currentCryptoKey = v22;
                *(_QWORD *)&v29.fields.fakeValue = v21;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v29, 0LL);
                if ( !v19 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_40514888(v19, v20, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v23 = this->fields.resLimitedTimeLb;
                  v24 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v24, -1LL, 0LL);
                  if ( !v23 )
                    break;
                  UILabel__set_text(v23, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v12) = *((_DWORD *)v13 + 6);
              if ( (int)++v14 >= (int)v12 )
                goto LABEL_56;
            }
LABEL_66:
            sub_1C22094(holdNumTitleLb, item);
          }
        }
      }
    }
  }
LABEL_56:
  v25 = item->fields.usrPresentEnt;
  if ( v25 )
  {
    v26 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v26 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v25, v26->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v27 = this->fields.resTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13590/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v27 )
        goto LABEL_66;
      UILabel__set_text(v27, (System_String_o *)holdNumTitleLb, 0LL);
      v28 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13591/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v28 )
        goto LABEL_66;
      UILabel__set_text(v28, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}