void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct UserPresentListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserPresentListViewItemDraw_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UserPresentListViewItemDraw_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UserPresentListViewItemDraw_c *v33; // x8

  if ( (byte_42AE101 & 1) == 0 )
  {
    sub_B52984(&UserPresentListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_22012/*"ribon_present_important_1"*/);
    sub_B52984(&StringLiteral_19669/*"img_listboard_bg02"*/);
    sub_B52984(&StringLiteral_19670/*"img_listboard_bg03"*/);
    sub_B52984(&StringLiteral_22013/*"ribon_present_limited_period"*/);
    byte_42AE101 = 1;
  }
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = -11;
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y = -22;
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19669/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_19669/*"img_listboard_bg02"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19670/*"img_listboard_bg03"*/;
  v9->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_19670/*"img_listboard_bg03"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->BOARD_BG_SP_NAME_IMPORTANT, v10, v11, v12, v13, v14, v15, v16);
  v17 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22013/*"ribon_present_limited_period"*/;
  v17->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_22013/*"ribon_present_limited_period"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->ICON_SP_NAME_LIMITED, v18, v19, v20, v21, v22, v23, v24);
  v25 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_22012/*"ribon_present_important_1"*/;
  v25->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_22012/*"ribon_present_important_1"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->ICON_SP_NAME_IMPORTANT, v26, v27, v28, v29, v30, v31, v32);
  v33 = UserPresentListViewItemDraw_TypeInfo;
  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH = 391.0;
  v33->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE = 15;
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
    sub_B52A5C(0LL, val);
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
    sub_B52A5C(0LL, val);
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = count;
  if ( (byte_42AE100 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE100 = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v5 = this->fields.checkCntLabel;
    v6 = System_Int32__ToString((int32_t)&v9, 0LL);
    if ( !v5 )
      sub_B52A5C(v6, v7);
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
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_42AE0FD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE0FD = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject
      || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 Component_WebViewObject,
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_B52A5C(Component_WebViewObject, v7);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v25; // x21
  __int64 v26; // x10
  UserPresentBoxEntity_o *v27; // x22
  UserPresentBoxMaster_c *v28; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v33; // w1
  UserPresentBoxMaster_c *v34; // x0
  UIButton_o *v35; // x22
  UISprite_o *v36; // x22
  System_String_o *v37; // x23
  UnityEngine_GameObject_o *v38; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v40; // x22
  UISprite_o *v41; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v46; // x0
  const MethodInfo *v47; // x2
  struct UserPresentBoxEntity_o *v48; // x8
  const MethodInfo *v49; // x2
  UserPresentListViewItemDraw_o *v50; // x0
  UserPresentListViewItem_o *v51; // x1
  const MethodInfo *v52; // x2

  if ( (byte_42AE0FC & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    sub_B52984(&UserPresentListViewItemDraw_TypeInfo);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_10585/*"PRESENT_INFO"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE0FC = 1;
  }
  if ( item && mode )
  {
    limitedPeriodSprite = this->fields.limitedPeriodSprite;
    v8 = UserPresentListViewItemDraw_TypeInfo;
    if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      v8 = UserPresentListViewItemDraw_TypeInfo;
    }
    ICON_SP_NAME_LIMITED = v8->static_fields->ICON_SP_NAME_LIMITED;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(limitedPeriodSprite, ICON_SP_NAME_LIMITED, 0LL);
    usrPresentEnt = item->fields.usrPresentEnt;
    itemIcon = this->fields.itemIcon;
    if ( usrPresentEnt )
    {
      giftType = (unsigned int)usrPresentEnt->fields.giftType;
      objectId = usrPresentEnt->fields.objectId;
      if ( !itemIcon )
        goto LABEL_88;
    }
    else
    {
      giftType = 0LL;
      objectId = 0;
      if ( !itemIcon )
        goto LABEL_88;
    }
    ItemIconComponent__SetGift(itemIcon, giftType, objectId, -1, 0, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10585/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v15);
    itemIcon = (ItemIconComponent_o *)System_String__Format_44563852(
                                        v14,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_88;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v25 = (System_String_o *)itemIcon;
    if ( !manager
      || (v26 = *(&UserPresentListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v26)
      && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[v26 - 1] == UserPresentListViewManager_TypeInfo )
    {
      this->fields.mManager = manager;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.mManager,
        (System_Int32_array **)manager,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v27 = item->fields.usrPresentEnt;
      if ( !v27 )
        goto LABEL_55;
      v28 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v28 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v27, v28->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
      {
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        baseButton = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !baseButton )
          goto LABEL_88;
        UIButton__set_normalSprite(
          baseButton,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
          0LL);
        baseSprite = this->fields.baseSprite;
        BOARD_BG_SP_NAME_IMPORTANT = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(baseSprite, BOARD_BG_SP_NAME_IMPORTANT, 0LL);
        AtlasManager__SetEventUI(
          this->fields.imortantSprite,
          UserPresentListViewItemDraw_TypeInfo->static_fields->ICON_SP_NAME_IMPORTANT,
          0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
        if ( !itemIcon )
          goto LABEL_88;
        itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIcon,
                                            0LL);
        if ( !itemIcon )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
        if ( !itemIcon )
          goto LABEL_88;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          gameObject,
          (float)UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y,
          0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
        if ( !itemIcon )
          goto LABEL_88;
        v33 = 0;
        goto LABEL_68;
      }
      v34 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v34 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v27, v34->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
      {
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v35 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v35 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v35,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
          0LL);
        v36 = this->fields.baseSprite;
        v37 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v36, v37, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
        if ( !itemIcon )
          goto LABEL_88;
        itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIcon,
                                            0LL);
        if ( !itemIcon )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
        if ( !itemIcon )
          goto LABEL_88;
        v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
      }
      else
      {
LABEL_55:
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v40 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v40 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v40,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL,
          0LL);
        v41 = this->fields.baseSprite;
        BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v41, BOARD_BG_SP_NAME_NORMAL, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.imortantSprite;
        if ( !itemIcon )
          goto LABEL_88;
        itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIcon,
                                            0LL);
        if ( !itemIcon )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
        itemIcon = (ItemIconComponent_o *)this->fields.msgTextLabel;
        if ( !itemIcon )
          goto LABEL_88;
        v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v38, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
      if ( !itemIcon )
        goto LABEL_88;
      v33 = 1;
LABEL_68:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v33, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.friendShipSprite;
      if ( itemIcon )
      {
        itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIcon,
                                            0LL);
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
                if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
                }
                if ( nameTextLabel )
                {
                  UILabel__SetCondensedScale_41850568(
                    nameTextLabel,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                    0LL);
                  msgTextLabel = this->fields.msgTextLabel;
                  presentMsg = item->fields.presentMsg;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v46 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                  WrapControlText__textAdjust(
                    msgTextLabel,
                    v46,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                    0,
                    0,
                    0LL);
                  itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                  if ( itemIcon )
                  {
                    UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    v48 = item->fields.usrPresentEnt;
                    if ( v48 && v48->fields.giftType == 2 )
                      UserPresentListViewItemDraw__SetItemInfo(this, item, v47);
                    else
                      UserPresentListViewItemDraw__SetNormalInfo(this, item, v47);
                    itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                    if ( itemIcon )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)itemIcon,
                        item->fields.checkBoxed,
                        0LL);
                      UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v49);
                      itemIcon = (ItemIconComponent_o *)this->fields.blockObj;
                      if ( itemIcon )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)itemIcon,
                          item->fields.blocked,
                          0LL);
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
LABEL_88:
      sub_B52A5C(itemIcon, giftType);
    }
    v50 = (UserPresentListViewItemDraw_o *)sub_B52D50(manager);
    UserPresentListViewItemDraw__SetItemInfo(v50, v51, v52);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItemDraw__SetItemInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  int64_t Instance; // x0
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
  struct ItemEntity_o *v18; // x8
  UILabel_o *resLimitedTimeLb; // x21
  UIWidget_o *v20; // x21
  int v21; // s0
  UILabel_o *resLimitedTimeLbAlt; // x21
  UnityEngine_GameObject_o *v26; // x21
  float v27; // s0
  struct UILabel_o *v28; // x8
  struct UserPresentBoxEntity_o **p_usrPresentEnt; // x20
  UILabel_o *v30; // x21
  struct UserPresentBoxEntity_o *usrPresentEnt; // t1
  int64_t v32; // x0
  UIWidget_o *v33; // x21
  int v34; // s0
  UserPresentBoxEntity_o *v38; // x20
  UserPresentBoxMaster_c *v39; // x0
  UILabel_o *v40; // x20
  UILabel_o *v41; // x19
  UILabel_o *holdNumTitleLb; // x22
  struct ItemEntity_o *v43; // x8
  int64_t v44; // x8
  LocalizationManager_c *v45; // x0
  struct UILabel_o *holdNumCntLb; // x21
  int32_t num; // w22
  struct ItemEntity_o *v48; // x8
  int32_t type; // w8
  int64_t v50; // x8
  int64_t v51; // x8
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v53; // x8
  UserSvtCoinEntity_o *v54; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v56; // x8
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AE0FE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    sub_B52984(&StringLiteral_13507/*"TIME_REST_STRING"*/);
    sub_B52984(&StringLiteral_13500/*"TIME_REST_PRESENT_LIMITED"*/);
    sub_B52984(&StringLiteral_12206/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_B52984(&StringLiteral_13497/*"TIME_REST_PRESENT"*/);
    sub_B52984(&StringLiteral_13498/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_B52984(&StringLiteral_13499/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42AE0FE = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !item )
    goto LABEL_126;
  itemEnt = item->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_126;
  if ( itemEnt->fields.type == 24 )
  {
    Instance = (int64_t)this->fields.holdNumTitleLb;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.checkRoot;
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v8 = item->fields.itemEnt;
    if ( !v8 )
      goto LABEL_126;
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v8->fields.detail;
    goto LABEL_15;
  }
  v10 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v12 = item->fields.itemEnt;
    if ( !v12 )
      goto LABEL_126;
    Instance = ItemMaster__isFriendPoint(v10, v12->fields.id, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v13 = item->fields.itemEnt;
      if ( !v13 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v10, v13->fields.id, 0LL) )
      {
        Instance = (int64_t)this->fields.holdNumCntLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)this->fields.holdNumTitleLb;
        if ( !Instance )
          goto LABEL_126;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        holdNumTitleLb = this->fields.holdNumTitleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = (int64_t)this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v43 = item->fields.itemEnt;
        if ( !v43 )
          goto LABEL_126;
        Instance = ItemMaster__isMana(v10, v43->fields.id, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_126;
          v44 = Instance;
          v45 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *(_DWORD *)(v44 + 176);
          goto LABEL_98;
        }
        v48 = item->fields.itemEnt;
        if ( !v48 )
          goto LABEL_126;
        type = v48->fields.type;
        if ( type != 2 )
        {
          if ( type == 29 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v53 = item->fields.itemEnt;
            if ( !v53 || !Master_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = UserSvtCoinMaster__TryGetEntity(
                         Master_WarQuestSelectionMaster,
                         &entity,
                         Instance,
                         v53->fields.value,
                         0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( (Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_969/*"0"*/;
              goto LABEL_123;
            }
            v54 = entity;
            if ( !entity )
              goto LABEL_126;
            v45 = LocalizationManager_TypeInfo;
          }
          else
          {
            if ( type == 22 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_126;
              v50 = Instance;
              v45 = LocalizationManager_TypeInfo;
              holdNumCntLb = this->fields.holdNumCntLb;
              num = *(_DWORD *)(v50 + 180);
              goto LABEL_98;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v56 = item->fields.itemEnt;
            if ( !v56 )
              goto LABEL_126;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  v56->fields.id,
                                  0LL);
            if ( !Instance )
              goto LABEL_126;
            v54 = (UserSvtCoinEntity_o *)Instance;
            v45 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
          }
          num = v54->fields.num;
          if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_99:
            if ( !v45->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v45);
          }
LABEL_121:
          Instance = (int64_t)LocalizationManager__GetNumberFormat(num, 0LL);
          if ( !holdNumCntLb )
            goto LABEL_126;
          detail = (System_String_o *)Instance;
LABEL_123:
          Instance = (int64_t)holdNumCntLb;
LABEL_15:
          UILabel__set_text((UILabel_o *)Instance, detail, 0LL);
          goto LABEL_23;
        }
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_126;
        v51 = Instance;
        v45 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *(_DWORD *)(v51 + 168);
LABEL_98:
        if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_99;
        goto LABEL_121;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v11);
LABEL_23:
  Instance = (int64_t)item->fields.itemEnt;
  if ( !Instance )
    goto LABEL_126;
  OverwritePresentboxDetail = ItemEntity__GetOverwritePresentboxDetail((ItemEntity_o *)Instance, 0LL);
  if ( System_String__op_Inequality(OverwritePresentboxDetail, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    UILabel__set_text((UILabel_o *)Instance, OverwritePresentboxDetail, 0LL);
  }
  limitedPeriod = this->fields.limitedPeriod;
  Instance = UserPresentListViewItem__isItemLimitedPeriod(item, v6);
  if ( !limitedPeriod )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive(limitedPeriod, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.limitedPeriod;
  if ( !Instance )
    goto LABEL_126;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  resTimeLb = this->fields.resTimeLb;
  if ( activeSelf )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13500/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v18 = item->fields.itemEnt;
    if ( !v18 )
      goto LABEL_126;
    resLimitedTimeLb = this->fields.resLimitedTimeLb;
    Instance = (int64_t)LocalizationManager__GetRestTime2(v18->fields.endedAt, -1LL, 0LL);
    if ( !resLimitedTimeLb )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
    v20 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_yellow(0LL);
    if ( !v20 )
      goto LABEL_126;
    UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TIME_REST_STRING"*/, 0LL);
    if ( !resLimitedTimeLbAlt )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !this->fields.resLimitedTimeLb )
      goto LABEL_126;
    v26 = (UnityEngine_GameObject_o *)Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resLimitedTimeLb,
                          0LL);
    if ( !Instance )
      goto LABEL_126;
    LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
    v28 = this->fields.resLimitedTimeLb;
    if ( !v28 )
      goto LABEL_126;
    GameObjectExtensions__SetLocalPositionX(v26, v27 - (float)v28->fields.mWidth, 0LL);
    Instance = (int64_t)this->fields.resTimeLb;
    if ( !Instance )
      goto LABEL_126;
    UILabel__set_applyGradient((UILabel_o *)Instance, 1, 0LL);
    p_usrPresentEnt = &item->fields.usrPresentEnt;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13497/*"TIME_REST_PRESENT"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v30 = this->fields.resLimitedTimeLb;
    usrPresentEnt = item->fields.usrPresentEnt;
    p_usrPresentEnt = &item->fields.usrPresentEnt;
    Instance = (int64_t)usrPresentEnt;
    if ( !usrPresentEnt )
      goto LABEL_126;
    v32 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
    Instance = (int64_t)LocalizationManager__GetRestTime2(v32, -1LL, 0LL);
    if ( !v30 )
      goto LABEL_126;
    UILabel__set_text(v30, (System_String_o *)Instance, 0LL);
    v33 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v33 )
      goto LABEL_126;
    UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.resTimeLb;
    if ( !Instance )
      goto LABEL_126;
    UILabel__set_applyGradient((UILabel_o *)Instance, 0, 0LL);
  }
  v38 = *p_usrPresentEnt;
  if ( v38 )
  {
    v39 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v39 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v38, v39->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
      if ( !Instance )
        goto LABEL_126;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = (int64_t)this->fields.limitedPeriod;
      if ( !Instance )
        goto LABEL_126;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
      {
        v40 = this->fields.resTimeLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13498/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v40 )
          goto LABEL_126;
        UILabel__set_text(v40, (System_String_o *)Instance, 0LL);
      }
      v41 = this->fields.resLimitedTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13499/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v41 )
      {
        UILabel__set_text(v41, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_126:
      sub_B52A5C(Instance, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItemDraw__SetNormalInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  void *holdNumTitleLb; // x0
  UILabel_o *resTimeLb; // x21
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v8; // x0
  UIWidget_o *v9; // x21
  int v10; // s0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v16; // w0
  __int64 v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // x28
  __int64 v20; // x23
  struct UserPresentBoxEntity_o *v21; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v23; // x8
  EventServantMaster_o *v24; // x22
  int32_t v25; // w23
  __int64 v26; // x25
  __int64 v27; // x27
  UILabel_o *v28; // x22
  int64_t v29; // x23
  UserPresentBoxEntity_o *v30; // x20
  UserPresentBoxMaster_c *v31; // x0
  UILabel_o *v32; // x20
  UILabel_o *v33; // x19
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42AE0FF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    sub_B52984(&StringLiteral_13497/*"TIME_REST_PRESENT"*/);
    sub_B52984(&StringLiteral_13498/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/);
    sub_B52984(&StringLiteral_13499/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/);
    byte_42AE0FF = 1;
  }
  holdNumTitleLb = this->fields.holdNumTitleLb;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.holdNumCntLb;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.checkRoot;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
  holdNumTitleLb = this->fields.limitedPeriod;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  resTimeLb = this->fields.resTimeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13497/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_71;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  if ( !item )
    goto LABEL_71;
  holdNumTitleLb = item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v8 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = LocalizationManager__GetRestTime2(v8, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_71;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  v9 = (UIWidget_o *)this->fields.resLimitedTimeLb;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_71;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
  holdNumTitleLb = this->fields.resLimitedTimeLbAlt;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 0, 0LL);
  holdNumTitleLb = this->fields.resTimeLb;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  UILabel__set_applyGradient((UILabel_o *)holdNumTitleLb, 0, 0LL);
  svtEnt = item->fields.svtEnt;
  if ( svtEnt )
  {
    if ( ServantEntity__get_IsFriendShipSvtEquip(svtEnt, 0LL) )
    {
      holdNumTitleLb = this->fields.friendShipSprite;
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
    }
    holdNumTitleLb = item->fields.svtEnt;
    if ( !holdNumTitleLb )
      goto LABEL_71;
    if ( ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)holdNumTitleLb, 0LL) )
    {
      holdNumTitleLb = this->fields.chocolateSprite;
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)holdNumTitleLb, 0LL);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)holdNumTitleLb, 1, 0LL);
    }
    usrPresentEnt = item->fields.usrPresentEnt;
    v16 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v16, 0LL) )
    {
      holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0LL);
      if ( holdNumTitleLb )
      {
        v17 = *((_QWORD *)holdNumTitleLb + 3);
        v18 = holdNumTitleLb;
        if ( v17 )
        {
          if ( (int)v17 >= 1 )
          {
            v19 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v19 >= (unsigned int)v17 )
              {
                v34 = sub_B52A88(holdNumTitleLb);
                sub_B52A28(v34, 0LL);
              }
              v20 = v18[v19 + 4];
              if ( !v20 )
                break;
              v21 = item->fields.usrPresentEnt;
              if ( !v21 )
                break;
              createdAt = v21->fields.createdAt;
              if ( *(_QWORD *)(v20 + 88) < createdAt && createdAt < *(_QWORD *)(v20 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventServantMaster___);
                v23 = item->fields.svtEnt;
                if ( !v23 )
                  break;
                v24 = (EventServantMaster_o *)holdNumTitleLb;
                v25 = *(_DWORD *)(v20 + 16);
                v26 = *(_QWORD *)&v23->fields.id.fields.currentCryptoKey;
                v27 = *(_QWORD *)&v23->fields.id.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v35.fields.currentCryptoKey = v26;
                *(_QWORD *)&v35.fields.fakeValue = v27;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
                if ( !v24 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_31163732(v24, v25, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v28 = this->fields.resLimitedTimeLb;
                  v29 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v29, -1LL, 0LL);
                  if ( !v28 )
                    break;
                  UILabel__set_text(v28, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v17) = *((_DWORD *)v18 + 6);
              if ( (int)++v19 >= (int)v17 )
                goto LABEL_59;
            }
LABEL_71:
            sub_B52A5C(holdNumTitleLb, item);
          }
        }
      }
    }
  }
LABEL_59:
  v30 = item->fields.usrPresentEnt;
  if ( v30 )
  {
    v31 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v31 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v30, v31->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v32 = this->fields.resTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13498/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v32 )
        goto LABEL_71;
      UILabel__set_text(v32, (System_String_o *)holdNumTitleLb, 0LL);
      v33 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13499/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v33 )
        goto LABEL_71;
      UILabel__set_text(v33, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}