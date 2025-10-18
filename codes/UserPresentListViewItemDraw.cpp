void UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct UserPresentListViewItemDraw_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct UserPresentListViewItemDraw_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct UserPresentListViewItemDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C41CF0 & 1) == 0 )
  {
    sub_1C37058(&UserPresentListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_23114/*"ribon_present_important_1"*/);
    sub_1C37058(&StringLiteral_20449/*"img_listboard_bg02"*/);
    sub_1C37058(&StringLiteral_20450/*"img_listboard_bg03"*/);
    sub_1C37058(&StringLiteral_23115/*"ribon_present_limited_period"*/);
    byte_4C41CF0 = 1;
  }
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = 0xFFFFFFEAFFFFFFF5LL;
  v4 = StringLiteral_20449/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_20449/*"img_listboard_bg02"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v4, v1, v2);
  v5 = StringLiteral_20450/*"img_listboard_bg03"*/;
  v6 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v6->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_20450/*"img_listboard_bg03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->BOARD_BG_SP_NAME_IMPORTANT, v5, v7, v8);
  v9 = StringLiteral_23115/*"ribon_present_limited_period"*/;
  v10 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v10->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_23115/*"ribon_present_limited_period"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->ICON_SP_NAME_LIMITED, v9, v11, v12);
  v13 = StringLiteral_23114/*"ribon_present_important_1"*/;
  v14 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v14->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_23114/*"ribon_present_important_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->ICON_SP_NAME_IMPORTANT, v13, v15, v16);
  *(_QWORD *)&UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH = 0xF43C38000LL;
}


void UserPresentListViewItemDraw___ctor(UserPresentListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserPresentListViewItemDraw__SetBlocked(UserPresentListViewItemDraw_o *this, bool val, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blockObj; // x0

  blockObj = this->fields.blockObj;
  if ( !blockObj )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(blockObj, val, 0);
}


void UserPresentListViewItemDraw__SetCheck(UserPresentListViewItemDraw_o *this, bool val, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkObj; // x0

  checkObj = this->fields.checkObj;
  if ( !checkObj )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(checkObj, val, 0);
}


void UserPresentListViewItemDraw__SetCheckCnt(
        UserPresentListViewItemDraw_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *checkCntLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x1
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = count;
  if ( (byte_4C41CEF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41CEF = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0, 0) )
  {
    v5 = this->fields.checkCntLabel;
    v6 = System_Int32__ToString((int32_t)&v8, 0);
    if ( !v5 )
      sub_1C372B4(v6);
    if ( v6 )
      v7 = v6;
    else
      v7 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v5, v7, 0);
  }
}


void UserPresentListViewItemDraw__SetInput(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C41CEC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41CEC = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                          Component_object,
                                                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
          (Component_object = (UnityEngine_Component_o *)this->fields.checkRoot) == 0)
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Component_object,
                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0 )
    {
      sub_1C372B4(Component_object);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
  }
}


void UserPresentListViewItemDraw__SetItem(
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
  int32_t giftType; // w1
  int32_t objectId; // w2
  System_String_o *v14; // x21
  const MethodInfo *v15; // x1
  Il2CppObject *NameText; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v21; // x21
  UserPresentListViewManager_c *v22; // x8
  __int64 naturalAligment; // x9
  struct UserPresentListViewManager_o **p_mManager; // x0
  UserPresentBoxEntity_o *v25; // x22
  UserPresentBoxMaster_c *v26; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v31; // w1
  UserPresentBoxMaster_c *v32; // x0
  UIButton_o *v33; // x22
  UISprite_o *v34; // x22
  System_String_o *v35; // x23
  UnityEngine_GameObject_o *v36; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v38; // x22
  UISprite_o *v39; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v44; // x0
  const MethodInfo *v45; // x2
  struct UserPresentBoxEntity_o *v46; // x8
  const MethodInfo *v47; // x2

  if ( (byte_4C41CEB & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UserPresentBoxMaster_TypeInfo);
    sub_1C37058(&UserPresentListViewItemDraw_TypeInfo);
    sub_1C37058(&UserPresentListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_10456/*"PRESENT_INFO"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41CEB = 1;
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
    AtlasManager__SetEventUI(limitedPeriodSprite, ICON_SP_NAME_LIMITED, 0);
    usrPresentEnt = item->fields.usrPresentEnt;
    itemIcon = this->fields.itemIcon;
    if ( usrPresentEnt )
    {
      giftType = usrPresentEnt->fields.giftType;
      objectId = usrPresentEnt->fields.objectId;
      if ( !itemIcon )
        goto LABEL_79;
    }
    else
    {
      giftType = 0;
      objectId = 0;
      if ( !itemIcon )
        goto LABEL_79;
    }
    ItemIconComponent__SetGift_40921900(itemIcon, giftType, objectId, -1, 0, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PRESENT_INFO"*/, 0);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v15);
    itemIcon = (ItemIconComponent_o *)System_String__Format_63602948(
                                        v14,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_79;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v21 = (System_String_o *)itemIcon;
    if ( manager )
    {
      v22 = UserPresentListViewManager_TypeInfo;
      naturalAligment = UserPresentListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewManager_TypeInfo )
      {
        this->fields.mManager = manager;
        p_mManager = &this->fields.mManager;
        if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == v22 )
        {
          goto LABEL_24;
        }
      }
      sub_1C37574(manager);
    }
    this->fields.mManager = manager;
    p_mManager = &this->fields.mManager;
LABEL_24:
    sub_1C36FFC((CGThumbnailListItem_o *)p_mManager, (int32_t)manager, v17, v18);
    v25 = item->fields.usrPresentEnt;
    if ( !v25 )
      goto LABEL_50;
    v26 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v26 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v25, v26->static_fields->IMPORTANT_FOR_EVENT, 0) )
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
        0);
      baseSprite = this->fields.baseSprite;
      BOARD_BG_SP_NAME_IMPORTANT = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, BOARD_BG_SP_NAME_IMPORTANT, 0);
      AtlasManager__SetEventUI(
        this->fields.imortantSprite,
        UserPresentListViewItemDraw_TypeInfo->static_fields->ICON_SP_NAME_IMPORTANT,
        0);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        (float)UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y,
        0);
      itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
      if ( !itemIcon )
        goto LABEL_79;
      v31 = 0;
      goto LABEL_61;
    }
    v32 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v32 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v25, v32->static_fields->IMPORTANT_FOR_LIMIT, 0) )
    {
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v33 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v33 )
        goto LABEL_79;
      UIButton__set_normalSprite(
        v33,
        UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
        0);
      v34 = this->fields.baseSprite;
      v35 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v34, v35, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
    }
    else
    {
LABEL_50:
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v38 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v38 )
        goto LABEL_79;
      UIButton__set_normalSprite(v38, UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL, 0);
      v39 = this->fields.baseSprite;
      BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v39, BOARD_BG_SP_NAME_NORMAL, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
      if ( !itemIcon )
        goto LABEL_79;
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      if ( !itemIcon )
        goto LABEL_79;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
      if ( !itemIcon )
        goto LABEL_79;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
    }
    GameObjectExtensions__SetLocalPositionY(v36, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0);
    itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
    if ( !itemIcon )
      goto LABEL_79;
    v31 = 1;
LABEL_61:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v31, 0);
    itemIcon = (ItemIconComponent_o *)this->fields.friendShipSprite;
    if ( itemIcon )
    {
      itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
      if ( itemIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
        itemIcon = (ItemIconComponent_o *)this->fields.chocolateSprite;
        if ( itemIcon )
        {
          itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIcon,
                                              0);
          if ( itemIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
            itemIcon = (ItemIconComponent_o *)this->fields.nameTextLabel;
            if ( itemIcon )
            {
              UILabel__set_text((UILabel_o *)itemIcon, v21, 0);
              itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
              nameTextLabel = this->fields.nameTextLabel;
              if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
              if ( nameTextLabel )
              {
                UILabel__SetCondensedScale_49525996(
                  nameTextLabel,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                  0.0,
                  0);
                msgTextLabel = this->fields.msgTextLabel;
                presentMsg = item->fields.presentMsg;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0);
                WrapControlText__textAdjust(
                  msgTextLabel,
                  v44,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                  0,
                  0);
                itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                if ( itemIcon )
                {
                  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
                  v46 = item->fields.usrPresentEnt;
                  if ( v46 && v46->fields.giftType == 2 )
                    UserPresentListViewItemDraw__SetItemInfo(this, item, v45);
                  else
                    UserPresentListViewItemDraw__SetNormalInfo(this, item, v45);
                  itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, item->fields.checkBoxed, 0);
                    UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v47);
                    itemIcon = (ItemIconComponent_o *)this->fields.blockObj;
                    if ( itemIcon )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, item->fields.blocked, 0);
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
    sub_1C372B4(itemIcon);
  }
}


void UserPresentListViewItemDraw__SetItemInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  void *Instance; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v7; // x8
  System_String_o *detail; // x1
  ItemMaster_o *v9; // x21
  const MethodInfo *v10; // x2
  struct ItemEntity_o *v11; // x8
  struct ItemEntity_o *v12; // x8
  System_String_o *OverwritePresentboxDetail; // x21
  const MethodInfo *v14; // x1
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

  if ( (byte_4C41CED & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserPresentBoxMaster_TypeInfo);
    sub_1C37058(&StringLiteral_13438/*"TIME_REST_STRING"*/);
    sub_1C37058(&StringLiteral_13426/*"TIME_REST_PRESENT_LIMITED"*/);
    sub_1C37058(&StringLiteral_12074/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_1C37058(&StringLiteral_13423/*"TIME_REST_PRESENT"*/);
    sub_1C37058(&StringLiteral_13424/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_1C37058(&StringLiteral_13425/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C41CED = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
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
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_126;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.checkRoot;
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    v7 = item->fields.itemEnt;
    if ( !v7 )
      goto LABEL_126;
    Instance = this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v7->fields.detail;
    goto LABEL_15;
  }
  v9 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = item->fields.itemEnt;
    if ( !v11 )
      goto LABEL_126;
    Instance = (void *)ItemMaster__isFriendPoint(v9, v11->fields.id, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v12 = item->fields.itemEnt;
      if ( !v12 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v9, v12->fields.id, 0) )
      {
        Instance = this->fields.holdNumCntLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        Instance = this->fields.holdNumTitleLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        holdNumTitleLb = this->fields.holdNumTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SHOP_BUY_ITEM_HOLD"*/, 0);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0);
        Instance = this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v33 = item->fields.itemEnt;
        if ( !v33 )
          goto LABEL_126;
        Instance = (void *)ItemMaster__isMana(v9, v33->fields.id, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0);
          if ( !Instance )
            goto LABEL_126;
          v34 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *((_DWORD *)Instance + 48);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
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
                         0);
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
            Instance = LocalizationManager__GetNumberFormat(num, 0);
            if ( !holdNumCntLb )
              goto LABEL_126;
            detail = (System_String_o *)Instance;
LABEL_123:
            Instance = holdNumCntLb;
LABEL_15:
            UILabel__set_text((UILabel_o *)Instance, detail, 0);
            goto LABEL_23;
          }
        }
        else if ( type != 36 )
        {
          if ( type == 29 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
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
                                 0);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_1122/*"0"*/;
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
            Instance = UserGameMaster__getSelfUserGame(0);
            if ( !Instance )
              goto LABEL_126;
            v34 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *((_DWORD *)Instance + 49);
            goto LABEL_118;
          }
          goto LABEL_107;
        }
        Instance = UserGameMaster__getSelfUserGame(0);
        if ( !Instance )
          goto LABEL_126;
        v34 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *((_DWORD *)Instance + 46);
        goto LABEL_118;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v10);
LABEL_23:
  Instance = item->fields.itemEnt;
  if ( !Instance )
    goto LABEL_126;
  OverwritePresentboxDetail = ItemEntity__GetOverwritePresentboxDetail((ItemEntity_o *)Instance, 0);
  if ( System_String__op_Inequality(OverwritePresentboxDetail, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    Instance = this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)Instance, OverwritePresentboxDetail, 0);
  }
  limitedPeriod = this->fields.limitedPeriod;
  Instance = (void *)UserPresentListViewItem__isItemLimitedPeriod(item, v14);
  if ( !limitedPeriod )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive(limitedPeriod, (unsigned __int8)Instance & 1, 0);
  Instance = this->fields.limitedPeriod;
  if ( !Instance )
    goto LABEL_126;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13426/*"TIME_REST_PRESENT_LIMITED"*/, 0);
      if ( !resTimeLb )
        goto LABEL_126;
      UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0);
      v19 = item->fields.itemEnt;
      if ( !v19 )
        goto LABEL_126;
      resLimitedTimeLb = this->fields.resLimitedTimeLb;
      Instance = LocalizationManager__GetRestTime2(v19->fields.endedAt, -1, 0);
      if ( !resLimitedTimeLb )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0);
      Instance = this->fields.resLimitedTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v45.fields.g = 0.92157;
      v45.fields.b = 0.015686;
      v45.fields.r = 1.0;
      v45.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v45, 0);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_STRING"*/, 0);
      if ( !resLimitedTimeLbAlt )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !this->fields.resLimitedTimeLb )
        goto LABEL_126;
      v22 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resLimitedTimeLb, 0);
      if ( !Instance )
        goto LABEL_126;
      LODWORD(v23) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
      v24 = this->fields.resLimitedTimeLb;
      if ( !v24 )
        goto LABEL_126;
      GameObjectExtensions__SetLocalPositionX(v22, v23 - (float)v24->fields.mWidth, 0);
      Instance = this->fields.resTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v25 = 1;
      goto LABEL_53;
    }
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13423/*"TIME_REST_PRESENT"*/, 0);
  if ( !resTimeLb )
    goto LABEL_126;
  UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0);
  Instance = item->fields.usrPresentEnt;
  if ( !Instance )
    goto LABEL_126;
  v26 = this->fields.resLimitedTimeLb;
  v27 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0);
  Instance = LocalizationManager__GetRestTime2(v27, -1, 0);
  if ( !v26 )
    goto LABEL_126;
  UILabel__set_text(v26, (System_String_o *)Instance, 0);
  Instance = this->fields.resLimitedTimeLb;
  if ( !Instance )
    goto LABEL_126;
  v46.fields.r = 1.0;
  v46.fields.g = 1.0;
  v46.fields.b = 1.0;
  v46.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v46, 0);
  Instance = this->fields.resLimitedTimeLbAlt;
  if ( !Instance )
    goto LABEL_126;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.resTimeLb;
  if ( !Instance )
    goto LABEL_126;
  v25 = 0;
LABEL_53:
  UILabel__set_applyGradient((UILabel_o *)Instance, v25, 0);
  usrPresentEnt = item->fields.usrPresentEnt;
  if ( usrPresentEnt )
  {
    v29 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v29 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(usrPresentEnt, v29->static_fields->INDEFINITE_PERIOD, 0) )
    {
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      Instance = this->fields.limitedPeriod;
      if ( !Instance )
        goto LABEL_126;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
      {
        v30 = this->fields.resTimeLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13424/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0);
        if ( !v30 )
          goto LABEL_126;
        UILabel__set_text(v30, (System_String_o *)Instance, 0);
      }
      v31 = this->fields.resLimitedTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13425/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0);
      if ( v31 )
      {
        UILabel__set_text(v31, (System_String_o *)Instance, 0);
        return;
      }
LABEL_126:
      sub_1C372B4(Instance);
    }
  }
}


void UserPresentListViewItemDraw__SetNormalInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *holdNumTitleLb; // x0
  UILabel_o *resTimeLb; // x21
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v8; // x0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v11; // w0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v13; // x21
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
  int64_t m_CachedPtr; // x23
  UserPresentBoxEntity_o *v25; // x20
  UserPresentBoxMaster_c *v26; // x0
  UILabel_o *v27; // x20
  UILabel_o *v28; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C41CEE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserPresentBoxMaster_TypeInfo);
    sub_1C37058(&StringLiteral_13423/*"TIME_REST_PRESENT"*/);
    sub_1C37058(&StringLiteral_13424/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_1C37058(&StringLiteral_13425/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    byte_4C41CEE = 1;
  }
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(holdNumTitleLb, 0);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(holdNumTitleLb, 0);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.checkRoot;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.limitedPeriod;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0);
  resTimeLb = this->fields.resTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  holdNumTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13423/*"TIME_REST_PRESENT"*/, 0);
  if ( !resTimeLb )
    goto LABEL_66;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0);
  if ( !item )
    goto LABEL_66;
  holdNumTitleLb = (UnityEngine_Component_o *)item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v8 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)LocalizationManager__GetRestTime2(v8, -1, 0);
  if ( !resLimitedTimeLb )
    goto LABEL_66;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.resLimitedTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  v30.fields.r = 1.0;
  v30.fields.g = 1.0;
  v30.fields.b = 1.0;
  v30.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)holdNumTitleLb, v30, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  holdNumTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(holdNumTitleLb, 0);
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0);
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  UILabel__set_applyGradient((UILabel_o *)holdNumTitleLb, 0, 0);
  svtEnt = item->fields.svtEnt;
  if ( svtEnt )
  {
    if ( ServantEntity__get_IsFriendShipSvtEquip(svtEnt, 0) )
    {
      holdNumTitleLb = (UnityEngine_Component_o *)this->fields.friendShipSprite;
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(holdNumTitleLb, 0);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0);
    }
    holdNumTitleLb = (UnityEngine_Component_o *)item->fields.svtEnt;
    if ( !holdNumTitleLb )
      goto LABEL_66;
    if ( ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)holdNumTitleLb, 0) )
    {
      holdNumTitleLb = (UnityEngine_Component_o *)this->fields.chocolateSprite;
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(holdNumTitleLb, 0);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0);
    }
    usrPresentEnt = item->fields.usrPresentEnt;
    v11 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v11, 0) )
    {
      holdNumTitleLb = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)holdNumTitleLb,
                                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = (UnityEngine_Component_o *)EventMaster__GetEnableEntityList(
                                                    (EventMaster_o *)holdNumTitleLb,
                                                    12,
                                                    1,
                                                    0,
                                                    0);
      if ( holdNumTitleLb )
      {
        klass = holdNumTitleLb[1].klass;
        v13 = holdNumTitleLb;
        if ( klass )
        {
          if ( (int)klass >= 1 )
          {
            v14 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v14 >= (unsigned int)klass )
                sub_1C372BC(holdNumTitleLb);
              v15 = *((_QWORD *)&v13[1].monitor + v14);
              if ( !v15 )
                break;
              v16 = item->fields.usrPresentEnt;
              if ( !v16 )
                break;
              createdAt = v16->fields.createdAt;
              if ( *(_QWORD *)(v15 + 88) < createdAt && createdAt < *(_QWORD *)(v15 + 96) )
              {
                holdNumTitleLb = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)holdNumTitleLb,
                                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventServantMaster___);
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
                holdNumTitleLb = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                              v29,
                                                              0);
                if ( !v19 )
                  break;
                holdNumTitleLb = (UnityEngine_Component_o *)EventServantMaster__getEntity_42119324(
                                                              v19,
                                                              v20,
                                                              (int32_t)holdNumTitleLb,
                                                              0);
                if ( holdNumTitleLb && LODWORD(holdNumTitleLb[1].klass) == 2 )
                {
                  v23 = this->fields.resLimitedTimeLb;
                  m_CachedPtr = holdNumTitleLb[3].fields.m_CachedPtr;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  holdNumTitleLb = (UnityEngine_Component_o *)LocalizationManager__GetRestTime2(m_CachedPtr, -1, 0);
                  if ( !v23 )
                    break;
                  UILabel__set_text(v23, (System_String_o *)holdNumTitleLb, 0);
                }
              }
              LODWORD(klass) = v13[1].klass;
              if ( (int)++v14 >= (int)klass )
                goto LABEL_56;
            }
LABEL_66:
            sub_1C372B4(holdNumTitleLb);
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
    if ( UserPresentBoxEntity__IsEnableFlag(v25, v26->static_fields->INDEFINITE_PERIOD, 0) )
    {
      v27 = this->fields.resTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      holdNumTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13424/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0);
      if ( !v27 )
        goto LABEL_66;
      UILabel__set_text(v27, (System_String_o *)holdNumTitleLb, 0);
      v28 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13425/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0);
      if ( !v28 )
        goto LABEL_66;
      UILabel__set_text(v28, (System_String_o *)holdNumTitleLb, 0);
    }
  }
}