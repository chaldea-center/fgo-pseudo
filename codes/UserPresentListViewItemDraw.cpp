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

  if ( (byte_40F809E & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21738, v8);
    sub_B16FFC(&StringLiteral_19448, v9);
    sub_B16FFC(&StringLiteral_19449, v10);
    sub_B16FFC(&StringLiteral_21739, v11);
    byte_40F809E = 1;
  }
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y = -11;
  UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y = -22;
  static_fields = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19448;
  static_fields->BOARD_BG_SP_NAME_NORMAL = (struct System_String_o *)StringLiteral_19448;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->BOARD_BG_SP_NAME_NORMAL, v13, v2, v3, v4, v5, v6, v7);
  v14 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19449;
  v14->BOARD_BG_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_19449;
  sub_B16F98((BattleServantConfConponent_o *)&v14->BOARD_BG_SP_NAME_IMPORTANT, v15, v16, v17, v18, v19, v20, v21);
  v22 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_21739;
  v22->ICON_SP_NAME_LIMITED = (struct System_String_o *)StringLiteral_21739;
  sub_B16F98((BattleServantConfConponent_o *)&v22->ICON_SP_NAME_LIMITED, v23, v24, v25, v26, v27, v28, v29);
  v30 = UserPresentListViewItemDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_21738;
  v30->ICON_SP_NAME_IMPORTANT = (struct System_String_o *)StringLiteral_21738;
  sub_B16F98((BattleServantConfConponent_o *)&v30->ICON_SP_NAME_IMPORTANT, v31, v32, v33, v34, v35, v36, v37);
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
    sub_B170D4();
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
    sub_B170D4();
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = count;
  if ( (byte_40F809D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F809D = 1;
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
    v7 = System_Int32__ToString((int32_t)&v9, 0LL);
    if ( !v6 )
      sub_B170D4();
    if ( v7 )
      v8 = v7;
    else
      v8 = (System_String_o *)StringLiteral_1;
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *checkRoot; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0

  if ( (byte_40F809A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F809A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !v9
      || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                v9,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL),
          (checkRoot = this->fields.checkRoot) == 0LL)
      || (Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                checkRoot,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(Component_srcLineSprite, isInput, 0LL);
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
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ListViewObject_o *viewObject; // x8
  struct UserPresentListViewManager_o *manager; // x1
  System_String_o *v32; // x21
  __int64 v33; // x10
  UserPresentBoxEntity_o *v34; // x22
  UserPresentBoxMaster_c *v35; // x0
  UIButton_o *baseButton; // x22
  UISprite_o *baseSprite; // x22
  System_String_o *BOARD_BG_SP_NAME_IMPORTANT; // x23
  UnityEngine_Component_o *imortantSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *msgTextLabel; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Behaviour_o *v43; // x0
  bool v44; // w1
  UserPresentBoxMaster_c *v45; // x0
  UIButton_o *v46; // x22
  UISprite_o *v47; // x22
  System_String_o *v48; // x23
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  int32_t BOARD_MSG_IMPORTANT_OFFSET_Y; // s0
  UIButton_o *v54; // x22
  UISprite_o *v55; // x22
  System_String_o *BOARD_BG_SP_NAME_NORMAL; // x23
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *v59; // x0
  UnityEngine_Component_o *friendShipSprite; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *chocolateSprite; // x0
  UnityEngine_GameObject_o *v63; // x0
  UILabel_o *nameTextLabel; // x0
  UILabel_o *v65; // x21
  UILabel_o *v66; // x21
  System_String_o *presentMsg; // x22
  System_String_o *v68; // x0
  UILabel_o *itemSelectTextLabel; // x0
  const MethodInfo *v70; // x2
  struct UserPresentBoxEntity_o *v71; // x8
  UnityEngine_GameObject_o *checkObj; // x0
  const MethodInfo *v73; // x2
  UnityEngine_GameObject_o *blockObj; // x0
  UserPresentListViewItemDraw_o *v75; // x0
  UserPresentListViewItem_o *v76; // x1
  const MethodInfo *v77; // x2

  if ( (byte_40F8099 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v8);
    sub_B16FFC(&UserPresentListViewItemDraw_TypeInfo, v9);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_10479, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F8099 = 1;
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
      giftType = usrPresentEnt->fields.giftType;
      objectId = usrPresentEnt->fields.objectId;
      if ( !itemIcon )
        goto LABEL_88;
    }
    else
    {
      giftType = 0;
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10479, 0LL);
    NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(item, v21);
    v23 = System_String__Format_43739268(v20, NameText, (Il2CppObject *)item->fields.presentNum, 0LL);
    viewObject = item->fields.viewObject;
    if ( !viewObject )
      goto LABEL_88;
    manager = (struct UserPresentListViewManager_o *)viewObject->fields.manager;
    v32 = v23;
    if ( !manager
      || (v33 = *(&UserPresentListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v33)
      && (UserPresentListViewManager_c *)manager->klass->_2.typeHierarchy[v33 - 1] == UserPresentListViewManager_TypeInfo )
    {
      this->fields.mManager = manager;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mManager,
        (System_Int32_array **)manager,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v34 = item->fields.usrPresentEnt;
      if ( !v34 )
        goto LABEL_55;
      v35 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v35 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v34, v35->static_fields->IMPORTANT_FOR_EVENT, 0LL) )
      {
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
        imortantSprite = (UnityEngine_Component_o *)this->fields.imortantSprite;
        if ( !imortantSprite )
          goto LABEL_88;
        gameObject = UnityEngine_Component__get_gameObject(imortantSprite, 0LL);
        if ( !gameObject )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        msgTextLabel = (UnityEngine_Component_o *)this->fields.msgTextLabel;
        if ( !msgTextLabel )
          goto LABEL_88;
        v42 = UnityEngine_Component__get_gameObject(msgTextLabel, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v42,
          (float)UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y,
          0LL);
        v43 = (UnityEngine_Behaviour_o *)this->fields.limitedPeriodSprite;
        if ( !v43 )
          goto LABEL_88;
        v44 = 0;
        goto LABEL_68;
      }
      v45 = UserPresentBoxMaster_TypeInfo;
      if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
        v45 = UserPresentBoxMaster_TypeInfo;
      }
      if ( UserPresentBoxEntity__IsEnableFlag(v34, v45->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
      {
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
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT,
          0LL);
        v47 = this->fields.baseSprite;
        v48 = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_IMPORTANT;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v47, v48, 0LL);
        v49 = (UnityEngine_Component_o *)this->fields.imortantSprite;
        if ( !v49 )
          goto LABEL_88;
        v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
        if ( !v50 )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive(v50, 0, 0LL);
        v51 = (UnityEngine_Component_o *)this->fields.msgTextLabel;
        if ( !v51 )
          goto LABEL_88;
        v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_IMPORTANT_OFFSET_Y;
      }
      else
      {
LABEL_55:
        v54 = this->fields.baseButton;
        if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
        }
        if ( !v54 )
          goto LABEL_88;
        UIButton__set_normalSprite(
          v54,
          UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL,
          0LL);
        v55 = this->fields.baseSprite;
        BOARD_BG_SP_NAME_NORMAL = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_BG_SP_NAME_NORMAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetBanner(v55, BOARD_BG_SP_NAME_NORMAL, 0LL);
        v57 = (UnityEngine_Component_o *)this->fields.imortantSprite;
        if ( !v57 )
          goto LABEL_88;
        v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
        if ( !v58 )
          goto LABEL_88;
        UnityEngine_GameObject__SetActive(v58, 0, 0LL);
        v59 = (UnityEngine_Component_o *)this->fields.msgTextLabel;
        if ( !v59 )
          goto LABEL_88;
        v52 = UnityEngine_Component__get_gameObject(v59, 0LL);
        BOARD_MSG_IMPORTANT_OFFSET_Y = UserPresentListViewItemDraw_TypeInfo->static_fields->BOARD_MSG_DEFAULT_OFFSET_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v52, (float)BOARD_MSG_IMPORTANT_OFFSET_Y, 0LL);
      v43 = (UnityEngine_Behaviour_o *)this->fields.limitedPeriodSprite;
      if ( !v43 )
        goto LABEL_88;
      v44 = 1;
LABEL_68:
      UnityEngine_Behaviour__set_enabled(v43, v44, 0LL);
      friendShipSprite = (UnityEngine_Component_o *)this->fields.friendShipSprite;
      if ( friendShipSprite )
      {
        v61 = UnityEngine_Component__get_gameObject(friendShipSprite, 0LL);
        if ( v61 )
        {
          UnityEngine_GameObject__SetActive(v61, 0, 0LL);
          chocolateSprite = (UnityEngine_Component_o *)this->fields.chocolateSprite;
          if ( chocolateSprite )
          {
            v63 = UnityEngine_Component__get_gameObject(chocolateSprite, 0LL);
            if ( v63 )
            {
              UnityEngine_GameObject__SetActive(v63, 0, 0LL);
              nameTextLabel = this->fields.nameTextLabel;
              if ( nameTextLabel )
              {
                UILabel__set_text(nameTextLabel, v32, 0LL);
                v65 = this->fields.nameTextLabel;
                if ( (BYTE3(UserPresentListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserPresentListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserPresentListViewItemDraw_TypeInfo);
                }
                if ( v65 )
                {
                  UILabel__SetCondensedScale_40440812(
                    v65,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->NAME_TEXT_WIDTH,
                    0LL);
                  v66 = this->fields.msgTextLabel;
                  presentMsg = item->fields.presentMsg;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v68 = LocalizationManager__ReplaceCommonTag(presentMsg, 0, 0LL);
                  WrapControlText__textAdjust(
                    v66,
                    v68,
                    UserPresentListViewItemDraw_TypeInfo->static_fields->DEFAULT_MSG_LABEL_FONT_SIZE,
                    0,
                    0,
                    0LL);
                  itemSelectTextLabel = this->fields.itemSelectTextLabel;
                  if ( itemSelectTextLabel )
                  {
                    UILabel__set_text(itemSelectTextLabel, (System_String_o *)StringLiteral_1, 0LL);
                    v71 = item->fields.usrPresentEnt;
                    if ( v71 && v71->fields.giftType == 2 )
                      UserPresentListViewItemDraw__SetItemInfo(this, item, v70);
                    else
                      UserPresentListViewItemDraw__SetNormalInfo(this, item, v70);
                    checkObj = this->fields.checkObj;
                    if ( checkObj )
                    {
                      UnityEngine_GameObject__SetActive(checkObj, item->fields.checkBoxed, 0LL);
                      UserPresentListViewItemDraw__SetCheckCnt(this, item->fields.checkCount, v73);
                      blockObj = this->fields.blockObj;
                      if ( blockObj )
                      {
                        UnityEngine_GameObject__SetActive(blockObj, item->fields.blocked, 0LL);
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
      sub_B170D4();
    }
    v75 = (UserPresentListViewItemDraw_o *)sub_B173C8(manager);
    UserPresentListViewItemDraw__SetItemInfo(v75, v76, v77);
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
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *itemEnt; // x8
  UnityEngine_Component_o *holdNumTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *holdNumCntLb; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *checkRoot; // x0
  struct ItemEntity_o *v28; // x8
  UILabel_o *itemSelectTextLabel; // x0
  System_String_o *detail; // x1
  ItemMaster_o *v31; // x21
  const MethodInfo *v32; // x2
  struct ItemEntity_o *v33; // x8
  struct ItemEntity_o *v34; // x8
  ItemEntity_o *v35; // x0
  System_String_o *OverwritePresentboxDetail; // x21
  const MethodInfo *v37; // x1
  UILabel_o *v38; // x0
  UnityEngine_GameObject_o *limitedPeriod; // x21
  bool isItemLimitedPeriod; // w0
  UnityEngine_GameObject_o *v41; // x0
  bool activeSelf; // w0
  UILabel_o *resTimeLb; // x21
  System_String_o *v44; // x0
  struct ItemEntity_o *v45; // x8
  UILabel_o *resLimitedTimeLb; // x21
  System_String_o *RestTime2; // x0
  UIWidget_o *v48; // x21
  int v49; // s0
  UnityEngine_Component_o *resLimitedTimeLbAlt; // x0
  UnityEngine_GameObject_o *v54; // x0
  UILabel_o *v55; // x21
  System_String_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x21
  UnityEngine_Transform_o *transform; // x0
  float v61; // s0
  struct UILabel_o *v62; // x8
  UILabel_o *v63; // x0
  struct UserPresentBoxEntity_o **p_usrPresentEnt; // x20
  System_String_o *v65; // x0
  UILabel_o *v66; // x21
  UserPresentBoxEntity_o *v67; // x0
  struct UserPresentBoxEntity_o *usrPresentEnt; // t1
  int64_t v69; // x0
  System_String_o *v70; // x0
  UIWidget_o *v71; // x21
  int v72; // s0
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UILabel_o *v78; // x0
  UserPresentBoxEntity_o *v79; // x20
  UserPresentBoxMaster_c *v80; // x0
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UILabel_o *v84; // x20
  System_String_o *v85; // x0
  UILabel_o *v86; // x19
  System_String_o *v87; // x0
  UnityEngine_Component_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UILabel_o *v92; // x22
  System_String_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  struct ItemEntity_o *v95; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v97; // x8
  LocalizationManager_c *v98; // x0
  struct UILabel_o *v99; // x21
  int32_t mana; // w22
  struct ItemEntity_o *v101; // x8
  int32_t type; // w8
  UserGameEntity_o *v103; // x0
  UserGameEntity_o *v104; // x8
  UserGameEntity_o *v105; // x0
  UserGameEntity_o *v106; // x8
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  struct ItemEntity_o *v109; // x8
  bool v110; // w0
  UserSvtCoinEntity_o *v111; // x8
  WebViewManager_o *v112; // x0
  UserItemMaster_o *v113; // x21
  int64_t v114; // x0
  struct ItemEntity_o *v115; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  System_String_o *NumberFormat; // x0
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F809B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_13354, v12);
    sub_B16FFC(&StringLiteral_13347, v13);
    sub_B16FFC(&StringLiteral_12066, v14);
    sub_B16FFC(&StringLiteral_13344, v15);
    sub_B16FFC(&StringLiteral_13345, v16);
    sub_B16FFC(&StringLiteral_13346, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    sub_B16FFC(&StringLiteral_951, v19);
    byte_40F809B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !item )
    goto LABEL_126;
  itemEnt = item->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_126;
  if ( itemEnt->fields.type == 24 )
  {
    holdNumTitleLb = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
    if ( !holdNumTitleLb )
      goto LABEL_126;
    gameObject = UnityEngine_Component__get_gameObject(holdNumTitleLb, 0LL);
    if ( !gameObject )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    holdNumCntLb = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
    if ( !holdNumCntLb )
      goto LABEL_126;
    v26 = UnityEngine_Component__get_gameObject(holdNumCntLb, 0LL);
    if ( !v26 )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    checkRoot = this->fields.checkRoot;
    if ( !checkRoot )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(checkRoot, 0, 0LL);
    v28 = item->fields.itemEnt;
    if ( !v28 )
      goto LABEL_126;
    itemSelectTextLabel = this->fields.itemSelectTextLabel;
    if ( !itemSelectTextLabel )
      goto LABEL_126;
    detail = v28->fields.detail;
    goto LABEL_15;
  }
  v31 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_126;
  if ( !ItemMaster__isQP(MasterData_WarQuestSelectionMaster, itemEnt->fields.id, 0LL) )
  {
    v33 = item->fields.itemEnt;
    if ( !v33 )
      goto LABEL_126;
    if ( !ItemMaster__isFriendPoint(v31, v33->fields.id, 0LL) )
    {
      v34 = item->fields.itemEnt;
      if ( !v34 )
        goto LABEL_126;
      if ( !ItemMaster__isEventPoint(v31, v34->fields.id, 0LL) )
      {
        v88 = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
        if ( !v88 )
          goto LABEL_126;
        v89 = UnityEngine_Component__get_gameObject(v88, 0LL);
        if ( !v89 )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive(v89, 1, 0LL);
        v90 = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
        if ( !v90 )
          goto LABEL_126;
        v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
        if ( !v91 )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive(v91, 1, 0LL);
        v92 = this->fields.holdNumTitleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12066, 0LL);
        if ( !v92 )
          goto LABEL_126;
        UILabel__set_text(v92, v93, 0LL);
        v94 = this->fields.checkRoot;
        if ( !v94 )
          goto LABEL_126;
        UnityEngine_GameObject__SetActive(v94, 1, 0LL);
        v95 = item->fields.itemEnt;
        if ( !v95 )
          goto LABEL_126;
        if ( ItemMaster__isMana(v31, v95->fields.id, 0LL) )
        {
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            goto LABEL_126;
          v97 = SelfUserGame;
          v98 = LocalizationManager_TypeInfo;
          v99 = this->fields.holdNumCntLb;
          mana = v97->fields.mana;
          goto LABEL_98;
        }
        v101 = item->fields.itemEnt;
        if ( !v101 )
          goto LABEL_126;
        type = v101->fields.type;
        if ( type != 2 )
        {
          if ( type == 29 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            v109 = item->fields.itemEnt;
            if ( !v109 || !Master_WarQuestSelectionMaster )
              goto LABEL_126;
            v110 = UserSvtCoinMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     UserId,
                     v109->fields.value,
                     0LL);
            v99 = this->fields.holdNumCntLb;
            if ( !v110 )
            {
              if ( !v99 )
                goto LABEL_126;
              detail = (System_String_o *)StringLiteral_951;
              goto LABEL_123;
            }
            v111 = entity;
            if ( !entity )
              goto LABEL_126;
            v98 = LocalizationManager_TypeInfo;
          }
          else
          {
            if ( type == 22 )
            {
              v103 = UserGameMaster__getSelfUserGame(0LL);
              if ( !v103 )
                goto LABEL_126;
              v104 = v103;
              v98 = LocalizationManager_TypeInfo;
              v99 = this->fields.holdNumCntLb;
              mana = v104->fields.rarePri;
              goto LABEL_98;
            }
            v112 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v112 )
              goto LABEL_126;
            v113 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v112,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            v114 = NetworkManager__get_UserId(0LL);
            v115 = item->fields.itemEnt;
            if ( !v115 )
              goto LABEL_126;
            if ( !v113 )
              goto LABEL_126;
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v113, v114, v115->fields.id, 0LL);
            if ( !EntityDefinitely )
              goto LABEL_126;
            v111 = (UserSvtCoinEntity_o *)EntityDefinitely;
            v98 = LocalizationManager_TypeInfo;
            v99 = this->fields.holdNumCntLb;
          }
          mana = v111->fields.num;
          if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_99:
            if ( !v98->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v98);
          }
LABEL_121:
          NumberFormat = LocalizationManager__GetNumberFormat(mana, 0LL);
          if ( !v99 )
            goto LABEL_126;
          detail = NumberFormat;
LABEL_123:
          itemSelectTextLabel = v99;
LABEL_15:
          UILabel__set_text(itemSelectTextLabel, detail, 0LL);
          goto LABEL_23;
        }
        v105 = UserGameMaster__getSelfUserGame(0LL);
        if ( !v105 )
          goto LABEL_126;
        v106 = v105;
        v98 = LocalizationManager_TypeInfo;
        v99 = this->fields.holdNumCntLb;
        mana = v106->fields.stone;
LABEL_98:
        if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_99;
        goto LABEL_121;
      }
    }
  }
  UserPresentListViewItemDraw__SetNormalInfo(this, item, v32);
LABEL_23:
  v35 = item->fields.itemEnt;
  if ( !v35 )
    goto LABEL_126;
  OverwritePresentboxDetail = ItemEntity__GetOverwritePresentboxDetail(v35, 0LL);
  if ( System_String__op_Inequality(OverwritePresentboxDetail, (System_String_o *)StringLiteral_1, 0LL) )
  {
    v38 = this->fields.itemSelectTextLabel;
    if ( !v38 )
      goto LABEL_126;
    UILabel__set_text(v38, OverwritePresentboxDetail, 0LL);
  }
  limitedPeriod = this->fields.limitedPeriod;
  isItemLimitedPeriod = UserPresentListViewItem__isItemLimitedPeriod(item, v37);
  if ( !limitedPeriod )
    goto LABEL_126;
  UnityEngine_GameObject__SetActive(limitedPeriod, isItemLimitedPeriod, 0LL);
  v41 = this->fields.limitedPeriod;
  if ( !v41 )
    goto LABEL_126;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v41, 0LL);
  resTimeLb = this->fields.resTimeLb;
  if ( activeSelf )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13347, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, v44, 0LL);
    v45 = item->fields.itemEnt;
    if ( !v45 )
      goto LABEL_126;
    resLimitedTimeLb = this->fields.resLimitedTimeLb;
    RestTime2 = LocalizationManager__GetRestTime2(v45->fields.endedAt, -1LL, 0LL);
    if ( !resLimitedTimeLb )
      goto LABEL_126;
    UILabel__set_text(resLimitedTimeLb, RestTime2, 0LL);
    v48 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_yellow(0LL);
    if ( !v48 )
      goto LABEL_126;
    UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
    resLimitedTimeLbAlt = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
    if ( !resLimitedTimeLbAlt )
      goto LABEL_126;
    v54 = UnityEngine_Component__get_gameObject(resLimitedTimeLbAlt, 0LL);
    if ( !v54 )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(v54, 1, 0LL);
    v55 = this->fields.resLimitedTimeLbAlt;
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13354, 0LL);
    if ( !v55 )
      goto LABEL_126;
    UILabel__set_text(v55, v56, 0LL);
    v57 = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
    if ( !v57 )
      goto LABEL_126;
    v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
    if ( !this->fields.resLimitedTimeLb )
      goto LABEL_126;
    v59 = v58;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resLimitedTimeLb, 0LL);
    if ( !transform )
      goto LABEL_126;
    LODWORD(v61) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v62 = this->fields.resLimitedTimeLb;
    if ( !v62 )
      goto LABEL_126;
    GameObjectExtensions__SetLocalPositionX(v59, v61 - (float)v62->fields.mWidth, 0LL);
    v63 = this->fields.resTimeLb;
    if ( !v63 )
      goto LABEL_126;
    UILabel__set_applyGradient(v63, 1, 0LL);
    p_usrPresentEnt = &item->fields.usrPresentEnt;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13344, 0LL);
    if ( !resTimeLb )
      goto LABEL_126;
    UILabel__set_text(resTimeLb, v65, 0LL);
    v66 = this->fields.resLimitedTimeLb;
    usrPresentEnt = item->fields.usrPresentEnt;
    p_usrPresentEnt = &item->fields.usrPresentEnt;
    v67 = usrPresentEnt;
    if ( !usrPresentEnt )
      goto LABEL_126;
    v69 = UserPresentBoxEntity__expireAt(v67, 0LL);
    v70 = LocalizationManager__GetRestTime2(v69, -1LL, 0LL);
    if ( !v66 )
      goto LABEL_126;
    UILabel__set_text(v66, v70, 0LL);
    v71 = (UIWidget_o *)this->fields.resLimitedTimeLb;
    *(UnityEngine_Color_o *)&v72 = UnityEngine_Color__get_white(0LL);
    if ( !v71 )
      goto LABEL_126;
    UIWidget__set_color(v71, *(UnityEngine_Color_o *)&v72, 0LL);
    v76 = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
    if ( !v76 )
      goto LABEL_126;
    v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
    if ( !v77 )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(v77, 0, 0LL);
    v78 = this->fields.resTimeLb;
    if ( !v78 )
      goto LABEL_126;
    UILabel__set_applyGradient(v78, 0, 0LL);
  }
  v79 = *p_usrPresentEnt;
  if ( v79 )
  {
    v80 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v80 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v79, v80->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v81 = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
      if ( !v81 )
        goto LABEL_126;
      v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
      if ( !v82 )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive(v82, 0, 0LL);
      v83 = this->fields.limitedPeriod;
      if ( !v83 )
        goto LABEL_126;
      if ( !UnityEngine_GameObject__get_activeSelf(v83, 0LL) )
      {
        v84 = this->fields.resTimeLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13345, 0LL);
        if ( !v84 )
          goto LABEL_126;
        UILabel__set_text(v84, v85, 0LL);
      }
      v86 = this->fields.resLimitedTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_13346, 0LL);
      if ( v86 )
      {
        UILabel__set_text(v86, v87, 0LL);
        return;
      }
LABEL_126:
      sub_B170D4();
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
  UnityEngine_Component_o *holdNumTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *holdNumCntLb; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *checkRoot; // x0
  UnityEngine_GameObject_o *limitedPeriod; // x0
  UILabel_o *resTimeLb; // x21
  System_String_o *v20; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  UILabel_o *resLimitedTimeLb; // x21
  int64_t v23; // x0
  System_String_o *RestTime2; // x0
  UIWidget_o *v25; // x21
  int v26; // s0
  UnityEngine_Component_o *resLimitedTimeLbAlt; // x0
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *v32; // x0
  ServantEntity_o *svtEnt; // x0
  UnityEngine_Component_o *friendShipSprite; // x0
  UnityEngine_GameObject_o *v35; // x0
  ServantEntity_o *v36; // x0
  UnityEngine_Component_o *chocolateSprite; // x0
  UnityEngine_GameObject_o *v38; // x0
  struct UserPresentBoxEntity_o *v39; // x8
  int32_t v40; // w0
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _QWORD *EnableEntityList; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x8
  _QWORD *v47; // x21
  __int64 v48; // x28
  __int64 v49; // x23
  struct UserPresentBoxEntity_o *v50; // x8
  int64_t createdAt; // x8
  WebViewManager_o *v52; // x0
  WarQuestSelectionMaster_o *v53; // x0
  struct ServantEntity_o *v54; // x8
  EventServantMaster_o *v55; // x22
  int32_t v56; // w23
  __int64 v57; // x25
  __int64 v58; // x27
  int32_t v59; // w0
  UILabel_o *v60; // x22
  int64_t v61; // x23
  System_String_o *v62; // x0
  UserPresentBoxEntity_o *v63; // x20
  UserPresentBoxMaster_c *v64; // x0
  UILabel_o *v65; // x20
  System_String_o *v66; // x0
  UILabel_o *v67; // x19
  System_String_o *v68; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_40F809C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13344, v10);
    sub_B16FFC(&StringLiteral_13345, v11);
    sub_B16FFC(&StringLiteral_13346, v12);
    byte_40F809C = 1;
  }
  holdNumTitleLb = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
  if ( !holdNumTitleLb )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject(holdNumTitleLb, 0LL);
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  holdNumCntLb = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
  if ( !holdNumCntLb )
    goto LABEL_71;
  v16 = UnityEngine_Component__get_gameObject(holdNumCntLb, 0LL);
  if ( !v16 )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  checkRoot = this->fields.checkRoot;
  if ( !checkRoot )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(checkRoot, 1, 0LL);
  limitedPeriod = this->fields.limitedPeriod;
  if ( !limitedPeriod )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(limitedPeriod, 0, 0LL);
  resTimeLb = this->fields.resTimeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13344, 0LL);
  if ( !resTimeLb )
    goto LABEL_71;
  UILabel__set_text(resTimeLb, v20, 0LL);
  if ( !item )
    goto LABEL_71;
  usrPresentEnt = item->fields.usrPresentEnt;
  if ( !usrPresentEnt )
    goto LABEL_71;
  resLimitedTimeLb = this->fields.resLimitedTimeLb;
  v23 = UserPresentBoxEntity__expireAt(usrPresentEnt, 0LL);
  RestTime2 = LocalizationManager__GetRestTime2(v23, -1LL, 0LL);
  if ( !resLimitedTimeLb )
    goto LABEL_71;
  UILabel__set_text(resLimitedTimeLb, RestTime2, 0LL);
  v25 = (UIWidget_o *)this->fields.resLimitedTimeLb;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
  if ( !v25 )
    goto LABEL_71;
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  resLimitedTimeLbAlt = (UnityEngine_Component_o *)this->fields.resLimitedTimeLbAlt;
  if ( !resLimitedTimeLbAlt )
    goto LABEL_71;
  v31 = UnityEngine_Component__get_gameObject(resLimitedTimeLbAlt, 0LL);
  if ( !v31 )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(v31, 0, 0LL);
  v32 = this->fields.resTimeLb;
  if ( !v32 )
    goto LABEL_71;
  UILabel__set_applyGradient(v32, 0, 0LL);
  svtEnt = item->fields.svtEnt;
  if ( svtEnt )
  {
    if ( ServantEntity__get_IsFriendShipSvtEquip(svtEnt, 0LL) )
    {
      friendShipSprite = (UnityEngine_Component_o *)this->fields.friendShipSprite;
      if ( !friendShipSprite )
        goto LABEL_71;
      v35 = UnityEngine_Component__get_gameObject(friendShipSprite, 0LL);
      if ( !v35 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    }
    v36 = item->fields.svtEnt;
    if ( !v36 )
      goto LABEL_71;
    if ( ServantEntity__get_IsChocolateSvtEquip(v36, 0LL) )
    {
      chocolateSprite = (UnityEngine_Component_o *)this->fields.chocolateSprite;
      if ( !chocolateSprite )
        goto LABEL_71;
      v38 = UnityEngine_Component__get_gameObject(chocolateSprite, 0LL);
      if ( !v38 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v38, 1, 0LL);
    }
    v39 = item->fields.usrPresentEnt;
    v40 = v39 ? v39->fields.giftType : 0;
    if ( Gift__IsEventSvtJoin(v40, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_71;
      EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 12, 1, 0LL);
      if ( EnableEntityList )
      {
        v46 = EnableEntityList[3];
        v47 = EnableEntityList;
        if ( v46 )
        {
          if ( (int)v46 >= 1 )
          {
            v48 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v48 >= (unsigned int)v46 )
              {
                sub_B17100(EnableEntityList, v44, v45);
                sub_B170A0();
              }
              v49 = v47[v48 + 4];
              if ( !v49 )
                break;
              v50 = item->fields.usrPresentEnt;
              if ( !v50 )
                break;
              createdAt = v50->fields.createdAt;
              if ( *(_QWORD *)(v49 + 88) < createdAt && createdAt < *(_QWORD *)(v49 + 96) )
              {
                v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v52 )
                  break;
                v53 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)v52,
                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
                v54 = item->fields.svtEnt;
                if ( !v54 )
                  break;
                v55 = (EventServantMaster_o *)v53;
                v56 = *(_DWORD *)(v49 + 16);
                v57 = *(_QWORD *)&v54->fields.id.fields.currentCryptoKey;
                v58 = *(_QWORD *)&v54->fields.id.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v69.fields.currentCryptoKey = v57;
                *(_QWORD *)&v69.fields.fakeValue = v58;
                v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
                if ( !v55 )
                  break;
                EnableEntityList = EventServantMaster__getEntity_30791676(v55, v56, v59, 0LL);
                if ( EnableEntityList && *((_DWORD *)EnableEntityList + 6) == 2 )
                {
                  v60 = this->fields.resLimitedTimeLb;
                  v61 = EnableEntityList[11];
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v62 = LocalizationManager__GetRestTime2(v61, -1LL, 0LL);
                  if ( !v60 )
                    break;
                  UILabel__set_text(v60, v62, 0LL);
                }
              }
              LODWORD(v46) = *((_DWORD *)v47 + 6);
              if ( (int)++v48 >= (int)v46 )
                goto LABEL_59;
            }
LABEL_71:
            sub_B170D4();
          }
        }
      }
    }
  }
LABEL_59:
  v63 = item->fields.usrPresentEnt;
  if ( v63 )
  {
    v64 = UserPresentBoxMaster_TypeInfo;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v64 = UserPresentBoxMaster_TypeInfo;
    }
    if ( UserPresentBoxEntity__IsEnableFlag(v63, v64->static_fields->INDEFINITE_PERIOD, 0LL) )
    {
      v65 = this->fields.resTimeLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13345, 0LL);
      if ( !v65 )
        goto LABEL_71;
      UILabel__set_text(v65, v66, 0LL);
      v67 = this->fields.resLimitedTimeLb;
      v68 = LocalizationManager__Get((System_String_o *)StringLiteral_13346, 0LL);
      if ( !v67 )
        goto LABEL_71;
      UILabel__set_text(v67, v68, 0LL);
    }
  }
}