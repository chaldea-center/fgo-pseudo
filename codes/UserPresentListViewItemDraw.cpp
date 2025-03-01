void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct UserPresentListViewItemDraw_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct UserPresentListViewItemDraw_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct UserPresentListViewItemDraw_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BFC55F & 1) == 0 )
  {
    sub_1C2E12C(&UserPresentListViewItemDraw_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_23377/*"ribon_present_important_1"*/, v8);
    sub_1C2E12C(&StringLiteral_20727/*"img_listboard_bg02"*/, v9);
    sub_1C2E12C(&StringLiteral_20728/*"img_listboard_bg03"*/, v10);
    sub_1C2E12C(&StringLiteral_23378/*"ribon_present_limited_period"*/, v11);
    byte_4BFC55F = 1;
  }
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = 0xFFFFFFEAFFFFFFF5LL;
  v13 = StringLiteral_20727/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_20727/*"img_listboard_bg02"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_20728/*"img_listboard_bg03"*/;
  v15 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v15->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_20728/*"img_listboard_bg03"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v15->BOARD_BG_SP_NAME_IMPORTANT, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_23378/*"ribon_present_limited_period"*/;
  v23 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v23->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_23378/*"ribon_present_limited_period"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->ICON_SP_NAME_LIMITED, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_23377/*"ribon_present_important_1"*/;
  v31 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v31->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_23377/*"ribon_present_important_1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v31->ICON_SP_NAME_IMPORTANT, v30, v32, v33, v34, v35, v36, v37);
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
    sub_1C2E388(0LL, val);
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
    sub_1C2E388(0LL, val);
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
  __int64 v8; // x1
  System_String_o *v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = count;
  if ( (byte_4BFC55E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4BFC55E = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v6 = this->fields.checkCntLabel;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    if ( !v6 )
      sub_1C2E388(v7, v8);
    if ( v7 )
      v9 = v7;
    else
      v9 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v6, v9, 0LL);
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
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4BFC55B & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BFC55B = 1;
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
                                                          (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Component_object,
                                                          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_1C2E388(Component_object, v9);
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
  __int64 giftType; // x1
  int32_t objectId; // w2
  System_String_o *v20; // x21
  const MethodInfo *v21; // x1
  Il2CppObject *NameText; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v31; // x21
  UserPresentListViewManager_c *v32; // x8
  __int64 methodPtr_low; // x9
  struct UserPresentListViewManager_o **p_mManager; // x0
  UserPresentBoxEntity_o *v35; // x22
  UserPresentBoxMaster_c *v36; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v41; // w1
  UserPresentBoxMaster_c *v42; // x0
  UIButton_o *v43; // x22
  UISprite_o *v44; // x22
  System_String_o *v45; // x23
  UnityEngine_GameObject_o *v46; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v48; // x22
  UISprite_o *v49; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v54; // x0
  const MethodInfo *v55; // x2
  struct UserPresentBoxEntity_o *v56; // x8
  const MethodInfo *v57; // x2

  if ( (byte_4BFC55A & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&UserPresentBoxMaster_TypeInfo, v8);
    sub_1C2E12C(&UserPresentListViewItemDraw_TypeInfo, v9);
    sub_1C2E12C(&UserPresentListViewManager_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_10654/*"PRESENT_INFO"*/, v11);
    sub_1C2E12C(&StringLiteral_1/*""*/, v12);
    byte_4BFC55A = 1;
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
    ItemIconComponent__SetGift_39457192(itemIcon, giftType, objectId, -1, 0, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10654/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v21);
    itemIcon = (ItemIconComponent_o *)System_String__Format_63249956(
                                        v20,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_79;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v31 = (System_String_o *)itemIcon;
    if ( manager )
    {
      v32 = UserPresentListViewManager_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewManager_TypeInfo )
      {
        this->fields.mManager = manager;
        p_mManager = &this->fields.mManager;
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == v32 )
        {
          goto LABEL_24;
        }
      }
      sub_1C2E648(manager);
    }
    this->fields.mManager = manager;
    p_mManager = &this->fields.mManager;
LABEL_24:
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_mManager, (int64_t)manager, v23, v24, v25, v26, v27, v28);
    v35 = item->fields.usrPresentEnt;
    if ( !v35 )
      goto LABEL_50;
    v36 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v36 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v35, v36->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
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
      v41 = 0;
      goto LABEL_61;
    }
    v42 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v42 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v35, v42->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
    {
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v43 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v43 )
        goto LABEL_79;
      UIButton__set_normalSprite(
        v43,
        UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
        0LL);
      v44 = this->fields.baseSprite;
      v45 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v44, v45, 0LL);
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
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
    }
    else
    {
LABEL_50:
      itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
      v48 = this->fields.baseButton;
      if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      if ( !v48 )
        goto LABEL_79;
      UIButton__set_normalSprite(v48, UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL, 0LL);
      v49 = this->fields.baseSprite;
      BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v49, BOARD_BG_SP_NAME_NORMAL, 0LL);
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
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
      BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
    }
    GameObjectExtensions__SetLocalPositionY(v46, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
    itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
    if ( !itemIcon )
      goto LABEL_79;
    v41 = 1;
LABEL_61:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v41, 0LL);
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
              UILabel__set_text((UILabel_o *)itemIcon, v31, 0LL);
              itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
              nameTextLabel = this->fields.nameTextLabel;
              if ( !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
              if ( nameTextLabel )
              {
                UILabel__SetCondensedScale_48350976(
                  nameTextLabel,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                  0.0,
                  0LL);
                msgTextLabel = this->fields.msgTextLabel;
                presentMsg = item->fields.presentMsg;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v54 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                WrapControlText__textAdjust(
                  msgTextLabel,
                  v54,
                  UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                  0,
                  0LL);
                itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                if ( itemIcon )
                {
                  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  v56 = item->fields.usrPresentEnt;
                  if ( v56 && v56->fields.giftType == 2 )
                    UserPresentListViewItemDraw__SetItemInfo(this, item, v55);
                  else
                    UserPresentListViewItemDraw__SetNormalInfo(this, item, v55);
                  itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)itemIcon,
                      item->fields.checkBoxed,
                      0LL);
                    UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v57);
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
    sub_1C2E388(itemIcon, giftType);
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
  void *Instance; // x0
  const MethodInfo *v21; // x1
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v23; // x8
  System_String_o *detail; // x1
  ItemMaster_o *v25; // x21
  const MethodInfo *v26; // x2
  struct ItemEntity_o *v27; // x8
  struct ItemEntity_o *v28; // x8
  System_String_o *OverwritePresentboxDetail; // x21
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

  if ( (byte_4BFC55C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v8);
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C2E12C(&UserPresentBoxMaster_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_13614/*"TIME_REST_STRING"*/, v12);
    sub_1C2E12C(&StringLiteral_13602/*"TIME_REST_PRESENT_LIMITED"*/, v13);
    sub_1C2E12C(&StringLiteral_12242/*"SHOP_BUY_ITEM_HOLD"*/, v14);
    sub_1C2E12C(&StringLiteral_13599/*"TIME_REST_PRESENT"*/, v15);
    sub_1C2E12C(&StringLiteral_13600/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v16);
    sub_1C2E12C(&StringLiteral_13601/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v17);
    sub_1C2E12C(&StringLiteral_1/*""*/, v18);
    sub_1C2E12C(&StringLiteral_1191/*"0"*/, v19);
    byte_4BFC55C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
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
    v23 = item->fields.itemEnt;
    if ( !v23 )
      goto LABEL_126;
    Instance = this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v23->fields.detail;
    goto LABEL_15;
  }
  v25 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v27 = item->fields.itemEnt;
    if ( !v27 )
      goto LABEL_126;
    Instance = (void *)ItemMaster__isFriendPoint(v25, v27->fields.id, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v28 = item->fields.itemEnt;
      if ( !v28 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v25, v28->fields.id, 0LL) )
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12242/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v48 = item->fields.itemEnt;
        if ( !v48 )
          goto LABEL_126;
        Instance = (void *)ItemMaster__isMana(v25, v48->fields.id, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_126;
          v49 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *((_DWORD *)Instance + 46);
          goto LABEL_118;
        }
        v52 = item->fields.itemEnt;
        if ( !v52 )
          goto LABEL_126;
        type = v52->fields.type;
        if ( type <= 21 )
        {
          if ( type != 2 && type != 17 )
          {
LABEL_107:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BF81D5 )
            {
              sub_1C2E12C(&NetworkManager_TypeInfo, v21);
              byte_4BF81D5 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            v58 = item->fields.itemEnt;
            if ( !v58 )
              goto LABEL_126;
            if ( !MasterData_object )
              goto LABEL_126;
            Instance = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)MasterData_object,
                         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                         v58->fields.id,
                         0LL);
            if ( !Instance )
              goto LABEL_126;
            v49 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *((_DWORD *)Instance + 7);
LABEL_118:
            if ( !v49->_2.cctor_finished )
            {
              v56 = v49;
LABEL_120:
              j_il2cpp_runtime_class_init_0(v56);
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
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BF81D5 )
            {
              sub_1C2E12C(&NetworkManager_TypeInfo, v21);
              byte_4BF81D5 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            v55 = item->fields.itemEnt;
            if ( !v55 || !Master_object )
              goto LABEL_126;
            Instance = (void *)UserSvtCoinMaster__TryGetEntity(
                                 (UserSvtCoinMaster_o *)Master_object,
                                 &entity,
                                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                                 v55->fields.value,
                                 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_1191/*"0"*/;
              goto LABEL_123;
            }
            if ( !entity )
              goto LABEL_126;
            v56 = LocalizationManager_TypeInfo;
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
            v49 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
            num = *((_DWORD *)Instance + 47);
            goto LABEL_118;
          }
          goto LABEL_107;
        }
        Instance = UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_126;
        v49 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *((_DWORD *)Instance + 44);
        goto LABEL_118;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v26);
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
  Instance = (void *)UserPresentListViewItem__isItemLimitedPeriod(item, v21);
  if ( !limitedPeriod )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive(limitedPeriod, (unsigned __int8)Instance & 1, 0LL);
  Instance = this->fields.limitedPeriod;
  if ( !Instance )
    goto LABEL_126;
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13602/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
      if ( !resTimeLb )
        goto LABEL_126;
      UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
      v34 = item->fields.itemEnt;
      if ( !v34 )
        goto LABEL_126;
      resLimitedTimeLb = this->fields.resLimitedTimeLb;
      Instance = LocalizationManager__GetRestTime2(v34->fields.endedAt, -1LL, 0LL);
      if ( !resLimitedTimeLb )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
      Instance = this->fields.resLimitedTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v60.fields.g = 0.92157;
      v60.fields.b = 0.015686;
      v60.fields.r = 1.0;
      v60.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v60, 0LL);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13614/*"TIME_REST_STRING"*/, 0LL);
      if ( !resLimitedTimeLbAlt )
        goto LABEL_126;
      UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
      Instance = this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.resLimitedTimeLb )
        goto LABEL_126;
      v37 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resLimitedTimeLb, 0LL);
      if ( !Instance )
        goto LABEL_126;
      LODWORD(v38) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      v39 = this->fields.resLimitedTimeLb;
      if ( !v39 )
        goto LABEL_126;
      GameObjectExtensions__SetLocalPositionX(v37, v38 - (float)v39->fields.mWidth, 0LL);
      Instance = this->fields.resTimeLb;
      if ( !Instance )
        goto LABEL_126;
      v40 = 1;
      goto LABEL_53;
    }
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13599/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_126;
  UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
  Instance = item->fields.usrPresentEnt;
  if ( !Instance )
    goto LABEL_126;
  v41 = this->fields.resLimitedTimeLb;
  v42 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
  Instance = LocalizationManager__GetRestTime2(v42, -1LL, 0LL);
  if ( !v41 )
    goto LABEL_126;
  UILabel__set_text(v41, (System_String_o *)Instance, 0LL);
  Instance = this->fields.resLimitedTimeLb;
  if ( !Instance )
    goto LABEL_126;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  v61.fields.b = 1.0;
  v61.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v61, 0LL);
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
        v45 = this->fields.resTimeLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13600/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v45 )
          goto LABEL_126;
        UILabel__set_text(v45, (System_String_o *)Instance, 0LL);
      }
      v46 = this->fields.resLimitedTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13601/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v46 )
      {
        UILabel__set_text(v46, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_126:
      sub_1C2E388(Instance, v21);
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
  __int64 v20; // x8
  _QWORD *v21; // x21
  __int64 v22; // x28
  __int64 v23; // x23
  struct UserPresentBoxEntity_o *v24; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v26; // x8
  EventServantMaster_o *v27; // x22
  int32_t v28; // w23
  __int64 v29; // x24
  __int64 v30; // x25
  UILabel_o *v31; // x22
  int64_t v32; // x23
  UserPresentBoxEntity_o *v33; // x20
  UserPresentBoxMaster_c *v34; // x0
  UILabel_o *v35; // x20
  UILabel_o *v36; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFC55D & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventServantMaster___, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C2E12C(&UserPresentBoxMaster_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_13599/*"TIME_REST_PRESENT"*/, v10);
    sub_1C2E12C(&StringLiteral_13600/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v11);
    sub_1C2E12C(&StringLiteral_13601/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v12);
    byte_4BFC55D = 1;
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
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13599/*"TIME_REST_PRESENT"*/, 0LL);
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
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  v38.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)holdNumTitleLb, v38, 0LL);
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
      holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = DataManager__GetMasterData_object_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_66;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0, 0LL);
      if ( holdNumTitleLb )
      {
        v20 = *((_QWORD *)holdNumTitleLb + 3);
        v21 = holdNumTitleLb;
        if ( v20 )
        {
          if ( (int)v20 >= 1 )
          {
            v22 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v22 >= (unsigned int)v20 )
                sub_1C2E390(holdNumTitleLb, item);
              v23 = v21[v22 + 4];
              if ( !v23 )
                break;
              v24 = item->fields.usrPresentEnt;
              if ( !v24 )
                break;
              createdAt = v24->fields.createdAt;
              if ( *(_QWORD *)(v23 + 88) < createdAt && createdAt < *(_QWORD *)(v23 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_object_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventServantMaster___);
                v26 = item->fields.svtEnt;
                if ( !v26 )
                  break;
                v27 = (EventServantMaster_o *)holdNumTitleLb;
                v28 = *(_DWORD *)(v23 + 16);
                v30 = *(_QWORD *)&v26->fields.id.fields.currentCryptoKey;
                v29 = *(_QWORD *)&v26->fields.id.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v37.fields.currentCryptoKey = v30;
                *(_QWORD *)&v37.fields.fakeValue = v29;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v37, 0LL);
                if ( !v27 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_40587796(v27, v28, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v31 = this->fields.resLimitedTimeLb;
                  v32 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v32, -1LL, 0LL);
                  if ( !v31 )
                    break;
                  UILabel__set_text(v31, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v20) = *((_DWORD *)v21 + 6);
              if ( (int)++v22 >= (int)v20 )
                goto LABEL_56;
            }
LABEL_66:
            sub_1C2E388(holdNumTitleLb, item);
          }
        }
      }
    }
  }
LABEL_56:
  v33 = item->fields.usrPresentEnt;
  if ( v33 )
  {
    v34 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v34 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v33, v34->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v35 = this->fields.resTimeLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13600/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v35 )
        goto LABEL_66;
      UILabel__set_text(v35, (System_String_o *)holdNumTitleLb, 0LL);
      v36 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13601/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v36 )
        goto LABEL_66;
      UILabel__set_text(v36, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}