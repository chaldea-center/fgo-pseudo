void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4A57958 & 1) == 0 )
  {
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    byte_4A57958 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_QWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 0x30C00000019LL;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BB4460;
  *(_QWORD *)&static_fields->BONUS_INFO_NOT_GET_POS_X = 0xC3230000C2F00000LL;
  *(_QWORD *)&static_fields->ADD_MSG_INFO_POS_Y_DEF = 0x2C2AC0000LL;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A57957 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57957 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v10; // x23
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v19; // x4
  int32_t v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v21 = haveFreeStoneNum;
  if ( (byte_4A57945 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3053/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A57945 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3053/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v20 = haveChargeStoneNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11, v12, v13);
  v15 = (Il2CppObject *)System_Int32__ToString_62512312((int32_t)&v21, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
  v16 = System_String__Format_61721404(v10, v14, v15, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v16, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1B8880C(v16, v17);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v16, 0LL);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v19);
}


void __fastcall SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t gachaId,
        BonusSelectSummonAssetManager_o *assetManager,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        const MethodInfo *method)
{
  System_String_o *v17; // x24
  System_String_o *v18; // x28
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x27
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x26
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *baseWindow; // x0
  __int64 v32; // x1
  System_String_o *v33; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  const MethodInfo *v37; // x6
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v44; // x0
  const MethodInfo *v45; // [xsp+8h] [xbp-78h]
  int32_t v46; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v47; // [xsp+18h] [xbp-68h] BYREF
  int32_t v48; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A57946 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_12277/*"STONE_PURCHASE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_3057/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3058/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_4A57946 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v48 = haveStoneNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v19, v20, v21);
  v47 = haveChargeStoneNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25);
  v46 = haveFreeStoneNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v27, v28, v29);
  baseWindow = System_String__Format_61721472(v18, v22, v26, v30, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v33 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0LL);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
  if ( !baseWindowSprite )
    goto LABEL_25;
  UIWidget__set_width(
    baseWindowSprite,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  baseWindow = (System_String_o *)this->fields.baseWindowSprite;
  if ( !baseWindow )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)baseWindow, 580, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  baseWindow = (System_String_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( assetManager )
    {
      baseWindow = (System_String_o *)this->fields.baseWindow;
      if ( baseWindow )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__49297800(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v41,
            v42);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1B8880C(baseWindow, v32);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v17,
    v33,
    tryGetBonusSelectData,
    assetManager,
    v37);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v44, callback, 14.0, 0LL, 0, 0, 1, v45);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_33069884(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33069884(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A57953 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_4A57953 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4A57954 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57954 = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, v4);
      goto LABEL_9;
    }
LABEL_12:
    sub_1B8880C(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v6; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v8; // w8
  unsigned int v9; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v13; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4A57942 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57942 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_63;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v6];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_64:
    sub_1B88814(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_63;
  v8 = extraItemIconComponents->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v9 < v8 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v9];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v8 = extraItemIconComponents->max_length;
      if ( (int)++v9 >= v8 )
        goto LABEL_22;
    }
    goto LABEL_64;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_63;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  v13 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v13 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v13->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, 0, v16, v17);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v18,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v19,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_63;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, method);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_1B8880C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  *(_QWORD *)&this->fields.state = 0LL;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnClickCancel(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 0, v2);
}


void __fastcall SummonConfirmDlgComponent__OnClickDecide(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 1, v2);
}


void __fastcall SummonConfirmDlgComponent__OnClickSetting(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4A57955 & 1) == 0 )
  {
    sub_1B885B0(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_4A57955 = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1B887FC(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1B8880C(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4A57956 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4678/*"ConfirmWindow/CloseButton"*/);
    sub_1B885B0(&StringLiteral_4680/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_1B885B0(&StringLiteral_4676/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_4A57956 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_4680/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(v4, (System_String_o *)StringLiteral_4678/*"ConfirmWindow/CloseButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(v5, (System_String_o *)StringLiteral_4676/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
}


void __fastcall SummonConfirmDlgComponent__Open(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        System_String_o *msg,
        System_String_o *decideTxt,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        float msgOffY,
        System_String_o *addMsg,
        int32_t shopIdIdx,
        bool isAppendSummon,
        bool isBonusSelect,
        const MethodInfo *method)
{
  __int64 v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v26; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v28; // x1
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v31; // x25
  int32_t v32; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v37; // w0
  float v38; // s8
  int32_t v39; // w24
  float v40; // s9
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v46; // x22
  System_Func_object__bool__o **v47; // x24
  System_Func_object__bool__o *v48; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x25
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  SummonConfirmDlgComponent___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x25
  System_Func_object__int__o *_9__72_1; // x26
  Il2CppObject *v56; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_ICollection_o *v61; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v63; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v65; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v67; // w8
  bool v68; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v73; // s0
  float v74; // s1
  float v75; // s8
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  bool v78; // w1
  const MethodInfo *v79; // x1
  System_Action_o *v80; // x20

  if ( (byte_4A5794C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1B885B0(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent___c__Open_b__72_1__);
    sub_1B885B0(&Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__);
    sub_1B885B0(&SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5794C = 1;
  }
  v20 = sub_1B887FC(SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_120;
  *(_DWORD *)(v20 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    if ( title )
      v26 = title;
    else
      v26 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v26, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v28 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v28, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v29, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v31 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v31 )
      goto LABEL_120;
    UILabel__set_text(v31, decideTxt, 0LL);
  }
  v32 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v32 <= 2 )
    {
      v34 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v34 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v34->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v35, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v37 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v32 <= 2 )
      v38 = 54.0;
    else
      v38 = 43.0;
    if ( v32 <= 2 )
      v39 = 20;
    else
      v39 = 18;
    if ( !gameObject )
      goto LABEL_120;
    v40 = v32 <= 2 ? 188.0 : 178.0;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v41, v40, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v42, v38, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, v39, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0LL);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_109;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( *(_QWORD *)&extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_120;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v20 + 20) = 1;
      v46 = (GiftMaster_o *)MasterData_object;
      v47 = (System_Func_object__bool__o **)(v20 + 24);
      while ( 1 )
      {
        v48 = *v47;
        v49 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v47 )
        {
          v48 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v48,
            (Il2CppObject *)v20,
            Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v20 + 24) = v48;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v48, v50, v51);
        }
        v52 = System_Linq_Enumerable__Where_object_(
                v49,
                (System_Func_TSource__bool__o *)v48,
                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v53 = SummonConfirmDlgComponent___c_TypeInfo;
        v54 = v52;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v53 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__72_1 = (System_Func_object__int__o *)v53->static_fields->__9__72_1;
        if ( !_9__72_1 )
        {
          if ( !v53->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v53);
            v53 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v56 = (Il2CppObject *)v53->static_fields->__9;
          _9__72_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__72_1, v56, Method_SummonConfirmDlgComponent___c__Open_b__72_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__72_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__72_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v58, v59);
        }
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v54,
                                                                     (System_Func_TSource__TResult__o *)_9__72_1,
                                                                     (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v61 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v60,
                                                    (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v61, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v46 )
            goto LABEL_120;
          GiftListByIds = GiftMaster__GetGiftListByIds(v46, (System_Collections_Generic_IEnumerable_int__o *)v61, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v20 + 20), v63);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v20 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v65);
            goto LABEL_89;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v20 + 20) == 2 )
            break;
        }
        v67 = *(_DWORD *)(v20 + 20) + 1;
        v68 = *(_DWORD *)(v20 + 20) - 2 < 0;
        *(_DWORD *)(v20 + 20) = v67;
        if ( v68 == __OFSUB__(v67, 3) )
          goto LABEL_89;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v22);
LABEL_89:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_120;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_120;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v70 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v70,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v71 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v73 = -42.0;
        if ( v32 > 2 )
          v73 = -44.0;
        v74 = -34.0;
        if ( v32 <= 2 )
          v74 = -30.0;
        if ( isAppendSummon )
          v75 = v74;
        else
          v75 = v73;
        if ( !gameObject )
          goto LABEL_120;
        v76 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v76, v75, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v77 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v77, v75, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_120;
        v71 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v71, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_109:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v78 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v78 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v78, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_120:
    sub_1B8880C(gameObject, v22);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v79);
  v80 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Action_o *v11; // x20

  if ( (byte_4A5794E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_4A5794E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1B8880C(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  System_String_o *v8; // x0
  SummonConfirmDlgComponent_c *v9; // x8
  Il2CppObject *v10; // x22
  SummonControl_c *v11; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  bool v14; // w23
  System_String_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  System_String_o *v22; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v24; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  SummonConfirmDlgComponent_c *v35; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  int32_t v38; // [xsp+10h] [xbp-70h] BYREF
  int32_t v39; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v40; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+28h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4A5794B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&SummonControl_TypeInfo);
    sub_1B885B0(&UserGachaMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_3817/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_1B885B0(&StringLiteral_3816/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_1B885B0(&StringLiteral_6523/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_4A5794B = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v7->static_fields->DailyFreeGachaResetTime;
  v8 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v9 = SummonConfirmDlgComponent_TypeInfo;
  v10 = (Il2CppObject *)v8;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v9 = SummonConfirmDlgComponent_TypeInfo;
  }
  v11 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v9->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v11 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v11->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v14 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v14 )
      goto LABEL_13;
LABEL_20:
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v22 = System_String__Format(v36, v10, 0LL);
    goto LABEL_21;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v14 )
    goto LABEL_20;
LABEL_13:
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3816/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v40 = maxNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v16, v17, v18);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(v15, v10, v19, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_22;
  v22 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6523/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v39 = remainNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v25, v26, v27);
  v38 = maxNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v29, v30, v31);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(v24, v28, v32, 0LL);
  if ( !campaignLabel )
LABEL_22:
    sub_1B8880C(gameObject, v21);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v35 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v35 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v35->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_21:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v33,
    v34);
  SummonConfirmDlgComponent__Open(this, 0LL, v22, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v37);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmGroupSummon(
        SummonConfirmDlgComponent_o *this,
        int32_t groupId,
        int32_t price,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t afterStoneNum,
        int32_t afterFreeStoneNum,
        int32_t afterChargeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        GachaExtraGiftEntity_array *giftEntList,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  void *v28; // x28
  __int64 v29; // x8
  int v30; // w24
  int max_length; // w21
  GachaEntity_o *v32; // x8
  GachaEntity_o *v33; // x9
  Il2CppObject *name; // x21
  Il2CppObject *v35; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v37; // w25
  System_String_o *v38; // x28
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x29
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x20
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Int32_c *v53; // x0
  int32_t *v54; // x1
  Il2CppObject *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x20
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x20
  UILabel_o *msgLabel; // x26
  System_String_o *v74; // x27
  System_Object_array *v75; // x28
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x20
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x20
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int32_t v91; // w2
  int32_t v92; // w3
  Il2CppObject *v93; // x20
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  int32_t v97; // w2
  int32_t v98; // w3
  Il2CppObject *v99; // x20
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int32_t v103; // w2
  int32_t v104; // w3
  Il2CppObject *v105; // x20
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  int32_t v109; // w2
  int32_t v110; // w3
  Il2CppObject *v111; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x1
  System_Action_o *v115; // x20
  __int64 v116; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v118; // [xsp+Ch] [xbp-84h]
  int32_t v119; // [xsp+10h] [xbp-80h]
  int32_t v120; // [xsp+14h] [xbp-7Ch]
  int32_t v121; // [xsp+18h] [xbp-78h] BYREF
  int32_t v122; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v123; // [xsp+20h] [xbp-70h] BYREF
  int32_t v124; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v125; // [xsp+28h] [xbp-68h] BYREF
  int v126; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5794D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1B885B0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1B885B0(&StringLiteral_3821/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3819/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3820/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_4A5794D = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, price, haveStoneNum);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BDA48C(v22);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BDA48C(v23);
  MasterData_object = **(void ***)(v23 + 184);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_84;
  v119 = haveFreeStoneNum;
  v120 = haveStoneNum;
  v118 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v28 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v29 = *((_QWORD *)MasterData_object + 4);
  if ( !v29 )
    goto LABEL_84;
  if ( *(_QWORD *)(v29 + 24) )
    v30 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v30 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v26, v27);
  if ( !GachaDataInGroup )
    goto LABEL_84;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v32 = GachaDataInGroup->m_Items[0];
    if ( !v32 )
      goto LABEL_84;
    v33 = GachaDataInGroup->m_Items[1];
    if ( !v33 )
      goto LABEL_84;
    name = (Il2CppObject *)v32->fields.name;
    v35 = (Il2CppObject *)v33->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v37 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1B88658(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v41 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1B886EC(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v41->max_length )
      goto LABEL_85;
    v41->m_Items[0] = name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v41->m_Items, (int32_t)name, v39, v40);
    if ( v35 )
    {
      MasterData_object = (void *)sub_1B886EC(v35, v41->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v41->max_length <= 1 )
      goto LABEL_85;
    v41->m_Items[1] = v35;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[1], (int32_t)v35, v42, v43);
    v126 = v30;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v44, v45, v46);
    v49 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B886EC(MasterData_object, v41->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v41->max_length <= 2 )
      goto LABEL_85;
    v41->m_Items[2] = v49;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[2], (int32_t)v49, v47, v48);
    v53 = int_TypeInfo;
    v54 = &v125;
    v125 = price;
  }
  else
  {
    if ( !v28 )
      goto LABEL_84;
    v55 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v28 + 3), 0LL) )
      v55 = (Il2CppObject *)*((_QWORD *)v28 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v37 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1B88658(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v41 = (System_Object_array *)MasterData_object;
    if ( v55 )
    {
      MasterData_object = (void *)sub_1B886EC(v55, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v41->max_length )
      goto LABEL_85;
    v41->m_Items[0] = v55;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v41->m_Items, (int32_t)v55, v56, v57);
    v126 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v58, v59, v60);
    v63 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B886EC(MasterData_object, v41->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v41->max_length <= 1 )
      goto LABEL_85;
    v41->m_Items[1] = v63;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[1], (int32_t)v63, v61, v62);
    v125 = v30;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v64, v65, v66);
    v69 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B886EC(MasterData_object, v41->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v41->max_length <= 2 )
      goto LABEL_85;
    v41->m_Items[2] = v69;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[2], (int32_t)v69, v67, v68);
    v53 = int_TypeInfo;
    v124 = price;
    v54 = &v124;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v53, v54, v50, v51, v52);
  v72 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v41->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_85;
  v41->m_Items[3] = v72;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[3], (int32_t)v72, v70, v71);
  MasterData_object = System_String__Format_61721540(v38, v41, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_84;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v75 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  v126 = v120;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v76, v77, v78);
  if ( !v75 )
LABEL_84:
    sub_1B8880C(MasterData_object, v21);
  v81 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( !v75->max_length )
    goto LABEL_85;
  v75->m_Items[0] = v81;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v75->m_Items, (int32_t)v81, v79, v80);
  v125 = v37;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v82, v83, v84);
  v87 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v75->max_length <= 1 )
    goto LABEL_85;
  v75->m_Items[1] = v87;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->m_Items[1], (int32_t)v87, v85, v86);
  v124 = v119;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v124, v88, v89, v90);
  v93 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v75->max_length <= 2 )
    goto LABEL_85;
  v75->m_Items[2] = v93;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->m_Items[2], (int32_t)v93, v91, v92);
  v123 = v118;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v94, v95, v96);
  v99 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v75->max_length <= 3 )
    goto LABEL_85;
  v75->m_Items[3] = v99;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->m_Items[3], (int32_t)v99, v97, v98);
  v122 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v100, v101, v102);
  v105 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v75->max_length <= 4 )
    goto LABEL_85;
  v75->m_Items[4] = v105;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->m_Items[4], (int32_t)v105, v103, v104);
  v121 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v121, v106, v107, v108);
  v111 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B886EC(MasterData_object, v75->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_86:
      v116 = sub_1B88830();
      sub_1B886D8(v116, 0LL);
    }
  }
  if ( v75->max_length <= 5 )
LABEL_85:
    sub_1B88814(MasterData_object, v21);
  v75->m_Items[5] = v111;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->m_Items[5], (int32_t)v111, v109, v110);
  MasterData_object = System_String__Format_61721540(v74, v75, 0LL);
  if ( !msgLabel )
    goto LABEL_84;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_84;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v113);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v114);
  v115 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v115, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v115, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  System_String_o *v13; // x25
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  SummonConfirmDlgComponent_c *v29; // x0
  const MethodInfo *v30; // [xsp+8h] [xbp-68h]
  int32_t v31; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v32; // [xsp+18h] [xbp-58h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A5794A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_3824/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_4A5794A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v33 = needPointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v14, v15, v16);
  v32 = havePointNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v18, v19, v20);
  v31 = afterPointNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
  v26 = System_String__Format_61721472(v13, v17, v21, v25, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v27,
    v28);
  v29 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v29 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v26,
    0LL,
    callback,
    v29->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v30);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmStone(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t type,
        int32_t price,
        int32_t num,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t afterStoneNum,
        int32_t afterFreeStoneNum,
        int32_t afterChargeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool isAppendSummon,
        bool isPickup,
        int64_t summonCloseAt,
        int32_t gachaId,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        GachaExtraGiftEntity_array *giftEntList,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  System_String_o **v27; // x8
  System_String_o *v28; // x25
  System_Object_array *v29; // x26
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x27
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x27
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x27
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x27
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x27
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x27
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x27
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x27
  System_String_o *v80; // x29
  System_String_o *v81; // x27
  System_String_o *v82; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v84; // x0
  int32_t v85; // w1
  int32_t v86; // w1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x27
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x0
  System_String_o *v96; // x27
  System_String_o *v97; // x0
  System_String_o *v98; // x27
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x24
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  Il2CppObject *v106; // x0
  System_String_o *v107; // x27
  System_String_o *v108; // x24
  System_Object_array *v109; // x29
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int32_t v113; // w2
  int32_t v114; // w3
  Il2CppObject *v115; // x22
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  int32_t v119; // w2
  int32_t v120; // w3
  Il2CppObject *v121; // x21
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int32_t v125; // w2
  int32_t v126; // w3
  Il2CppObject *v127; // x20
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  int32_t v131; // w2
  int32_t v132; // w3
  Il2CppObject *v133; // x20
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  int32_t v137; // w2
  int32_t v138; // w3
  Il2CppObject *v139; // x20
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x20
  System_String_o *v146; // x20
  System_String_o *v147; // x0
  _QWORD *v148; // x21
  System_String_o *v149; // x22
  __int64 v150; // x8
  __int64 v151; // x0
  __int64 v152; // x0
  System_String_o *v153; // x25
  System_String_o *v154; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v156; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v164; // x0
  __int64 v165; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v167; // [xsp+8h] [xbp-B8h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v172; // [xsp+40h] [xbp-80h] BYREF
  int32_t v173; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v174; // [xsp+48h] [xbp-78h] BYREF
  int32_t v175; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v176; // [xsp+50h] [xbp-70h] BYREF
  int32_t v177; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v178; // [xsp+58h] [xbp-68h] BYREF
  int32_t v179; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4A57948 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3803/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/);
    sub_1B885B0(&StringLiteral_3809/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_1B885B0(&StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_1B885B0(&StringLiteral_3807/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/);
    sub_1B885B0(&StringLiteral_3823/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_1B885B0(&StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_1B885B0(&StringLiteral_3806/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/);
    sub_1B885B0(&StringLiteral_12374/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12361/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_1B885B0(&StringLiteral_12326/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_1B885B0(&StringLiteral_3808/*"CONFIRM_CHARGESUMMON_MSG"*/);
    byte_4A57948 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, type, price);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = (System_String_o **)&StringLiteral_3809/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = (System_String_o **)&StringLiteral_3823/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v27 = (System_String_o **)&StringLiteral_3808/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v28 = LocalizationManager__Get(*v27, 0LL);
  v29 = (System_Object_array *)sub_1B88658(object___TypeInfo, 8LL);
  v179 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v179, v30, v31, v32);
  if ( !v29 )
    goto LABEL_107;
  v37 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v29->max_length )
    goto LABEL_105;
  v29->m_Items[0] = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v29->m_Items, (int32_t)v37, v35, v36);
  v178 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v178, v38, v39, v40);
  v43 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_105;
  v29->m_Items[1] = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[1], (int32_t)v43, v41, v42);
  v177 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v177, v44, v45, v46);
  v49 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_105;
  v29->m_Items[2] = v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[2], (int32_t)v49, v47, v48);
  v176 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v176, v50, v51, v52);
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_105;
  v29->m_Items[3] = v55;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[3], (int32_t)v55, v53, v54);
  v175 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v175, v56, v57, v58);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_105;
  v29->m_Items[4] = v61;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[4], (int32_t)v61, v59, v60);
  v174 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v174, v62, v63, v64);
  v67 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_105;
  v29->m_Items[5] = v67;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[5], (int32_t)v67, v65, v66);
  v173 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v173, v68, v69, v70);
  v73 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_105;
  v29->m_Items[6] = v73;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[6], (int32_t)v73, v71, v72);
  v172 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v172, v74, v75, v76);
  v79 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_105;
  v29->m_Items[7] = v79;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->m_Items[7], (int32_t)v79, v77, v78);
  v80 = System_String__Format_61721540(v28, v29, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v84 = System_String__Format(v82, DateTime, 0LL);
    v81 = System_String__Concat_61707032(v81, v84, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v85 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v85, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v86 = 76;
  else
    v86 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v86, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(this, titlea, v80, 0LL, callback, 14.0, v81, shopIdIdx, isAppendSummon, 0, v167);
    return;
  }
  v179 = gachaId;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v87, v88, v89);
  v91 = System_String__Format((System_String_o *)StringLiteral_3807/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v90, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v91, 0LL) )
  {
    v179 = gachaId;
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v92, v93, v94);
    v96 = System_String__Format((System_String_o *)StringLiteral_3807/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v95, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v97 = v96;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v97 = (System_String_o *)StringLiteral_3806/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v97, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v179 = price;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v99, v100, v101);
  v178 = num;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v103, v104, v105);
  v107 = System_String__Format_61721404(v98, v102, v106, 0LL);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v109 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  v177 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v177, v110, v111, v112);
  if ( !v109 )
    goto LABEL_107;
  v115 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v109->max_length )
    goto LABEL_105;
  v109->m_Items[0] = v115;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v109->m_Items, (int32_t)v115, v113, v114);
  v176 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v176, v116, v117, v118);
  v121 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v109->max_length <= 1 )
    goto LABEL_105;
  v109->m_Items[1] = v121;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->m_Items[1], (int32_t)v121, v119, v120);
  v175 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v175, v122, v123, v124);
  v127 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v109->max_length <= 2 )
    goto LABEL_105;
  v109->m_Items[2] = v127;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->m_Items[2], (int32_t)v127, v125, v126);
  v174 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v174, v128, v129, v130);
  v133 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v109->max_length <= 3 )
    goto LABEL_105;
  v109->m_Items[3] = v133;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->m_Items[3], (int32_t)v133, v131, v132);
  v173 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v173, v134, v135, v136);
  v139 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v109->max_length <= 4 )
    goto LABEL_105;
  v109->m_Items[4] = v139;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->m_Items[4], (int32_t)v139, v137, v138);
  v172 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v172, v140, v141, v142);
  v145 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B886EC(addMsgBgSprite, v109->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v165 = sub_1B88830();
      sub_1B886D8(v165, 0LL);
    }
  }
  if ( v109->max_length <= 5 )
LABEL_105:
    sub_1B88814(addMsgBgSprite, v34);
  v109->m_Items[5] = v145;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->m_Items[5], (int32_t)v145, v143, v144);
  v146 = System_String__Format_61721540(v108, v109, 0LL);
  v147 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v148 = Method_System_Array_Empty_object___;
  v149 = v147;
  v150 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v150 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_object___);
    v150 = v148[7];
  }
  v151 = *(_QWORD *)(v150 + 16);
  if ( (*(_BYTE *)(v151 + 309) & 1) == 0 )
    v151 = sub_1BDA48C(v151);
  if ( !*(_DWORD *)(v151 + 224) )
    j_il2cpp_runtime_class_init_0(v151);
  v152 = *(_QWORD *)(v148[7] + 16LL);
  if ( (*(_BYTE *)(v152 + 309) & 1) == 0 )
    v152 = sub_1BDA48C(v152);
  v153 = v107;
  v154 = System_String__Format_61721540(v149, **(System_Object_array ***)(v152 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v156 = v154;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
  if ( (addMsgBgSprite & 1) != 0 )
  {
    if ( assetManager )
    {
      addMsgBgSprite = (__int64)this->fields.baseWindow;
      if ( addMsgBgSprite )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__49297800(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v161,
            v162);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1B8880C(addMsgBgSprite, v34);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v153,
    v146,
    v156,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v164 = LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v164, callback, 14.0, 0LL, shopIdIdx, 0, 1, v167);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x25
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // [xsp+8h] [xbp-68h]
  int32_t v37; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v38; // [xsp+28h] [xbp-48h] BYREF
  int32_t v39; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4A57949 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3825/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_1B885B0(&StringLiteral_3826/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57949 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v39 = haveTicketNum;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v14, v15, v16);
    v38 = afterTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v18, v19, v20);
    v22 = System_String__Format_61721404(v13, v17, v21, 0LL);
  }
  else
  {
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v39 = num;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
    v38 = haveTicketNum;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v28, v29, v30);
    v37 = afterTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v32, v33, v34);
    v22 = System_String__Format_61721472(v23, v27, v31, v35, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v22, 0LL, callback, 14.0, 0LL, 0, 0, 0, v36);
}


void __fastcall SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v10; // x22
  System_String_o *v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  const MethodInfo *v23; // [xsp+8h] [xbp-68h]
  int32_t v24; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v25; // [xsp+18h] [xbp-58h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-54h] BYREF

  v26 = haveFreeStoneNum;
  if ( (byte_4A57944 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12277/*"STONE_PURCHASE"*/);
    sub_1B885B0(&StringLiteral_12106/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57944 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12106/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v25 = price;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
  v24 = haveChargeStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v16, v17, v18);
  v20 = (Il2CppObject *)System_Int32__ToString_62512312((int32_t)&v26, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
  v21 = System_String__Format_61721472(v11, v15, v19, v20, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v21, v22, callback, 14.0, 0LL, 0, 0, 0, v23);
}


void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-48h]
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A57947 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12107/*"SHORT_HAVE_POINT"*/);
    sub_1B885B0(&StringLiteral_12105/*"SHORT_DLG_TITLE"*/);
    byte_4A57947 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SHORT_DLG_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SHORT_HAVE_POINT"*/, 0LL);
  v15 = havePoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v13, 0LL, callback, 14.0, 0LL, 0, 0, 0, v14);
}


void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]
  int32_t v16; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A57943 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12277/*"STONE_PURCHASE"*/);
    sub_1B885B0(&StringLiteral_12108/*"SHORT_HAVE_STONE"*/);
    sub_1B885B0(&StringLiteral_12105/*"SHORT_DLG_TITLE"*/);
    byte_4A57943 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SHORT_DLG_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SHORT_HAVE_STONE"*/, 0LL);
  v16 = haveNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v7, v13, v14, callback, 14.0, 0LL, 0, 0, 0, v15);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v8; // x1
  int32_t m_CachedPtr; // w21
  BalanceConfig_c *v10; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v13; // x20
  System_String_o **v14; // x9
  System_String_o *v15; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v25; // x0
  System_Action_object__o *_9__77_0; // x22
  Il2CppObject *v27; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int i; // w24
  int32_t v32; // w21
  struct ItemIconComponent_array *v33; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v35; // x23
  UILabel_o *v36; // x21
  int32_t *v37; // x22
  SummonConfirmDlgComponent_c *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w8
  System_String_o *v41; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v43; // x0
  int32_t v44; // w8
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v49; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A57951 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ItemIconComponent__TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__);
    sub_1B885B0(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_12336/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_12338/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_1B885B0(&StringLiteral_12339/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_1B885B0(&StringLiteral_12341/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_1B885B0(&StringLiteral_12340/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_1B885B0(&StringLiteral_12337/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_4A57951 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v25 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v25 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__77_0 = (System_Action_object__o *)v25->static_fields->__9__77_0;
    if ( !_9__77_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__77_0 = (System_Action_object__o *)sub_1B887FC(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__77_0, v27, Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__77_0 = (struct System_Action_ItemIconComponent__o *)_9__77_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v29, v30);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__77_0,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v32 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v32 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 52LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v32 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v32,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v33 = this->fields.extraItemIconComponents;
      if ( !v33 )
        goto LABEL_59;
      if ( v32 >= v33->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v32 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1B88814(SelfUserGame, v8);
      v35 = (UnityEngine_Component_o *)v33->m_Items[v32];
      if ( !v35 )
        goto LABEL_59;
      v36 = extraMessageLabels->m_Items[v32];
      v37 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v37 )
        goto LABEL_59;
      ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)v35, v37[5], v37[6], v37[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v38 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v38 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v38->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v40 = v37[7];
        v41 = v39;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v40, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v41, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v44 = v37[7];
        v45 = v43;
        v46 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v44, 0LL);
        v47 = System_String__Format(v45, v46, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                     v47,
                                                     (System_String_o *)StringLiteral_117/*" "*/,
                                                     0LL);
      }
      v8 = SelfUserGame;
      if ( !v36 )
        goto LABEL_59;
      UILabel__set_text(v36, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12339/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    if ( extraTitleLabel )
    {
      UILabel__set_text(extraTitleLabel, (System_String_o *)SelfUserGame, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( bonusType != 1 )
    return;
  if ( !SelfUserGame )
    goto LABEL_59;
  m_CachedPtr = SelfUserGame[7].fields.m_CachedPtr;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v10->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v13 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v14 = (System_String_o **)&StringLiteral_12338/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12341/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v17 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12336/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12340/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0LL);
  if ( !v13
    || (v22 = (System_String_o *)SelfUserGame,
        v49 = v13[7],
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v19, v20, v21),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v22, v23, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1B8880C(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)SelfUserGame, v13[5], v13[6], v13[7], 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetBonusTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *titleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *messageLabel; // x9
  SummonConfirmDlgComponent_o *v5; // x19
  int v6; // w8
  int v7; // w22
  int v8; // w23
  int closeBtnObject; // w24
  int v10; // w20
  int v11; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  unsigned int localPosition; // s0
  float v15; // s8
  int v16; // w21
  UnityEngine_GameObject_o *v17; // x0
  int v18; // w8

  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_31;
  mWidth = titleLabel->fields.mWidth;
  messageLabel = this->fields.messageLabel;
  v5 = this;
  v6 = mWidth >= 0 ? titleLabel->fields.mWidth : mWidth + 1;
  if ( !messageLabel )
    goto LABEL_31;
  v7 = messageLabel->fields.mWidth;
  this = (SummonConfirmDlgComponent_o *)this->fields.bonusItemSpr;
  v8 = v7 >= 0 ? messageLabel->fields.mWidth : v7 + 1;
  if ( !this )
    goto LABEL_31;
  closeBtnObject = (int)this->fields.closeBtnObject;
  v10 = v6 >> 1;
  v11 = closeBtnObject >= 0 ? LODWORD(this->fields.closeBtnObject) : closeBtnObject + 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v10 + (v11 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  v15 = *(float *)&localPosition;
  v16 = v7 + mWidth + closeBtnObject;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v17, (float)(v15 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0LL);
  v18 = v16 >= 0 ? v16 : v16 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.bonusMsgInfo, (float)(v10 - (v18 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.titleLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemIconComponent) == 0LL)
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusMsgInfo) == 0LL) )
  {
LABEL_31:
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *v2; // x19
  struct UILabel_o *extraTitleLabel; // x8
  float v4; // s10
  il2cpp_array_size_t v5; // w23
  float v6; // s9
  float v7; // s12
  struct ItemIconComponent_array *extraItemIconComponents; // x8
  struct UILabel_array *extraMessageLabels; // x8
  struct ItemIconComponent_array *v10; // x9
  ItemIconComponent_o *v11; // x9
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  struct UISprite_o *iconSprite; // x20
  int implementedInterfaces; // s14
  float v16; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_GameObject_o *v21; // x0
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  int v25; // s15
  float v26; // s9

  v2 = this;
  if ( (byte_4A57952 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    byte_4A57952 = 1;
  }
  extraTitleLabel = v2->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_27;
  v4 = (float)extraTitleLabel->fields.mWidth * 0.5;
  v5 = 0;
  v6 = v4;
  v7 = v4;
  while ( 1 )
  {
    this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( (signed int)v5 >= SHIDWORD(this->fields.closeBtnLb->fields.bottomAnchor) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1B88814(this, method);
    this = (SummonConfirmDlgComponent_o *)extraItemIconComponents->m_Items[v5];
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v2->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v5 >= extraMessageLabels->max_length )
      goto LABEL_28;
    v10 = v2->fields.extraItemIconComponents;
    if ( !v10 )
      goto LABEL_27;
    if ( v5 >= v10->max_length )
      goto LABEL_28;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_27;
    v12 = &extraMessageLabels->obj.klass + (int)v5;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_27;
    iconSprite = v11->fields.iconSprite;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)v12[4], 0LL);
    if ( !iconSprite )
      goto LABEL_27;
    implementedInterfaces = (int)v13->_1.implementedInterfaces;
    v16 = (float)iconSprite->fields.mWidth * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v19, v6 + v16, 0LL);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v21, 0LL);
    GameObjectExtensions__SetLocalPositionX(v20, v16 + LocalPositionX, 0LL);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    v24 = GameObjectExtensions__GetLocalPositionX(v23, 0LL);
    v25 = (int)v13->_1.implementedInterfaces;
    v26 = v24;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)iconSprite,
                                            0LL);
    if ( !this )
      goto LABEL_27;
    v7 = v7 + (float)(v16 + (float)((float)(LocalScaleX * (float)implementedInterfaces) * 0.5));
    v6 = v26 + (float)v25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    ++v5;
  }
  GameObjectExtensions__SetLocalPositionX(v2->fields.extraMsgInfo, v4 - v7, 0LL);
  this = (SummonConfirmDlgComponent_o *)v2->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v2->fields.extraMsgInfo) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UIWidget_o *baseWindowSprite; // x0
  __int64 v7; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v13; // x22
  System_Func_object__bool__o *v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  SummonConfirmDlgComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  System_Func_object__int__o *_9__76_1; // x24
  Il2CppObject *v22; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_ICollection_o *v27; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v31; // x23
  SummonConfirmDlgComponent_c *v32; // x0
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_Object_o *v36; // x24
  SummonConfirmDlgComponent_c *v37; // x0
  __int64 v38; // x8
  const MethodInfo *v39; // x1
  int v40; // w8
  bool v41; // nf

  if ( (byte_4A57950 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1B885B0(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SummonConfirmDlgComponent_TypeInfo);
    sub_1B885B0(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__);
    sub_1B885B0(&Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__);
    sub_1B885B0(&SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo);
    sub_1B885B0(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4A57950 = 1;
  }
  v5 = sub_1B887FC(SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_51;
  *(_DWORD *)(v5 + 16) = shopIdIdx;
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_width(baseWindowSprite, 780, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_height(baseWindowSprite, 480, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.confirmBtnObject;
  if ( !baseWindowSprite )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.infoMsgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)baseWindowSprite, 20, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.singleMsgInfo;
  if ( !baseWindowSprite
    || (v10 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v10, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v11, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1B8880C(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  v13 = (System_Func_object__bool__o **)(v5 + 24);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v14 = *v13;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v13 )
    {
      v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v5 + 24) = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v14, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v19 = SummonConfirmDlgComponent___c_TypeInfo;
    v20 = v18;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v19 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_1 = (System_Func_object__int__o *)v19->static_fields->__9__76_1;
    if ( !_9__76_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__76_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__76_1,
        v22,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__76_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__76_1, (int32_t)_9__76_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__76_1,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v27 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v26,
                                                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v27, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v27,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v29);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v31 = this->fields.bonusMsgInfo;
        v32 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v32 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v31, v32->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v33);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v35 = this->fields.extraMsgInfo;
        v36 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v37 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v37 = SummonConfirmDlgComponent_TypeInfo;
          }
          v38 = 28LL;
        }
        else
        {
LABEL_44:
          v37 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v37 = SummonConfirmDlgComponent_TypeInfo;
          }
          v38 = 24LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v35,
          *(float *)((char *)&v37->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v38),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v39);
      }
    }
    v40 = *(_DWORD *)(v5 + 20) + 1;
    v41 = *(_DWORD *)(v5 + 20) - 2 < 0;
    *(_DWORD *)(v5 + 20) = v40;
  }
  while ( v41 != __OFSUB__(v40, 3) );
  return 1;
}


void __fastcall SummonConfirmDlgComponent__add_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonConfirmDlgComponent_o *v10; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A57940 & 1) == 0 )
  {
    sub_1B885B0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4A57940 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SummonConfirmDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SummonConfirmDlgComponent__remove_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonConfirmDlgComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A57941 & 1) == 0 )
  {
    sub_1B885B0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4A57941 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v5; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4A5794F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12319/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_4A5794F = 1;
  }
  state = this->fields.state;
  if ( state > 8 )
    return;
  if ( ((1 << state) & 0x170) == 0 )
  {
    if ( ((1 << state) & 6) != 0 )
    {
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
      {
        closeBtnObject = this->fields.closeBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
      }
      closeBtnObject = this->fields.confirmBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
    }
    else
    {
      if ( state != 3 )
        return;
      closeBtnObject = this->fields.confirmBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
      {
        closeBtnObject = this->fields.confirmBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
      }
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
LABEL_32:
        sub_1B8880C(closeBtnObject, method);
    }
LABEL_30:
    UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
    return;
  }
  closeBtnObject = this->fields.closeBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
  {
    closeBtnObject = this->fields.closeBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
  }
  closeBtnObject = this->fields.confirmBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
  v5 = this->fields.state;
  if ( v5 == 8 || v5 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_32;
    UILabel__set_text(settingBtnLb, (System_String_o *)closeBtnObject, 0LL);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    goto LABEL_30;
  }
}


void __fastcall SummonConfirmDlgComponent__setTutorial(
        SummonConfirmDlgComponent_o *this,
        bool isTutorial,
        const MethodInfo *method)
{
  struct UIButton_o *closeBtn; // x0

  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    sub_1B8880C(0LL, isTutorial);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))closeBtn->klass->vtable._5_set_isEnabled.method)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._6_OnInit.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__settingResult(
        SummonConfirmDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0LL);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_33069884(this, 0LL, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))autoSaleDialogCloseCallbackFunc->fields.m_target)(
      autoSaleDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&autoSaleDialogCloseCallbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent_CallbackFunc___ctor(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CAAAC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CAA64;
}


System_IAsyncResult_o *__fastcall SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A57959 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57959 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SummonConfirmDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5795A & 1) == 0 )
  {
    sub_1B885B0(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4A5795A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___Open_b__72_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c___SetBonusText_b__77_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0LL)) == 0LL )
  {
    sub_1B8880C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__76_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass72_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass72_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass72_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass76_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass76_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass76_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}