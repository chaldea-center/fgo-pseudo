void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  struct UserPresentListViewItemDraw_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserPresentListViewItemDraw_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserPresentListViewItemDraw_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UserPresentListViewItemDraw_c *v38; // x8

  if ( (byte_4185DB5 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_21830/*"ribon_present_important_1"*/, v8);
    sub_B2C35C(&StringLiteral_19522/*"img_listboard_bg02"*/, v9);
    sub_B2C35C(&StringLiteral_19523/*"img_listboard_bg03"*/, v10);
    sub_B2C35C(&StringLiteral_21831/*"ribon_present_limited_period"*/, v11);
    byte_4185DB5 = 1;
  }
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = -11;
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y = -22;
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19522/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_19522/*"img_listboard_bg02"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v13, v2, v3, v4, v5, v6, v7);
  v14 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19523/*"img_listboard_bg03"*/;
  v14->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_19523/*"img_listboard_bg03"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->BOARD_BG_SP_NAME_IMPORTANT, v15, v16, v17, v18, v19, v20, v21);
  v22 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_21831/*"ribon_present_limited_period"*/;
  v22->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_21831/*"ribon_present_limited_period"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->ICON_SP_NAME_LIMITED, v23, v24, v25, v26, v27, v28, v29);
  v30 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_21830/*"ribon_present_important_1"*/;
  v30->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_21830/*"ribon_present_important_1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->ICON_SP_NAME_IMPORTANT, v31, v32, v33, v34, v35, v36, v37);
  v38 = UserPresentListViewItemDraw_TypeInfo;
  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH = 391.0;
  v38->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE = 15;
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
    sub_B2C434(0LL, val);
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
    sub_B2C434(0LL, val);
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
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = count;
  if ( (byte_4185DB4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4185DB4 = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v6 = this->fields.checkCntLabel;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    if ( !v6 )
      sub_B2C434(v7, v8);
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
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_4185DB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4185DB1 = 1;
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
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_B2C434(Component_WebViewObject, v9);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v31; // x21
  __int64 v32; // x10
  UserPresentBoxEntity_o *v33; // x22
  UserPresentBoxMaster_c *v34; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v39; // w1
  UserPresentBoxMaster_c *v40; // x0
  UIButton_o *v41; // x22
  UISprite_o *v42; // x22
  System_String_o *v43; // x23
  UnityEngine_GameObject_o *v44; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v46; // x22
  UISprite_o *v47; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v52; // x0
  const MethodInfo *v53; // x2
  struct UserPresentBoxEntity_o *v54; // x8
  const MethodInfo *v55; // x2
  UserPresentListViewItemDraw_o *v56; // x0
  UserPresentListViewItem_o *v57; // x1
  const MethodInfo *v58; // x2

  if ( (byte_4185DB0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v8);
    sub_B2C35C(&UserPresentListViewItemDraw_TypeInfo, v9);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_10512/*"PRESENT_INFO"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4185DB0 = 1;
  }
  if ( item && mode )
  {
    limitedPeriodSprite = this->fields.limitedPeriodSprite;
    v14 = UserPresentListViewItemDraw_TypeInfo;
    if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      v14 = UserPresentListViewItemDraw_TypeInfo;
    }
    ICON_SP_NAME_LIMITED = v14->static_fields->ICON_SP_NAME_LIMITED;
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v21);
    itemIcon = (ItemIconComponent_o *)System_String__Format_44301068(
                                        v20,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_88;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v31 = (System_String_o *)itemIcon;
    if ( !manager
      || (v32 = *(&UserPresentListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v32)
      && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[v32 - 1] == UserPresentListViewManager_TypeInfo )
    {
      this->fields.mManager = manager;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.mManager,
        (System_Int32_array **)manager,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v33 = item->fields.usrPresentEnt;
      if ( !v33 )
        goto LABEL_55;
      v34 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v34 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v33, v34->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
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
        v39 = 0;
        goto LABEL_68;
      }
      v40 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v40 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v33, v40->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
      {
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v41 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v41 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v41,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
          0LL);
        v42 = this->fields.baseSprite;
        v43 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v42, v43, 0LL);
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
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
      }
      else
      {
LABEL_55:
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v46 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v46 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v46,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL,
          0LL);
        v47 = this->fields.baseSprite;
        BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v47, BOARD_BG_SP_NAME_NORMAL, 0LL);
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
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v44, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
      if ( !itemIcon )
        goto LABEL_88;
      v39 = 1;
LABEL_68:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v39, 0LL);
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
                UILabel__set_text((UILabel_o *)itemIcon, v31, 0LL);
                itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
                nameTextLabel = this->fields.nameTextLabel;
                if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
                }
                if ( nameTextLabel )
                {
                  UILabel__SetCondensedScale_41673556(
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
                  v52 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                  WrapControlText__textAdjust(
                    msgTextLabel,
                    v52,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                    0,
                    0,
                    0LL);
                  itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                  if ( itemIcon )
                  {
                    UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    v54 = item->fields.usrPresentEnt;
                    if ( v54 && v54->fields.giftType == 2 )
                      UserPresentListViewItemDraw__SetItemInfo(this, item, v53);
                    else
                      UserPresentListViewItemDraw__SetNormalInfo(this, item, v53);
                    itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                    if ( itemIcon )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)itemIcon,
                        item->fields.checkBoxed,
                        0LL);
                      UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v55);
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
      sub_B2C434(itemIcon, giftType);
    }
    v56 = (UserPresentListViewItemDraw_o *)sub_B2C728(manager);
    UserPresentListViewItemDraw__SetItemInfo(v56, v57, v58);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  struct ItemEntity_o *v33; // x8
  UILabel_o *resLimitedTimeLb; // x21
  UIWidget_o *v35; // x21
  int v36; // s0
  UILabel_o *resLimitedTimeLbAlt; // x21
  UnityEngine_GameObject_o *v41; // x21
  float v42; // s0
  struct UILabel_o *v43; // x8
  struct UserPresentBoxEntity_o **p_usrPresentEnt; // x20
  UILabel_o *v45; // x21
  struct UserPresentBoxEntity_o *usrPresentEnt; // t1
  int64_t v47; // x0
  UIWidget_o *v48; // x21
  int v49; // s0
  UserPresentBoxEntity_o *v53; // x20
  UserPresentBoxMaster_c *v54; // x0
  UILabel_o *v55; // x20
  UILabel_o *v56; // x19
  UILabel_o *holdNumTitleLb; // x22
  struct ItemEntity_o *v58; // x8
  int64_t v59; // x8
  LocalizationManager_c *v60; // x0
  struct UILabel_o *holdNumCntLb; // x21
  int32_t num; // w22
  struct ItemEntity_o *v63; // x8
  int32_t type; // w8
  int64_t v65; // x8
  int64_t v66; // x8
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v68; // x8
  UserSvtCoinEntity_o *v69; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v71; // x8
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185DB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_13410/*"TIME_REST_STRING"*/, v12);
    sub_B2C35C(&StringLiteral_13403/*"TIME_REST_PRESENT_LIMITED"*/, v13);
    sub_B2C35C(&StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, v14);
    sub_B2C35C(&StringLiteral_13400/*"TIME_REST_PRESENT"*/, v15);
    sub_B2C35C(&StringLiteral_13401/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v16);
    sub_B2C35C(&StringLiteral_13402/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v19);
    byte_4185DB2 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
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
    v23 = item->fields.itemEnt;
    if ( !v23 )
      goto LABEL_126;
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v23->fields.detail;
    goto LABEL_15;
  }
  v25 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v27 = item->fields.itemEnt;
    if ( !v27 )
      goto LABEL_126;
    Instance = ItemMaster__isFriendPoint(v25, v27->fields.id, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v28 = item->fields.itemEnt;
      if ( !v28 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v25, v28->fields.id, 0LL) )
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
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = (int64_t)this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v58 = item->fields.itemEnt;
        if ( !v58 )
          goto LABEL_126;
        Instance = ItemMaster__isMana(v25, v58->fields.id, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_126;
          v59 = Instance;
          v60 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *(_DWORD *)(v59 + 176);
          goto LABEL_98;
        }
        v63 = item->fields.itemEnt;
        if ( !v63 )
          goto LABEL_126;
        type = v63->fields.type;
        if ( type != 2 )
        {
          if ( type == 29 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v68 = item->fields.itemEnt;
            if ( !v68 || !Master_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = UserSvtCoinMaster__TryGetEntity(
                         Master_WarQuestSelectionMaster,
                         &entity,
                         Instance,
                         v68->fields.value,
                         0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( (Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_953/*"0"*/;
              goto LABEL_123;
            }
            v69 = entity;
            if ( !entity )
              goto LABEL_126;
            v60 = LocalizationManager_TypeInfo;
          }
          else
          {
            if ( type == 22 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_126;
              v65 = Instance;
              v60 = LocalizationManager_TypeInfo;
              holdNumCntLb = this->fields.holdNumCntLb;
              num = *(_DWORD *)(v65 + 180);
              goto LABEL_98;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v71 = item->fields.itemEnt;
            if ( !v71 )
              goto LABEL_126;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  v71->fields.id,
                                  0LL);
            if ( !Instance )
              goto LABEL_126;
            v69 = (UserSvtCoinEntity_o *)Instance;
            v60 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
          }
          num = v69->fields.num;
          if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_99:
            if ( !v60->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v60);
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
        v66 = Instance;
        v60 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *(_DWORD *)(v66 + 168);
LABEL_98:
        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_99;
        goto LABEL_121;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v26);
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
  Instance = UserPresentListViewItem__isItemLimitedPeriod(item, v21);
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
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v33 = item->fields.itemEnt;
    if ( !v33 )
      goto LABEL_126;
    resLimitedTimeLb = this->fields.resLimitedTimeLb;
    Instance = (int64_t)LocalizationManager__GetRestTime2(v33->fields.endedAt, -1LL, 0LL);
    if ( !resLimitedTimeLb )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
    v35 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_yellow(0LL);
    if ( !v35 )
      goto LABEL_126;
    UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST_STRING"*/, 0LL);
    if ( !resLimitedTimeLbAlt )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !this->fields.resLimitedTimeLb )
      goto LABEL_126;
    v41 = (UnityEngine_GameObject_o *)Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resLimitedTimeLb,
                          0LL);
    if ( !Instance )
      goto LABEL_126;
    LODWORD(v42) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
    v43 = this->fields.resLimitedTimeLb;
    if ( !v43 )
      goto LABEL_126;
    GameObjectExtensions__SetLocalPositionX(v41, v42 - (float)v43->fields.mWidth, 0LL);
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
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13400/*"TIME_REST_PRESENT"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v45 = this->fields.resLimitedTimeLb;
    usrPresentEnt = item->fields.usrPresentEnt;
    p_usrPresentEnt = &item->fields.usrPresentEnt;
    Instance = (int64_t)usrPresentEnt;
    if ( !usrPresentEnt )
      goto LABEL_126;
    v47 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
    Instance = (int64_t)LocalizationManager__GetRestTime2(v47, -1LL, 0LL);
    if ( !v45 )
      goto LABEL_126;
    UILabel__set_text(v45, (System_String_o *)Instance, 0LL);
    v48 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_126;
    UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
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
  v53 = *p_usrPresentEnt;
  if ( v53 )
  {
    v54 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v54 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v53, v54->static_fields->INDEFINITE_PERIOD, 0LL) )
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
        v55 = this->fields.resTimeLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13401/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v55 )
          goto LABEL_126;
        UILabel__set_text(v55, (System_String_o *)Instance, 0LL);
      }
      v56 = this->fields.resLimitedTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13402/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v56 )
      {
        UILabel__set_text(v56, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_126:
      sub_B2C434(Instance, v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UIWidget_o *v17; // x21
  int v18; // s0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v24; // w0
  __int64 v25; // x8
  _QWORD *v26; // x21
  __int64 v27; // x28
  __int64 v28; // x23
  struct UserPresentBoxEntity_o *v29; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v31; // x8
  EventServantMaster_o *v32; // x22
  int32_t v33; // w23
  __int64 v34; // x25
  __int64 v35; // x27
  UILabel_o *v36; // x22
  int64_t v37; // x23
  UserPresentBoxEntity_o *v38; // x20
  UserPresentBoxMaster_c *v39; // x0
  UILabel_o *v40; // x20
  UILabel_o *v41; // x19
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4185DB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13400/*"TIME_REST_PRESENT"*/, v10);
    sub_B2C35C(&StringLiteral_13401/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v11);
    sub_B2C35C(&StringLiteral_13402/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v12);
    byte_4185DB3 = 1;
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
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13400/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_71;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  if ( !item )
    goto LABEL_71;
  holdNumTitleLb = item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v16 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = LocalizationManager__GetRestTime2(v16, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_71;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  v17 = (UIWidget_o *)this->fields.resLimitedTimeLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_71;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
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
    v24 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v24, 0LL) )
    {
      holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0LL);
      if ( holdNumTitleLb )
      {
        v25 = *((_QWORD *)holdNumTitleLb + 3);
        v26 = holdNumTitleLb;
        if ( v25 )
        {
          if ( (int)v25 >= 1 )
          {
            v27 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v27 >= (unsigned int)v25 )
              {
                v42 = sub_B2C460(holdNumTitleLb);
                sub_B2C400(v42, 0LL);
              }
              v28 = v26[v27 + 4];
              if ( !v28 )
                break;
              v29 = item->fields.usrPresentEnt;
              if ( !v29 )
                break;
              createdAt = v29->fields.createdAt;
              if ( *(_QWORD *)(v28 + 88) < createdAt && createdAt < *(_QWORD *)(v28 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
                v31 = item->fields.svtEnt;
                if ( !v31 )
                  break;
                v32 = (EventServantMaster_o *)holdNumTitleLb;
                v33 = *(_DWORD *)(v28 + 16);
                v34 = *(_QWORD *)&v31->fields.id.fields.currentCryptoKey;
                v35 = *(_QWORD *)&v31->fields.id.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v43.fields.currentCryptoKey = v34;
                *(_QWORD *)&v43.fields.fakeValue = v35;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
                if ( !v32 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_30508724(v32, v33, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v36 = this->fields.resLimitedTimeLb;
                  v37 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v37, -1LL, 0LL);
                  if ( !v36 )
                    break;
                  UILabel__set_text(v36, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v25) = *((_DWORD *)v26 + 6);
              if ( (int)++v27 >= (int)v25 )
                goto LABEL_59;
            }
LABEL_71:
            sub_B2C434(holdNumTitleLb, item);
          }
        }
      }
    }
  }
LABEL_59:
  v38 = item->fields.usrPresentEnt;
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
      v40 = this->fields.resTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13401/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v40 )
        goto LABEL_71;
      UILabel__set_text(v40, (System_String_o *)holdNumTitleLb, 0LL);
      v41 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13402/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v41 )
        goto LABEL_71;
      UILabel__set_text(v41, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}