void __fastcall UserPresentListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct UserPresentListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v21; // x1
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
  struct UserPresentListViewItemDraw_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UserPresentListViewItemDraw_c *v46; // x8

  if ( (byte_42E6A68 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_22126/*"ribon_present_important_1"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19769/*"img_listboard_bg02"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19770/*"img_listboard_bg03"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22127/*"ribon_present_limited_period"*/, v17, v18, v19);
    byte_42E6A68 = 1;
  }
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = -11;
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y = -22;
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_19769/*"img_listboard_bg02"*/;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_19769/*"img_listboard_bg02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v21, v2, v3, v4, v5, v6, v7);
  v22 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19770/*"img_listboard_bg03"*/;
  v22->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_19770/*"img_listboard_bg03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->BOARD_BG_SP_NAME_IMPORTANT, v23, v24, v25, v26, v27, v28, v29);
  v30 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_22127/*"ribon_present_limited_period"*/;
  v30->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_22127/*"ribon_present_limited_period"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->ICON_SP_NAME_LIMITED, v31, v32, v33, v34, v35, v36, v37);
  v38 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_22126/*"ribon_present_important_1"*/;
  v38->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_22126/*"ribon_present_important_1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->ICON_SP_NAME_IMPORTANT, v39, v40, v41, v42, v43, v44, v45);
  v46 = UserPresentListViewItemDraw_TypeInfo;
  UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH = 391.0;
  v46->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE = 15;
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
    sub_B5D69C(0LL, val);
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
    sub_B5D69C(0LL, val);
  UnityEngine_GameObject__SetActive(checkObj, val, 0LL);
}


void __fastcall UserPresentListViewItemDraw__SetCheckCnt(
        UserPresentListViewItemDraw_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *checkCntLabel; // x20
  UILabel_o *v9; // x19
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = count;
  if ( (byte_42E6A67 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, count, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E6A67 = 1;
  }
  checkCntLabel = (UnityEngine_Object_o *)this->fields.checkCntLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(checkCntLabel, 0LL, 0LL) )
  {
    v9 = this->fields.checkCntLabel;
    v10 = System_Int32__ToString((int32_t)&v13, 0LL);
    if ( !v9 )
      sub_B5D69C(v10, v11);
    if ( v10 )
      v12 = v10;
    else
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v9, v12, 0LL);
  }
}


void __fastcall UserPresentListViewItemDraw__SetInput(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v13; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_42E6A64 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E6A64 = 1;
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
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.checkRoot) == 0LL)
      || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_B5D69C(Component_WebViewObject, v13);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UISprite_o *limitedPeriodSprite; // x21
  UserPresentListViewItemDraw_c *v26; // x0
  System_String_o *ICON_SP_NAME_LIMITED; // x22
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  ItemIconComponent_o *itemIcon; // x0
  __int64 giftType; // x1
  int32_t objectId; // w2
  System_String_o *v32; // x21
  const MethodInfo *v33; // x1
  Il2CppObject *NameText; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v43; // x21
  __int64 v44; // x10
  UserPresentBoxEntity_o *v45; // x22
  UserPresentBoxMaster_c *v46; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  bool v51; // w1
  UserPresentBoxMaster_c *v52; // x0
  UIButton_o *v53; // x22
  UISprite_o *v54; // x22
  System_String_o *v55; // x23
  UnityEngine_GameObject_o *v56; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v58; // x22
  UISprite_o *v59; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UILabel_o *nameTextLabel; // x21
  UILabel_o *msgTextLabel; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v64; // x0
  const MethodInfo *v65; // x2
  struct UserPresentBoxEntity_o *v66; // x8
  const MethodInfo *v67; // x2
  UserPresentListViewItemDraw_o *v68; // x0
  UserPresentListViewItem_o *v69; // x1
  const MethodInfo *v70; // x2

  if ( (byte_42E6A63 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserPresentListViewItemDraw_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10629/*"PRESENT_INFO"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42E6A63 = 1;
  }
  if ( item && mode )
  {
    limitedPeriodSprite = this->fields.limitedPeriodSprite;
    v26 = UserPresentListViewItemDraw_TypeInfo;
    if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
      v26 = UserPresentListViewItemDraw_TypeInfo;
    }
    ICON_SP_NAME_LIMITED = v26->static_fields->ICON_SP_NAME_LIMITED;
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PRESENT_INFO"*/, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v33);
    itemIcon = (ItemIconComponent_o *)System_String__Format_44573324(
                                        v32,
                                        NameText,
                                        (Il2CppObject *)item->fields.presentNum,
                                        0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_88;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v43 = (System_String_o *)itemIcon;
    if ( !manager
      || (v44 = *(&UserPresentListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v44)
      && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[v44 - 1] == UserPresentListViewManager_TypeInfo )
    {
      this->fields.mManager = manager;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mManager,
        (System_Int32_array **)manager,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v45 = item->fields.usrPresentEnt;
      if ( !v45 )
        goto LABEL_55;
      v46 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v46 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v45, v46->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
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
        v51 = 0;
        goto LABEL_68;
      }
      v52 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v52 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v45, v52->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
      {
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v53 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v53 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v53,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
          0LL);
        v54 = this->fields.baseSprite;
        v55 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v54, v55, 0LL);
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
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
      }
      else
      {
LABEL_55:
        itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
        v58 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v58 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v58,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL,
          0LL);
        v59 = this->fields.baseSprite;
        BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v59, BOARD_BG_SP_NAME_NORMAL, 0LL);
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
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v56, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.limitedPeriodSprite;
      if ( !itemIcon )
        goto LABEL_88;
      v51 = 1;
LABEL_68:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemIcon, v51, 0LL);
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
                UILabel__set_text((UILabel_o *)itemIcon, v43, 0LL);
                itemIcon = (ItemIconComponent_o *)UserPresentListViewItemDraw_TypeInfo;
                nameTextLabel = this->fields.nameTextLabel;
                if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
                }
                if ( nameTextLabel )
                {
                  UILabel__SetCondensedScale_41950620(
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
                  v64 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                  WrapControlText__textAdjust(
                    msgTextLabel,
                    v64,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                    0,
                    0,
                    0LL);
                  itemIcon = (ItemIconComponent_o *)this->fields.itemSelectTextLabel;
                  if ( itemIcon )
                  {
                    UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    v66 = item->fields.usrPresentEnt;
                    if ( v66 && v66->fields.giftType == 2 )
                      UserPresentListViewItemDraw__SetItemInfo(this, item, v65);
                    else
                      UserPresentListViewItemDraw__SetNormalInfo(this, item, v65);
                    itemIcon = (ItemIconComponent_o *)this->fields.checkObj;
                    if ( itemIcon )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)itemIcon,
                        item->fields.checkBoxed,
                        0LL);
                      UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v67);
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
      sub_B5D69C(itemIcon, giftType);
    }
    v68 = (UserPresentListViewItemDraw_o *)sub_B5D990(manager);
    UserPresentListViewItemDraw__SetItemInfo(v68, v69, v70);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItemDraw__SetItemInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int64_t Instance; // x0
  const MethodInfo *v52; // x1
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v54; // x8
  System_String_o *detail; // x1
  ItemMaster_o *v56; // x21
  const MethodInfo *v57; // x2
  struct ItemEntity_o *v58; // x8
  struct ItemEntity_o *v59; // x8
  System_String_o *OverwritePresentboxDetail; // x21
  UnityEngine_GameObject_o *limitedPeriod; // x21
  bool activeSelf; // w0
  UILabel_o *resTimeLb; // x21
  struct ItemEntity_o *v64; // x8
  UILabel_o *resLimitedTimeLb; // x21
  UIWidget_o *v66; // x21
  int v67; // s0
  UILabel_o *resLimitedTimeLbAlt; // x21
  UnityEngine_GameObject_o *v72; // x21
  float v73; // s0
  struct UILabel_o *v74; // x8
  struct UserPresentBoxEntity_o **p_usrPresentEnt; // x20
  UILabel_o *v76; // x21
  struct UserPresentBoxEntity_o *usrPresentEnt; // t1
  int64_t v78; // x0
  UIWidget_o *v79; // x21
  int v80; // s0
  UserPresentBoxEntity_o *v84; // x20
  UserPresentBoxMaster_c *v85; // x0
  UILabel_o *v86; // x20
  UILabel_o *v87; // x19
  UILabel_o *holdNumTitleLb; // x22
  struct ItemEntity_o *v89; // x8
  int64_t v90; // x8
  LocalizationManager_c *v91; // x0
  struct UILabel_o *holdNumCntLb; // x21
  int32_t num; // w22
  struct ItemEntity_o *v94; // x8
  int32_t type; // w8
  int64_t v96; // x8
  int64_t v97; // x8
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v99; // x8
  UserSvtCoinEntity_o *v100; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ItemEntity_o *v102; // x8
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6A65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_13566/*"TIME_REST_STRING"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_13559/*"TIME_REST_PRESENT_LIMITED"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13556/*"TIME_REST_PRESENT"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_13557/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_13558/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_1/*""*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v48, v49, v50);
    byte_42E6A65 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
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
    v54 = item->fields.itemEnt;
    if ( !v54 )
      goto LABEL_126;
    Instance = (int64_t)this->fields.itemSelectTextLabel;
    if ( !Instance )
      goto LABEL_126;
    detail = v54->fields.detail;
    goto LABEL_15;
  }
  v56 = (ItemMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_126;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, itemEnt->fields.id, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v58 = item->fields.itemEnt;
    if ( !v58 )
      goto LABEL_126;
    Instance = ItemMaster__isFriendPoint(v56, v58->fields.id, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v59 = item->fields.itemEnt;
      if ( !v59 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v56, v59->fields.id, 0LL) )
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
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_126;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        Instance = (int64_t)this->fields.checkRoot;
        if ( !Instance )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v89 = item->fields.itemEnt;
        if ( !v89 )
          goto LABEL_126;
        Instance = ItemMaster__isMana(v56, v89->fields.id, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_126;
          v90 = Instance;
          v91 = LocalizationManager_TypeInfo;
          holdNumCntLb = this->fields.holdNumCntLb;
          num = *(_DWORD *)(v90 + 176);
          goto LABEL_98;
        }
        v94 = item->fields.itemEnt;
        if ( !v94 )
          goto LABEL_126;
        type = v94->fields.type;
        if ( type != 2 )
        {
          if ( type == 29 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v99 = item->fields.itemEnt;
            if ( !v99 || !Master_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = UserSvtCoinMaster__TryGetEntity(
                         Master_WarQuestSelectionMaster,
                         &entity,
                         Instance,
                         v99->fields.value,
                         0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            if ( (Instance & 1) == 0 )
            {
              if ( !holdNumCntLb )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_973/*"0"*/;
              goto LABEL_123;
            }
            v100 = entity;
            if ( !entity )
              goto LABEL_126;
            v91 = LocalizationManager_TypeInfo;
          }
          else
          {
            if ( type == 22 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_126;
              v96 = Instance;
              v91 = LocalizationManager_TypeInfo;
              holdNumCntLb = this->fields.holdNumCntLb;
              num = *(_DWORD *)(v96 + 180);
              goto LABEL_98;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_126;
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            v102 = item->fields.itemEnt;
            if ( !v102 )
              goto LABEL_126;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_126;
            Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  v102->fields.id,
                                  0LL);
            if ( !Instance )
              goto LABEL_126;
            v100 = (UserSvtCoinEntity_o *)Instance;
            v91 = LocalizationManager_TypeInfo;
            holdNumCntLb = this->fields.holdNumCntLb;
          }
          num = v100->fields.num;
          if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_99:
            if ( !v91->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v91);
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
        v97 = Instance;
        v91 = LocalizationManager_TypeInfo;
        holdNumCntLb = this->fields.holdNumCntLb;
        num = *(_DWORD *)(v97 + 168);
LABEL_98:
        if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_99;
        goto LABEL_121;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v57);
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
  Instance = UserPresentListViewItem__isItemLimitedPeriod(item, v52);
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
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_REST_PRESENT_LIMITED"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v64 = item->fields.itemEnt;
    if ( !v64 )
      goto LABEL_126;
    resLimitedTimeLb = this->fields.resLimitedTimeLb;
    Instance = (int64_t)LocalizationManager__GetRestTime2(v64->fields.endedAt, -1LL, 0LL);
    if ( !resLimitedTimeLb )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLb, (System_String_o *)Instance, 0LL);
    v66 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_yellow(0LL);
    if ( !v66 )
      goto LABEL_126;
    UIWidget__set_color(v66, *(UnityEngine_Color_o *)&v67, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    resLimitedTimeLbAlt = this->fields.resLimitedTimeLbAlt;
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13566/*"TIME_REST_STRING"*/, 0LL);
    if ( !resLimitedTimeLbAlt )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLbAlt, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.resLimitedTimeLbAlt;
    if ( !Instance )
      goto LABEL_126;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !this->fields.resLimitedTimeLb )
      goto LABEL_126;
    v72 = (UnityEngine_GameObject_o *)Instance;
    Instance = (int64_t)UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resLimitedTimeLb,
                          0LL);
    if ( !Instance )
      goto LABEL_126;
    LODWORD(v73) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
    v74 = this->fields.resLimitedTimeLb;
    if ( !v74 )
      goto LABEL_126;
    GameObjectExtensions__SetLocalPositionX(v72, v73 - (float)v74->fields.mWidth, 0LL);
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
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13556/*"TIME_REST_PRESENT"*/, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, (System_String_o *)Instance, 0LL);
    v76 = this->fields.resLimitedTimeLb;
    usrPresentEnt = item->fields.usrPresentEnt;
    p_usrPresentEnt = &item->fields.usrPresentEnt;
    Instance = (int64_t)usrPresentEnt;
    if ( !usrPresentEnt )
      goto LABEL_126;
    v78 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)Instance, 0LL);
    Instance = (int64_t)LocalizationManager__GetRestTime2(v78, -1LL, 0LL);
    if ( !v76 )
      goto LABEL_126;
    UILabel__set_text(v76, (System_String_o *)Instance, 0LL);
    v79 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_white(0LL);
    if ( !v79 )
      goto LABEL_126;
    UIWidget__set_color(v79, *(UnityEngine_Color_o *)&v80, 0LL);
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
  v84 = *p_usrPresentEnt;
  if ( v84 )
  {
    v85 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v85 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v84, v85->static_fields->INDEFINITE_PERIOD, 0LL) )
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
        v86 = this->fields.resTimeLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13557/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
        if ( !v86 )
          goto LABEL_126;
        UILabel__set_text(v86, (System_String_o *)Instance, 0LL);
      }
      v87 = this->fields.resLimitedTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13558/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( v87 )
      {
        UILabel__set_text(v87, (System_String_o *)Instance, 0LL);
        return;
      }
LABEL_126:
      sub_B5D69C(Instance, v52);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItemDraw__SetNormalInfo(
        UserPresentListViewItemDraw_o *this,
        UserPresentListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  void *holdNumTitleLb; // x0
  UILabel_o *resTimeLb; // x21
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v33; // x0
  UIWidget_o *v34; // x21
  int v35; // s0
  ServantEntity_o *svtEnt; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  int32_t v41; // w0
  __int64 v42; // x8
  _QWORD *v43; // x21
  __int64 v44; // x28
  __int64 v45; // x23
  struct UserPresentBoxEntity_o *v46; // x8
  int64_t createdAt; // x8
  struct ServantEntity_o *v48; // x8
  EventServantMaster_o *v49; // x22
  int32_t v50; // w23
  __int64 v51; // x25
  __int64 v52; // x27
  UILabel_o *v53; // x22
  int64_t v54; // x23
  UserPresentBoxEntity_o *v55; // x20
  UserPresentBoxMaster_c *v56; // x0
  UILabel_o *v57; // x20
  UILabel_o *v58; // x19
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_42E6A66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13556/*"TIME_REST_PRESENT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_13557/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_13558/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, v27, v28, v29);
    byte_42E6A66 = 1;
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
  holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13556/*"TIME_REST_PRESENT"*/, 0LL);
  if ( !resTimeLb )
    goto LABEL_71;
  UILabel__set_text(resTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  if ( !item )
    goto LABEL_71;
  holdNumTitleLb = item->fields.usrPresentEnt;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v33 = UserPresentBoxEntity__expireAt((UserPresentBoxEntity_o *)holdNumTitleLb, 0LL);
  holdNumTitleLb = LocalizationManager__GetRestTime2(v33, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_71;
  UILabel__set_text(resLimitedTimeLb, (System_String_o *)holdNumTitleLb, 0LL);
  v34 = (UIWidget_o *)this->fields.resLimitedTimeLb;
  *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
  if ( !v34 )
    goto LABEL_71;
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
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
    v41 = usrPresentEnt ? usrPresentEnt->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v41, 0LL) )
    {
      holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)holdNumTitleLb,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !holdNumTitleLb )
        goto LABEL_71;
      holdNumTitleLb = EventMaster__GetEnableEntityList((EventMaster_o *)holdNumTitleLb, 12, 1, 0LL);
      if ( holdNumTitleLb )
      {
        v42 = *((_QWORD *)holdNumTitleLb + 3);
        v43 = holdNumTitleLb;
        if ( v42 )
        {
          if ( (int)v42 >= 1 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v44 >= (unsigned int)v42 )
              {
                v59 = sub_B5D6C8(holdNumTitleLb);
                sub_B5D668(v59, 0LL);
              }
              v45 = v43[v44 + 4];
              if ( !v45 )
                break;
              v46 = item->fields.usrPresentEnt;
              if ( !v46 )
                break;
              createdAt = v46->fields.createdAt;
              if ( *(_QWORD *)(v45 + 88) < createdAt && createdAt < *(_QWORD *)(v45 + 96) )
              {
                holdNumTitleLb = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !holdNumTitleLb )
                  break;
                holdNumTitleLb = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)holdNumTitleLb,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
                v48 = item->fields.svtEnt;
                if ( !v48 )
                  break;
                v49 = (EventServantMaster_o *)holdNumTitleLb;
                v50 = *(_DWORD *)(v45 + 16);
                v51 = *(_QWORD *)&v48->fields.id.fields.currentCryptoKey;
                v52 = *(_QWORD *)&v48->fields.id.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v60.fields.currentCryptoKey = v51;
                *(_QWORD *)&v60.fields.fakeValue = v52;
                holdNumTitleLb = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v60, 0LL);
                if ( !v49 )
                  break;
                holdNumTitleLb = EventServantMaster__getEntity_31581864(v49, v50, (int32_t)holdNumTitleLb, 0LL);
                if ( holdNumTitleLb && *((_DWORD *)holdNumTitleLb + 6) == 2 )
                {
                  v53 = this->fields.resLimitedTimeLb;
                  v54 = *((_QWORD *)holdNumTitleLb + 11);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  holdNumTitleLb = LocalizationManager__GetRestTime2(v54, -1LL, 0LL);
                  if ( !v53 )
                    break;
                  UILabel__set_text(v53, (System_String_o *)holdNumTitleLb, 0LL);
                }
              }
              LODWORD(v42) = *((_DWORD *)v43 + 6);
              if ( (int)++v44 >= (int)v42 )
                goto LABEL_59;
            }
LABEL_71:
            sub_B5D69C(holdNumTitleLb, item);
          }
        }
      }
    }
  }
LABEL_59:
  v55 = item->fields.usrPresentEnt;
  if ( v55 )
  {
    v56 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v56 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v55, v56->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v57 = this->fields.resTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13557/*"TIME_REST_PRESENT_INDEFINITE_PERIOD"*/, 0LL);
      if ( !v57 )
        goto LABEL_71;
      UILabel__set_text(v57, (System_String_o *)holdNumTitleLb, 0LL);
      v58 = this->fields.resLimitedTimeLb;
      holdNumTitleLb = LocalizationManager__Get((System_String_o *)StringLiteral_13558/*"TIME_REST_PRESENT_INDEFINITE_PERIOD_TEXT"*/, 0LL);
      if ( !v58 )
        goto LABEL_71;
      UILabel__set_text(v58, (System_String_o *)holdNumTitleLb, 0LL);
    }
  }
}