void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v9; // w1
  int32_t v10; // w1
  struct UserPresentListViewItemDraw_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct UserPresentListViewItemDraw_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct UserPresentListViewItemDraw_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FB1D2 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_22843/*"ribon_present_important_1"*/, v4);
    sub_1B640C8(&StringLiteral_20271/*"img_listboard_bg02"*/, v5);
    sub_1B640C8(&StringLiteral_20272/*"img_listboard_bg03"*/, v6);
    sub_1B640C8(&StringLiteral_22844/*"ribon_present_limited_period"*/, v7);
    byte_49FB1D2 = 1;
  }
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = 0xFFFFFFEAFFFFFFF5LL;
  v9 = StringLiteral_20271/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_20271/*"img_listboard_bg02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v9, v2, v3);
  v10 = StringLiteral_20272/*"img_listboard_bg03"*/;
  v11 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v11->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_20272/*"img_listboard_bg03"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->BOARD_BG_SP_NAME_IMPORTANT, v10, v12, v13);
  v14 = StringLiteral_22844/*"ribon_present_limited_period"*/;
  v15 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v15->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_22844/*"ribon_present_limited_period"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->ICON_SP_NAME_LIMITED, v14, v16, v17);
  v18 = StringLiteral_22843/*"ribon_present_important_1"*/;
  v19 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v19->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_22843/*"ribon_present_important_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->ICON_SP_NAME_IMPORTANT, v18, v20, v21);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(checkObj, val, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItemDraw__SetCheckCnt(
        UserPresentListViewItemDraw_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *checkCntLabel; // x20
  UILabel_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = count;
  if ( (byte_49FB1D1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FB1D1 = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v6 = this->fields.checkCntLabel;
    v7 = System_Int32__ToString((int32_t)&v9, 0LL);
    if ( !v6 )
      sub_1B64324(v7);
    if ( v7 )
      v8 = v7;
    else
      v8 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v6, v8, 0LL);
  }
}


void __fastcall UserPresentListViewItemDraw__SetInput(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_49FB1CE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FB1CE = 1;
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
                                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Component_object,
                                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_1B64324(Component_object);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *limitedPeriodSprite; // x21
  UserPresentListViewItemDraw_c *v14; // x0
  System_String_o *ICON_SP_NAME_LIMITED; // x22
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t giftType; // w1
  int32_t objectId; // w2
  System_String_o *v20; // x21
  const MethodInfo *v21; // x1
  Il2CppObject *NameText; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v27; // x21
  UserPresentListViewManager_c *v28; // x8
  __int64 methodPtr_low; // x9
  struct UserPresentListViewManager_o **p_mManager; // x0
  UserPresentBoxEntity_o *v31; // x22
  UserPresentBoxMaster_c *v32; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v37; // w1
  UserPresentBoxMaster_c *v38; // x0
  UIButton_o *v39; // x22
  UISprite_o *v40; // x22
  System_String_o *v41; // x23
  UnityEngine_GameObject_o *v42; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v44; // x22
  UISprite_o *v45; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v50; // x0
  const MethodInfo *v51; // x2
  struct UserPresentBoxEntity_o *v52; // x8
  const MethodInfo *v53; // x2

  if ( (byte_49FB1CD & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v8);
    sub_1B640C8(&UserPresentListViewItemDraw_TypeInfo, v9);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_10406/*"PRESENT_INFO"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FB1CD = 1;
  }
  if ( item && mode )
  {
    limitedPeriodSprite = this->fields.limitedPeriodSprite;
    v14 = UserPresentListViewItemDraw_TypeInfo;
    if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      v14 = UserPresentListViewItemDraw_TypeInfo;
    }
    ICON_SP_NAME_LIMITED = v14->static_fields->ICON_SP_NAME_LIMITED;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(limitedPeriodSprite, ICON_SP_NAME_LIMITED, 0LL);
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
    ItemIconComponent__SetGift_37829292(itemIcon, giftType, objectId, -1, 0, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v21);
    itemIcon = (ItemIconComponent_o *)System_String__Format_61389768(
                                        v20,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_79;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v27 = (System_String_o *)itemIcon;
    if ( manager )
    {
      v28 = UserPresentListViewManager_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewManager_TypeInfo )
      {
        this->fields.mManager = manager;
        p_mManager = &this->fields.mManager;
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == v28 )
        {
          goto LABEL_24;
        }
      }
      sub_1B645E4(manager);
    }
    this->fields.mManager = manager;
    p_mManager = &this->fields.mManager;
LABEL_24:
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mManager, (int32_t)manager, v23, v24);
    v31 = item->fields.usrPresentEnt;
    if ( !v31 )
      goto LABEL_50;
    v32 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v32 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v31, v32->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
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
      v37 = 0;
      goto LABEL_61;
    }
    v38 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v38 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v31, v38->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
    {
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v39 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v39 )
        goto LABEL_79;
      UIButton__set_normalSprite(
        v39,
        UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
        0LL);
      v40 = this->fields.baseSprite;
      v41 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v40, v41, 0LL);
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
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
    }
    else
    {
LABEL_50:
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v44 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v44 )
        goto LABEL_79;
      UIButton__set_normalSprite(v44, UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL, 0LL);
      v45 = this->fields.baseSprite;
      BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v45, BOARD_BG_SP_NAME_NORMAL, 0LL);
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
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
    }
    GameObjectExtensions__SetLocalPositionY(v42, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
    itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
    if ( !itemIcon )
      goto LABEL_79;
    v37 = 1;
LABEL_61:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v37, 0LL);
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
              UILabel__set_text((UILabel_o *)itemIcon, v27, 0LL);
              itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
              nameTextLabel = this->fields.nameTextLabel;
              if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
              if ( nameTextLabel )
              {
                UILabel__SetCondensedScale_46760740(
                  nameTextLabel,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                  0LL);
                msgTextLabel = this->fields.msgTextLabel;
                presentMsg = item->fields.presentMsg;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v50 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                WrapControlText__textAdjust(
                  msgTextLabel,
                  v50,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                  0,
                  0,
                  0LL);
                itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                if ( itemIcon )
                {
                  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  v52 = item->fields.usrPresentEnt;
                  if ( v52 && v52->fields.giftType == 2 )
                    UserPresentListViewItemDraw__SetItemInfo(this, item, v51);
                  else
                    UserPresentListViewItemDraw__SetNormalInfo(this, item, v51);
                  itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)itemIcon,
                      item->fields.checkBoxed,
                      0LL);
                    UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v53);
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
    sub_1B64324(itemIcon);
  }
}


void __fastcall UserPresentListViewItemDraw__SetItemInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
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
  int64_t Instance; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v22; // x8
  System_String_o *detail; // x1
  ItemMaster_o *v24; // x21
  const MethodInfo *v25; // x2
  struct ItemEntity_o *v26; // x8
  struct ItemEntity_o *v27; // x8
  System_String_o *OverwritePresentboxDetail; // x21
  const MethodInfo *v29; // x1
  UnityEngine_GameObject_o *limitedPeriod; // x21
  bool activeSelf; // w0
  UILabel_o *resTimeLb; // x21
  bool v33; // w22
  struct ItemEntity_o *v34; // x8
  UILabel_o *resLimitedTimeLb; // x21
  UILabel_o *resLimitedTimeLbAlt; // x21
  UnityEngine_GameObject_o *v37; // x21
  float v38; // s0
  struct UILabel_o *v39; // x8
  bool v40; // w1
  UILabel_o *v41; // x21
  int64_t v42; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxMaster_c *v44; // x0
  UILabel_o *v45; // x20
  UILabel_o *v46; // x19
  UILabel_o *holdNumTitleLb; // x22
  struct ItemEntity_o *v48; // x8
  LocalizationManager_c *v49; // x8
  struct UILabel_o *holdNumCntLb; // x21
  int32_t num; // w22
  struct ItemEntity_o *v52; // x8
  int type; // w8
  Il2CppObject *Master_object; // x21
  struct ItemEntity_o *v55; // x8
  LocalizationManager_c *v56; // x0
  Il2CppObject *MasterData_object; // x21
  struct ItemEntity_o *v58; // x8
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB1CF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_13279/*"TIME_REST_STRING"*/, v12);
    sub_1B640C8(&StringLiteral_13272/*"TIME_REST_PRESENT_LIMITED"*/, v13);
    sub_1B640C8(&StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, v14);
    sub_1B640C8(&StringLiteral_13269/*"TIME_REST_PRESENT"*/, v15);
    sub_1B640C8(&StringLiteral_13270/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v16);
    sub_1B640C8(&StringLiteral_13271/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v19);
    byte_49FB1CF = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !item )
    goto LABEL_118;
  itemEnt = item->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_118;
  if ( itemEnt->fields.type == 24 )
  {
    Instance = (int64_t)this->fields.holdNumTitleLb;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.checkRoot;
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v22 = item->fields.itemEnt;
    if ( !v22 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_118;
    detail = v22->fields.detail;
    goto LABEL_15;
  }
  v24 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_118;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v26 = item->fields.itemEnt;
    if ( !v26 )
      goto LABEL_118;
    Instance = ItemMaster__isFriendPoint(v24, v26->fields.id, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v27 = item->fields.itemEnt;
      if ( !v27 )
        goto LABEL_118;
      if ( !ItemMaster__isEventPoint(v24, v27->fields.id, 0LL) )
      {
        Instance = (int64_t)this->fields.holdNumCntLb;
        if ( !Instance )
          goto LABEL_118;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)this->fields.holdNumTitleLb;
        if ( !Instance )
          goto LABEL_118;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        holdNumTitleLb = this->fields.holdNumTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_118;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = (int64_t)this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v48 = item->fields.itemEnt;
        if ( !v48 )
          goto LABEL_118;
        Instance = ItemMaster__isMana(v24, v48->fields.id, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_118;
          v49 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *(_DWORD *)(Instance + 184);
          goto LABEL_110;
        }
        v52 = item->fields.itemEnt;
        if ( !v52 )
          goto LABEL_118;
        type = v52->fields.type;
        if ( type <= 21 )
        {
          if ( type != 2 && type != 17 )
          {
LABEL_103:
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_118;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            v58 = item->fields.itemEnt;
            if ( !v58 )
              goto LABEL_118;
            if ( !MasterData_object )
              goto LABEL_118;
            Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                  (UserItemMaster_o *)MasterData_object,
                                  Instance,
                                  v58->fields.id,
                                  0LL);
            if ( !Instance )
              goto LABEL_118;
            v49 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *(_DWORD *)(Instance + 28);
LABEL_110:
            if ( !v49->_2.cctor_finished )
            {
              v56 = v49;
LABEL_112:
              j_il2cpp_runtime_class_init_0(v56);
            }
LABEL_113:
            Instance = (int64_t)LocalizationManager__GetNumberFormat(num, 0LL);
            if ( !holdNumCntLb )
              goto LABEL_118;
            detail = (System_String_o *)Instance;
LABEL_115:
            Instance = (int64_t)holdNumCntLb;
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
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            v55 = item->fields.itemEnt;
            if ( !v55 || !Master_object )
              goto LABEL_118;
            Instance = UserSvtCoinMaster__TryGetEntity(
                         (UserSvtCoinMaster_o *)Master_object,
                         &entity,
                         Instance,
                         v55->fields.value,
                         0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( (Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_118;
              detail = (System_String_o *)StringLiteral_1213/*"0"*/;
              goto LABEL_115;
            }
            if ( !entity )
              goto LABEL_118;
            v56 = LocalizationManager_TypeInfo;
            num = entity->fields.num;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              goto LABEL_112;
            goto LABEL_113;
          }
          if ( type == 22 )
          {
            Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
            if ( !Instance )
              goto LABEL_118;
            v49 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *(_DWORD *)(Instance + 188);
            goto LABEL_110;
          }
          goto LABEL_103;
        }
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_118;
        v49 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *(_DWORD *)(Instance + 176);
        goto LABEL_110;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v25);
LABEL_23:
  Instance = (int64_t)item->fields.itemEnt;
  if ( !Instance )
    goto LABEL_118;
  OverwritePresentboxDetail = ItemEntity__GetOverwritePresentboxDetail((ItemEntity_o *)Instance, 0LL);
  if ( System_String__op_Inequality(OverwritePresentboxDetail, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, OverwritePresentboxDetail, 0LL);
  }
  limitedPeriod = this->fields.limitedPeriod;
  Instance = UserPresentListViewItem__isItemLimitedPeriod(item, v29);
  if ( !limitedPeriod )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive(limitedPeriod, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.limitedPeriod;
  if ( !Instance )
    goto LABEL_118;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  resTimeLb = this->fields.resTimeLb;
  v33 = activeSelf;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( activeSelf )
      goto LABEL_31;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v33 )
    {
LABEL_31:
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13272/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
      if ( !resTimeLb )
        goto LABEL_118;
      UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
      v34 = item->fields.itemEnt;
      if ( !v34 )
        goto LABEL_118;
      resLimitedTimeLb = this->fields.resLimitedTimeLb;
      Instance = (int64_t)LocalizationManager__GetRestTime2(v34->fields.endedAt, -1LL, 0LL);
      if ( !resLimitedTimeLb )
        goto LABEL_118;
      UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
      Instance = (int64_t)this->fields.resLimitedTimeLb;
      if ( !Instance )
        goto LABEL_118;
      v60.fields.g = 0.92157;
      v60.fields.b = 0.015686;
      v60.fields.r = 1.0;
      v60.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v60, 0LL);
      Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_118;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13279/*"TIME_REST_STRING"*/, 0LL);
      if ( !resLimitedTimeLbAlt )
        goto LABEL_118;
      UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
      Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_118;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.resLimitedTimeLb )
        goto LABEL_118;
      v37 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.resLimitedTimeLb,
                            0LL);
      if ( !Instance )
        goto LABEL_118;
      LODWORD(v38) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      v39 = this->fields.resLimitedTimeLb;
      if ( !v39 )
        goto LABEL_118;
      GameObjectExtensions__SetLocalPositionX(v37, v38 - (float)v39->fields.mWidth, 0LL);
      Instance = (int64_t)this->fields.resTimeLb;
      if ( !Instance )
        goto LABEL_118;
      v40 = 1;
      goto LABEL_53;
    }
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13269/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_118;
  UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)item->fields.usrPresentEnt;
  if ( !Instance )
    goto LABEL_118;
  v41 = this->fields.resLimitedTimeLb;
  v42 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__GetRestTime2(v42, -1LL, 0LL);
  if ( !v41 )
    goto LABEL_118;
  UILabel__set_text(v41, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.resLimitedTimeLb;
  if ( !Instance )
    goto LABEL_118;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  v61.fields.b = 1.0;
  v61.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v61, 0LL);
  Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.resTimeLb;
  if ( !Instance )
    goto LABEL_118;
  v40 = 0;
LABEL_53:
  UILabel__set_applyGradient((UILabel_o *)Instance, v40, 0LL);
  usrPresentEnt = item->fields.usrPresentEnt;
  if ( usrPresentEnt )
  {
    v44 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v44 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(usrPresentEnt, v44->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_118;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = (int64_t)this->fields.limitedPeriod;
      if ( !Instance )
        goto LABEL_118;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
      {
        v45 = this->fields.resTimeLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13270/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v45 )
          goto LABEL_118;
        UILabel__set_text(v45, (System_String_o *)Instance, 0LL);
      }
      v46 = this->fields.resLimitedTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13271/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v46 )
      {
        UILabel__set_text(v46, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_118:
      sub_1B64324(Instance);
    }
  }
}


void __fastcall UserPresentListViewItemDraw__SetNormalInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
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
  void *holdNumTitleLb; // x0
  UILabel_o *resTimeLb; // x21
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v16; // x0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x8
  _QWORD *v22; // x21
  __int64 v23; // x28
  __int64 v24; // x23
  struct UserPresentBoxEntity_o *v25; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v27; // x8
  EventServantMaster_o *v28; // x22
  int32_t v29; // w23
  __int64 v30; // x24
  __int64 v31; // x25
  UILabel_o *v32; // x22
  int64_t v33; // x23
  UserPresentBoxEntity_o *v34; // x20
  UserPresentBoxMaster_c *v35; // x0
  UILabel_o *v36; // x20
  UILabel_o *v37; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB1D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_13269/*"TIME_REST_PRESENT"*/, v10);
    sub_1B640C8(&StringLiteral_13270/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v11);
    sub_1B640C8(&StringLiteral_13271/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v12);
    byte_49FB1D0 = 1;
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
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13269/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_66;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  if ( !item )
    goto LABEL_66;
  holdNumTitleLb = item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v16 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = LocalizationManager__GetRestTime2(v16, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_66;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = this->fields.resLimitedTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_66;
  v39.fields.r = 1.0;
  v39.fields.g = 1.0;
  v39.fields.b = 1.0;
  v39.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)holdNumTitleLb, v39, 0LL);
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
    v19 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v19, 0LL) )
    {
      holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = DataManager__GetMasterData_object_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0LL);
      if ( holdNumTitleLb )
      {
        v21 = *((_QWORD *)holdNumTitleLb + 3);
        v22 = holdNumTitleLb;
        if ( v21 )
        {
          if ( (int)v21 >= 1 )
          {
            v23 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v23 >= (unsigned int)v21 )
                sub_1B6432C(holdNumTitleLb, v20);
              v24 = v22[v23 + 4];
              if ( !v24 )
                break;
              v25 = item->fields.usrPresentEnt;
              if ( !v25 )
                break;
              createdAt = v25->fields.createdAt;
              if ( *(_QWORD *)(v24 + 88) < createdAt && createdAt < *(_QWORD *)(v24 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_object_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
                v27 = item->fields.svtEnt;
                if ( !v27 )
                  break;
                v28 = (EventServantMaster_o *)holdNumTitleLb;
                v29 = *(_DWORD *)(v24 + 16);
                v31 = *(_QWORD *)&v27->fields.id.fields.currentCryptoKey;
                v30 = *(_QWORD *)&v27->fields.id.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v38.fields.currentCryptoKey = v31;
                *(_QWORD *)&v38.fields.fakeValue = v30;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
                if ( !v28 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_38946032(v28, v29, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v32 = this->fields.resLimitedTimeLb;
                  v33 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v33, -1LL, 0LL);
                  if ( !v32 )
                    break;
                  UILabel__set_text(v32, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v21) = *((_DWORD *)v22 + 6);
              if ( (int)++v23 >= (int)v21 )
                goto LABEL_56;
            }
LABEL_66:
            sub_1B64324(holdNumTitleLb);
          }
        }
      }
    }
  }
LABEL_56:
  v34 = item->fields.usrPresentEnt;
  if ( v34 )
  {
    v35 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v35 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v34, v35->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v36 = this->fields.resTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13270/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v36 )
        goto LABEL_66;
      UILabel__set_text(v36, (System_String_o *)holdNumTitleLb, 0LL);
      v37 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13271/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v37 )
        goto LABEL_66;
      UILabel__set_text(v37, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}