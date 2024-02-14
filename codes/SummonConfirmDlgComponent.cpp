void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonConfirmDlgComponent_c *v2; // x8

  if ( (byte_4215F85 & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4215F85 = 1;
  }
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y = 174.0;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y = 73.0;
  v2 = SummonConfirmDlgComponent_TypeInfo;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  v2->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 25;
  v2->static_fields->BASE_WINDOW_DEFAULT_WIDTH = 780;
  v2->static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  v2->static_fields->GROUP_BONUS_LABEL_POS_Y = -74.0;
  v2->static_fields->BONUS_INFO_GET_POS_X = -55.0;
  v2->static_fields->EXTRA_BONUS_INFO_GET_POS_X = -55.0;
  v2->static_fields->BONUS_INFO_NOT_GET_POS_X = -120.0;
  v2->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y = -163.0;
  v2->static_fields->ADD_MSG_INFO_POS_Y_DEF = -86.0;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4215F84 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4215F84 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    SummonConfirmDlgComponent_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_27122708(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_27122708(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4215F80 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SummonConfirmDlgComponent_EndClose__, v10);
    byte_4215F80 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4215F81 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215F81 = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0LL);
      goto LABEL_10;
    }
LABEL_13:
    sub_B0D97C(gameObject);
  }
LABEL_10:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *confirmTitleLabel; // x0
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  SummonConfirmDlgComponent_c *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215F73 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4215F73 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraMessageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_50;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_50;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  addMsgInfo = this->fields.addMsgInfo;
  v13 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v13 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v13->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.extraGiftEntList, 0LL, v15, v16, v17, v18, v19, v20);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v21,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v22,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_50;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0LL);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, zero, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        extraMsgInfo = this->fields.extraMsgInfo,
        v27 = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(extraMsgInfo, v27, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_50:
    sub_B0D97C(confirmTitleLabel);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  AutomaticSaleDlgComponent_CallbackFunc_o *v9; // x21

  if ( (byte_4215F82 & 1) == 0 )
  {
    sub_B0D8A4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4215F82 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v9 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                           AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                           v7,
                                                           v8),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B0D97C(gameObject);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v9, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_4215F83 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_4236/*"ConfirmWindow/CloseButton"*/, v3);
    sub_B0D8A4(&StringLiteral_4238/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v4);
    byte_4215F83 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_4238/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_20833784(v6, (System_String_o *)StringLiteral_4236/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v34; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v36; // x1
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v39; // x25
  int32_t v40; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v45; // w0
  int32_t v46; // w24
  float v47; // s8
  UnityEngine_GameObject_o *v48; // x0
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  const MethodInfo *v53; // x3
  struct GachaExtraGiftEntity_array *v54; // x8
  int max_length; // w9
  unsigned int v56; // w10
  __int64 v57; // x22
  GachaExtraGiftEntity_o *v58; // x10
  int32_t giftId; // w1
  UnityEngine_Object_o *bonusMsgInfo; // x21
  const MethodInfo *v61; // x1
  struct GachaExtraGiftEntity_array *v62; // x8
  GachaExtraGiftEntity_o *v63; // x8
  UnityEngine_Object_o *extraMsgInfo; // x21
  const MethodInfo *v65; // x1
  struct GachaExtraGiftEntity_array *v66; // x8
  GachaExtraGiftEntity_o *v67; // x8
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v72; // s0
  float v73; // s8
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  bool v76; // w1
  const MethodInfo *v77; // x1
  __int64 v78; // x1
  __int64 v79; // x2
  System_Action_o *v80; // x20
  __int64 v81; // x0

  if ( (byte_4215F7B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&Method_SummonConfirmDlgComponent_EndOpen__, v22);
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4215F7B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    if ( title )
      v34 = title;
    else
      v34 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v34, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v36 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v36, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v37, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v39 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v39 )
      goto LABEL_119;
    UILabel__set_text(v39, decideTxt, 0LL);
  }
  v40 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v40 <= 2 )
    {
      v42 = SummonConfirmDlgComponent_TypeInfo;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v42 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v42->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v43, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v45 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v45 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v40 <= 2 )
      v46 = 20;
    else
      v46 = 18;
    if ( !gameObject )
      goto LABEL_119;
    v47 = flt_32051A0[v40 > 2];
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v48, v47, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v49 = flt_3205198[v40 > 2];
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, v49, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, v46, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0LL);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_110;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( !*(_QWORD *)&extraGiftEntList->max_length )
    {
LABEL_110:
      state = this->fields.state;
      goto LABEL_111;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
    if ( !gameObject )
      goto LABEL_119;
    UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
    if ( !gameObject )
      goto LABEL_119;
    UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
    v54 = this->fields.extraGiftEntList;
    if ( !v54 )
      goto LABEL_119;
    max_length = v54->max_length;
    if ( max_length >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= max_length )
          goto LABEL_120;
        v57 = (int)v56;
        v58 = v54->m_Items[v56];
        if ( !v58 )
          goto LABEL_119;
        giftId = v58->fields.giftId;
        if ( giftId )
        {
          if ( v58->fields.idx == shopIdIdx )
            break;
        }
        v56 = v57 + 1;
        if ( (int)v57 + 1 >= max_length )
          goto LABEL_91;
      }
      SummonConfirmDlgComponent__SetBonusText(this, giftId, v58->fields.bonusType, v53);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v62 = this->fields.extraGiftEntList;
        if ( !v62 )
          goto LABEL_119;
        if ( (unsigned int)v57 >= v62->max_length )
          goto LABEL_120;
        v63 = v62->m_Items[v57];
        if ( !v63 )
          goto LABEL_119;
        if ( v63->fields.bonusType == 1 )
          SummonConfirmDlgComponent__SetBonusTextPos(this, v61);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v66 = this->fields.extraGiftEntList;
        if ( !v66 )
          goto LABEL_119;
        if ( (unsigned int)v57 < v66->max_length )
        {
          v67 = v66->m_Items[v57];
          if ( !v67 )
            goto LABEL_119;
          if ( v67->fields.bonusType == 2 )
            SummonConfirmDlgComponent__SetExtraTextPos(this, v65);
          goto LABEL_91;
        }
LABEL_120:
        v81 = sub_B0D9A8(gameObject);
        sub_B0D948(v81, 0LL);
      }
    }
LABEL_91:
    if ( isBonusSelect )
    {
      baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      }
      if ( !baseWindowSprite )
        goto LABEL_119;
      UIWidget__set_width(
        baseWindowSprite,
        SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
      gameObject = this->fields.bonusMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v69 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v69,
        SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
        0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v70 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
    }
    else
    {
      v72 = -34.0;
      gameObject = this->fields.bonusMsgInfo;
      if ( v40 <= 2 )
        v72 = -30.0;
      if ( isAppendSummon )
        v73 = v72;
      else
        v73 = flt_32051A8[v40 > 2];
      if ( !gameObject )
        goto LABEL_119;
      v74 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v74, v73, 0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v75 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v75, v73, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
      gameObject = this->fields.confirmBtnObject;
      if ( !gameObject )
        goto LABEL_119;
      v70 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
    }
    GameObjectExtensions__SetLocalPositionY(v70, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    goto LABEL_110;
  }
LABEL_111:
  gameObject = this->fields.settingBtnObject;
  if ( (state & 0xFFFFFFFE) == 6 )
  {
    if ( !gameObject )
      goto LABEL_119;
    v76 = 1;
  }
  else
  {
    if ( !gameObject )
      goto LABEL_119;
    v76 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v76, 0LL);
  gameObject = this->fields.singleMsgInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_119:
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v77);
  v80 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v78, v79);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  Il2CppObject *v16; // x22
  SummonConfirmDlgComponent_c *v17; // x8
  SummonControl_c *v18; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v24; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v26; // x24
  Il2CppObject *v27; // x25
  Il2CppObject *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SummonConfirmDlgComponent_c *v35; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  int32_t v38; // [xsp+18h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v40; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t remainNum[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4215F7A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, callback);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_B0D8A4(&SummonControl_TypeInfo, v10);
    sub_B0D8A4(&UserGachaMaster_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_3333/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_3332/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_B0D8A4(&StringLiteral_6506/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_4215F7A = 1;
  }
  *(_QWORD *)remainNum = 0LL;
  maxNum = 0;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  remainNum[1] = v15->static_fields->DailyFreeGachaResetTime;
  v16 = (Il2CppObject *)System_Int32__ToString((int32_t)&remainNum[1], 0LL);
  v17 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v17 = SummonConfirmDlgComponent_TypeInfo;
  }
  v18 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v17->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v18 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v18->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, remainNum, &maxNum, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3332/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
    v40 = maxNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(v21, v16, v22, 0LL);
    if ( !this->fields.campaignLabel )
      goto LABEL_31;
    v24 = (System_String_o *)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    campaignLabel = this->fields.campaignLabel;
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6506/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
    v39 = remainNum[0];
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v38 = maxNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(v26, v27, v28, 0LL);
    if ( !campaignLabel )
LABEL_31:
      sub_B0D97C(gameObject);
    UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
    v35 = SummonConfirmDlgComponent_TypeInfo;
    if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      v35 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v35->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v24 = System_String__Format(v36, v16, 0LL);
  }
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  SummonConfirmDlgComponent__Open(this, 0LL, v24, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v37);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  GachaEntity_array *GachaDataInGroup; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  void *v45; // x27
  __int64 v46; // x8
  int v47; // w24
  int max_length; // w23
  GachaEntity_o *v49; // x8
  GachaEntity_o *v50; // x9
  System_Int32_array **name; // x23
  System_Int32_array **v52; // x21
  UILabel_o *infoMsgLabel; // x27
  System_String_o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Object_array *v61; // x28
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x21
  System_String_o *v82; // x1
  int32_t v83; // w22
  System_Int32_array **v84; // x21
  System_String_o *v85; // x28
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Object_array *v92; // x20
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v115; // x27
  System_Object_array *v116; // x28
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x20
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x20
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x20
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x20
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v160; // x2
  const MethodInfo *v161; // x1
  __int64 v162; // x1
  __int64 v163; // x2
  System_Action_o *v164; // x20
  __int64 v165; // x0
  __int64 v166; // x0
  int32_t v167; // [xsp+0h] [xbp-80h]
  int32_t v168; // [xsp+4h] [xbp-7Ch]
  int32_t v169; // [xsp+8h] [xbp-78h]
  int32_t v170; // [xsp+Ch] [xbp-74h]
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+10h] [xbp-70h]
  int32_t v172; // [xsp+18h] [xbp-68h] BYREF
  int32_t v173; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v174; // [xsp+20h] [xbp-60h] BYREF
  int32_t v175; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v176; // [xsp+28h] [xbp-58h] BYREF
  int v177; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4215F7C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_B0D8A4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_B0D8A4(&int_TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&object___TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_B0D8A4(&StringLiteral_3337/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_B0D8A4(&StringLiteral_3335/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_B0D8A4(&StringLiteral_1/*""*/, v33);
    sub_B0D8A4(&StringLiteral_3336/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_4215F7C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&price,
    *(System_String_array ***)&haveStoneNum,
    *(System_Boolean_array ***)&haveFreeStoneNum,
    *(System_Int32_array ***)&haveChargeStoneNum,
    *(System_Int32_array **)&afterStoneNum,
    *(System_Int32_array **)&afterFreeStoneNum);
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AA65A4(v36);
  MasterData_WarQuestSelectionMaster = **(void ***)(v36 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_WarQuestSelectionMaster, groupId, 0LL);
  MasterData_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v167 = price;
  v168 = haveStoneNum;
  v169 = haveChargeStoneNum;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                         groupId,
                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v45 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  v46 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
  if ( !v46 )
    goto LABEL_90;
  if ( *(_QWORD *)(v46 + 24) )
    v47 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 5);
  else
LABEL_15:
    v47 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.extraGiftEntList,
    (System_Int32_array **)giftEntList,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !GachaDataInGroup )
    goto LABEL_90;
  max_length = GachaDataInGroup->max_length;
  v170 = haveFreeStoneNum;
  if ( max_length == 2 )
  {
    v49 = GachaDataInGroup->m_Items[0];
    if ( v49 )
    {
      v50 = GachaDataInGroup->m_Items[1];
      if ( v50 )
      {
        name = (System_Int32_array **)v49->fields.name;
        v52 = (System_Int32_array **)v50->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_WarQuestSelectionMaster = (void *)sub_B0D8BC(object___TypeInfo, 4LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v61 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
          if ( name )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                           name,
                                                           *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster
                                                                     + 64LL));
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( !v61->max_length )
            goto LABEL_91;
          v61->m_Items[0] = (Il2CppObject *)name;
          sub_B0D840((BattleServantConfConponent_o *)v61->m_Items, name, v55, v56, v57, v58, v59, v60);
          if ( v52 )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(v52, v61->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v61->max_length <= 1 )
            goto LABEL_91;
          v61->m_Items[1] = (Il2CppObject *)v52;
          sub_B0D840((BattleServantConfConponent_o *)&v61->m_Items[1], v52, v62, v63, v64, v65, v66, v67);
          v177 = v47;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
          v74 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v61->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v61->max_length <= 2 )
            goto LABEL_91;
          v61->m_Items[2] = (Il2CppObject *)v74;
          sub_B0D840((BattleServantConfConponent_o *)&v61->m_Items[2], v74, v68, v69, v70, v71, v72, v73);
          v176 = v167;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
          v81 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v61->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v61->max_length <= 3 )
            goto LABEL_91;
          v61->m_Items[3] = (Il2CppObject *)v81;
          sub_B0D840((BattleServantConfConponent_o *)&v61->m_Items[3], v81, v75, v76, v77, v78, v79, v80);
          MasterData_WarQuestSelectionMaster = System_String__Format_43928628(v54, v61, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_90;
          v82 = (System_String_o *)MasterData_WarQuestSelectionMaster;
          v83 = afterStoneNum;
          goto LABEL_59;
        }
      }
    }
LABEL_90:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  if ( !v45 )
    goto LABEL_90;
  v84 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)v45 + 3), 0LL) )
    v84 = (System_Int32_array **)*((_QWORD *)v45 + 3);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  MasterData_WarQuestSelectionMaster = (void *)sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v92 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
  v83 = afterStoneNum;
  if ( v84 )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   v84,
                                                   *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster + 64LL));
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v92->max_length )
    goto LABEL_91;
  v92->m_Items[0] = (Il2CppObject *)v84;
  sub_B0D840((BattleServantConfConponent_o *)v92->m_Items, v84, v86, v87, v88, v89, v90, v91);
  v177 = max_length;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
  v99 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v92->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v92->max_length <= 1 )
    goto LABEL_91;
  v92->m_Items[1] = (Il2CppObject *)v99;
  sub_B0D840((BattleServantConfConponent_o *)&v92->m_Items[1], v99, v93, v94, v95, v96, v97, v98);
  v176 = v47;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
  v106 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v92->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v92->max_length <= 2 )
    goto LABEL_91;
  v92->m_Items[2] = (Il2CppObject *)v106;
  sub_B0D840((BattleServantConfConponent_o *)&v92->m_Items[2], v106, v100, v101, v102, v103, v104, v105);
  v175 = v167;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
  v113 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v92->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v92->max_length <= 3 )
    goto LABEL_91;
  v92->m_Items[3] = (Il2CppObject *)v113;
  sub_B0D840((BattleServantConfConponent_o *)&v92->m_Items[3], v113, v107, v108, v109, v110, v111, v112);
  MasterData_WarQuestSelectionMaster = System_String__Format_43928628(v85, v92, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_90;
  v82 = (System_String_o *)MasterData_WarQuestSelectionMaster;
LABEL_59:
  UILabel__set_text(infoMsgLabel, v82, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v116 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  v177 = v168;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
  if ( !v116 )
    goto LABEL_90;
  v123 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v116->max_length )
    goto LABEL_91;
  v116->m_Items[0] = (Il2CppObject *)v123;
  sub_B0D840((BattleServantConfConponent_o *)v116->m_Items, v123, v117, v118, v119, v120, v121, v122);
  v176 = v169;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
  v130 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v116->max_length <= 1 )
    goto LABEL_91;
  v116->m_Items[1] = (Il2CppObject *)v130;
  sub_B0D840((BattleServantConfConponent_o *)&v116->m_Items[1], v130, v124, v125, v126, v127, v128, v129);
  v175 = v170;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
  v137 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v116->max_length <= 2 )
    goto LABEL_91;
  v116->m_Items[2] = (Il2CppObject *)v137;
  sub_B0D840((BattleServantConfConponent_o *)&v116->m_Items[2], v137, v131, v132, v133, v134, v135, v136);
  v174 = v83;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
  v144 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v116->max_length <= 3 )
    goto LABEL_91;
  v116->m_Items[3] = (Il2CppObject *)v144;
  sub_B0D840((BattleServantConfConponent_o *)&v116->m_Items[3], v144, v138, v139, v140, v141, v142, v143);
  v173 = afterChargeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
  v151 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v116->max_length <= 4 )
    goto LABEL_91;
  v116->m_Items[4] = (Il2CppObject *)v151;
  sub_B0D840((BattleServantConfConponent_o *)&v116->m_Items[4], v151, v145, v146, v147, v148, v149, v150);
  v172 = afterFreeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v172);
  v158 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B0D964(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v116->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
    {
LABEL_92:
      v166 = sub_B0D99C(MasterData_WarQuestSelectionMaster);
      sub_B0D948(v166, 0LL);
    }
  }
  if ( v116->max_length <= 5 )
  {
LABEL_91:
    v165 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
    sub_B0D948(v165, 0LL);
  }
  v116->m_Items[5] = (Il2CppObject *)v158;
  sub_B0D840((BattleServantConfConponent_o *)&v116->m_Items[5], v158, v152, v153, v154, v155, v156, v157);
  MasterData_WarQuestSelectionMaster = System_String__Format_43928628(v115, v116, 0LL);
  if ( !msgLabel )
    goto LABEL_90;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_90;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  MasterData_WarQuestSelectionMaster = this->fields.defMsgInfo;
  this->fields.state = 4;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 0, 0LL);
  MasterData_WarQuestSelectionMaster = this->fields.singleMsgInfo;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v160);
  MasterData_WarQuestSelectionMaster = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v161);
  v164 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v162, v163);
  System_Action___ctor(v164, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v164, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x25
  Il2CppObject *v17; // x24
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  SummonConfirmDlgComponent_c *v27; // x0
  const MethodInfo *v28; // [xsp+8h] [xbp-58h]
  int32_t v29; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v30; // [xsp+18h] [xbp-48h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4215F79 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_3340/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_4215F79 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3340/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v31 = needPointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v30 = havePointNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v29 = afterPointNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v20 = System_String__Format_43850968(v16, v17, v18, v19, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v27 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v20,
    0LL,
    callback,
    v27->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v28);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v23; // w20
  int32_t v24; // w24
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 *v45; // x8
  System_String_o *v46; // x26
  System_Object_array *v47; // x27
  __int64 addMsgBgSprite; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x25
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x25
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x25
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x25
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x25
  System_String_o *v105; // x26
  int32_t v106; // w8
  int32_t v107; // w19
  int32_t v108; // w24
  int32_t v109; // w20
  SummonConfirmDlgComponent_o *v110; // x25
  System_String_o *v111; // x28
  Il2CppObject *DateTime; // x0
  System_String_o *v113; // x0
  int32_t v114; // w27
  int32_t v115; // w1
  int32_t v116; // w1
  int v117; // w22
  Il2CppObject *v118; // x0
  System_String_o *v119; // x25
  System_String_o *v120; // x19
  System_String_o *v121; // x25
  Il2CppObject *v122; // x24
  Il2CppObject *v123; // x0
  System_String_o *v124; // x26
  System_String_o *v125; // x24
  __int64 v126; // x25
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x22
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x21
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x20
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x20
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x20
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x20
  System_String_o *v169; // x20
  System_String_o *v170; // x22
  _QWORD **v171; // x23
  __int64 v172; // x21
  __int16 v173; // w8
  __int64 v174; // x21
  __int64 v175; // x21
  __int64 v176; // x21
  System_String_o *v177; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  UnityEngine_Object_o *bonusSelectMsgInfo; // x25
  System_String_o *v180; // x22
  int32_t v181; // w25
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x25
  System_String_o *v183; // x27
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v193; // x3
  __int64 v194; // x0
  __int64 v195; // x0
  const MethodInfo *v196; // [xsp+8h] [xbp-A8h]
  System_String_o *v197; // [xsp+10h] [xbp-A0h]
  int32_t v198; // [xsp+34h] [xbp-7Ch]
  int32_t v200; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t v201; // [xsp+40h] [xbp-70h] BYREF
  int32_t v202; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t v203; // [xsp+48h] [xbp-68h] BYREF
  int32_t v204; // [xsp+4Ch] [xbp-64h] BYREF
  int32_t v205; // [xsp+50h] [xbp-60h] BYREF
  int32_t v206; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t v207; // [xsp+58h] [xbp-58h] BYREF
  int32_t v208; // [xsp+5Ch] [xbp-54h] BYREF

  v23 = haveStoneNum;
  v24 = num;
  if ( (byte_4215F77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_object___, title);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_B0D8A4(&int_TypeInfo, v29);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v30);
    sub_B0D8A4(&object___TypeInfo, v31);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v32);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v33);
    sub_B0D8A4(&StringLiteral_3320/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_B0D8A4(&StringLiteral_3325/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v35);
    sub_B0D8A4(&StringLiteral_3321/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v36);
    sub_B0D8A4(&StringLiteral_3323/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v37);
    sub_B0D8A4(&StringLiteral_3339/*"CONFIRM_PAYSUMMON_MSG"*/, v38);
    sub_B0D8A4(&StringLiteral_3322/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v39);
    sub_B0D8A4(&StringLiteral_12505/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B0D8A4(&StringLiteral_12492/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_B0D8A4(&StringLiteral_12458/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_B0D8A4(&StringLiteral_3324/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4215F77 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.extraGiftEntList,
    (System_Int32_array **)giftEntList,
    *(System_String_array ***)&type,
    *(System_String_array ***)&price,
    *(System_Boolean_array ***)&num,
    *(System_Int32_array ***)&haveStoneNum,
    *(System_Int32_array **)&haveFreeStoneNum,
    *(System_Int32_array **)&haveChargeStoneNum);
  if ( isAppendSummon )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3325/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else if ( type == 7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3324/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3339/*"CONFIRM_PAYSUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  v47 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 8LL);
  v208 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v208);
  if ( !v47 )
    goto LABEL_114;
  v55 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( !v47->max_length )
    goto LABEL_112;
  v47->m_Items[0] = (Il2CppObject *)v55;
  sub_B0D840((BattleServantConfConponent_o *)v47->m_Items, v55, v49, v50, v51, v52, v53, v54);
  v207 = v24;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v207);
  v62 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_112;
  v47->m_Items[1] = (Il2CppObject *)v62;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[1], v62, v56, v57, v58, v59, v60, v61);
  v206 = v23;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v206);
  v69 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_112;
  v47->m_Items[2] = (Il2CppObject *)v69;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[2], v69, v63, v64, v65, v66, v67, v68);
  v205 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v205);
  v76 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_112;
  v47->m_Items[3] = (Il2CppObject *)v76;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
  v204 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v204);
  v83 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_112;
  v47->m_Items[4] = (Il2CppObject *)v83;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[4], v83, v77, v78, v79, v80, v81, v82);
  v203 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v203);
  v90 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_112;
  v47->m_Items[5] = (Il2CppObject *)v90;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[5], v90, v84, v85, v86, v87, v88, v89);
  v202 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202);
  v97 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_112;
  v47->m_Items[6] = (Il2CppObject *)v97;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[6], v97, v91, v92, v93, v94, v95, v96);
  v201 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v201);
  v104 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B0D964(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_112;
  v47->m_Items[7] = (Il2CppObject *)v104;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[7], v104, v98, v99, v100, v101, v102, v103);
  v197 = System_String__Format_43928628(v46, v47, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    v106 = haveChargeStoneNum;
    v107 = v24;
    v108 = v23;
    v109 = v106;
    v110 = this;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_12492/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v113 = System_String__Format(v111, DateTime, 0LL);
    v105 = System_String__Concat_43849904(v105, v113, 0LL);
    v114 = v109;
    v23 = v108;
    v24 = v107;
    this = v110;
  }
  else
  {
    v114 = haveChargeStoneNum;
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  v115 = isPickup ? 494 : 434;
  v198 = haveFreeStoneNum;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v115, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  if ( isPickup )
    v116 = 76;
  else
    v116 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v116, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v117 = v24;
    v208 = gachaId;
    v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208);
    v119 = System_String__Format((System_String_o *)StringLiteral_3323/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v118, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v120 = LocalizationManager__Get(v119, 0LL);
    v121 = LocalizationManager__Get((System_String_o *)StringLiteral_3321/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v207 = price;
    v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207);
    v206 = v117;
    v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206);
    v124 = System_String__Format_43845440(v121, v122, v123, 0LL);
    v125 = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v126 = sub_B0D8BC(object___TypeInfo, 6LL);
    v205 = v23;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v205);
    if ( !v126 )
      goto LABEL_114;
    v133 = (System_Int32_array **)addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v126 + 24) )
        goto LABEL_112;
      *(_QWORD *)(v126 + 32) = v133;
      sub_B0D840((BattleServantConfConponent_o *)(v126 + 32), v133, v127, v128, v129, v130, v131, v132);
      v204 = v114;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v204);
      v140 = (System_Int32_array **)addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v126 + 24) <= 1u )
          goto LABEL_112;
        *(_QWORD *)(v126 + 40) = v140;
        sub_B0D840((BattleServantConfConponent_o *)(v126 + 40), v140, v134, v135, v136, v137, v138, v139);
        v203 = v198;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v203);
        v147 = (System_Int32_array **)addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v126 + 24) <= 2u )
            goto LABEL_112;
          *(_QWORD *)(v126 + 48) = v147;
          sub_B0D840((BattleServantConfConponent_o *)(v126 + 48), v147, v141, v142, v143, v144, v145, v146);
          v202 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202);
          v154 = (System_Int32_array **)addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v126 + 24) <= 3u )
              goto LABEL_112;
            *(_QWORD *)(v126 + 56) = v154;
            sub_B0D840((BattleServantConfConponent_o *)(v126 + 56), v154, v148, v149, v150, v151, v152, v153);
            v201 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v201);
            v161 = (System_Int32_array **)addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v126 + 24) <= 4u )
                goto LABEL_112;
              *(_QWORD *)(v126 + 64) = v161;
              sub_B0D840((BattleServantConfConponent_o *)(v126 + 64), v161, v155, v156, v157, v158, v159, v160);
              v200 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v200);
              v168 = (System_Int32_array **)addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_B0D964(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v126 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v126 + 24) > 5u )
                {
                  *(_QWORD *)(v126 + 72) = v168;
                  sub_B0D840((BattleServantConfConponent_o *)(v126 + 72), v168, v162, v163, v164, v165, v166, v167);
                  v169 = System_String__Format_43928628(v125, (System_Object_array *)v126, 0LL);
                  v170 = LocalizationManager__Get((System_String_o *)StringLiteral_3320/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v171 = (_QWORD **)Method_System_Array_Empty_object___;
                  v172 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
                  v173 = *(_WORD *)(v172 + 306);
                  if ( (v173 & 1) == 0 )
                  {
                    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
                    v173 = *(_WORD *)(v172 + 306);
                  }
                  if ( (v173 & 0x400) != 0 )
                  {
                    v174 = *v171[6];
                    if ( (*(_BYTE *)(v174 + 306) & 1) == 0 )
                      sub_AA65A4(*v171[6]);
                    if ( !*(_DWORD *)(v174 + 224) )
                    {
                      v175 = *v171[6];
                      if ( (*(_BYTE *)(v175 + 306) & 1) == 0 )
                        sub_AA65A4(*v171[6]);
                      j_il2cpp_runtime_class_init_0(v175);
                    }
                  }
                  v176 = *v171[6];
                  if ( (*(_BYTE *)(v176 + 306) & 1) == 0 )
                    sub_AA65A4(*v171[6]);
                  v177 = System_String__Format_43928628(v170, **(System_Object_array ***)(v176 + 184), 0LL);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v180 = v177;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  v181 = shopIdIdx;
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_114;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v183 = v124;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)addMsgBgSprite,
                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                      Component_srcLineSprite,
                      v186,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191);
                    v181 = shopIdIdx;
                    v124 = v183;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      v120,
                      v124,
                      v169,
                      v180,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
                      v193 = LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v193, callback, 14.0, 0LL, v181, 0, 1, v196);
                      return;
                    }
                  }
LABEL_114:
                  sub_B0D97C(addMsgBgSprite);
                }
LABEL_112:
                v194 = sub_B0D9A8(addMsgBgSprite);
                sub_B0D948(v194, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_113:
    v195 = sub_B0D99C(addMsgBgSprite);
    sub_B0D948(v195, 0LL);
  }
  SummonConfirmDlgComponent__Open(this, title, v197, 0LL, callback, 14.0, v105, shopIdIdx, isAppendSummon, 0, v196);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x24
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x25
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // [xsp+8h] [xbp-58h]
  int32_t v26; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v27; // [xsp+18h] [xbp-48h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4215F78 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, title);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_3341/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_B0D8A4(&StringLiteral_3342/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_4215F78 = 1;
  }
  if ( num == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3341/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v28 = haveTicketNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = afterTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v20 = System_String__Format_43845440(v17, v18, v19, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v28 = num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = haveTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = afterTicketNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v20 = System_String__Format_43850968(v21, v22, v23, v24, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v20, 0LL, callback, 14.0, 0LL, 0, 0, 0, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x22
  System_String_o *v16; // x24
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  const MethodInfo *v22; // [xsp+8h] [xbp-58h]
  int32_t v23; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v24; // [xsp+28h] [xbp-38h] BYREF
  int32_t v25; // [xsp+2Ch] [xbp-34h] BYREF

  v25 = haveFreeStoneNum;
  if ( (byte_4215F75 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&price);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_12422/*"STONE_PURCHASE"*/, v11);
    sub_B0D8A4(&StringLiteral_12249/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4215F75 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12249/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v24 = price;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v19 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v25, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
  v20 = System_String__Format_43850968(v16, v17, v18, v19, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v20, v21, callback, 14.0, 0LL, 0, 0, 0, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  System_String_o *v11; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-38h]
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4215F76 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12250/*"SHORT_HAVE_POINT"*/, v8);
    sub_B0D8A4(&StringLiteral_12248/*"SHORT_DLG_TITLE"*/, v9);
    byte_4215F76 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SHORT_HAVE_POINT"*/, 0LL);
  v15 = havePoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format(v11, v12, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v13, 0LL, callback, 14.0, 0LL, 0, 0, 0, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-38h]
  int32_t v17; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4215F74 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12422/*"STONE_PURCHASE"*/, v8);
    sub_B0D8A4(&StringLiteral_12251/*"SHORT_HAVE_STONE"*/, v9);
    sub_B0D8A4(&StringLiteral_12248/*"SHORT_DLG_TITLE"*/, v10);
    byte_4215F74 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHORT_HAVE_STONE"*/, 0LL);
  v17 = haveNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format(v12, v13, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v11, v14, v15, callback, 14.0, 0LL, 0, 0, 0, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        int32_t giftId,
        int32_t bonusType,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  GiftEntity_o *DataById; // x20
  WarEntity_o *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v23; // x23
  System_String_o *v24; // x21
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  System_String_o *v27; // x24
  int32_t mana; // w22
  BalanceConfig_c *v29; // x0
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x21
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v38; // [xsp+18h] [xbp-48h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4215F7F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&giftId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_12470/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v13);
    sub_B0D8A4(&StringLiteral_12471/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v14);
    sub_B0D8A4(&StringLiteral_12472/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_12474/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v16);
    sub_B0D8A4(&StringLiteral_12473/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_4215F7F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_37;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !Instance )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             DataById->fields.objectId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12472/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
    Instance = (DataManager_o *)System_String__Format(v34, v35, 0LL);
    if ( Entity )
    {
      v36 = (System_String_o *)Instance;
      Instance = (DataManager_o *)this->fields.extraItemIconComponent;
      if ( Instance )
      {
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
        Instance = (DataManager_o *)this->fields.extraTitleLabel;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, v33, 0LL);
          Instance = (DataManager_o *)this->fields.extraMessageLabel;
          if ( Instance )
          {
            v32 = v36;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B0D97C(Instance);
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v23 = SelfUserGame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12471/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v39 = DataById->fields.num;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  Instance = (DataManager_o *)System_String__Format(v25, v26, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v27 = (System_String_o *)Instance;
  Instance = (DataManager_o *)this->fields.bonusItemIconComponent;
  if ( !Instance )
    goto LABEL_37;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
  if ( !v23 )
    goto LABEL_37;
  mana = v23->fields.mana;
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  if ( mana == v29->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12473/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v38 = DataById->fields.num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v27 = System_String__Format(v30, v31, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)Instance, v24, 0LL);
  Instance = (DataManager_o *)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_37;
  v32 = v27;
LABEL_35:
  UILabel__set_text((UILabel_o *)Instance, v32, 0LL);
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *extraTitleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *extraMessageLabel; // x9
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

  extraTitleLabel = this->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_31;
  mWidth = extraTitleLabel->fields.mWidth;
  extraMessageLabel = this->fields.extraMessageLabel;
  v5 = this;
  v6 = mWidth >= 0 ? extraTitleLabel->fields.mWidth : mWidth + 1;
  if ( !extraMessageLabel )
    goto LABEL_31;
  v7 = extraMessageLabel->fields.mWidth;
  this = (SummonConfirmDlgComponent_o *)this->fields.extraItemSpr;
  v8 = v7 >= 0 ? extraMessageLabel->fields.mWidth : v7 + 1;
  if ( !this )
    goto LABEL_31;
  closeBtnObject = (int)this->fields.closeBtnObject;
  v10 = v6 >> 1;
  v11 = closeBtnObject >= 0 ? LODWORD(this->fields.closeBtnObject) : closeBtnObject + 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v10 + (v11 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraItemSpr;
  if ( !this )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraItemSpr;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraMessageLabel;
  if ( !this )
    goto LABEL_31;
  v15 = *(float *)&localPosition;
  v16 = v7 + mWidth + closeBtnObject;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v17, (float)(v15 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0LL);
  v18 = v16 >= 0 ? v16 : v16 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.extraMsgInfo, (float)(v10 - (v18 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraTitleLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraMessageLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.extraItemSpr;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.extraItemIconComponent) == 0LL)
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.extraMsgInfo) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  int32_t state; // w8
  UIWidget_o *baseWindowSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x3
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x8
  __int64 v12; // x9
  GachaExtraGiftEntity_o *v13; // x8
  int32_t giftId; // w1
  struct GachaExtraGiftEntity_array *v15; // x8
  GachaExtraGiftEntity_o *v16; // x8
  SummonConfirmDlgComponent_c *v17; // x0
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  const MethodInfo *v19; // x1
  signed int v21; // w10
  __int64 v22; // x23
  GachaExtraGiftEntity_o *v23; // x9
  int32_t v24; // w1
  GachaExtraGiftEntity_o *v25; // x9
  SummonConfirmDlgComponent_c *v26; // x0
  UnityEngine_GameObject_o *v27; // x21
  const MethodInfo *v28; // x1
  GachaExtraGiftEntity_o *v29; // x9
  const MethodInfo *v30; // x1
  SummonConfirmDlgComponent_c *v31; // x0
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  const MethodInfo *v33; // x1
  __int64 v34; // x0

  if ( (byte_4215F7E & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_TypeInfo, *(_QWORD *)&shopIdIdx);
    byte_4215F7E = 1;
  }
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
  if ( !baseWindowSprite )
    goto LABEL_51;
  v8 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 19.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.msgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, -29.0, 0LL);
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_51;
  v12 = *(_QWORD *)&extraGiftEntList->max_length;
  if ( (_DWORD)v12 == 1 )
  {
    v13 = extraGiftEntList->m_Items[0];
    if ( !v13 )
      goto LABEL_51;
    giftId = v13->fields.giftId;
    if ( giftId || v13->fields.idx == shopIdIdx )
    {
      SummonConfirmDlgComponent__SetBonusText(this, giftId, v13->fields.bonusType, v10);
      v15 = this->fields.extraGiftEntList;
      if ( !v15 )
        goto LABEL_51;
      if ( v15->max_length )
      {
        v16 = v15->m_Items[0];
        if ( v16 )
        {
          if ( v16->fields.bonusType == 1 )
          {
            v17 = SummonConfirmDlgComponent_TypeInfo;
            bonusMsgInfo = this->fields.bonusMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v17 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(bonusMsgInfo, v17->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetBonusTextPos(this, v19);
          }
          else
          {
            v31 = SummonConfirmDlgComponent_TypeInfo;
            extraMsgInfo = this->fields.extraMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v31 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(extraMsgInfo, v31->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetExtraTextPos(this, v33);
          }
          return 1;
        }
LABEL_51:
        sub_B0D97C(baseWindowSprite);
      }
LABEL_52:
      v34 = sub_B0D9A8(baseWindowSprite);
      sub_B0D948(v34, 0LL);
    }
    return 0;
  }
  if ( (int)v12 >= 1 )
  {
    v21 = 0;
    while ( v21 < (unsigned int)v12 )
    {
      v22 = v21;
      v23 = extraGiftEntList->m_Items[v21];
      if ( !v23 )
        goto LABEL_51;
      v24 = v23->fields.giftId;
      if ( v24 || v23->fields.idx == shopIdIdx )
      {
        SummonConfirmDlgComponent__SetBonusText(this, v24, v23->fields.bonusType, v10);
        extraGiftEntList = this->fields.extraGiftEntList;
        if ( !extraGiftEntList )
          goto LABEL_51;
        if ( (unsigned int)v22 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v25 = extraGiftEntList->m_Items[v22];
        if ( !v25 )
          goto LABEL_51;
        if ( v25->fields.bonusType == 1 )
        {
          v26 = SummonConfirmDlgComponent_TypeInfo;
          v27 = this->fields.bonusMsgInfo;
          if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v26 = SummonConfirmDlgComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v27, v26->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
          SummonConfirmDlgComponent__SetBonusTextPos(this, v28);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_51;
        }
        if ( (unsigned int)v22 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v29 = extraGiftEntList->m_Items[v22];
        if ( !v29 )
          goto LABEL_51;
        if ( v29->fields.bonusType == 2 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.extraMsgInfo, -96.0, 0LL);
          SummonConfirmDlgComponent__SetExtraTextPos(this, v30);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_51;
        }
      }
      LODWORD(v12) = extraGiftEntList->max_length;
      v21 = v22 + 1;
      if ( (int)v22 + 1 >= (int)v12 )
        return 1;
    }
    goto LABEL_52;
  }
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

  if ( (byte_4215F71 & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4215F71 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B0DC70(v7);
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

  if ( (byte_4215F72 & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4215F72 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B0DC70(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4215F7D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12450/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4215F7D = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 4) >= 4 )
  {
    if ( (unsigned int)(state - 1) >= 2 )
    {
      if ( state != 3 )
        return;
      confirmBtnObject = this->fields.confirmBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
      {
        confirmBtnObject = this->fields.confirmBtnObject;
        if ( !confirmBtnObject )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
      }
      confirmBtnObject = this->fields.closeBtnObject;
      if ( !confirmBtnObject )
LABEL_31:
        sub_B0D97C(confirmBtnObject);
    }
    else
    {
      confirmBtnObject = this->fields.closeBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
      {
        confirmBtnObject = this->fields.closeBtnObject;
        if ( !confirmBtnObject )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
      }
      confirmBtnObject = this->fields.confirmBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_31;
    }
LABEL_29:
    UnityEngine_GameObject__SetActive(confirmBtnObject, 1, 0LL);
    return;
  }
  confirmBtnObject = this->fields.closeBtnObject;
  if ( !confirmBtnObject )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
  {
    confirmBtnObject = this->fields.closeBtnObject;
    if ( !confirmBtnObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
  }
  confirmBtnObject = this->fields.confirmBtnObject;
  if ( !confirmBtnObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(confirmBtnObject, 1, 0LL);
  if ( (this->fields.state & 0xFFFFFFFE) == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    confirmBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_31;
    UILabel__set_text(settingBtnLb, (System_String_o *)confirmBtnObject, 0LL);
    confirmBtnObject = this->fields.settingBtnObject;
    if ( !confirmBtnObject )
      goto LABEL_31;
    goto LABEL_29;
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
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))closeBtn->klass->vtable._5_set_isEnabled.method)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall SummonConfirmDlgComponent__settingResult(
        SummonConfirmDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *autoSaleDialogCloseCallbackFunc; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

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
    sub_B0D97C(autoSaleDlgInfo);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_27122708(this, 0LL, v19);
    System_Action__Invoke(autoSaleDialogCloseCallbackFunc, 0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_4211746 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4211746 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SummonConfirmDlgComponent_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  SummonConfirmDlgComponent_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}