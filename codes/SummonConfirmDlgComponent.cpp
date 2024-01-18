void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonConfirmDlgComponent_c *v2; // x8

  if ( (byte_4185872 & 1) == 0 )
  {
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4185872 = 1;
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
  if ( (byte_4185871 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185871 = 1;
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
  SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B2C2F8(&this->fields.autoSaleDialogCloseCallbackFunc, 0LL);
    SummonConfirmDlgComponent_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_20977548(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_20977548(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_418586D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SummonConfirmDlgComponent_EndClose__, v5);
    byte_418586D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_418586E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418586E = 1;
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
    sub_B2C434(gameObject, v4);
  }
LABEL_10:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8(&this->fields.closeCallbackFunc, 0LL);
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
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185860 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4185860 = 1;
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_50;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  sub_B2C2F8(&this->fields.extraGiftEntList, 0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v15,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v16,
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
        v21 = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(extraMsgInfo, v21, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_50:
    sub_B2C434(confirmTitleLabel, method);
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
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_418586F & 1) == 0 )
  {
    sub_B2C35C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_418586F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B2C42C(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B2C434(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_4185870 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_4221/*"ConfirmWindow/CloseButton"*/, v3);
    sub_B2C35C(&StringLiteral_4223/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v4);
    byte_4185870 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_4223/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21105064(v6, (System_String_o *)StringLiteral_4221/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  const MethodInfo *giftId; // x1
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

  if ( (byte_4185868 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SummonConfirmDlgComponent_EndOpen__, v22);
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_4185868 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    v42 = flt_319F778[v35 > 2];
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v43, v42, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_119;
    v44 = flt_319F770[v35 > 2];
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
        v71 = sub_B2C460(gameObject);
        sub_B2C400(v71, 0LL);
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
        v65 = flt_319F780[v35 > 2];
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
    sub_B2C434(gameObject, giftId);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v69);
  v70 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
  __int64 v24; // x1
  System_String_o *v25; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x0
  SummonConfirmDlgComponent_c *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // [xsp+8h] [xbp-78h]
  int32_t v33; // [xsp+18h] [xbp-68h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v35; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t remainNum[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4185867 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, callback);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_B2C35C(&SummonControl_TypeInfo, v10);
    sub_B2C35C(&UserGachaMaster_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_3320/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_3319/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_6489/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_4185867 = 1;
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
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3319/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
    v35 = maxNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v21, v16, v22, 0LL);
    if ( !this->fields.campaignLabel )
      goto LABEL_31;
    v25 = (System_String_o *)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    campaignLabel = this->fields.campaignLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6489/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
    v34 = remainNum[0];
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v33 = maxNum;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v27, v28, v29, 0LL);
    if ( !campaignLabel )
LABEL_31:
      sub_B2C434(gameObject, v24);
    UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
    v30 = SummonConfirmDlgComponent_TypeInfo;
    if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      v30 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v30->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3320/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v25 = System_String__Format(v31, v16, 0LL);
  }
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B2C2F8(&this->fields.autoSaleDialogCloseCallbackFunc, autoSaleDialogCloseCallback);
  SummonConfirmDlgComponent__Open(this, 0LL, v25, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v32);
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
  __int64 v35; // x1
  __int64 v36; // x20
  __int64 v37; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  GachaEntity_array *GachaDataInGroup; // x20
  void *v40; // x27
  __int64 v41; // x8
  int v42; // w24
  int max_length; // w23
  GachaEntity_o *v44; // x8
  GachaEntity_o *v45; // x9
  Il2CppObject *name; // x23
  Il2CppObject *v47; // x21
  UILabel_o *infoMsgLabel; // x27
  System_String_o *v49; // x20
  System_Object_array *v50; // x28
  Il2CppObject *v51; // x21
  Il2CppObject *v52; // x21
  System_String_o *v53; // x1
  int32_t v54; // w22
  Il2CppObject *v55; // x21
  System_String_o *v56; // x28
  System_Object_array *v57; // x20
  Il2CppObject *v58; // x21
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v62; // x27
  System_Object_array *v63; // x28
  Il2CppObject *v64; // x20
  Il2CppObject *v65; // x20
  Il2CppObject *v66; // x20
  Il2CppObject *v67; // x20
  Il2CppObject *v68; // x20
  Il2CppObject *v69; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x1
  System_Action_o *v73; // x20
  __int64 v74; // x0
  __int64 v75; // x0
  int32_t v76; // [xsp+0h] [xbp-80h]
  int32_t v77; // [xsp+4h] [xbp-7Ch]
  int32_t v78; // [xsp+8h] [xbp-78h]
  int32_t v79; // [xsp+Ch] [xbp-74h]
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+10h] [xbp-70h]
  int32_t v81; // [xsp+18h] [xbp-68h] BYREF
  int32_t v82; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v83; // [xsp+20h] [xbp-60h] BYREF
  int32_t v84; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v85; // [xsp+28h] [xbp-58h] BYREF
  int v86; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4185869 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_B2C35C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_B2C35C(&int_TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&object___TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_B2C35C(&StringLiteral_3324/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_B2C35C(&StringLiteral_3322/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_B2C35C(&StringLiteral_1/*""*/, v33);
    sub_B2C35C(&StringLiteral_3323/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_4185869 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v37 = **(_QWORD **)(v36 + 192);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AC505C(v37);
  MasterData_WarQuestSelectionMaster = **(void ***)(v37 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_WarQuestSelectionMaster, groupId, 0LL);
  MasterData_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v76 = price;
  v77 = haveStoneNum;
  v78 = haveChargeStoneNum;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                         groupId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v40 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  v41 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
  if ( !v41 )
    goto LABEL_90;
  if ( *(_QWORD *)(v41 + 24) )
    v42 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 5);
  else
LABEL_15:
    v42 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_B2C2F8(&this->fields.extraGiftEntList, giftEntList);
  if ( !GachaDataInGroup )
    goto LABEL_90;
  max_length = GachaDataInGroup->max_length;
  v79 = haveFreeStoneNum;
  if ( max_length == 2 )
  {
    v44 = GachaDataInGroup->m_Items[0];
    if ( v44 )
    {
      v45 = GachaDataInGroup->m_Items[1];
      if ( v45 )
      {
        name = (Il2CppObject *)v44->fields.name;
        v47 = (Il2CppObject *)v45->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_WarQuestSelectionMaster = (void *)sub_B2C374(object___TypeInfo, 4LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v50 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
          if ( name )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                           name,
                                                           *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster
                                                                     + 64LL));
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( !v50->max_length )
            goto LABEL_91;
          v50->m_Items[0] = name;
          sub_B2C2F8(v50->m_Items, name);
          if ( v47 )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(v47, v50->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v50->max_length <= 1 )
            goto LABEL_91;
          v50->m_Items[1] = v47;
          sub_B2C2F8(&v50->m_Items[1], v47);
          v86 = v42;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
          v51 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v50->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v50->max_length <= 2 )
            goto LABEL_91;
          v50->m_Items[2] = v51;
          sub_B2C2F8(&v50->m_Items[2], v51);
          v85 = v76;
          MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
          v52 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
          if ( MasterData_WarQuestSelectionMaster )
          {
            MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v50->obj.klass->_1.element_class);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_92;
          }
          if ( v50->max_length <= 3 )
            goto LABEL_91;
          v50->m_Items[3] = v52;
          sub_B2C2F8(&v50->m_Items[3], v52);
          MasterData_WarQuestSelectionMaster = System_String__Format_44384256(v49, v50, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_90;
          v53 = (System_String_o *)MasterData_WarQuestSelectionMaster;
          v54 = afterStoneNum;
          goto LABEL_59;
        }
      }
    }
LABEL_90:
    sub_B2C434(MasterData_WarQuestSelectionMaster, v35);
  }
  if ( !v40 )
    goto LABEL_90;
  v55 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)v40 + 3), 0LL) )
    v55 = (Il2CppObject *)*((_QWORD *)v40 + 3);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3323/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  MasterData_WarQuestSelectionMaster = (void *)sub_B2C374(object___TypeInfo, 4LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  v57 = (System_Object_array *)MasterData_WarQuestSelectionMaster;
  v54 = afterStoneNum;
  if ( v55 )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   v55,
                                                   *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster + 64LL));
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v57->max_length )
    goto LABEL_91;
  v57->m_Items[0] = v55;
  sub_B2C2F8(v57->m_Items, v55);
  v86 = max_length;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  v58 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v57->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v57->max_length <= 1 )
    goto LABEL_91;
  v57->m_Items[1] = v58;
  sub_B2C2F8(&v57->m_Items[1], v58);
  v85 = v42;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
  v59 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v57->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v57->max_length <= 2 )
    goto LABEL_91;
  v57->m_Items[2] = v59;
  sub_B2C2F8(&v57->m_Items[2], v59);
  v84 = v76;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  v60 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v57->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v57->max_length <= 3 )
    goto LABEL_91;
  v57->m_Items[3] = v60;
  sub_B2C2F8(&v57->m_Items[3], v60);
  MasterData_WarQuestSelectionMaster = System_String__Format_44384256(v56, v57, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_90;
  v53 = (System_String_o *)MasterData_WarQuestSelectionMaster;
LABEL_59:
  UILabel__set_text(infoMsgLabel, v53, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v63 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  v86 = v77;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  if ( !v63 )
    goto LABEL_90;
  v64 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( !v63->max_length )
    goto LABEL_91;
  v63->m_Items[0] = v64;
  sub_B2C2F8(v63->m_Items, v64);
  v85 = v78;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
  v65 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v63->max_length <= 1 )
    goto LABEL_91;
  v63->m_Items[1] = v65;
  sub_B2C2F8(&v63->m_Items[1], v65);
  v84 = v79;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  v66 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v63->max_length <= 2 )
    goto LABEL_91;
  v63->m_Items[2] = v66;
  sub_B2C2F8(&v63->m_Items[2], v66);
  v83 = v54;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  v67 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v63->max_length <= 3 )
    goto LABEL_91;
  v63->m_Items[3] = v67;
  sub_B2C2F8(&v63->m_Items[3], v67);
  v82 = afterChargeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v68 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
  }
  if ( v63->max_length <= 4 )
    goto LABEL_91;
  v63->m_Items[4] = v68;
  sub_B2C2F8(&v63->m_Items[4], v68);
  v81 = afterFreeStoneNum;
  MasterData_WarQuestSelectionMaster = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  v69 = (Il2CppObject *)MasterData_WarQuestSelectionMaster;
  if ( MasterData_WarQuestSelectionMaster )
  {
    MasterData_WarQuestSelectionMaster = (void *)sub_B2C41C(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v63->obj.klass->_1.element_class);
    if ( !MasterData_WarQuestSelectionMaster )
    {
LABEL_92:
      v75 = sub_B2C454();
      sub_B2C400(v75, 0LL);
    }
  }
  if ( v63->max_length <= 5 )
  {
LABEL_91:
    v74 = sub_B2C460(MasterData_WarQuestSelectionMaster);
    sub_B2C400(v74, 0LL);
  }
  v63->m_Items[5] = v69;
  sub_B2C2F8(&v63->m_Items[5], v69);
  MasterData_WarQuestSelectionMaster = System_String__Format_44384256(v62, v63, 0LL);
  if ( !msgLabel )
    goto LABEL_90;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v71);
  MasterData_WarQuestSelectionMaster = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v72);
  v73 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
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
  SummonConfirmDlgComponent_c *v21; // x0
  const MethodInfo *v22; // [xsp+8h] [xbp-58h]
  int32_t v23; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4185866 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_3327/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_4185866 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v25 = needPointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = havePointNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = afterPointNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v20 = System_String__Format_44306596(v16, v17, v18, v19, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B2C2F8(&this->fields.autoSaleDialogCloseCallbackFunc, autoSaleDialogCloseCallback);
  v21 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v21 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v20,
    0LL,
    callback,
    v21->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v22);
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
  __int64 v49; // x1
  Il2CppObject *v50; // x25
  Il2CppObject *v51; // x25
  Il2CppObject *v52; // x25
  Il2CppObject *v53; // x25
  Il2CppObject *v54; // x25
  Il2CppObject *v55; // x25
  Il2CppObject *v56; // x25
  Il2CppObject *v57; // x25
  System_String_o *v58; // x26
  int32_t v59; // w8
  int32_t v60; // w19
  int32_t v61; // w24
  int32_t v62; // w20
  SummonConfirmDlgComponent_o *v63; // x25
  System_String_o *v64; // x28
  Il2CppObject *DateTime; // x0
  System_String_o *v66; // x0
  int32_t v67; // w27
  int32_t v68; // w1
  int32_t v69; // w1
  int32_t v70; // w22
  Il2CppObject *v71; // x0
  System_String_o *v72; // x25
  System_String_o *v73; // x19
  System_String_o *v74; // x25
  Il2CppObject *v75; // x24
  Il2CppObject *v76; // x0
  System_String_o *v77; // x26
  System_String_o *v78; // x24
  System_Object_array *v79; // x25
  Il2CppObject *v80; // x22
  Il2CppObject *v81; // x21
  Il2CppObject *v82; // x20
  Il2CppObject *v83; // x20
  Il2CppObject *v84; // x20
  Il2CppObject *v85; // x20
  System_String_o *v86; // x20
  System_String_o *v87; // x22
  _QWORD **v88; // x23
  __int64 v89; // x21
  __int16 v90; // w8
  __int64 v91; // x21
  __int64 v92; // x21
  __int64 v93; // x21
  System_String_o *v94; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  UnityEngine_Object_o *bonusSelectMsgInfo; // x25
  System_String_o *v97; // x22
  int32_t v98; // w25
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x25
  System_String_o *v100; // x27
  UnityEngine_Transform_o *transform; // x26
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v104; // x3
  __int64 v105; // x0
  __int64 v106; // x0
  const MethodInfo *v107; // [xsp+8h] [xbp-A8h]
  System_String_o *v108; // [xsp+10h] [xbp-A0h]
  int32_t v109; // [xsp+34h] [xbp-7Ch]
  int32_t v111; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t v112; // [xsp+40h] [xbp-70h] BYREF
  int32_t v113; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t v114; // [xsp+48h] [xbp-68h] BYREF
  int32_t v115; // [xsp+4Ch] [xbp-64h] BYREF
  int32_t v116; // [xsp+50h] [xbp-60h] BYREF
  int32_t v117; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t v118; // [xsp+58h] [xbp-58h] BYREF
  int32_t v119; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4185864 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, title);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_B2C35C(&int_TypeInfo, v29);
    sub_B2C35C(&LocalizationManager_TypeInfo, v30);
    sub_B2C35C(&object___TypeInfo, v31);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v32);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v33);
    sub_B2C35C(&StringLiteral_3307/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_B2C35C(&StringLiteral_3312/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v35);
    sub_B2C35C(&StringLiteral_3308/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v36);
    sub_B2C35C(&StringLiteral_3310/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v37);
    sub_B2C35C(&StringLiteral_3326/*"CONFIRM_PAYSUMMON_MSG"*/, v38);
    sub_B2C35C(&StringLiteral_3309/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v39);
    sub_B2C35C(&StringLiteral_12467/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B2C35C(&StringLiteral_12454/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_B2C35C(&StringLiteral_12420/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_B2C35C(&StringLiteral_3311/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4185864 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_B2C2F8(&this->fields.extraGiftEntList, giftEntList);
  if ( isAppendSummon )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3312/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else if ( type == 7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3311/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3326/*"CONFIRM_PAYSUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  v47 = (System_Object_array *)sub_B2C374(object___TypeInfo, 8LL);
  v119 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v119);
  if ( !v47 )
    goto LABEL_114;
  v50 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( !v47->max_length )
    goto LABEL_112;
  v47->m_Items[0] = v50;
  sub_B2C2F8(v47->m_Items, v50);
  v118 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v118);
  v51 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_112;
  v47->m_Items[1] = v51;
  sub_B2C2F8(&v47->m_Items[1], v51);
  v117 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v117);
  v52 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_112;
  v47->m_Items[2] = v52;
  sub_B2C2F8(&v47->m_Items[2], v52);
  v116 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v116);
  v53 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_112;
  v47->m_Items[3] = v53;
  sub_B2C2F8(&v47->m_Items[3], v53);
  v115 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v54 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_112;
  v47->m_Items[4] = v54;
  sub_B2C2F8(&v47->m_Items[4], v54);
  v114 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v114);
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_112;
  v47->m_Items[5] = v55;
  sub_B2C2F8(&v47->m_Items[5], v55);
  v113 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v113);
  v56 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_112;
  v47->m_Items[6] = v56;
  sub_B2C2F8(&v47->m_Items[6], v56);
  v112 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v112);
  v57 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_113;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_112;
  v47->m_Items[7] = v57;
  sub_B2C2F8(&v47->m_Items[7], v57);
  v108 = System_String__Format_44384256(v46, v47, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12467/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    v59 = haveChargeStoneNum;
    v60 = num;
    v61 = haveStoneNum;
    v62 = v59;
    v63 = this;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v66 = System_String__Format(v64, DateTime, 0LL);
    v58 = System_String__Concat_44305532(v58, v66, 0LL);
    v67 = v62;
    haveStoneNum = v61;
    num = v60;
    this = v63;
  }
  else
  {
    v67 = haveChargeStoneNum;
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  v68 = isPickup ? 494 : 434;
  v109 = haveFreeStoneNum;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v68, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  if ( isPickup )
    v69 = 76;
  else
    v69 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v69, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v70 = num;
    v119 = gachaId;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
    v72 = System_String__Format((System_String_o *)StringLiteral_3310/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v71, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = LocalizationManager__Get(v72, 0LL);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3308/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v118 = price;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
    v117 = v70;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117);
    v77 = System_String__Format_44301068(v74, v75, v76, 0LL);
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3309/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v79 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
    v116 = haveStoneNum;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v116);
    if ( !v79 )
      goto LABEL_114;
    v80 = (Il2CppObject *)addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v79->max_length )
        goto LABEL_112;
      v79->m_Items[0] = v80;
      sub_B2C2F8(v79->m_Items, v80);
      v115 = v67;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v115);
      v81 = (Il2CppObject *)addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
      {
        if ( v79->max_length <= 1 )
          goto LABEL_112;
        v79->m_Items[1] = v81;
        sub_B2C2F8(&v79->m_Items[1], v81);
        v114 = v109;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v114);
        v82 = (Il2CppObject *)addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
        {
          if ( v79->max_length <= 2 )
            goto LABEL_112;
          v79->m_Items[2] = v82;
          sub_B2C2F8(&v79->m_Items[2], v82);
          v113 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v113);
          v83 = (Il2CppObject *)addMsgBgSprite;
          if ( !addMsgBgSprite || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
          {
            if ( v79->max_length <= 3 )
              goto LABEL_112;
            v79->m_Items[3] = v83;
            sub_B2C2F8(&v79->m_Items[3], v83);
            v112 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v112);
            v84 = (Il2CppObject *)addMsgBgSprite;
            if ( !addMsgBgSprite || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
            {
              if ( v79->max_length <= 4 )
                goto LABEL_112;
              v79->m_Items[4] = v84;
              sub_B2C2F8(&v79->m_Items[4], v84);
              v111 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v111);
              v85 = (Il2CppObject *)addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_B2C41C(addMsgBgSprite, v79->obj.klass->_1.element_class)) != 0 )
              {
                if ( v79->max_length > 5 )
                {
                  v79->m_Items[5] = v85;
                  sub_B2C2F8(&v79->m_Items[5], v85);
                  v86 = System_String__Format_44384256(v78, v79, 0LL);
                  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3307/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v88 = (_QWORD **)Method_System_Array_Empty_object___;
                  v89 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
                  v90 = *(_WORD *)(v89 + 306);
                  if ( (v90 & 1) == 0 )
                  {
                    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
                    v90 = *(_WORD *)(v89 + 306);
                  }
                  if ( (v90 & 0x400) != 0 )
                  {
                    v91 = *v88[6];
                    if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
                      sub_AC505C(*v88[6]);
                    if ( !*(_DWORD *)(v91 + 224) )
                    {
                      v92 = *v88[6];
                      if ( (*(_BYTE *)(v92 + 306) & 1) == 0 )
                        sub_AC505C(*v88[6]);
                      j_il2cpp_runtime_class_init_0(v92);
                    }
                  }
                  v93 = *v88[6];
                  if ( (*(_BYTE *)(v93 + 306) & 1) == 0 )
                    sub_AC505C(*v88[6]);
                  v94 = System_String__Format_44384256(v87, **(System_Object_array ***)(v93 + 184), 0LL);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v97 = v94;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  v98 = shopIdIdx;
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_114;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v100 = v77;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
                    if ( !addMsgBgSprite )
                      goto LABEL_114;
                    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)addMsgBgSprite,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
                    sub_B2C2F8(&this->fields.bonusSelectMsgInfo, Component_srcLineSprite);
                    v98 = shopIdIdx;
                    v77 = v100;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      v73,
                      v77,
                      v86,
                      v97,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
                      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v104, callback, 14.0, 0LL, v98, 0, 1, v107);
                      return;
                    }
                  }
LABEL_114:
                  sub_B2C434(addMsgBgSprite, v49);
                }
LABEL_112:
                v105 = sub_B2C460(addMsgBgSprite);
                sub_B2C400(v105, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_113:
    v106 = sub_B2C454();
    sub_B2C400(v106, 0LL);
  }
  SummonConfirmDlgComponent__Open(this, title, v108, 0LL, callback, 14.0, v58, shopIdIdx, isAppendSummon, 0, v107);
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

  if ( (byte_4185865 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3328/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_B2C35C(&StringLiteral_3329/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_4185865 = 1;
  }
  if ( num == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v28 = haveTicketNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = afterTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v20 = System_String__Format_44301068(v17, v18, v19, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3329/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v28 = num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = haveTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = afterTicketNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v20 = System_String__Format_44306596(v21, v22, v23, v24, 0LL);
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
  if ( (byte_4185862 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&price);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_12384/*"STONE_PURCHASE"*/, v11);
    sub_B2C35C(&StringLiteral_12211/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4185862 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v24 = price;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v19 = (Il2CppObject *)System_Int32__ToString_38381416((int32_t)&v25, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
  v20 = System_String__Format_44306596(v16, v17, v18, v19, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12384/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_4185863 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_12212/*"SHORT_HAVE_POINT"*/, v8);
    sub_B2C35C(&StringLiteral_12210/*"SHORT_DLG_TITLE"*/, v9);
    byte_4185863 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SHORT_HAVE_POINT"*/, 0LL);
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

  if ( (byte_4185861 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_12384/*"STONE_PURCHASE"*/, v8);
    sub_B2C35C(&StringLiteral_12213/*"SHORT_HAVE_STONE"*/, v9);
    sub_B2C35C(&StringLiteral_12210/*"SHORT_DLG_TITLE"*/, v10);
    byte_4185861 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SHORT_HAVE_STONE"*/, 0LL);
  v17 = haveNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format(v12, v13, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12384/*"STONE_PURCHASE"*/, 0LL);
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
  __int64 v20; // x1
  GiftEntity_o *DataById; // x20
  WarEntity_o *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v24; // x23
  System_String_o *v25; // x21
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  System_String_o *v28; // x24
  int32_t mana; // w22
  BalanceConfig_c *v30; // x0
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x21
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v39; // [xsp+18h] [xbp-48h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_418586C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&giftId);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_12432/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_12433/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v14);
    sub_B2C35C(&StringLiteral_12434/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_12436/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_12435/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_418586C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_37;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !Instance )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             DataById->fields.objectId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
    Instance = (DataManager_o *)System_String__Format(v35, v36, 0LL);
    if ( Entity )
    {
      v37 = (System_String_o *)Instance;
      Instance = (DataManager_o *)this->fields.extraItemIconComponent;
      if ( Instance )
      {
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
        Instance = (DataManager_o *)this->fields.extraTitleLabel;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, v34, 0LL);
          Instance = (DataManager_o *)this->fields.extraMessageLabel;
          if ( Instance )
          {
            v33 = v37;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B2C434(Instance, v20);
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v24 = SelfUserGame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v40 = DataById->fields.num;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  Instance = (DataManager_o *)System_String__Format(v26, v27, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v28 = (System_String_o *)Instance;
  Instance = (DataManager_o *)this->fields.bonusItemIconComponent;
  if ( !Instance )
    goto LABEL_37;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, Entity->fields.id, -1, 0LL);
  if ( !v24 )
    goto LABEL_37;
  mana = v24->fields.mana;
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  if ( mana == v30->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12436/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12435/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v39 = DataById->fields.num;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v28 = System_String__Format(v31, v32, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)Instance, v25, 0LL);
  Instance = (DataManager_o *)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_37;
  v33 = v28;
LABEL_35:
  UILabel__set_text((UILabel_o *)Instance, v33, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  if ( (byte_418586B & 1) == 0 )
  {
    sub_B2C35C(&SummonConfirmDlgComponent_TypeInfo, *(_QWORD *)&shopIdIdx);
    byte_418586B = 1;
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
        sub_B2C434(baseWindowSprite, *(_QWORD *)&shopIdIdx);
      }
LABEL_52:
      v33 = sub_B2C460(baseWindowSprite);
      sub_B2C400(v33, 0LL);
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

  if ( (byte_418585E & 1) == 0 )
  {
    sub_B2C35C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418585E = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B2C728(v7);
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

  if ( (byte_418585F & 1) == 0 )
  {
    sub_B2C35C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418585F = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B2C728(v7);
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

  if ( (byte_418586A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_418586A = 1;
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
        sub_B2C434(confirmBtnObject, method);
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
    confirmBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_B2C434(0LL, isTutorial);
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
  System_Action_o *autoSaleDialogCloseCallbackFunc; // x20
  const MethodInfo *v7; // x2

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
    sub_B2C434(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B2C2F8(&this->fields.autoSaleDialogCloseCallbackFunc, 0LL);
    SummonConfirmDlgComponent__Close_20977548(this, 0LL, v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41847B1 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41847B1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SummonConfirmDlgComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}