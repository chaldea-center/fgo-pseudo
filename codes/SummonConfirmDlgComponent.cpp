void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  SummonConfirmDlgComponent_c *v1; // x8

  if ( (byte_438CEBD & 1) == 0 )
  {
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    byte_438CEBD = 1;
  }
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y = 174.0;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y = 73.0;
  v1 = SummonConfirmDlgComponent_TypeInfo;
  SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  v1->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 25;
  v1->static_fields->BASE_WINDOW_DEFAULT_WIDTH = 780;
  v1->static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  v1->static_fields->GROUP_BONUS_LABEL_POS_Y = -74.0;
  v1->static_fields->BONUS_INFO_GET_POS_X = -55.0;
  v1->static_fields->EXTRA_BONUS_INFO_GET_POS_X = -55.0;
  v1->static_fields->BONUS_INFO_NOT_GET_POS_X = -120.0;
  v1->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y = -163.0;
  v1->static_fields->ADD_MSG_INFO_POS_Y_DEF = -86.0;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_438CEBC & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CEBC = 1;
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
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B77560(
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

  SummonConfirmDlgComponent__Close_28636912(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_28636912(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438CEB8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_438CEB8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_438CEB9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CEB9 = 1;
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
    sub_B7769C(gameObject, v4);
  }
LABEL_10:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  SummonConfirmDlgComponent_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438CEAB & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEAB = 1;
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_50;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  v8 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v8 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v8->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.extraGiftEntList, 0LL, v10, v11, v12, v13, v14, v15);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v16,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v17,
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
        v22 = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(extraMsgInfo, v22, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_50:
    sub_B7769C(confirmTitleLabel, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v6; // x21

  if ( (byte_438CEBA & 1) == 0 )
  {
    sub_B775C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_438CEBA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v6 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B77694(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B7769C(gameObject, v4);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v6, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_438CEBB & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_4353/*"ConfirmWindow/CloseButton"*/);
    sub_B775C4(&StringLiteral_4355/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    byte_438CEBB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_4355/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_23834620(v4, (System_String_o *)StringLiteral_4353/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *giftId; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v29; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v31; // x1
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v34; // x25
  int32_t v35; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v40; // w0
  int32_t v41; // w24
  float v42; // s8
  UnityEngine_GameObject_o *v43; // x0
  float v44; // s8
  UnityEngine_GameObject_o *v45; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  const MethodInfo *v48; // x3
  struct GachaExtraGiftEntity_array *v49; // x8
  int max_length; // w9
  unsigned int v51; // w10
  __int64 v52; // x22
  GachaExtraGiftEntity_o *v53; // x10
  UnityEngine_Object_o *bonusMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v55; // x8
  GachaExtraGiftEntity_o *v56; // x8
  UnityEngine_Object_o *extraMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v58; // x8
  GachaExtraGiftEntity_o *v59; // x8
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v64; // s0
  float v65; // s8
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  bool v68; // w1
  const MethodInfo *v69; // x1
  System_Action_o *v70; // x20
  __int64 v71; // x0

  if ( (byte_438CEB3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEB3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
      v29 = title;
    else
      v29 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v29, 0LL);
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
    v31 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v31, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v32, msgOffY, 0LL);
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
    v34 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v34 )
      goto LABEL_119;
    UILabel__set_text(v34, decideTxt, 0LL);
  }
  v35 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v35 <= 2 )
    {
      v37 = SummonConfirmDlgComponent_TypeInfo;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v37 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v37->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v38, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v40 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v40 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v35 <= 2 )
      v41 = 20;
    else
      v41 = 18;
    if ( !gameObject )
      goto LABEL_119;
    v42 = flt_331FBE0[v35 > 2];
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v43, v42, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v44 = flt_331FBD8[v35 > 2];
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v45, v44, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    UILabel__set_fontSize((UILabel_o *)gameObject, v41, 0LL);
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
    v49 = this->fields.extraGiftEntList;
    if ( !v49 )
      goto LABEL_119;
    max_length = v49->max_length;
    if ( max_length >= 1 )
    {
      v51 = 0;
      while ( 1 )
      {
        if ( v51 >= max_length )
          goto LABEL_120;
        v52 = (int)v51;
        v53 = v49->m_Items[v51];
        if ( !v53 )
          goto LABEL_119;
        giftId = (const MethodInfo *)(unsigned int)v53->fields.giftId;
        if ( (_DWORD)giftId )
        {
          if ( v53->fields.idx == shopIdIdx )
            break;
        }
        v51 = v52 + 1;
        if ( (int)v52 + 1 >= max_length )
          goto LABEL_91;
      }
      SummonConfirmDlgComponent__SetBonusText(this, (int32_t)giftId, v53->fields.bonusType, v48);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v55 = this->fields.extraGiftEntList;
        if ( !v55 )
          goto LABEL_119;
        if ( (unsigned int)v52 >= v55->max_length )
          goto LABEL_120;
        v56 = v55->m_Items[v52];
        if ( !v56 )
          goto LABEL_119;
        if ( v56->fields.bonusType == 1 )
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
        v58 = this->fields.extraGiftEntList;
        if ( !v58 )
          goto LABEL_119;
        if ( (unsigned int)v52 < v58->max_length )
        {
          v59 = v58->m_Items[v52];
          if ( !v59 )
            goto LABEL_119;
          if ( v59->fields.bonusType == 2 )
            SummonConfirmDlgComponent__SetExtraTextPos(this, giftId);
          goto LABEL_91;
        }
LABEL_120:
        v71 = sub_B776C8(gameObject);
        sub_B77668(v71, 0LL);
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
      v61 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v61,
        SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
        0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v62 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
    }
    else
    {
      v64 = -34.0;
      gameObject = this->fields.bonusMsgInfo;
      if ( v35 <= 2 )
        v64 = -30.0;
      if ( isAppendSummon )
        v65 = v64;
      else
        v65 = flt_331FBE8[v35 > 2];
      if ( !gameObject )
        goto LABEL_119;
      v66 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v66, v65, 0LL);
      gameObject = this->fields.extraMsgInfo;
      if ( !gameObject )
        goto LABEL_119;
      v67 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(v67, v65, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
      gameObject = this->fields.confirmBtnObject;
      if ( !gameObject )
        goto LABEL_119;
      v62 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
    }
    GameObjectExtensions__SetLocalPositionY(v62, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    goto LABEL_110;
  }
LABEL_111:
  gameObject = this->fields.settingBtnObject;
  if ( (state & 0xFFFFFFFE) == 6 )
  {
    if ( !gameObject )
      goto LABEL_119;
    v68 = 1;
  }
  else
  {
    if ( !gameObject )
      goto LABEL_119;
    v68 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v68, 0LL);
  gameObject = this->fields.singleMsgInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_119:
    sub_B7769C(gameObject, giftId);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v69);
  v70 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x22
  SummonConfirmDlgComponent_c *v9; // x8
  SummonControl_c *v10; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  System_String_o *v13; // x23
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_o *v18; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v20; // x24
  __int64 v21; // x2
  Il2CppObject *v22; // x25
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  SummonConfirmDlgComponent_c *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // [xsp+8h] [xbp-78h]
  int32_t v34; // [xsp+18h] [xbp-68h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v36; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t remainNum[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_438CEB2 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    sub_B775C4(&SummonControl_TypeInfo);
    sub_B775C4(&UserGachaMaster_TypeInfo);
    sub_B775C4(&StringLiteral_3446/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_B775C4(&StringLiteral_3445/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_B775C4(&StringLiteral_6637/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_438CEB2 = 1;
  }
  *(_QWORD *)remainNum = 0LL;
  maxNum = 0;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  remainNum[1] = v7->static_fields->DailyFreeGachaResetTime;
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&remainNum[1], 0LL);
  v9 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v9 = SummonConfirmDlgComponent_TypeInfo;
  }
  v10 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v9->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v10 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v10->static_fields->FRIEND_POINT_SUMMON_ID;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3445/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
    v36 = maxNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v14);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(v13, v8, v15, 0LL);
    if ( !this->fields.campaignLabel )
      goto LABEL_31;
    v18 = (System_String_o *)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    campaignLabel = this->fields.campaignLabel;
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6637/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
    v35 = remainNum[0];
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v21);
    v34 = maxNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v23);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(v20, v22, v24, 0LL);
    if ( !campaignLabel )
LABEL_31:
      sub_B7769C(gameObject, v17);
    UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
    v31 = SummonConfirmDlgComponent_TypeInfo;
    if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      v31 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v31->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3446/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v18 = System_String__Format(v32, v8, 0LL);
  }
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  SummonConfirmDlgComponent__Open(this, 0LL, v18, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v33);
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
  __int64 v22; // x20
  __int64 v23; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  GachaEntity_array *GachaDataInGroup; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  void *v32; // x27
  __int64 v33; // x8
  int v34; // w24
  int max_length; // w23
  GachaEntity_o *v36; // x8
  GachaEntity_o *v37; // x9
  System_Int32_array **name; // x23
  System_Int32_array **v39; // x21
  UILabel_o *infoMsgLabel; // x27
  System_String_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Object_array *v48; // x28
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x2
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  __int64 v63; // x2
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x21
  System_String_o *v71; // x1
  int32_t v72; // w22
  System_Int32_array **v73; // x21
  System_String_o *v74; // x28
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Object_array *v81; // x20
  __int64 v82; // x2
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  __int64 v90; // x2
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x21
  __int64 v98; // x2
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v107; // x27
  System_Object_array *v108; // x28
  __int64 v109; // x2
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x20
  __int64 v117; // x2
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x20
  __int64 v125; // x2
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x20
  __int64 v133; // x2
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x20
  __int64 v141; // x2
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x20
  __int64 v149; // x2
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v158; // x2
  const MethodInfo *v159; // x1
  System_Action_o *v160; // x20
  __int64 v161; // x0
  __int64 v162; // x0
  int32_t v163; // [xsp+0h] [xbp-80h]
  int32_t v164; // [xsp+4h] [xbp-7Ch]
  int32_t v165; // [xsp+8h] [xbp-78h]
  int32_t v166; // [xsp+Ch] [xbp-74h]
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+10h] [xbp-70h]
  int32_t v168; // [xsp+18h] [xbp-68h] BYREF
  int32_t v169; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v170; // [xsp+20h] [xbp-60h] BYREF
  int32_t v171; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v172; // [xsp+28h] [xbp-58h] BYREF
  int v173; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_438CEB4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B775C4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_B775C4(&StringLiteral_3450/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3448/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_3449/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_438CEB4 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&price,
    *(System_String_array ***)&haveStoneNum,
    *(System_Boolean_array ***)&haveFreeStoneNum,
    *(System_Int32_array ***)&haveChargeStoneNum,
    *(System_Int32_array **)&afterStoneNum,
    *(System_Int32_array **)&afterFreeStoneNum);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_B0F2C4(v23);
  MasterData_WarQuestSelectionMaster = **(void ***)(v23 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_WarQuestSelectionMaster, groupId, 0LL);
  MasterData_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v163 = price;
  v164 = haveStoneNum;
  v165 = haveChargeStoneNum;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                         groupId,
                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v32 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  v33 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
  if ( !v33 )
    goto LABEL_90;
  if ( *(_QWORD *)(v33 + 24) )
    v34 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 5);
  else
LABEL_15:
    v34 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.extraGiftEntList,
    (System_Int32_array **)giftEntList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !GachaDataInGroup )
    goto LABEL_90;
  max_length = GachaDataInGroup->max_length;
  v166 = haveFreeStoneNum;
  if ( max_length == 2 )
  {
    v36 = GachaDataInGroup->m_Items[0];
    if ( v36 )
    {
      v37 = GachaDataInGroup->m_Items[1];
      if ( v37 )
      {
        name = (System_Int32_array **)v36->fields.name;
        v39 = (System_Int32_array **)v37->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3448/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_WarQuestSelectionMaster = (void *)sub_B775DC(object___TypeInfo, 4LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v48 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
          if ( name )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                           name,
                                                           *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster
                                                                     + 64LL));
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( !v48->max_length )
            goto LABEL_91;
          v48->m_Items[0] = (Il2CppObject *)name;
          sub_B77560((BattleServantConfConponent_o *)v48->m_Items, name, v42, v43, v44, v45, v46, v47);
          if ( v39 )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B77684(v39, v48->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v48->max_length <= 1 )
            goto LABEL_91;
          v48->m_Items[1] = (Il2CppObject *)v39;
          sub_B77560((BattleServantConfConponent_o *)&v48->m_Items[1], v39, v49, v50, v51, v52, v53, v54);
          v173 = v34;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v173, v55);
          v62 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v48->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v48->max_length <= 2 )
            goto LABEL_91;
          v48->m_Items[2] = (Il2CppObject *)v62;
          sub_B77560((BattleServantConfConponent_o *)&v48->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
          v172 = v163;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v63);
          v70 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v48->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v48->max_length <= 3 )
            goto LABEL_91;
          v48->m_Items[3] = (Il2CppObject *)v70;
          sub_B77560((BattleServantConfConponent_o *)&v48->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
          MasterData_WarQuestSelectionMaster = System_String__Format_44980660(v41, v48, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_90;
          v71 = (System_String_o *)MasterData_WarQuestSelectionMaster;
          v72 = afterStoneNum;
          goto LABEL_59;
        }
      }
    }
LABEL_90:
    sub_B7769C(MasterData_WarQuestSelectionMaster, v21);
  }
  if ( !v32 )
    goto LABEL_90;
  v73 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)v32 + 3), 0LL) )
    v73 = (System_Int32_array **)*((_QWORD *)v32 + 3);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3449/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  MasterData_WarQuestSelectionMaster = (void *)sub_B775DC(object___TypeInfo, 4LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v81 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
  v72 = afterStoneNum;
  if ( v73 )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   v73,
                                                   *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster + 64LL));
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v81->max_length )
    goto LABEL_91;
  v81->m_Items[0] = (Il2CppObject *)v73;
  sub_B77560((BattleServantConfConponent_o *)v81->m_Items, v73, v75, v76, v77, v78, v79, v80);
  v173 = max_length;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v173, v82);
  v89 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v81->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v81->max_length <= 1 )
    goto LABEL_91;
  v81->m_Items[1] = (Il2CppObject *)v89;
  sub_B77560((BattleServantConfConponent_o *)&v81->m_Items[1], v89, v83, v84, v85, v86, v87, v88);
  v172 = v34;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v90);
  v97 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v81->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v81->max_length <= 2 )
    goto LABEL_91;
  v81->m_Items[2] = (Il2CppObject *)v97;
  sub_B77560((BattleServantConfConponent_o *)&v81->m_Items[2], v97, v91, v92, v93, v94, v95, v96);
  v171 = v163;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v98);
  v105 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v81->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v81->max_length <= 3 )
    goto LABEL_91;
  v81->m_Items[3] = (Il2CppObject *)v105;
  sub_B77560((BattleServantConfConponent_o *)&v81->m_Items[3], v105, v99, v100, v101, v102, v103, v104);
  MasterData_WarQuestSelectionMaster = System_String__Format_44980660(v74, v81, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_90;
  v71 = (System_String_o *)MasterData_WarQuestSelectionMaster;
LABEL_59:
  UILabel__set_text(infoMsgLabel, v71, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_3450/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v108 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
  v173 = v164;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v173, v109);
  if ( !v108 )
    goto LABEL_90;
  v116 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v108->max_length )
    goto LABEL_91;
  v108->m_Items[0] = (Il2CppObject *)v116;
  sub_B77560((BattleServantConfConponent_o *)v108->m_Items, v116, v110, v111, v112, v113, v114, v115);
  v172 = v165;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v117);
  v124 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v108->max_length <= 1 )
    goto LABEL_91;
  v108->m_Items[1] = (Il2CppObject *)v124;
  sub_B77560((BattleServantConfConponent_o *)&v108->m_Items[1], v124, v118, v119, v120, v121, v122, v123);
  v171 = v166;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v125);
  v132 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v108->max_length <= 2 )
    goto LABEL_91;
  v108->m_Items[2] = (Il2CppObject *)v132;
  sub_B77560((BattleServantConfConponent_o *)&v108->m_Items[2], v132, v126, v127, v128, v129, v130, v131);
  v170 = v72;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v170, v133);
  v140 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v108->max_length <= 3 )
    goto LABEL_91;
  v108->m_Items[3] = (Il2CppObject *)v140;
  sub_B77560((BattleServantConfConponent_o *)&v108->m_Items[3], v140, v134, v135, v136, v137, v138, v139);
  v169 = afterChargeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v169, v141);
  v148 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v108->max_length <= 4 )
    goto LABEL_91;
  v108->m_Items[4] = (Il2CppObject *)v148;
  sub_B77560((BattleServantConfConponent_o *)&v108->m_Items[4], v148, v142, v143, v144, v145, v146, v147);
  v168 = afterFreeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v168, v149);
  v156 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B77684(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v108->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
    {
LABEL_92:
      v162 = sub_B776BC(MasterData_WarQuestSelectionMaster);
      sub_B77668(v162, 0LL);
    }
  }
  if ( v108->max_length <= 5 )
  {
LABEL_91:
    v161 = sub_B776C8(MasterData_WarQuestSelectionMaster);
    sub_B77668(v161, 0LL);
  }
  v108->m_Items[5] = (Il2CppObject *)v156;
  sub_B77560((BattleServantConfConponent_o *)&v108->m_Items[5], v156, v150, v151, v152, v153, v154, v155);
  MasterData_WarQuestSelectionMaster = System_String__Format_44980660(v107, v108, 0LL);
  if ( !msgLabel )
    goto LABEL_90;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v158);
  MasterData_WarQuestSelectionMaster = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v159);
  v160 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v160, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v160, 0, 0LL);
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
  Il2CppObject *v15; // x24
  __int64 v16; // x2
  Il2CppObject *v17; // x23
  __int64 v18; // x2
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

  if ( (byte_438CEB1 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    sub_B775C4(&StringLiteral_3453/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_438CEB1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v31 = needPointNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v14);
  v30 = havePointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v16);
  v29 = afterPointNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18);
  v20 = System_String__Format_44903000(v13, v15, v17, v19, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B77560(
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
  __int64 *v28; // x8
  System_String_o *v29; // x26
  System_Object_array *v30; // x27
  __int64 v31; // x2
  __int64 addMsgBgSprite; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x25
  __int64 v41; // x2
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x25
  __int64 v49; // x2
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x25
  __int64 v57; // x2
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x25
  __int64 v65; // x2
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x25
  __int64 v73; // x2
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x25
  __int64 v81; // x2
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x25
  __int64 v89; // x2
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x25
  System_String_o *v97; // x26
  int32_t v98; // w8
  int32_t v99; // w19
  int32_t v100; // w24
  int32_t v101; // w20
  SummonConfirmDlgComponent_o *v102; // x25
  System_String_o *v103; // x28
  Il2CppObject *DateTime; // x0
  System_String_o *v105; // x0
  int32_t v106; // w27
  int32_t v107; // w1
  int32_t v108; // w1
  __int64 v109; // x2
  int v110; // w22
  Il2CppObject *v111; // x0
  System_String_o *v112; // x25
  System_String_o *v113; // x19
  System_String_o *v114; // x25
  __int64 v115; // x2
  Il2CppObject *v116; // x24
  __int64 v117; // x2
  Il2CppObject *v118; // x0
  System_String_o *v119; // x26
  System_String_o *v120; // x24
  __int64 v121; // x25
  __int64 v122; // x2
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x22
  __int64 v130; // x2
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x21
  __int64 v138; // x2
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x20
  __int64 v146; // x2
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x20
  __int64 v154; // x2
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x20
  __int64 v162; // x2
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x20
  System_String_o *v170; // x20
  System_String_o *v171; // x22
  _QWORD **v172; // x23
  __int64 v173; // x21
  __int16 v174; // w8
  __int64 v175; // x21
  __int64 v176; // x21
  __int64 v177; // x21
  System_String_o *v178; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  UnityEngine_Object_o *bonusSelectMsgInfo; // x25
  System_String_o *v181; // x22
  int32_t v182; // w25
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x25
  System_String_o *v184; // x27
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v194; // x3
  __int64 v195; // x0
  __int64 v196; // x0
  const MethodInfo *v197; // [xsp+8h] [xbp-A8h]
  System_String_o *v198; // [xsp+10h] [xbp-A0h]
  int32_t v199; // [xsp+34h] [xbp-7Ch]
  int32_t v201; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t v202; // [xsp+40h] [xbp-70h] BYREF
  int32_t v203; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t v204; // [xsp+48h] [xbp-68h] BYREF
  int32_t v205; // [xsp+4Ch] [xbp-64h] BYREF
  int32_t v206; // [xsp+50h] [xbp-60h] BYREF
  int32_t v207; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t v208; // [xsp+58h] [xbp-58h] BYREF
  int32_t v209; // [xsp+5Ch] [xbp-54h] BYREF

  v23 = haveStoneNum;
  v24 = num;
  if ( (byte_438CEAF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_object___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3433/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/);
    sub_B775C4(&StringLiteral_3438/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_B775C4(&StringLiteral_3434/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_B775C4(&StringLiteral_3436/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/);
    sub_B775C4(&StringLiteral_3452/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_B775C4(&StringLiteral_3435/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_B775C4(&StringLiteral_12700/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12687/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_12653/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_B775C4(&StringLiteral_3437/*"CONFIRM_CHARGESUMMON_MSG"*/);
    byte_438CEAF = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_B77560(
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
    v28 = &StringLiteral_3438/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else if ( type == 7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_3437/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_3452/*"CONFIRM_PAYSUMMON_MSG"*/;
  }
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  v30 = (System_Object_array *)sub_B775DC(object___TypeInfo, 8LL);
  v209 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v209, v31);
  if ( !v30 )
    goto LABEL_114;
  v40 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( !v30->max_length )
    goto LABEL_112;
  v30->m_Items[0] = (Il2CppObject *)v40;
  sub_B77560((BattleServantConfConponent_o *)v30->m_Items, v40, v34, v35, v36, v37, v38, v39);
  v208 = v24;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v208, v41);
  v48 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_112;
  v30->m_Items[1] = (Il2CppObject *)v48;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[1], v48, v42, v43, v44, v45, v46, v47);
  v207 = v23;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v207, v49);
  v56 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_112;
  v30->m_Items[2] = (Il2CppObject *)v56;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[2], v56, v50, v51, v52, v53, v54, v55);
  v206 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v206, v57);
  v64 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_112;
  v30->m_Items[3] = (Il2CppObject *)v64;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[3], v64, v58, v59, v60, v61, v62, v63);
  v205 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v205, v65);
  v72 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 4 )
    goto LABEL_112;
  v30->m_Items[4] = (Il2CppObject *)v72;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
  v204 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v204, v73);
  v80 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 5 )
    goto LABEL_112;
  v30->m_Items[5] = (Il2CppObject *)v80;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[5], v80, v74, v75, v76, v77, v78, v79);
  v203 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v203, v81);
  v88 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 6 )
    goto LABEL_112;
  v30->m_Items[6] = (Il2CppObject *)v88;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[6], v88, v82, v83, v84, v85, v86, v87);
  v202 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202, v89);
  v96 = (System_Int32_array **)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B77684(addMsgBgSprite, v30->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v30->max_length <= 7 )
    goto LABEL_112;
  v30->m_Items[7] = (Il2CppObject *)v96;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[7], v96, v90, v91, v92, v93, v94, v95);
  v198 = System_String__Format_44980660(v29, v30, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12700/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    v98 = haveChargeStoneNum;
    v99 = v24;
    v100 = v23;
    v101 = v98;
    v102 = this;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12687/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v105 = System_String__Format(v103, DateTime, 0LL);
    v97 = System_String__Concat_44901936(v97, v105, 0LL);
    v106 = v101;
    v23 = v100;
    v24 = v99;
    this = v102;
  }
  else
  {
    v106 = haveChargeStoneNum;
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  v107 = isPickup ? 494 : 434;
  v199 = haveFreeStoneNum;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v107, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  if ( isPickup )
    v108 = 76;
  else
    v108 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v108, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v110 = v24;
    v209 = gachaId;
    v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v209, v109);
    v112 = System_String__Format((System_String_o *)StringLiteral_3436/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v111, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v113 = LocalizationManager__Get(v112, 0LL);
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3434/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v208 = price;
    v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208, v115);
    v207 = v110;
    v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v117);
    v119 = System_String__Format_44897472(v114, v116, v118, 0LL);
    v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3435/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v121 = sub_B775DC(object___TypeInfo, 6LL);
    v206 = v23;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v206, v122);
    if ( !v121 )
      goto LABEL_114;
    v129 = (System_Int32_array **)addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v121 + 24) )
        goto LABEL_112;
      *(_QWORD *)(v121 + 32) = v129;
      sub_B77560((BattleServantConfConponent_o *)(v121 + 32), v129, v123, v124, v125, v126, v127, v128);
      v205 = v106;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v205, v130);
      v137 = (System_Int32_array **)addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v121 + 24) <= 1u )
          goto LABEL_112;
        *(_QWORD *)(v121 + 40) = v137;
        sub_B77560((BattleServantConfConponent_o *)(v121 + 40), v137, v131, v132, v133, v134, v135, v136);
        v204 = v199;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v204, v138);
        v145 = (System_Int32_array **)addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v121 + 24) <= 2u )
            goto LABEL_112;
          *(_QWORD *)(v121 + 48) = v145;
          sub_B77560((BattleServantConfConponent_o *)(v121 + 48), v145, v139, v140, v141, v142, v143, v144);
          v203 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v203, v146);
          v153 = (System_Int32_array **)addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v121 + 24) <= 3u )
              goto LABEL_112;
            *(_QWORD *)(v121 + 56) = v153;
            sub_B77560((BattleServantConfConponent_o *)(v121 + 56), v153, v147, v148, v149, v150, v151, v152);
            v202 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202, v154);
            v161 = (System_Int32_array **)addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v121 + 24) <= 4u )
                goto LABEL_112;
              *(_QWORD *)(v121 + 64) = v161;
              sub_B77560((BattleServantConfConponent_o *)(v121 + 64), v161, v155, v156, v157, v158, v159, v160);
              v201 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v201, v162);
              v169 = (System_Int32_array **)addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_B77684(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v121 + 24) > 5u )
                {
                  *(_QWORD *)(v121 + 72) = v169;
                  sub_B77560((BattleServantConfConponent_o *)(v121 + 72), v169, v163, v164, v165, v166, v167, v168);
                  v170 = System_String__Format_44980660(v120, (System_Object_array *)v121, 0LL);
                  v171 = LocalizationManager__Get((System_String_o *)StringLiteral_3433/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v172 = (_QWORD **)Method_System_Array_Empty_object___;
                  v173 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
                  v174 = *(_WORD *)(v173 + 306);
                  if ( (v174 & 1) == 0 )
                  {
                    sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
                    v174 = *(_WORD *)(v173 + 306);
                  }
                  if ( (v174 & 0x400) != 0 )
                  {
                    v175 = *v172[6];
                    if ( (*(_BYTE *)(v175 + 306) & 1) == 0 )
                      sub_B0F2C4(*v172[6]);
                    if ( !*(_DWORD *)(v175 + 224) )
                    {
                      v176 = *v172[6];
                      if ( (*(_BYTE *)(v176 + 306) & 1) == 0 )
                        sub_B0F2C4(*v172[6]);
                      j_il2cpp_runtime_class_init_0(v176);
                    }
                  }
                  v177 = *v172[6];
                  if ( (*(_BYTE *)(v177 + 306) & 1) == 0 )
                    sub_B0F2C4(*v172[6]);
                  v178 = System_String__Format_44980660(v171, **(System_Object_array ***)(v177 + 184), 0LL);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v181 = v178;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  v182 = shopIdIdx;
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_114;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v184 = v119;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)addMsgBgSprite,
                                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
                    sub_B77560(
                      (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                      Component_srcLineSprite,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191,
                      v192);
                    v182 = shopIdIdx;
                    v119 = v184;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      v113,
                      v119,
                      v170,
                      v181,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
                      v194 = LocalizationManager__Get((System_String_o *)StringLiteral_12653/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v194, callback, 14.0, 0LL, v182, 0, 1, v197);
                      return;
                    }
                  }
LABEL_114:
                  sub_B7769C(addMsgBgSprite, v33);
                }
LABEL_112:
                v195 = sub_B776C8(addMsgBgSprite);
                sub_B77668(v195, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_113:
    v196 = sub_B776BC(addMsgBgSprite);
    sub_B77668(v196, 0LL);
  }
  SummonConfirmDlgComponent__Open(this, title, v198, 0LL, callback, 14.0, v97, shopIdIdx, isAppendSummon, 0, v197);
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
  Il2CppObject *v15; // x23
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x25
  __int64 v20; // x2
  Il2CppObject *v21; // x24
  __int64 v22; // x2
  Il2CppObject *v23; // x23
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // [xsp+8h] [xbp-58h]
  int32_t v27; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v28; // [xsp+18h] [xbp-48h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_438CEB0 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3454/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_B775C4(&StringLiteral_3455/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEB0 = 1;
  }
  if ( num == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3454/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v29 = haveTicketNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v14);
    v28 = afterTicketNum;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v16);
    v18 = System_String__Format_44897472(v13, v15, v17, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3455/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v29 = num;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v20);
    v28 = haveTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v22);
    v27 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v24);
    v18 = System_String__Format_44903000(v19, v21, v23, v25, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v18, 0LL, callback, 14.0, 0LL, 0, 0, 0, v26);
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
  Il2CppObject *v13; // x23
  __int64 v14; // x2
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]
  int32_t v20; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+28h] [xbp-38h] BYREF
  int32_t v22; // [xsp+2Ch] [xbp-34h] BYREF

  v22 = haveFreeStoneNum;
  if ( (byte_438CEAD & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12617/*"STONE_PURCHASE"*/);
    sub_B775C4(&StringLiteral_12443/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_B775C4(&StringLiteral_350/*"#,0"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEAD = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v21 = price;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v12);
  v20 = haveChargeStoneNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14);
  v16 = (Il2CppObject *)System_Int32__ToString_39547236((int32_t)&v22, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
  v17 = System_String__Format_44903000(v11, v13, v15, v16, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v17, v18, callback, 14.0, 0LL, 0, 0, 0, v19);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // [xsp+8h] [xbp-38h]
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_438CEAE & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12444/*"SHORT_HAVE_POINT"*/);
    sub_B775C4(&StringLiteral_12442/*"SHORT_DLG_TITLE"*/);
    byte_438CEAE = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SHORT_DLG_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"SHORT_HAVE_POINT"*/, 0LL);
  v13 = havePoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9);
  v11 = System_String__Format(v8, v10, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v11, 0LL, callback, 14.0, 0LL, 0, 0, 0, v12);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  const MethodInfo *v13; // [xsp+8h] [xbp-38h]
  int32_t v14; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_438CEAC & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12617/*"STONE_PURCHASE"*/);
    sub_B775C4(&StringLiteral_12445/*"SHORT_HAVE_STONE"*/);
    sub_B775C4(&StringLiteral_12442/*"SHORT_DLG_TITLE"*/);
    byte_438CEAC = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SHORT_DLG_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SHORT_HAVE_STONE"*/, 0LL);
  v14 = haveNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
  v11 = System_String__Format(v8, v10, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v7, v11, v12, callback, 14.0, 0LL, 0, 0, 0, v13);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        int32_t giftId,
        int32_t bonusType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  GiftEntity_o *DataById; // x20
  WarEntity_o *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v12; // x23
  System_String_o *v13; // x21
  System_String_o *v14; // x24
  __int64 v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x24
  int32_t mana; // w22
  BalanceConfig_c *v19; // x0
  System_String_o *v20; // x22
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x21
  System_String_o *v25; // x23
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v30; // [xsp+18h] [xbp-48h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_438CEB7 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_12665/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12666/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_B775C4(&StringLiteral_12667/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_B775C4(&StringLiteral_12669/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_B775C4(&StringLiteral_12668/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEB7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_37;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !Instance )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             DataById->fields.objectId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12667/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12665/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v26);
    Instance = (DataManager_o *)System_String__Format(v25, v27, 0LL);
    if ( Entity )
    {
      v28 = (System_String_o *)Instance;
      Instance = (DataManager_o *)this->fields.extraItemIconComponent;
      if ( Instance )
      {
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
        Instance = (DataManager_o *)this->fields.extraTitleLabel;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, v24, 0LL);
          Instance = (DataManager_o *)this->fields.extraMessageLabel;
          if ( Instance )
          {
            v23 = v28;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(Instance, v8);
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v12 = SelfUserGame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12666/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12665/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v31 = DataById->fields.num;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v15);
  Instance = (DataManager_o *)System_String__Format(v14, v16, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v17 = (System_String_o *)Instance;
  Instance = (DataManager_o *)this->fields.bonusItemIconComponent;
  if ( !Instance )
    goto LABEL_37;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
  if ( !v12 )
    goto LABEL_37;
  mana = v12->fields.mana;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( mana == v19->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12669/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12668/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v30 = DataById->fields.num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v21);
    v17 = System_String__Format(v20, v22, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)Instance, v13, 0LL);
  Instance = (DataManager_o *)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_37;
  v23 = v17;
LABEL_35:
  UILabel__set_text((UILabel_o *)Instance, v23, 0LL);
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
    sub_B7769C(this, method);
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
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  GachaExtraGiftEntity_o *v24; // x9
  SummonConfirmDlgComponent_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x21
  const MethodInfo *v27; // x1
  GachaExtraGiftEntity_o *v28; // x9
  const MethodInfo *v29; // x1
  SummonConfirmDlgComponent_c *v30; // x0
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  const MethodInfo *v32; // x1
  __int64 v33; // x0

  v3 = shopIdIdx;
  if ( (byte_438CEB6 & 1) == 0 )
  {
    sub_B775C4(&SummonConfirmDlgComponent_TypeInfo);
    byte_438CEB6 = 1;
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
    if ( giftId || v13->fields.idx == v3 )
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
            v30 = SummonConfirmDlgComponent_TypeInfo;
            extraMsgInfo = this->fields.extraMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v30 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(extraMsgInfo, v30->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetExtraTextPos(this, v32);
          }
          return 1;
        }
LABEL_51:
        sub_B7769C(baseWindowSprite, *(_QWORD *)&shopIdIdx);
      }
LABEL_52:
      v33 = sub_B776C8(baseWindowSprite);
      sub_B77668(v33, 0LL);
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
      *(_QWORD *)&shopIdIdx = (unsigned int)v23->fields.giftId;
      if ( shopIdIdx || v23->fields.idx == v3 )
      {
        SummonConfirmDlgComponent__SetBonusText(this, shopIdIdx, v23->fields.bonusType, v10);
        extraGiftEntList = this->fields.extraGiftEntList;
        if ( !extraGiftEntList )
          goto LABEL_51;
        if ( (unsigned int)v22 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v24 = extraGiftEntList->m_Items[v22];
        if ( !v24 )
          goto LABEL_51;
        if ( v24->fields.bonusType == 1 )
        {
          v25 = SummonConfirmDlgComponent_TypeInfo;
          v26 = this->fields.bonusMsgInfo;
          if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v25 = SummonConfirmDlgComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v26, v25->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
          SummonConfirmDlgComponent__SetBonusTextPos(this, v27);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_51;
        }
        if ( (unsigned int)v22 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v28 = extraGiftEntList->m_Items[v22];
        if ( !v28 )
          goto LABEL_51;
        if ( v28->fields.bonusType == 2 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.extraMsgInfo, -96.0, 0LL);
          SummonConfirmDlgComponent__SetExtraTextPos(this, v29);
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

  if ( (byte_438CEA9 & 1) == 0 )
  {
    sub_B775C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_438CEA9 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B77990(v7);
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

  if ( (byte_438CEAA & 1) == 0 )
  {
    sub_B775C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_438CEAA = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B77990(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UILabel_o *settingBtnLb; // x20

  if ( (byte_438CEB5 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12645/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_438CEB5 = 1;
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
        sub_B7769C(confirmBtnObject, method);
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
    confirmBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_B7769C(0LL, isTutorial);
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
    sub_B7769C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_28636912(this, 0LL, v19);
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
  sub_B77560(p_method);
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
  if ( (byte_43886B6 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43886B6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SummonConfirmDlgComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}