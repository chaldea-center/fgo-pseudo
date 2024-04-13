void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SummonConfirmDlgComponent_c *v4; // x8

  if ( (byte_42EA3A7 & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, v1, v2, v3);
    byte_42EA3A7 = 1;
  }
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y = 174.0;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y = 73.0;
  v4 = SummonConfirmDlgComponent_TypeInfo;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  v4->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 25;
  v4->static_fields->BASE_WINDOW_DEFAULT_WIDTH = 780;
  v4->static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  v4->static_fields->GROUP_BONUS_LABEL_POS_Y = -74.0;
  v4->static_fields->BONUS_INFO_GET_POS_X = -55.0;
  v4->static_fields->EXTRA_BONUS_INFO_GET_POS_X = -55.0;
  v4->static_fields->BONUS_INFO_NOT_GET_POS_X = -120.0;
  v4->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y = -163.0;
  v4->static_fields->ADD_MSG_INFO_POS_Y_DEF = -86.0;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA3A6 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3A6 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B5D560(
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

  SummonConfirmDlgComponent__Close_28355800(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_28355800(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA3A2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SummonConfirmDlgComponent_EndClose__, v10, v11, v12);
    byte_42EA3A2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_42EA3A3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3A3 = 1;
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
    sub_B5D69C(gameObject, v6);
  }
LABEL_10:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  UILabel_o *confirmTitleLabel; // x0
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  SummonConfirmDlgComponent_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA395 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EA395 = 1;
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_50;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  v25 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v25 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v25->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v26, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.extraGiftEntList, 0LL, v27, v28, v29, v30, v31, v32);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v33,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v34,
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
        v39 = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(extraMsgInfo, v39, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_50:
    sub_B5D69C(confirmTitleLabel, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v14; // x21

  if ( (byte_42EA3A4 & 1) == 0 )
  {
    sub_B5D5C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SummonConfirmDlgComponent_settingResult__, v8, v9, v10);
    byte_42EA3A4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v14 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B5D694(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B5D69C(gameObject, v12);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v14, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v12; // x0

  if ( (byte_42EA3A5 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4292/*"ConfirmWindow/CloseButton"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_4294/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v8, v9, v10);
    byte_42EA3A5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_4294/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21237572(v12, (System_String_o *)StringLiteral_4292/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  System_String_o *v16; // x24
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *giftId; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v47; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v52; // x25
  int32_t v53; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v58; // w0
  int32_t v59; // w24
  float v60; // s8
  UnityEngine_GameObject_o *v61; // x0
  float v62; // s8
  UnityEngine_GameObject_o *v63; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  const MethodInfo *v66; // x3
  struct GachaExtraGiftEntity_array *v67; // x8
  int max_length; // w9
  unsigned int v69; // w10
  __int64 v70; // x22
  GachaExtraGiftEntity_o *v71; // x10
  UnityEngine_Object_o *bonusMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v73; // x8
  GachaExtraGiftEntity_o *v74; // x8
  UnityEngine_Object_o *extraMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v76; // x8
  GachaExtraGiftEntity_o *v77; // x8
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v82; // s0
  float v83; // s8
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  bool v86; // w1
  const MethodInfo *v87; // x1
  System_Action_o *v88; // x20
  __int64 v89; // x0

  v16 = decideTxt;
  if ( (byte_42EA39D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)msg, decideTxt);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SummonConfirmDlgComponent_EndOpen__, v26, v27, v28);
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1/*""*/, v35, v36, v37);
    byte_42EA39D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
      v47 = title;
    else
      v47 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v47, 0LL);
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
    v49 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v49, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, msgOffY, 0LL);
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
    v52 = this->fields.confirmBtnLb;
    if ( !v16 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v16 = (System_String_o *)gameObject;
    }
    if ( !v52 )
      goto LABEL_119;
    UILabel__set_text(v52, v16, 0LL);
  }
  v53 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v53 <= 2 )
    {
      v55 = SummonConfirmDlgComponent_TypeInfo;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v55 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v55->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v56, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v58 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v58 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v53 <= 2 )
      v59 = 20;
    else
      v59 = 18;
    if ( !gameObject )
      goto LABEL_119;
    v60 = flt_32A49B0[v53 > 2];
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v61, v60, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v62 = flt_32A49A8[v53 > 2];
    v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v63, v62, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, v59, 0LL);
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
    v67 = this->fields.extraGiftEntList;
    if ( !v67 )
      goto LABEL_119;
    max_length = v67->max_length;
    if ( max_length >= 1 )
    {
      v69 = 0;
      while ( 1 )
      {
        if ( v69 >= max_length )
          goto LABEL_120;
        v70 = (int)v69;
        v71 = v67->m_Items[v69];
        if ( !v71 )
          goto LABEL_119;
        giftId = (const MethodInfo *)(unsigned int)v71->fields.giftId;
        if ( (_DWORD)giftId )
        {
          if ( v71->fields.idx == shopIdIdx )
            break;
        }
        v69 = v70 + 1;
        if ( (int)v70 + 1 >= max_length )
          goto LABEL_91;
      }
      SummonConfirmDlgComponent__SetBonusText(this, (int32_t)giftId, v71->fields.bonusType, v66);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v73 = this->fields.extraGiftEntList;
        if ( !v73 )
          goto LABEL_119;
        if ( (unsigned int)v70 >= v73->max_length )
          goto LABEL_120;
        v74 = v73->m_Items[v70];
        if ( !v74 )
          goto LABEL_119;
        if ( v74->fields.bonusType == 1 )
          SummonConfirmDlgComponent__SetBonusTextPos(this, giftId);
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
        v76 = this->fields.extraGiftEntList;
        if ( !v76 )
          goto LABEL_119;
        if ( (unsigned int)v70 < v76->max_length )
        {
          v77 = v76->m_Items[v70];
          if ( !v77 )
            goto LABEL_119;
          if ( v77->fields.bonusType == 2 )
            SummonConfirmDlgComponent__SetExtraTextPos(this, giftId);
          goto LABEL_91;
        }
LABEL_120:
        v89 = sub_B5D6C8(gameObject);
        sub_B5D668(v89, 0LL);
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
      v79 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v79,
        SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
        0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v80 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
    }
    else
    {
      v82 = -34.0;
      gameObject = this->fields.bonusMsgInfo;
      if ( v53 <= 2 )
        v82 = -30.0;
      if ( isAppendSummon )
        v83 = v82;
      else
        v83 = flt_32A49B8[v53 > 2];
      if ( !gameObject )
        goto LABEL_119;
      v84 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v84, v83, 0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v85 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v85, v83, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
      gameObject = this->fields.confirmBtnObject;
      if ( !gameObject )
        goto LABEL_119;
      v80 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
    }
    GameObjectExtensions__SetLocalPositionY(v80, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    goto LABEL_110;
  }
LABEL_111:
  gameObject = this->fields.settingBtnObject;
  if ( (state & 0xFFFFFFFE) == 6 )
  {
    if ( !gameObject )
      goto LABEL_119;
    v86 = 1;
  }
  else
  {
    if ( !gameObject )
      goto LABEL_119;
    v86 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v86, 0LL);
  gameObject = this->fields.singleMsgInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_119:
    sub_B5D69C(gameObject, giftId);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v87);
  v88 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x22
  SummonConfirmDlgComponent_c *v33; // x8
  SummonControl_c *v34; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  System_String_o *v41; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v43; // x24
  Il2CppObject *v44; // x25
  Il2CppObject *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  SummonConfirmDlgComponent_c *v52; // x0
  System_String_o *v53; // x0
  const MethodInfo *v54; // [xsp+8h] [xbp-78h]
  int32_t v55; // [xsp+18h] [xbp-68h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v57; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t remainNum[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42EA39C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)callback, (_DWORD)autoSaleDialogCloseCallback, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SummonControl_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3386/*"CONFIRM_FREESUMMON_MSG"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3385/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_6568/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v28, v29, v30);
    byte_42EA39C = 1;
  }
  *(_QWORD *)remainNum = 0LL;
  maxNum = 0;
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  remainNum[1] = v31->static_fields->DailyFreeGachaResetTime;
  v32 = (Il2CppObject *)System_Int32__ToString((int32_t)&remainNum[1], 0LL);
  v33 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v33 = SummonConfirmDlgComponent_TypeInfo;
  }
  v34 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v33->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v34 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v34->static_fields->FRIEND_POINT_SUMMON_ID;
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
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3385/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
    v57 = maxNum;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v37, v32, v38, 0LL);
    if ( !this->fields.campaignLabel )
      goto LABEL_31;
    v41 = (System_String_o *)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    campaignLabel = this->fields.campaignLabel;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_6568/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
    v56 = remainNum[0];
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
    v55 = maxNum;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v43, v44, v45, 0LL);
    if ( !campaignLabel )
LABEL_31:
      sub_B5D69C(gameObject, v40);
    UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
    v52 = SummonConfirmDlgComponent_TypeInfo;
    if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      v52 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v52->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v41 = System_String__Format(v53, v32, 0LL);
  }
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  SummonConfirmDlgComponent__Open(this, 0LL, v41, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v54);
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  __int64 v63; // x1
  __int64 v64; // x20
  __int64 v65; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  GachaEntity_array *GachaDataInGroup; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  void *v74; // x27
  __int64 v75; // x8
  int v76; // w24
  int max_length; // w23
  GachaEntity_o *v78; // x8
  GachaEntity_o *v79; // x9
  System_Int32_array **name; // x23
  System_Int32_array **v81; // x21
  UILabel_o *infoMsgLabel; // x27
  System_String_o *v83; // x20
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Object_array *v90; // x28
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x21
  System_String_o *v111; // x1
  int32_t v112; // w22
  System_Int32_array **v113; // x21
  System_String_o *v114; // x28
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Object_array *v121; // x20
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x21
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x21
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v144; // x27
  System_Object_array *v145; // x28
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x20
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x20
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x20
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x20
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x20
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **v187; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v189; // x2
  const MethodInfo *v190; // x1
  System_Action_o *v191; // x20
  __int64 v192; // x0
  __int64 v193; // x0
  int32_t v194; // [xsp+0h] [xbp-80h]
  int32_t v195; // [xsp+4h] [xbp-7Ch]
  int32_t v196; // [xsp+8h] [xbp-78h]
  int32_t v197; // [xsp+Ch] [xbp-74h]
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+10h] [xbp-70h]
  int32_t v199; // [xsp+18h] [xbp-68h] BYREF
  int32_t v200; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v201; // [xsp+20h] [xbp-60h] BYREF
  int32_t v202; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v203; // [xsp+28h] [xbp-58h] BYREF
  int v204; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EA39E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, groupId, price, *(_QWORD *)&haveStoneNum);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&int_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&object___TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_SummonConfirmDlgComponent_EndOpen__, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_3390/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3388/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_3389/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v60, v61, v62);
    byte_42EA39E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&price,
    *(System_String_array ***)&haveStoneNum,
    *(System_Boolean_array ***)&haveFreeStoneNum,
    *(System_Int32_array ***)&haveChargeStoneNum,
    *(System_Int32_array **)&afterStoneNum,
    *(System_Int32_array **)&afterFreeStoneNum);
  v64 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v65 = **(_QWORD **)(v64 + 192);
  if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
    sub_AF52C4(v65);
  MasterData_WarQuestSelectionMaster = **(void ***)(v65 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_WarQuestSelectionMaster, groupId, 0LL);
  MasterData_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v194 = price;
  v195 = haveStoneNum;
  v196 = haveChargeStoneNum;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                         groupId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v74 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  v75 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
  if ( !v75 )
    goto LABEL_90;
  if ( *(_QWORD *)(v75 + 24) )
    v76 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 5);
  else
LABEL_15:
    v76 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.extraGiftEntList,
    (System_Int32_array **)giftEntList,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !GachaDataInGroup )
    goto LABEL_90;
  max_length = GachaDataInGroup->max_length;
  v197 = haveFreeStoneNum;
  if ( max_length == 2 )
  {
    v78 = GachaDataInGroup->m_Items[0];
    if ( v78 )
    {
      v79 = GachaDataInGroup->m_Items[1];
      if ( v79 )
      {
        name = (System_Int32_array **)v78->fields.name;
        v81 = (System_Int32_array **)v79->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_WarQuestSelectionMaster = (void *)sub_B5D5DC(object___TypeInfo, 4LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v90 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
          if ( name )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                           name,
                                                           *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster
                                                                     + 64LL));
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( !v90->max_length )
            goto LABEL_91;
          v90->m_Items[0] = (Il2CppObject *)name;
          sub_B5D560((BattleServantConfConponent_o *)v90->m_Items, name, v84, v85, v86, v87, v88, v89);
          if ( v81 )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(v81, v90->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v90->max_length <= 1 )
            goto LABEL_91;
          v90->m_Items[1] = (Il2CppObject *)v81;
          sub_B5D560((BattleServantConfConponent_o *)&v90->m_Items[1], v81, v91, v92, v93, v94, v95, v96);
          v204 = v76;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
          v103 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v90->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v90->max_length <= 2 )
            goto LABEL_91;
          v90->m_Items[2] = (Il2CppObject *)v103;
          sub_B5D560((BattleServantConfConponent_o *)&v90->m_Items[2], v103, v97, v98, v99, v100, v101, v102);
          v203 = v194;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v203);
          v110 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v90->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v90->max_length <= 3 )
            goto LABEL_91;
          v90->m_Items[3] = (Il2CppObject *)v110;
          sub_B5D560((BattleServantConfConponent_o *)&v90->m_Items[3], v110, v104, v105, v106, v107, v108, v109);
          MasterData_WarQuestSelectionMaster = System_String__Format_44656512(v83, v90, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_90;
          v111 = (System_String_o *)MasterData_WarQuestSelectionMaster;
          v112 = afterStoneNum;
          goto LABEL_59;
        }
      }
    }
LABEL_90:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v63);
  }
  if ( !v74 )
    goto LABEL_90;
  v113 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)v74 + 3), 0LL) )
    v113 = (System_Int32_array **)*((_QWORD *)v74 + 3);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3389/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  MasterData_WarQuestSelectionMaster = (void *)sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v121 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
  v112 = afterStoneNum;
  if ( v113 )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   v113,
                                                   *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster + 64LL));
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v121->max_length )
    goto LABEL_91;
  v121->m_Items[0] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)v121->m_Items, v113, v115, v116, v117, v118, v119, v120);
  v204 = max_length;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
  v128 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v121->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v121->max_length <= 1 )
    goto LABEL_91;
  v121->m_Items[1] = (Il2CppObject *)v128;
  sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[1], v128, v122, v123, v124, v125, v126, v127);
  v203 = v76;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v203);
  v135 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v121->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v121->max_length <= 2 )
    goto LABEL_91;
  v121->m_Items[2] = (Il2CppObject *)v135;
  sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[2], v135, v129, v130, v131, v132, v133, v134);
  v202 = v194;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v202);
  v142 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v121->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v121->max_length <= 3 )
    goto LABEL_91;
  v121->m_Items[3] = (Il2CppObject *)v142;
  sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[3], v142, v136, v137, v138, v139, v140, v141);
  MasterData_WarQuestSelectionMaster = System_String__Format_44656512(v114, v121, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_90;
  v111 = (System_String_o *)MasterData_WarQuestSelectionMaster;
LABEL_59:
  UILabel__set_text(infoMsgLabel, v111, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v145 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  v204 = v195;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
  if ( !v145 )
    goto LABEL_90;
  v152 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v145->max_length )
    goto LABEL_91;
  v145->m_Items[0] = (Il2CppObject *)v152;
  sub_B5D560((BattleServantConfConponent_o *)v145->m_Items, v152, v146, v147, v148, v149, v150, v151);
  v203 = v196;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v203);
  v159 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v145->max_length <= 1 )
    goto LABEL_91;
  v145->m_Items[1] = (Il2CppObject *)v159;
  sub_B5D560((BattleServantConfConponent_o *)&v145->m_Items[1], v159, v153, v154, v155, v156, v157, v158);
  v202 = v197;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v202);
  v166 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v145->max_length <= 2 )
    goto LABEL_91;
  v145->m_Items[2] = (Il2CppObject *)v166;
  sub_B5D560((BattleServantConfConponent_o *)&v145->m_Items[2], v166, v160, v161, v162, v163, v164, v165);
  v201 = v112;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v201);
  v173 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v145->max_length <= 3 )
    goto LABEL_91;
  v145->m_Items[3] = (Il2CppObject *)v173;
  sub_B5D560((BattleServantConfConponent_o *)&v145->m_Items[3], v173, v167, v168, v169, v170, v171, v172);
  v200 = afterChargeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
  v180 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v145->max_length <= 4 )
    goto LABEL_91;
  v145->m_Items[4] = (Il2CppObject *)v180;
  sub_B5D560((BattleServantConfConponent_o *)&v145->m_Items[4], v180, v174, v175, v176, v177, v178, v179);
  v199 = afterFreeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v199);
  v187 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B5D684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v145->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
    {
LABEL_92:
      v193 = sub_B5D6BC(MasterData_WarQuestSelectionMaster);
      sub_B5D668(v193, 0LL);
    }
  }
  if ( v145->max_length <= 5 )
  {
LABEL_91:
    v192 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
    sub_B5D668(v192, 0LL);
  }
  v145->m_Items[5] = (Il2CppObject *)v187;
  sub_B5D560((BattleServantConfConponent_o *)&v145->m_Items[5], v187, v181, v182, v183, v184, v185, v186);
  MasterData_WarQuestSelectionMaster = System_String__Format_44656512(v144, v145, 0LL);
  if ( !msgLabel )
    goto LABEL_90;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v189);
  MasterData_WarQuestSelectionMaster = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v190);
  v191 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v191, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v191, 0, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_String_o *v22; // x25
  Il2CppObject *v23; // x24
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  SummonConfirmDlgComponent_c *v33; // x0
  const MethodInfo *v34; // [xsp+8h] [xbp-58h]
  int32_t v35; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v36; // [xsp+18h] [xbp-48h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EA39B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, havePointNum, needPointNum, *(_QWORD *)&afterPointNum);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3393/*"CONFIRM_POINTSUMMON_MSG"*/, v19, v20, v21);
    byte_42EA39B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v37 = needPointNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v36 = havePointNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v35 = afterPointNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v26 = System_String__Format_44578852(v22, v23, v24, v25, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v33 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v26,
    0LL,
    callback,
    v33->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v34);
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  __int64 *v79; // x8
  System_String_o *v80; // x26
  System_Object_array *v81; // x27
  __int64 addMsgBgSprite; // x0
  __int64 v83; // x1
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
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x25
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x25
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x25
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x25
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x25
  System_String_o *v140; // x26
  int32_t v141; // w8
  int32_t v142; // w19
  int32_t v143; // w24
  int32_t v144; // w20
  SummonConfirmDlgComponent_o *v145; // x25
  System_String_o *v146; // x28
  Il2CppObject *DateTime; // x0
  System_String_o *v148; // x0
  int32_t v149; // w27
  int32_t v150; // w1
  int32_t v151; // w1
  int v152; // w22
  Il2CppObject *v153; // x0
  System_String_o *v154; // x25
  System_String_o *v155; // x19
  System_String_o *v156; // x25
  Il2CppObject *v157; // x24
  Il2CppObject *v158; // x0
  System_String_o *v159; // x26
  System_String_o *v160; // x24
  __int64 v161; // x25
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x22
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x21
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x20
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x20
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x20
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x20
  System_String_o *v204; // x20
  System_String_o *v205; // x22
  _QWORD **v206; // x23
  __int64 v207; // x21
  __int16 v208; // w8
  __int64 v209; // x21
  __int64 v210; // x21
  __int64 v211; // x21
  System_String_o *v212; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  UnityEngine_Object_o *bonusSelectMsgInfo; // x25
  System_String_o *v215; // x22
  int32_t v216; // w25
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x25
  System_String_o *v218; // x27
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v228; // x3
  __int64 v229; // x0
  __int64 v230; // x0
  const MethodInfo *v231; // [xsp+8h] [xbp-A8h]
  System_String_o *v232; // [xsp+10h] [xbp-A0h]
  int32_t v233; // [xsp+34h] [xbp-7Ch]
  int32_t v235; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t v236; // [xsp+40h] [xbp-70h] BYREF
  int32_t v237; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t v238; // [xsp+48h] [xbp-68h] BYREF
  int32_t v239; // [xsp+4Ch] [xbp-64h] BYREF
  int32_t v240; // [xsp+50h] [xbp-60h] BYREF
  int32_t v241; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t v242; // [xsp+58h] [xbp-58h] BYREF
  int32_t v243; // [xsp+5Ch] [xbp-54h] BYREF

  v23 = haveStoneNum;
  v24 = num;
  if ( (byte_42EA399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)title, type, *(_QWORD *)&price);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28, v29, v30);
    sub_B5D5C4(&int_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&object___TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_3373/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3378/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3374/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_3376/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_3392/*"CONFIRM_PAYSUMMON_MSG"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_3375/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_12615/*"SUMMON_STONEPAY_WARNING_MSG"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_12602/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_12568/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_3377/*"CONFIRM_CHARGESUMMON_MSG"*/, v76, v77, v78);
    byte_42EA399 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_B5D560(
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
    v79 = &StringLiteral_3378/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else if ( type == 7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = &StringLiteral_3377/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = &StringLiteral_3392/*"CONFIRM_PAYSUMMON_MSG"*/;
  }
  v80 = LocalizationManager__Get((System_String_o *)*v79, 0LL);
  v81 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 8LL);
  v243 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v243);
  if ( !v81 )
    goto LABEL_114;
  v90 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( !v81->max_length )
    goto LABEL_112;
  v81->m_Items[0] = (Il2CppObject *)v90;
  sub_B5D560((BattleServantConfConponent_o *)v81->m_Items, v90, v84, v85, v86, v87, v88, v89);
  v242 = v24;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v242);
  v97 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 1 )
    goto LABEL_112;
  v81->m_Items[1] = (Il2CppObject *)v97;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[1], v97, v91, v92, v93, v94, v95, v96);
  v241 = v23;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v241);
  v104 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 2 )
    goto LABEL_112;
  v81->m_Items[2] = (Il2CppObject *)v104;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[2], v104, v98, v99, v100, v101, v102, v103);
  v240 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v240);
  v111 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 3 )
    goto LABEL_112;
  v81->m_Items[3] = (Il2CppObject *)v111;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[3], v111, v105, v106, v107, v108, v109, v110);
  v239 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v239);
  v118 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 4 )
    goto LABEL_112;
  v81->m_Items[4] = (Il2CppObject *)v118;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[4], v118, v112, v113, v114, v115, v116, v117);
  v238 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v238);
  v125 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 5 )
    goto LABEL_112;
  v81->m_Items[5] = (Il2CppObject *)v125;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[5], v125, v119, v120, v121, v122, v123, v124);
  v237 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v237);
  v132 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 6 )
    goto LABEL_112;
  v81->m_Items[6] = (Il2CppObject *)v132;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[6], v132, v126, v127, v128, v129, v130, v131);
  v236 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v236);
  v139 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B5D684(addMsgBgSprite, v81->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v81->max_length <= 7 )
    goto LABEL_112;
  v81->m_Items[7] = (Il2CppObject *)v139;
  sub_B5D560((BattleServantConfConponent_o *)&v81->m_Items[7], v139, v133, v134, v135, v136, v137, v138);
  v232 = System_String__Format_44656512(v80, v81, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v140 = LocalizationManager__Get((System_String_o *)StringLiteral_12615/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    v141 = haveChargeStoneNum;
    v142 = v24;
    v143 = v23;
    v144 = v141;
    v145 = this;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12602/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v148 = System_String__Format(v146, DateTime, 0LL);
    v140 = System_String__Concat_44577788(v140, v148, 0LL);
    v149 = v144;
    v23 = v143;
    v24 = v142;
    this = v145;
  }
  else
  {
    v149 = haveChargeStoneNum;
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  v150 = isPickup ? 494 : 434;
  v233 = haveFreeStoneNum;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v150, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  if ( isPickup )
    v151 = 76;
  else
    v151 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v151, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v152 = v24;
    v243 = gachaId;
    v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v243);
    v154 = System_String__Format((System_String_o *)StringLiteral_3376/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v153, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v155 = LocalizationManager__Get(v154, 0LL);
    v156 = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v242 = price;
    v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v242);
    v241 = v152;
    v158 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v241);
    v159 = System_String__Format_44573324(v156, v157, v158, 0LL);
    v160 = LocalizationManager__Get((System_String_o *)StringLiteral_3375/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v161 = sub_B5D5DC(object___TypeInfo, 6LL);
    v240 = v23;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v240);
    if ( !v161 )
      goto LABEL_114;
    v168 = (System_Int32_array **)addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v161 + 24) )
        goto LABEL_112;
      *(_QWORD *)(v161 + 32) = v168;
      sub_B5D560((BattleServantConfConponent_o *)(v161 + 32), v168, v162, v163, v164, v165, v166, v167);
      v239 = v149;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v239);
      v175 = (System_Int32_array **)addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v161 + 24) <= 1u )
          goto LABEL_112;
        *(_QWORD *)(v161 + 40) = v175;
        sub_B5D560((BattleServantConfConponent_o *)(v161 + 40), v175, v169, v170, v171, v172, v173, v174);
        v238 = v233;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v238);
        v182 = (System_Int32_array **)addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v161 + 24) <= 2u )
            goto LABEL_112;
          *(_QWORD *)(v161 + 48) = v182;
          sub_B5D560((BattleServantConfConponent_o *)(v161 + 48), v182, v176, v177, v178, v179, v180, v181);
          v237 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v237);
          v189 = (System_Int32_array **)addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v161 + 24) <= 3u )
              goto LABEL_112;
            *(_QWORD *)(v161 + 56) = v189;
            sub_B5D560((BattleServantConfConponent_o *)(v161 + 56), v189, v183, v184, v185, v186, v187, v188);
            v236 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v236);
            v196 = (System_Int32_array **)addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v161 + 24) <= 4u )
                goto LABEL_112;
              *(_QWORD *)(v161 + 64) = v196;
              sub_B5D560((BattleServantConfConponent_o *)(v161 + 64), v196, v190, v191, v192, v193, v194, v195);
              v235 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v235);
              v203 = (System_Int32_array **)addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_B5D684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v161 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v161 + 24) > 5u )
                {
                  *(_QWORD *)(v161 + 72) = v203;
                  sub_B5D560((BattleServantConfConponent_o *)(v161 + 72), v203, v197, v198, v199, v200, v201, v202);
                  v204 = System_String__Format_44656512(v160, (System_Object_array *)v161, 0LL);
                  v205 = LocalizationManager__Get((System_String_o *)StringLiteral_3373/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v206 = (_QWORD **)Method_System_Array_Empty_object___;
                  v207 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
                  v208 = *(_WORD *)(v207 + 306);
                  if ( (v208 & 1) == 0 )
                  {
                    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
                    v208 = *(_WORD *)(v207 + 306);
                  }
                  if ( (v208 & 0x400) != 0 )
                  {
                    v209 = *v206[6];
                    if ( (*(_BYTE *)(v209 + 306) & 1) == 0 )
                      sub_AF52C4(*v206[6]);
                    if ( !*(_DWORD *)(v209 + 224) )
                    {
                      v210 = *v206[6];
                      if ( (*(_BYTE *)(v210 + 306) & 1) == 0 )
                        sub_AF52C4(*v206[6]);
                      j_il2cpp_runtime_class_init_0(v210);
                    }
                  }
                  v211 = *v206[6];
                  if ( (*(_BYTE *)(v211 + 306) & 1) == 0 )
                    sub_AF52C4(*v206[6]);
                  v212 = System_String__Format_44656512(v205, **(System_Object_array ***)(v211 + 184), 0LL);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v215 = v212;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  v216 = shopIdIdx;
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_114;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v218 = v159;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)addMsgBgSprite,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                      Component_srcLineSprite,
                      v221,
                      v222,
                      v223,
                      v224,
                      v225,
                      v226);
                    v216 = shopIdIdx;
                    v159 = v218;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      v155,
                      v159,
                      v204,
                      v215,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
                      v228 = LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v228, callback, 14.0, 0LL, v216, 0, 1, v231);
                      return;
                    }
                  }
LABEL_114:
                  sub_B5D69C(addMsgBgSprite, v83);
                }
LABEL_112:
                v229 = sub_B5D6C8(addMsgBgSprite);
                sub_B5D668(v229, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_113:
    v230 = sub_B5D6BC(addMsgBgSprite);
    sub_B5D668(v230, 0LL);
  }
  SummonConfirmDlgComponent__Open(this, title, v232, 0LL, callback, 14.0, v140, shopIdIdx, isAppendSummon, 0, v231);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
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
  System_String_o *v25; // x24
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x25
  Il2CppObject *v30; // x24
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // [xsp+8h] [xbp-58h]
  int32_t v34; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v35; // [xsp+18h] [xbp-48h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EA39A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)title, num, *(_QWORD *)&haveTicketNum);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3394/*"CONFIRM_TICKETSUMMON_MSG"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3395/*"CONFIRM_TICKETSUMMON_MSG2"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA39A = 1;
  }
  if ( num == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3394/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v36 = haveTicketNum;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v35 = afterTicketNum;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    v28 = System_String__Format_44573324(v25, v26, v27, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3395/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v36 = num;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v35 = haveTicketNum;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    v34 = afterTicketNum;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v28 = System_String__Format_44578852(v29, v30, v31, v32, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v28, 0LL, callback, 14.0, 0LL, 0, 0, 0, v33);
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
  System_String_o *v25; // x22
  System_String_o *v26; // x24
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  const MethodInfo *v32; // [xsp+8h] [xbp-58h]
  int32_t v33; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v34; // [xsp+28h] [xbp-38h] BYREF
  int32_t v35; // [xsp+2Ch] [xbp-34h] BYREF

  v35 = haveFreeStoneNum;
  if ( (byte_42EA397 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, price, haveChargeStoneNum, *(_QWORD *)&haveFreeStoneNum);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12532/*"STONE_PURCHASE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12358/*"SHORT_HAVE_CHARGE_STONE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA397 = 1;
  }
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12358/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v34 = price;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v33 = haveChargeStoneNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v29 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v35, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
  v30 = System_String__Format_44578852(v26, v27, v28, v29, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v25, v30, v31, callback, 14.0, 0LL, 0, 0, 0, v32);
}


void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
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
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // [xsp+8h] [xbp-38h]
  int32_t v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EA398 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, havePoint, (_DWORD)callback, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12359/*"SHORT_HAVE_POINT"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12357/*"SHORT_DLG_TITLE"*/, v13, v14, v15);
    byte_42EA398 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SHORT_DLG_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12359/*"SHORT_HAVE_POINT"*/, 0LL);
  v21 = havePoint;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v19 = System_String__Format(v17, v18, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v16, v19, 0LL, callback, 14.0, 0LL, 0, 0, 0, v20);
}


void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
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
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  const MethodInfo *v24; // [xsp+8h] [xbp-38h]
  int32_t v25; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EA396 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, haveNum, (_DWORD)callback, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12532/*"STONE_PURCHASE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12360/*"SHORT_HAVE_STONE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12357/*"SHORT_DLG_TITLE"*/, v16, v17, v18);
    byte_42EA396 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SHORT_DLG_TITLE"*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SHORT_HAVE_STONE"*/, 0LL);
  v25 = haveNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v22 = System_String__Format(v20, v21, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v19, v22, v23, callback, 14.0, 0LL, 0, 0, 0, v24);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        int32_t giftId,
        int32_t bonusType,
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  GiftEntity_o *DataById; // x20
  WarEntity_o *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v48; // x23
  System_String_o *v49; // x21
  System_String_o *v50; // x24
  Il2CppObject *v51; // x0
  System_String_o *v52; // x24
  int32_t mana; // w22
  BalanceConfig_c *v54; // x0
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  System_String_o *v57; // x1
  System_String_o *v58; // x21
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v63; // [xsp+18h] [xbp-48h] BYREF
  int32_t v64; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EA3A1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, giftId, bonusType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12580/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12581/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12582/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12584/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12583/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1/*""*/, v40, v41, v42);
    byte_42EA3A1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_37;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !Instance )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             DataById->fields.objectId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12582/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
    Instance = (DataManager_o *)System_String__Format(v59, v60, 0LL);
    if ( Entity )
    {
      v61 = (System_String_o *)Instance;
      Instance = (DataManager_o *)this->fields.extraItemIconComponent;
      if ( Instance )
      {
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
        Instance = (DataManager_o *)this->fields.extraTitleLabel;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, v58, 0LL);
          Instance = (DataManager_o *)this->fields.extraMessageLabel;
          if ( Instance )
          {
            v57 = v61;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(Instance, v44);
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v48 = SelfUserGame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12581/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v64 = DataById->fields.num;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  Instance = (DataManager_o *)System_String__Format(v50, v51, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v52 = (System_String_o *)Instance;
  Instance = (DataManager_o *)this->fields.bonusItemIconComponent;
  if ( !Instance )
    goto LABEL_37;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
  if ( !v48 )
    goto LABEL_37;
  mana = v48->fields.mana;
  v54 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  if ( mana == v54->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12584/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12583/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v63 = DataById->fields.num;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
    v52 = System_String__Format(v55, v56, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)Instance, v49, 0LL);
  Instance = (DataManager_o *)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_37;
  v57 = v52;
LABEL_35:
  UILabel__set_text((UILabel_o *)Instance, v57, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int32_t state; // w8
  UIWidget_o *baseWindowSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x3
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x8
  __int64 v13; // x9
  GachaExtraGiftEntity_o *v14; // x8
  int32_t giftId; // w1
  struct GachaExtraGiftEntity_array *v16; // x8
  GachaExtraGiftEntity_o *v17; // x8
  SummonConfirmDlgComponent_c *v18; // x0
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  const MethodInfo *v20; // x1
  signed int v22; // w10
  __int64 v23; // x23
  GachaExtraGiftEntity_o *v24; // x9
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

  v4 = shopIdIdx;
  if ( (byte_42EA3A0 & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_TypeInfo, shopIdIdx, (_DWORD)method, v3);
    byte_42EA3A0 = 1;
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
  v9 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, 19.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.msgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, -29.0, 0LL);
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_51;
  v13 = *(_QWORD *)&extraGiftEntList->max_length;
  if ( (_DWORD)v13 == 1 )
  {
    v14 = extraGiftEntList->m_Items[0];
    if ( !v14 )
      goto LABEL_51;
    giftId = v14->fields.giftId;
    if ( giftId || v14->fields.idx == v4 )
    {
      SummonConfirmDlgComponent__SetBonusText(this, giftId, v14->fields.bonusType, v11);
      v16 = this->fields.extraGiftEntList;
      if ( !v16 )
        goto LABEL_51;
      if ( v16->max_length )
      {
        v17 = v16->m_Items[0];
        if ( v17 )
        {
          if ( v17->fields.bonusType == 1 )
          {
            v18 = SummonConfirmDlgComponent_TypeInfo;
            bonusMsgInfo = this->fields.bonusMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v18 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(bonusMsgInfo, v18->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetBonusTextPos(this, v20);
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
        sub_B5D69C(baseWindowSprite, *(_QWORD *)&shopIdIdx);
      }
LABEL_52:
      v34 = sub_B5D6C8(baseWindowSprite);
      sub_B5D668(v34, 0LL);
    }
    return 0;
  }
  if ( (int)v13 >= 1 )
  {
    v22 = 0;
    while ( v22 < (unsigned int)v13 )
    {
      v23 = v22;
      v24 = extraGiftEntList->m_Items[v22];
      if ( !v24 )
        goto LABEL_51;
      *(_QWORD *)&shopIdIdx = (unsigned int)v24->fields.giftId;
      if ( shopIdIdx || v24->fields.idx == v4 )
      {
        SummonConfirmDlgComponent__SetBonusText(this, shopIdIdx, v24->fields.bonusType, v11);
        extraGiftEntList = this->fields.extraGiftEntList;
        if ( !extraGiftEntList )
          goto LABEL_51;
        if ( (unsigned int)v23 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v25 = extraGiftEntList->m_Items[v23];
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
        if ( (unsigned int)v23 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v29 = extraGiftEntList->m_Items[v23];
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
      LODWORD(v13) = extraGiftEntList->max_length;
      v22 = v23 + 1;
      if ( (int)v23 + 1 >= (int)v13 )
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonConfirmDlgComponent_o *v11; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EA393 & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA393 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v8->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonConfirmDlgComponent_o *)sub_B5D990(v8);
  SummonConfirmDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SummonConfirmDlgComponent__remove_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonConfirmDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EA394 & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA394 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v8->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonConfirmDlgComponent_o *)sub_B5D990(v8);
  SummonConfirmDlgComponent__Init(v11, v12);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UILabel_o *settingBtnLb; // x20

  if ( (byte_42EA39F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12560/*"SUMMON_AUTOSALE_BUTTON"*/, v5, v6, v7);
    byte_42EA39F = 1;
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
        sub_B5D69C(confirmBtnObject, method);
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
    confirmBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12560/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_B5D69C(0LL, isTutorial);
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
    sub_B5D69C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_28355800(this, 0LL, v19);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E6467 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E6467 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SummonConfirmDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SummonConfirmDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SummonConfirmDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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