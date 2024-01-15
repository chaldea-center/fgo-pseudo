void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonConfirmDlgComponent_c *v2; // x8

  if ( (byte_40F7D06 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_40F7D06 = 1;
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
  if ( (byte_40F7D05 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7D05 = 1;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B16F98(
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

  SummonConfirmDlgComponent__Close_21004260(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_21004260(
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7D01 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SummonConfirmDlgComponent_EndClose__, v10);
    byte_40F7D01 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  BonusSelectSummonMsgInfo_o *v11; // x0
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_40F7D02 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7D02 = 1;
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
    v11 = this->fields.bonusSelectMsgInfo;
    if ( v11 )
    {
      BonusSelectSummonMsgInfo__Init(v11, 0LL);
      goto LABEL_10;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_10:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  UILabel_o *confirmDetailLabel; // x0
  UILabel_o *infoMsgLabel; // x0
  UILabel_o *msgLabel; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *extraTitleLabel; // x0
  UILabel_o *extraMessageLabel; // x0
  UILabel_o *confirmBtnLb; // x20
  System_String_o *v17; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v19; // x0
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  SummonConfirmDlgComponent_c *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *v36; // x0
  UILabel_o *v37; // x0
  UILabel_o *v38; // x0
  UIWidget_o *baseWindowSprite; // x0
  UIWidget_o *v40; // x0
  UnityEngine_GameObject_o *defMsgInfo; // x0
  UnityEngine_GameObject_o *singleMsgInfo; // x0
  UnityEngine_GameObject_o *settingBtnObject; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *campaignLabel; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  BonusSelectSummonMsgInfo_o *v48; // x0
  UnityEngine_Component_o *bonusItemIconComponent; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *bonusMsgInfo; // x0
  UnityEngine_GameObject_o *v56; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x0
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7CF4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F7CF4 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_50;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmDetailLabel = this->fields.confirmDetailLabel;
  if ( !confirmDetailLabel )
    goto LABEL_50;
  UILabel__set_text(confirmDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( !infoMsgLabel )
    goto LABEL_50;
  UILabel__set_text(infoMsgLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_50;
  UILabel__set_text(msgLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_50;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraTitleLabel = this->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_50;
  UILabel__set_text(extraTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraMessageLabel = this->fields.extraMessageLabel;
  if ( !extraMessageLabel )
    goto LABEL_50;
  UILabel__set_text(extraMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_50;
  UILabel__set_text(confirmBtnLb, v17, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_50;
  UILabel__set_text(cancelBtnLb, v19, 0LL);
  confirmBtnObject = this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmBtnObject )
    goto LABEL_50;
  gameObject = UnityEngine_GameObject__get_gameObject(confirmBtnObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  addMsgInfo = this->fields.addMsgInfo;
  v23 = SummonConfirmDlgComponent_TypeInfo;
  if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v23 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v23->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  v24 = (UnityEngine_Component_o *)this->fields.msgLabel;
  if ( !v24 )
    goto LABEL_50;
  v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
  GameObjectExtensions__SetLocalPositionY(v25, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.extraGiftEntList, 0LL, v26, v27, v28, v29, v30, v31);
  v32 = (UnityEngine_Component_o *)this->fields.confirmTitleLabel;
  if ( !v32 )
    goto LABEL_50;
  v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v33,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  v34 = (UnityEngine_Component_o *)this->fields.confirmDetailLabel;
  if ( !v34 )
    goto LABEL_50;
  v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v35,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  v36 = this->fields.confirmTitleLabel;
  if ( !v36 )
    goto LABEL_50;
  UILabel__set_fontSize(v36, SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE, 0LL);
  v37 = this->fields.confirmDetailLabel;
  if ( !v37 )
    goto LABEL_50;
  UILabel__set_fontSize(v37, SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE, 0LL);
  v38 = this->fields.infoMsgLabel;
  if ( !v38 )
    goto LABEL_50;
  UILabel__set_fontSize(v38, SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_50;
  UIWidget__set_width(
    baseWindowSprite,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  v40 = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !v40 )
    goto LABEL_50;
  UIWidget__set_height(v40, SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT, 0LL);
  defMsgInfo = this->fields.defMsgInfo;
  if ( !defMsgInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(defMsgInfo, 0, 0LL);
  singleMsgInfo = this->fields.singleMsgInfo;
  if ( !singleMsgInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(singleMsgInfo, 0, 0LL);
  settingBtnObject = this->fields.settingBtnObject;
  if ( !settingBtnObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(settingBtnObject, 0, 0LL);
  v44 = this->fields.addMsgInfo;
  if ( !v44 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v44, 0, 0LL);
  campaignLabel = (UnityEngine_Component_o *)this->fields.campaignLabel;
  if ( !campaignLabel )
    goto LABEL_50;
  v46 = UnityEngine_Component__get_gameObject(campaignLabel, 0LL);
  if ( !v46 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v46, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    v48 = this->fields.bonusSelectMsgInfo;
    if ( !v48 )
      goto LABEL_50;
    BonusSelectSummonMsgInfo__Init(v48, 0LL);
  }
  bonusItemIconComponent = (UnityEngine_Component_o *)this->fields.bonusItemIconComponent;
  if ( !bonusItemIconComponent )
    goto LABEL_50;
  v50 = UnityEngine_Component__get_gameObject(bonusItemIconComponent, 0LL);
  if ( !v50 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v50, 0, 0LL);
  v51 = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !v51 )
    goto LABEL_50;
  v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
  if ( !v52 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v52, 0, 0LL);
  v53 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v53 )
    goto LABEL_50;
  v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
  if ( !v54 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v54, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !bonusMsgInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(bonusMsgInfo, 0, 0LL);
  v56 = this->fields.bonusMsgInfo;
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(v56, zero, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !extraMsgInfo
    || (UnityEngine_GameObject__SetActive(extraMsgInfo, 0, 0LL),
        v58 = this->fields.extraMsgInfo,
        v61 = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(v58, v61, 0LL),
        (v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_50:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v59, 0, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  AutomaticSaleDlgComponent_CallbackFunc_o *v11; // x21

  if ( (byte_40F7D03 & 1) == 0 )
  {
    sub_B16FFC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_40F7D03 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v11 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                            AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B170D4();
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v11, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_40F7D04 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_4203/*"ConfirmWindow/CloseButton"*/, v3);
    sub_B16FFC(&StringLiteral_4205/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v4);
    byte_40F7D04 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_4205/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21111220(v6, (System_String_o *)StringLiteral_4203/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  UILabel_o *v34; // x0
  System_String_o *v35; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  UILabel_o *v37; // x0
  System_String_o *v38; // x1
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v42; // x25
  int32_t v43; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v49; // w0
  UnityEngine_Component_o *v50; // x0
  int32_t v51; // w24
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o *v54; // x0
  float v55; // s8
  UnityEngine_GameObject_o *v56; // x0
  UILabel_o *v57; // x0
  UILabel_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *addMsgLabel; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  UIWidget_o *baseWindowSprite; // x0
  UIWidget_o *v64; // x0
  _BOOL8 v65; // x0
  const MethodInfo *giftId; // x1
  __int64 v67; // x2
  const MethodInfo *v68; // x3
  struct GachaExtraGiftEntity_array *v69; // x8
  int max_length; // w9
  unsigned int v71; // w10
  __int64 v72; // x22
  GachaExtraGiftEntity_o *v73; // x10
  UnityEngine_Object_o *bonusMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v75; // x8
  GachaExtraGiftEntity_o *v76; // x8
  UnityEngine_Object_o *extraMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v78; // x8
  GachaExtraGiftEntity_o *v79; // x8
  UIWidget_o *v80; // x20
  UIWidget_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v87; // s0
  UnityEngine_GameObject_o *v88; // x0
  float v89; // s8
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UnityEngine_GameObject_o *settingBtnObject; // x0
  bool v95; // w1
  UnityEngine_GameObject_o *singleMsgInfo; // x0
  UnityEngine_GameObject_o *defMsgInfo; // x0
  const MethodInfo *v98; // x1
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  System_Action_o *v103; // x20

  if ( (byte_40F7CFC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SummonConfirmDlgComponent_EndOpen__, v22);
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B16FFC(&StringLiteral_1/*""*/, v25);
    byte_40F7CFC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
    v34 = this->fields.confirmTitleLabel;
    if ( !v34 )
      goto LABEL_119;
    if ( title )
      v35 = title;
    else
      v35 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v34, v35, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    v37 = this->fields.confirmDetailLabel;
    if ( !v37 )
      goto LABEL_119;
    v38 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v37, v38, 0LL);
    v39 = (UnityEngine_Component_o *)this->fields.confirmDetailLabel;
    if ( !v39 )
      goto LABEL_119;
    v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
    GameObjectExtensions__SetLocalPositionY(v40, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL) )
  {
    v42 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      decideTxt = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    }
    if ( !v42 )
      goto LABEL_119;
    UILabel__set_text(v42, decideTxt, 0LL);
  }
  v43 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v43 <= 2 )
    {
      v45 = SummonConfirmDlgComponent_TypeInfo;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v45 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v45->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    v46 = (UnityEngine_Component_o *)this->fields.confirmTitleLabel;
    if ( !v46 )
      goto LABEL_119;
    v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v49 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v49 )
  {
    v50 = (UnityEngine_Component_o *)this->fields.confirmTitleLabel;
    if ( v43 <= 2 )
      v51 = 20;
    else
      v51 = 18;
    if ( !v50 )
      goto LABEL_119;
    v52 = flt_3133860[v43 > 2];
    v53 = UnityEngine_Component__get_gameObject(v50, 0LL);
    GameObjectExtensions__SetLocalPositionY(v53, v52, 0LL);
    v54 = (UnityEngine_Component_o *)this->fields.confirmDetailLabel;
    if ( !v54 )
      goto LABEL_119;
    v55 = flt_3133858[v43 > 2];
    v56 = UnityEngine_Component__get_gameObject(v54, 0LL);
    GameObjectExtensions__SetLocalPositionY(v56, v55, 0LL);
    v57 = this->fields.confirmTitleLabel;
    if ( !v57 )
      goto LABEL_119;
    UILabel__set_fontSize(v57, 20, 0LL);
    v58 = this->fields.confirmDetailLabel;
    if ( !v58 )
      goto LABEL_119;
    UILabel__set_fontSize(v58, v51, 0LL);
    v59 = this->fields.addMsgInfo;
    if ( !v59 )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive(v59, 1, 0LL);
    addMsgLabel = this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_119;
    UILabel__set_text(addMsgLabel, addMsg, 0LL);
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
    baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
    if ( !baseWindowSprite )
      goto LABEL_119;
    UIWidget__set_width(baseWindowSprite, 852, 0LL);
    v64 = (UIWidget_o *)this->fields.baseWindowSprite;
    if ( !v64 )
      goto LABEL_119;
    UIWidget__set_height(v64, 524, 0LL);
    v69 = this->fields.extraGiftEntList;
    if ( !v69 )
      goto LABEL_119;
    max_length = v69->max_length;
    if ( max_length >= 1 )
    {
      v71 = 0;
      while ( 1 )
      {
        if ( v71 >= max_length )
          goto LABEL_120;
        v72 = (int)v71;
        v73 = v69->m_Items[v71];
        if ( !v73 )
          goto LABEL_119;
        giftId = (const MethodInfo *)(unsigned int)v73->fields.giftId;
        if ( (_DWORD)giftId )
        {
          if ( v73->fields.idx == shopIdIdx )
            break;
        }
        v71 = v72 + 1;
        if ( (int)v72 + 1 >= max_length )
          goto LABEL_91;
      }
      SummonConfirmDlgComponent__SetBonusText(this, (int32_t)giftId, v73->fields.bonusType, v68);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v65 = UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL);
      if ( v65 )
      {
        v75 = this->fields.extraGiftEntList;
        if ( !v75 )
          goto LABEL_119;
        if ( (unsigned int)v72 >= v75->max_length )
          goto LABEL_120;
        v76 = v75->m_Items[v72];
        if ( !v76 )
          goto LABEL_119;
        if ( v76->fields.bonusType == 1 )
          SummonConfirmDlgComponent__SetBonusTextPos(this, giftId);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v65 = UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL);
      if ( v65 )
      {
        v78 = this->fields.extraGiftEntList;
        if ( !v78 )
          goto LABEL_119;
        if ( (unsigned int)v72 < v78->max_length )
        {
          v79 = v78->m_Items[v72];
          if ( !v79 )
            goto LABEL_119;
          if ( v79->fields.bonusType == 2 )
            SummonConfirmDlgComponent__SetExtraTextPos(this, giftId);
          goto LABEL_91;
        }
LABEL_120:
        sub_B17100(v65, giftId, v67);
        sub_B170A0();
      }
    }
LABEL_91:
    if ( isBonusSelect )
    {
      v80 = (UIWidget_o *)this->fields.baseWindowSprite;
      if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      }
      if ( !v80 )
        goto LABEL_119;
      UIWidget__set_width(v80, SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH, 0LL);
      v81 = (UIWidget_o *)this->fields.baseWindowSprite;
      if ( !v81 )
        goto LABEL_119;
      UIWidget__set_height(v81, 580, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
      v82 = this->fields.bonusMsgInfo;
      if ( !v82 )
        goto LABEL_119;
      v83 = UnityEngine_GameObject__get_gameObject(v82, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v83,
        SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
        0LL);
      v84 = this->fields.extraMsgInfo;
      if ( !v84 )
        goto LABEL_119;
      v85 = UnityEngine_GameObject__get_gameObject(v84, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
    }
    else
    {
      v87 = -34.0;
      v88 = this->fields.bonusMsgInfo;
      if ( v43 <= 2 )
        v87 = -30.0;
      if ( isAppendSummon )
        v89 = v87;
      else
        v89 = flt_3133868[v43 > 2];
      if ( !v88 )
        goto LABEL_119;
      v90 = UnityEngine_GameObject__get_gameObject(v88, 0LL);
      GameObjectExtensions__SetLocalPositionY(v90, v89, 0LL);
      v91 = this->fields.extraMsgInfo;
      if ( !v91 )
        goto LABEL_119;
      v92 = UnityEngine_GameObject__get_gameObject(v91, 0LL);
      GameObjectExtensions__SetLocalPositionY(v92, v89, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
      confirmBtnObject = this->fields.confirmBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_119;
      v85 = UnityEngine_GameObject__get_gameObject(confirmBtnObject, 0LL);
      BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
    }
    GameObjectExtensions__SetLocalPositionY(v85, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    goto LABEL_110;
  }
LABEL_111:
  settingBtnObject = this->fields.settingBtnObject;
  if ( (state & 0xFFFFFFFE) == 6 )
  {
    if ( !settingBtnObject )
      goto LABEL_119;
    v95 = 1;
  }
  else
  {
    if ( !settingBtnObject )
      goto LABEL_119;
    v95 = 0;
  }
  UnityEngine_GameObject__SetActive(settingBtnObject, v95, 0LL);
  singleMsgInfo = this->fields.singleMsgInfo;
  if ( !singleMsgInfo
    || (UnityEngine_GameObject__SetActive(singleMsgInfo, 0, 0LL), (defMsgInfo = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_119:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(defMsgInfo, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v98);
  v103 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v99, v100, v101, v102);
  System_Action___ctor(v103, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
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
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *campaignLabel; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  SummonConfirmDlgComponent_c *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // [xsp+8h] [xbp-78h]
  int32_t v40; // [xsp+18h] [xbp-68h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v42; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t remainNum[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F7CFB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, callback);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_B16FFC(&SummonControl_TypeInfo, v10);
    sub_B16FFC(&UserGachaMaster_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3311/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_B16FFC(&StringLiteral_3310/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_B16FFC(&StringLiteral_6465/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_40F7CFB = 1;
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
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3310/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
    v42 = maxNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    v23 = System_String__Format_43739268(v21, v16, v22, 0LL);
    if ( !this->fields.campaignLabel )
      goto LABEL_31;
    v24 = v23;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    campaignLabel = this->fields.campaignLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6465/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
    v41 = remainNum[0];
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v40 = maxNum;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v30 = System_String__Format_43739268(v27, v28, v29, 0LL);
    if ( !campaignLabel )
LABEL_31:
      sub_B170D4();
    UILabel__set_text(campaignLabel, v30, 0LL);
    v37 = SummonConfirmDlgComponent_TypeInfo;
    if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      v37 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v37->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3311/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v24 = System_String__Format(v38, v16, 0LL);
  }
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  SummonConfirmDlgComponent__Open(this, 0LL, v24, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v39);
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
  DataManager_o *v37; // x0
  GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GachaEntity_array *GachaDataInGroup; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x0
  WarEntity_o *Entity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WarEntity_o *v49; // x27
  struct System_String_o *name; // x8
  int v51; // w24
  int max_length; // w23
  GachaEntity_o *v53; // x8
  GachaEntity_o *v54; // x9
  System_Int32_array **v55; // x23
  System_Int32_array **v56; // x21
  UILabel_o *infoMsgLabel; // x27
  System_String_o *v58; // x20
  __int64 v59; // x2
  __int64 v60; // x0
  __int64 v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Object_array *v68; // x28
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x21
  System_String_o *v86; // x0
  System_String_o *v87; // x1
  int32_t v88; // w22
  System_Int32_array **age; // x21
  System_String_o *v90; // x28
  __int64 v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Object_array *v97; // x20
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x21
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x21
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x21
  System_String_o *v116; // x0
  UILabel_o *msgLabel; // x26
  System_String_o *v118; // x27
  __int64 v119; // x2
  System_Object_array *v120; // x28
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x20
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x20
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x20
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x20
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x20
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x20
  System_String_o *v157; // x0
  UILabel_o *confirmBtnLb; // x20
  System_String_o *v159; // x0
  UnityEngine_GameObject_o *defMsgInfo; // x0
  UnityEngine_GameObject_o *singleMsgInfo; // x0
  const MethodInfo *v162; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v164; // x1
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  System_Action_o *v169; // x20
  int32_t v170; // [xsp+0h] [xbp-80h]
  int32_t v171; // [xsp+4h] [xbp-7Ch]
  int32_t v172; // [xsp+8h] [xbp-78h]
  int32_t v173; // [xsp+Ch] [xbp-74h]
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+10h] [xbp-70h]
  int32_t v175; // [xsp+18h] [xbp-68h] BYREF
  int32_t v176; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v177; // [xsp+20h] [xbp-60h] BYREF
  int32_t v178; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v179; // [xsp+28h] [xbp-58h] BYREF
  int v180; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40F7CFD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_B16FFC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_B16FFC(&int_TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&object___TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_B16FFC(&StringLiteral_3315/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_B16FFC(&StringLiteral_3313/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_B16FFC(&StringLiteral_1/*""*/, v33);
    sub_B16FFC(&StringLiteral_3314/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_40F7CFD = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AAFCFC(v36);
  v37 = **(DataManager_o ***)(v36 + 184);
  if ( !v37 )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v37,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_90;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup(MasterData_WarQuestSelectionMaster, groupId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v170 = price;
  v171 = haveStoneNum;
  v172 = haveChargeStoneNum;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !v41 )
    goto LABEL_90;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v41,
             groupId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v49 = Entity;
  if ( !Entity )
    goto LABEL_15;
  name = Entity->fields.name;
  if ( !name )
    goto LABEL_90;
  if ( name[1].klass )
    v51 = *(&Entity->fields.id + 1);
  else
LABEL_15:
    v51 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.extraGiftEntList,
    (System_Int32_array **)giftEntList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !GachaDataInGroup )
    goto LABEL_90;
  max_length = GachaDataInGroup->max_length;
  v173 = haveFreeStoneNum;
  if ( max_length == 2 )
  {
    v53 = GachaDataInGroup->m_Items[0];
    if ( v53 )
    {
      v54 = GachaDataInGroup->m_Items[1];
      if ( v54 )
      {
        v55 = (System_Int32_array **)v53->fields.name;
        v56 = (System_Int32_array **)v54->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3313/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        v60 = sub_B17014(object___TypeInfo, 4LL, v59);
        if ( v60 )
        {
          v68 = (System_Object_array *)v60;
          if ( v55 )
          {
            v60 = sub_B170BC(v55, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
            if ( !v60 )
              goto LABEL_92;
          }
          if ( !v68->max_length )
            goto LABEL_91;
          v68->m_Items[0] = (Il2CppObject *)v55;
          sub_B16F98((BattleServantConfConponent_o *)v68->m_Items, v55, v62, v63, v64, v65, v66, v67);
          if ( v56 )
          {
            v60 = sub_B170BC(v56, v68->obj.klass->_1.element_class);
            if ( !v60 )
              goto LABEL_92;
          }
          if ( v68->max_length <= 1 )
            goto LABEL_91;
          v68->m_Items[1] = (Il2CppObject *)v56;
          sub_B16F98((BattleServantConfConponent_o *)&v68->m_Items[1], v56, v62, v69, v70, v71, v72, v73);
          v180 = v51;
          v60 = j_il2cpp_value_box_0(int_TypeInfo, &v180);
          v79 = (System_Int32_array **)v60;
          if ( v60 )
          {
            v60 = sub_B170BC(v60, v68->obj.klass->_1.element_class);
            if ( !v60 )
              goto LABEL_92;
          }
          if ( v68->max_length <= 2 )
            goto LABEL_91;
          v68->m_Items[2] = (Il2CppObject *)v79;
          sub_B16F98((BattleServantConfConponent_o *)&v68->m_Items[2], v79, v62, v74, v75, v76, v77, v78);
          v179 = v170;
          v60 = j_il2cpp_value_box_0(int_TypeInfo, &v179);
          v85 = (System_Int32_array **)v60;
          if ( v60 )
          {
            v60 = sub_B170BC(v60, v68->obj.klass->_1.element_class);
            if ( !v60 )
              goto LABEL_92;
          }
          if ( v68->max_length <= 3 )
            goto LABEL_91;
          v68->m_Items[3] = (Il2CppObject *)v85;
          sub_B16F98((BattleServantConfConponent_o *)&v68->m_Items[3], v85, v62, v80, v81, v82, v83, v84);
          v86 = System_String__Format_43822456(v58, v68, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_90;
          v87 = v86;
          v88 = afterStoneNum;
          goto LABEL_59;
        }
      }
    }
LABEL_90:
    sub_B170D4();
  }
  if ( !v49 )
    goto LABEL_90;
  age = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(v49->fields.age, 0LL) )
    age = (System_Int32_array **)v49->fields.age;
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3314/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  v60 = sub_B17014(object___TypeInfo, 4LL, v91);
  if ( !v60 )
    goto LABEL_90;
  v97 = (System_Object_array *)v60;
  v88 = afterStoneNum;
  if ( age )
  {
    v60 = sub_B170BC(age, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
    if ( !v60 )
      goto LABEL_92;
  }
  if ( !v97->max_length )
    goto LABEL_91;
  v97->m_Items[0] = (Il2CppObject *)age;
  sub_B16F98((BattleServantConfConponent_o *)v97->m_Items, age, v62, v92, v93, v94, v95, v96);
  v180 = max_length;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v180);
  v103 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v97->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v97->max_length <= 1 )
    goto LABEL_91;
  v97->m_Items[1] = (Il2CppObject *)v103;
  sub_B16F98((BattleServantConfConponent_o *)&v97->m_Items[1], v103, v62, v98, v99, v100, v101, v102);
  v179 = v51;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v179);
  v109 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v97->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v97->max_length <= 2 )
    goto LABEL_91;
  v97->m_Items[2] = (Il2CppObject *)v109;
  sub_B16F98((BattleServantConfConponent_o *)&v97->m_Items[2], v109, v62, v104, v105, v106, v107, v108);
  v178 = v170;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v178);
  v115 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v97->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v97->max_length <= 3 )
    goto LABEL_91;
  v97->m_Items[3] = (Il2CppObject *)v115;
  sub_B16F98((BattleServantConfConponent_o *)&v97->m_Items[3], v115, v62, v110, v111, v112, v113, v114);
  v116 = System_String__Format_43822456(v90, v97, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_90;
  v87 = v116;
LABEL_59:
  UILabel__set_text(infoMsgLabel, v87, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v120 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v119);
  v180 = v171;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v180);
  if ( !v120 )
    goto LABEL_90;
  v126 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( !v120->max_length )
    goto LABEL_91;
  v120->m_Items[0] = (Il2CppObject *)v126;
  sub_B16F98((BattleServantConfConponent_o *)v120->m_Items, v126, v62, v121, v122, v123, v124, v125);
  v179 = v172;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v179);
  v132 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v120->max_length <= 1 )
    goto LABEL_91;
  v120->m_Items[1] = (Il2CppObject *)v132;
  sub_B16F98((BattleServantConfConponent_o *)&v120->m_Items[1], v132, v62, v127, v128, v129, v130, v131);
  v178 = v173;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v178);
  v138 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v120->max_length <= 2 )
    goto LABEL_91;
  v120->m_Items[2] = (Il2CppObject *)v138;
  sub_B16F98((BattleServantConfConponent_o *)&v120->m_Items[2], v138, v62, v133, v134, v135, v136, v137);
  v177 = v88;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v177);
  v144 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v120->max_length <= 3 )
    goto LABEL_91;
  v120->m_Items[3] = (Il2CppObject *)v144;
  sub_B16F98((BattleServantConfConponent_o *)&v120->m_Items[3], v144, v62, v139, v140, v141, v142, v143);
  v176 = afterChargeStoneNum;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v176);
  v150 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_92;
  }
  if ( v120->max_length <= 4 )
    goto LABEL_91;
  v120->m_Items[4] = (Il2CppObject *)v150;
  sub_B16F98((BattleServantConfConponent_o *)&v120->m_Items[4], v150, v62, v145, v146, v147, v148, v149);
  v175 = afterFreeStoneNum;
  v60 = j_il2cpp_value_box_0(int_TypeInfo, &v175);
  v156 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = sub_B170BC(v60, v120->obj.klass->_1.element_class);
    if ( !v60 )
    {
LABEL_92:
      sub_B170F4(v60);
      sub_B170A0();
    }
  }
  if ( v120->max_length <= 5 )
  {
LABEL_91:
    sub_B17100(v60, v61, v62);
    sub_B170A0();
  }
  v120->m_Items[5] = (Il2CppObject *)v156;
  sub_B16F98((BattleServantConfConponent_o *)&v120->m_Items[5], v156, v62, v151, v152, v153, v154, v155);
  v157 = System_String__Format_43822456(v118, v120, 0LL);
  if ( !msgLabel )
    goto LABEL_90;
  UILabel__set_text(msgLabel, v157, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  v159 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_90;
  UILabel__set_text(confirmBtnLb, v159, 0LL);
  defMsgInfo = this->fields.defMsgInfo;
  this->fields.state = 4;
  if ( !defMsgInfo )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(defMsgInfo, 0, 0LL);
  singleMsgInfo = this->fields.singleMsgInfo;
  if ( !singleMsgInfo )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(singleMsgInfo, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v162);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v164);
  v169 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v165, v166, v167, v168);
  System_Action___ctor(v169, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v169, 0, 0LL);
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

  if ( (byte_40F7CFA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_3318/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_40F7CFA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v31 = needPointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v30 = havePointNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v29 = afterPointNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v20 = System_String__Format_43744796(v16, v17, v18, v19, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B16F98(
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
  __int64 v47; // x2
  System_Object_array *v48; // x27
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x25
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x25
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x25
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x25
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x25
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x25
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x25
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x25
  System_String_o *v100; // x26
  int32_t v101; // w8
  int32_t v102; // w19
  int32_t v103; // w24
  int32_t v104; // w20
  SummonConfirmDlgComponent_o *v105; // x25
  System_String_o *v106; // x28
  Il2CppObject *DateTime; // x0
  System_String_o *v108; // x0
  int32_t v109; // w27
  UIWidget_o *addMsgBgSprite; // x0
  int32_t v111; // w1
  UIWidget_o *v112; // x0
  int32_t v113; // w1
  int v114; // w22
  Il2CppObject *v115; // x0
  System_String_o *v116; // x25
  System_String_o *v117; // x19
  System_String_o *v118; // x25
  Il2CppObject *v119; // x24
  Il2CppObject *v120; // x0
  System_String_o *v121; // x26
  System_String_o *v122; // x24
  __int64 v123; // x2
  __int64 v124; // x25
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x22
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x21
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x20
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x20
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x20
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x20
  System_String_o *v161; // x20
  System_String_o *v162; // x22
  _QWORD **v163; // x23
  __int64 v164; // x21
  __int16 v165; // w8
  __int64 v166; // x21
  __int64 v167; // x21
  __int64 v168; // x21
  System_String_o *v169; // x0
  BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  UnityEngine_Object_o *bonusSelectMsgInfo; // x25
  System_String_o *v172; // x22
  bool v173; // w0
  int32_t v174; // w25
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x25
  System_String_o *v177; // x27
  UnityEngine_Transform_o *transform; // x26
  UnityEngine_GameObject_o *v179; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v188; // x0
  System_String_o *v189; // x3
  const MethodInfo *v190; // [xsp+8h] [xbp-A8h]
  System_String_o *v191; // [xsp+10h] [xbp-A0h]
  int32_t v192; // [xsp+34h] [xbp-7Ch]
  int32_t v194; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t v195; // [xsp+40h] [xbp-70h] BYREF
  int32_t v196; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t v197; // [xsp+48h] [xbp-68h] BYREF
  int32_t v198; // [xsp+4Ch] [xbp-64h] BYREF
  int32_t v199; // [xsp+50h] [xbp-60h] BYREF
  int32_t v200; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t v201; // [xsp+58h] [xbp-58h] BYREF
  int32_t v202; // [xsp+5Ch] [xbp-54h] BYREF

  v23 = haveStoneNum;
  v24 = num;
  if ( (byte_40F7CF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, title);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_B16FFC(&int_TypeInfo, v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&object___TypeInfo, v31);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v32);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v33);
    sub_B16FFC(&StringLiteral_3298/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_B16FFC(&StringLiteral_3303/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v35);
    sub_B16FFC(&StringLiteral_3299/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v36);
    sub_B16FFC(&StringLiteral_3301/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v37);
    sub_B16FFC(&StringLiteral_3317/*"CONFIRM_PAYSUMMON_MSG"*/, v38);
    sub_B16FFC(&StringLiteral_3300/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v39);
    sub_B16FFC(&StringLiteral_12411/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_B16FFC(&StringLiteral_12398/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_B16FFC(&StringLiteral_12365/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_B16FFC(&StringLiteral_3302/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_40F7CF8 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_B16F98(
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
    v45 = &StringLiteral_3303/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else if ( type == 7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3302/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3317/*"CONFIRM_PAYSUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  v48 = (System_Object_array *)sub_B17014(object___TypeInfo, 8LL, v47);
  v202 = price;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v202);
  if ( !v48 )
    goto LABEL_114;
  v57 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( !v48->max_length )
    goto LABEL_112;
  v48->m_Items[0] = (Il2CppObject *)v57;
  sub_B16F98((BattleServantConfConponent_o *)v48->m_Items, v57, v51, v52, v53, v54, v55, v56);
  v201 = v24;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v201);
  v63 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 1 )
    goto LABEL_112;
  v48->m_Items[1] = (Il2CppObject *)v63;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[1], v63, v51, v58, v59, v60, v61, v62);
  v200 = v23;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v200);
  v69 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 2 )
    goto LABEL_112;
  v48->m_Items[2] = (Il2CppObject *)v69;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[2], v69, v51, v64, v65, v66, v67, v68);
  v199 = haveFreeStoneNum;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v199);
  v75 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 3 )
    goto LABEL_112;
  v48->m_Items[3] = (Il2CppObject *)v75;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[3], v75, v51, v70, v71, v72, v73, v74);
  v198 = haveChargeStoneNum;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v198);
  v81 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 4 )
    goto LABEL_112;
  v48->m_Items[4] = (Il2CppObject *)v81;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[4], v81, v51, v76, v77, v78, v79, v80);
  v197 = afterStoneNum;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v197);
  v87 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 5 )
    goto LABEL_112;
  v48->m_Items[5] = (Il2CppObject *)v87;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[5], v87, v51, v82, v83, v84, v85, v86);
  v196 = afterFreeStoneNum;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v196);
  v93 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 6 )
    goto LABEL_112;
  v48->m_Items[6] = (Il2CppObject *)v93;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[6], v93, v51, v88, v89, v90, v91, v92);
  v195 = afterChargeStoneNum;
  v49 = j_il2cpp_value_box_0(int_TypeInfo, &v195);
  v99 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B170BC(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_113;
  }
  if ( v48->max_length <= 7 )
    goto LABEL_112;
  v48->m_Items[7] = (Il2CppObject *)v99;
  sub_B16F98((BattleServantConfConponent_o *)&v48->m_Items[7], v99, v51, v94, v95, v96, v97, v98);
  v191 = System_String__Format_43822456(v46, v48, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    v101 = haveChargeStoneNum;
    v102 = v24;
    v103 = v23;
    v104 = v101;
    v105 = this;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v108 = System_String__Format(v106, DateTime, 0LL);
    v100 = System_String__Concat_43743732(v100, v108, 0LL);
    v109 = v104;
    v23 = v103;
    v24 = v102;
    this = v105;
  }
  else
  {
    v109 = haveChargeStoneNum;
  }
  addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_114;
  v111 = isPickup ? 494 : 434;
  v192 = haveFreeStoneNum;
  UIWidget__set_width(addMsgBgSprite, v111, 0LL);
  v112 = (UIWidget_o *)this->fields.addMsgBgSprite;
  if ( !v112 )
    goto LABEL_114;
  if ( isPickup )
    v113 = 76;
  else
    v113 = 60;
  UIWidget__set_height(v112, v113, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v114 = v24;
    v202 = gachaId;
    v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v202);
    v116 = System_String__Format((System_String_o *)StringLiteral_3301/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v115, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = LocalizationManager__Get(v116, 0LL);
    v118 = LocalizationManager__Get((System_String_o *)StringLiteral_3299/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v201 = price;
    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v201);
    v200 = v114;
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
    v121 = System_String__Format_43739268(v118, v119, v120, 0LL);
    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v124 = sub_B17014(object___TypeInfo, 6LL, v123);
    v199 = v23;
    v49 = j_il2cpp_value_box_0(int_TypeInfo, &v199);
    if ( !v124 )
      goto LABEL_114;
    v130 = (System_Int32_array **)v49;
    if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v124 + 24) )
        goto LABEL_112;
      *(_QWORD *)(v124 + 32) = v130;
      sub_B16F98((BattleServantConfConponent_o *)(v124 + 32), v130, v51, v125, v126, v127, v128, v129);
      v198 = v109;
      v49 = j_il2cpp_value_box_0(int_TypeInfo, &v198);
      v136 = (System_Int32_array **)v49;
      if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v124 + 24) <= 1u )
          goto LABEL_112;
        *(_QWORD *)(v124 + 40) = v136;
        sub_B16F98((BattleServantConfConponent_o *)(v124 + 40), v136, v51, v131, v132, v133, v134, v135);
        v197 = v192;
        v49 = j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v142 = (System_Int32_array **)v49;
        if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v124 + 24) <= 2u )
            goto LABEL_112;
          *(_QWORD *)(v124 + 48) = v142;
          sub_B16F98((BattleServantConfConponent_o *)(v124 + 48), v142, v51, v137, v138, v139, v140, v141);
          v196 = afterStoneNum;
          v49 = j_il2cpp_value_box_0(int_TypeInfo, &v196);
          v148 = (System_Int32_array **)v49;
          if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v124 + 24) <= 3u )
              goto LABEL_112;
            *(_QWORD *)(v124 + 56) = v148;
            sub_B16F98((BattleServantConfConponent_o *)(v124 + 56), v148, v51, v143, v144, v145, v146, v147);
            v195 = afterChargeStoneNum;
            v49 = j_il2cpp_value_box_0(int_TypeInfo, &v195);
            v154 = (System_Int32_array **)v49;
            if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v124 + 24) <= 4u )
                goto LABEL_112;
              *(_QWORD *)(v124 + 64) = v154;
              sub_B16F98((BattleServantConfConponent_o *)(v124 + 64), v154, v51, v149, v150, v151, v152, v153);
              v194 = afterFreeStoneNum;
              v49 = j_il2cpp_value_box_0(int_TypeInfo, &v194);
              v160 = (System_Int32_array **)v49;
              if ( !v49 || (v49 = sub_B170BC(v49, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v124 + 24) > 5u )
                {
                  *(_QWORD *)(v124 + 72) = v160;
                  sub_B16F98((BattleServantConfConponent_o *)(v124 + 72), v160, v51, v155, v156, v157, v158, v159);
                  v161 = System_String__Format_43822456(v122, (System_Object_array *)v124, 0LL);
                  v162 = LocalizationManager__Get((System_String_o *)StringLiteral_3298/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v163 = (_QWORD **)Method_System_Array_Empty_object___;
                  v164 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
                  v165 = *(_WORD *)(v164 + 306);
                  if ( (v165 & 1) == 0 )
                  {
                    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
                    v165 = *(_WORD *)(v164 + 306);
                  }
                  if ( (v165 & 0x400) != 0 )
                  {
                    v166 = *v163[6];
                    if ( (*(_BYTE *)(v166 + 306) & 1) == 0 )
                      sub_AAFCFC(*v163[6]);
                    if ( !*(_DWORD *)(v166 + 224) )
                    {
                      v167 = *v163[6];
                      if ( (*(_BYTE *)(v167 + 306) & 1) == 0 )
                        sub_AAFCFC(*v163[6]);
                      j_il2cpp_runtime_class_init_0(v167);
                    }
                  }
                  v168 = *v163[6];
                  if ( (*(_BYTE *)(v168 + 306) & 1) == 0 )
                    sub_AAFCFC(*v163[6]);
                  v169 = System_String__Format_43822456(v162, **(System_Object_array ***)(v168 + 184), 0LL);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v172 = v169;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  v173 = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  v174 = shopIdIdx;
                  if ( v173 )
                  {
                    if ( !assetManager )
                      goto LABEL_114;
                    baseWindow = this->fields.baseWindow;
                    if ( !baseWindow )
                      goto LABEL_114;
                    MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v177 = v121;
                    transform = UnityEngine_GameObject__get_transform(baseWindow, 0LL);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v179 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                         (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                         transform,
                                                         (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
                    if ( !v179 )
                      goto LABEL_114;
                    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v179,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                      Component_srcLineSprite,
                      v181,
                      v182,
                      v183,
                      v184,
                      v185,
                      v186);
                    v174 = shopIdIdx;
                    v121 = v177;
                  }
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      *p_bonusSelectMsgInfo,
                      gachaId,
                      v117,
                      v121,
                      v161,
                      v172,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v188 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, v188, 0LL);
                      v189 = LocalizationManager__Get((System_String_o *)StringLiteral_12365/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v189, callback, 14.0, 0LL, v174, 0, 1, v190);
                      return;
                    }
                  }
LABEL_114:
                  sub_B170D4();
                }
LABEL_112:
                sub_B17100(v49, v50, v51);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
LABEL_113:
    sub_B170F4(v49);
    sub_B170A0();
  }
  SummonConfirmDlgComponent__Open(this, title, v191, 0LL, callback, 14.0, v100, shopIdIdx, isAppendSummon, 0, v190);
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

  if ( (byte_40F7CF9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3319/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_B16FFC(&StringLiteral_3320/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40F7CF9 = 1;
  }
  if ( num == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3319/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v28 = haveTicketNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = afterTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v20 = System_String__Format_43739268(v17, v18, v19, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3320/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v28 = num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = haveTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = afterTicketNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v20 = System_String__Format_43744796(v21, v22, v23, v24, 0LL);
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
  if ( (byte_40F7CF6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&price);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_12329/*"STONE_PURCHASE"*/, v11);
    sub_B16FFC(&StringLiteral_12158/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40F7CF6 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12158/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v24 = price;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v19 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v25, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
  v20 = System_String__Format_43744796(v16, v17, v18, v19, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12329/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_40F7CF7 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12159/*"SHORT_HAVE_POINT"*/, v8);
    sub_B16FFC(&StringLiteral_12157/*"SHORT_DLG_TITLE"*/, v9);
    byte_40F7CF7 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12157/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12159/*"SHORT_HAVE_POINT"*/, 0LL);
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

  if ( (byte_40F7CF5 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12329/*"STONE_PURCHASE"*/, v8);
    sub_B16FFC(&StringLiteral_12160/*"SHORT_HAVE_STONE"*/, v9);
    sub_B16FFC(&StringLiteral_12157/*"SHORT_DLG_TITLE"*/, v10);
    byte_40F7CF5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12157/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12160/*"SHORT_HAVE_STONE"*/, 0LL);
  v17 = haveNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format(v12, v13, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12329/*"STONE_PURCHASE"*/, 0LL);
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
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GiftEntity_o *DataById; // x20
  WebViewManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x0
  WarEntity_o *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v26; // x23
  System_String_o *v27; // x21
  System_String_o *v28; // x24
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x24
  ItemIconComponent_o *bonusItemIconComponent; // x0
  int32_t mana; // w22
  BalanceConfig_c *v34; // x0
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *extraMessageLabel; // x0
  System_String_o *v39; // x1
  System_String_o *v40; // x21
  System_String_o *v41; // x23
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x20
  ItemIconComponent_o *extraItemIconComponent; // x0
  UILabel_o *extraTitleLabel; // x0
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v48; // [xsp+18h] [xbp-48h] BYREF
  int32_t v49; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40F7D00 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&giftId);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_12376/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v13);
    sub_B16FFC(&StringLiteral_12377/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v14);
    sub_B16FFC(&StringLiteral_12378/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v15);
    sub_B16FFC(&StringLiteral_12380/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_12379/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40F7D00 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, giftId, 0LL);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_37;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v22,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !v23 )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v23,
             DataById->fields.objectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12378/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
    v43 = System_String__Format(v41, v42, 0LL);
    if ( Entity )
    {
      v44 = v43;
      extraItemIconComponent = this->fields.extraItemIconComponent;
      if ( extraItemIconComponent )
      {
        ItemIconComponent__SetItem(extraItemIconComponent, Entity->fields.id, -1, 0LL);
        extraTitleLabel = this->fields.extraTitleLabel;
        if ( extraTitleLabel )
        {
          UILabel__set_text(extraTitleLabel, v40, 0LL);
          extraMessageLabel = this->fields.extraMessageLabel;
          if ( extraMessageLabel )
          {
            v39 = v44;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v26 = SelfUserGame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12377/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v49 = DataById->fields.num;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v30 = System_String__Format(v28, v29, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v31 = v30;
  bonusItemIconComponent = this->fields.bonusItemIconComponent;
  if ( !bonusItemIconComponent )
    goto LABEL_37;
  ItemIconComponent__SetItem(bonusItemIconComponent, Entity->fields.id, -1, 0LL);
  if ( !v26 )
    goto LABEL_37;
  mana = v26->fields.mana;
  v34 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  if ( mana == v34->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12380/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12379/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v48 = DataById->fields.num;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v31 = System_String__Format(v35, v36, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, v27, 0LL);
  extraMessageLabel = this->fields.messageLabel;
  if ( !extraMessageLabel )
    goto LABEL_37;
  v39 = v31;
LABEL_35:
  UILabel__set_text(extraMessageLabel, v39, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetBonusTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *titleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *messageLabel; // x9
  int v6; // w8
  int v7; // w22
  UnityEngine_Component_o *bonusItemSpr; // x0
  int v9; // w23
  int m_CachedPtr; // w24
  int v11; // w20
  int v12; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  int v22; // w21
  UnityEngine_GameObject_o *v23; // x0
  int v24; // w8
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *bonusItemIconComponent; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *bonusMsgInfo; // x0

  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_31;
  mWidth = titleLabel->fields.mWidth;
  messageLabel = this->fields.messageLabel;
  v6 = mWidth >= 0 ? titleLabel->fields.mWidth : mWidth + 1;
  if ( !messageLabel )
    goto LABEL_31;
  v7 = messageLabel->fields.mWidth;
  bonusItemSpr = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  v9 = v7 >= 0 ? messageLabel->fields.mWidth : v7 + 1;
  if ( !bonusItemSpr )
    goto LABEL_31;
  m_CachedPtr = bonusItemSpr[6].fields.m_CachedPtr;
  v11 = v6 >> 1;
  v12 = m_CachedPtr >= 0 ? bonusItemSpr[6].fields.m_CachedPtr : m_CachedPtr + 1;
  gameObject = UnityEngine_Component__get_gameObject(bonusItemSpr, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v11 + (v12 >> 1)), 0LL);
  v14 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  if ( !v14 )
    goto LABEL_31;
  v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, 1.0, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  if ( !v16 )
    goto LABEL_31;
  v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !v17 )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v20 )
    goto LABEL_31;
  v21 = *(float *)&localPosition;
  v22 = v7 + mWidth + m_CachedPtr;
  v23 = UnityEngine_Component__get_gameObject(v20, 0LL);
  GameObjectExtensions__SetLocalPositionX(v23, (float)(v21 + (float)(v9 >> 1)) + (float)(v12 >> 1), 0LL);
  v24 = v22 >= 0 ? v22 : v22 + 1;
  GameObjectExtensions__SetLocalPositionX(this->fields.bonusMsgInfo, (float)(v11 - (v24 >> 1)), 0LL);
  v25 = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !v25 )
    goto LABEL_31;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !v26 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  v27 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v27 )
    goto LABEL_31;
  v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
  if ( !v28 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  v29 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  if ( !v29
    || (v30 = UnityEngine_Component__get_gameObject(v29, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v30, 1, 0LL),
        (bonusItemIconComponent = (UnityEngine_Component_o *)this->fields.bonusItemIconComponent) == 0LL)
    || (v32 = UnityEngine_Component__get_gameObject(bonusItemIconComponent, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v32, 1, 0LL), (bonusMsgInfo = this->fields.bonusMsgInfo) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(bonusMsgInfo, 1, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *extraTitleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *extraMessageLabel; // x9
  int v6; // w8
  int v7; // w22
  UnityEngine_Component_o *extraItemSpr; // x0
  int v9; // w23
  int m_CachedPtr; // w24
  int v11; // w20
  int v12; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  int v22; // w21
  UnityEngine_GameObject_o *v23; // x0
  int v24; // w8
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *extraItemIconComponent; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *extraMsgInfo; // x0

  extraTitleLabel = this->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_31;
  mWidth = extraTitleLabel->fields.mWidth;
  extraMessageLabel = this->fields.extraMessageLabel;
  v6 = mWidth >= 0 ? extraTitleLabel->fields.mWidth : mWidth + 1;
  if ( !extraMessageLabel )
    goto LABEL_31;
  v7 = extraMessageLabel->fields.mWidth;
  extraItemSpr = (UnityEngine_Component_o *)this->fields.extraItemSpr;
  v9 = v7 >= 0 ? extraMessageLabel->fields.mWidth : v7 + 1;
  if ( !extraItemSpr )
    goto LABEL_31;
  m_CachedPtr = extraItemSpr[6].fields.m_CachedPtr;
  v11 = v6 >> 1;
  v12 = m_CachedPtr >= 0 ? extraItemSpr[6].fields.m_CachedPtr : m_CachedPtr + 1;
  gameObject = UnityEngine_Component__get_gameObject(extraItemSpr, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v11 + (v12 >> 1)), 0LL);
  v14 = (UnityEngine_Component_o *)this->fields.extraItemSpr;
  if ( !v14 )
    goto LABEL_31;
  v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, 1.0, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.extraItemSpr;
  if ( !v16 )
    goto LABEL_31;
  v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !v17 )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.extraMessageLabel;
  if ( !v20 )
    goto LABEL_31;
  v21 = *(float *)&localPosition;
  v22 = v7 + mWidth + m_CachedPtr;
  v23 = UnityEngine_Component__get_gameObject(v20, 0LL);
  GameObjectExtensions__SetLocalPositionX(v23, (float)(v21 + (float)(v9 >> 1)) + (float)(v12 >> 1), 0LL);
  v24 = v22 >= 0 ? v22 : v22 + 1;
  GameObjectExtensions__SetLocalPositionX(this->fields.extraMsgInfo, (float)(v11 - (v24 >> 1)), 0LL);
  v25 = (UnityEngine_Component_o *)this->fields.extraTitleLabel;
  if ( !v25 )
    goto LABEL_31;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !v26 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  v27 = (UnityEngine_Component_o *)this->fields.extraMessageLabel;
  if ( !v27 )
    goto LABEL_31;
  v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
  if ( !v28 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  v29 = (UnityEngine_Component_o *)this->fields.extraItemSpr;
  if ( !v29
    || (v30 = UnityEngine_Component__get_gameObject(v29, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v30, 1, 0LL),
        (extraItemIconComponent = (UnityEngine_Component_o *)this->fields.extraItemIconComponent) == 0LL)
    || (v32 = UnityEngine_Component__get_gameObject(extraItemIconComponent, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v32, 1, 0LL), (extraMsgInfo = this->fields.extraMsgInfo) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(extraMsgInfo, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  int32_t state; // w8
  UIWidget_o *baseWindowSprite; // x0
  UIWidget_o *v7; // x0
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *infoMsgLabel; // x0
  UnityEngine_GameObject_o *singleMsgInfo; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *msgLabel; // x0
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x8
  __int64 v20; // x9
  GachaExtraGiftEntity_o *v21; // x8
  int32_t giftId; // w1
  struct GachaExtraGiftEntity_array *v23; // x8
  GachaExtraGiftEntity_o *v24; // x8
  SummonConfirmDlgComponent_c *v25; // x0
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  const MethodInfo *v27; // x1
  signed int v29; // w10
  __int64 v30; // x23
  GachaExtraGiftEntity_o *v31; // x9
  GachaExtraGiftEntity_o *v32; // x9
  SummonConfirmDlgComponent_c *v33; // x0
  UnityEngine_GameObject_o *v34; // x21
  const MethodInfo *v35; // x1
  GachaExtraGiftEntity_o *v36; // x9
  const MethodInfo *v37; // x1
  SummonConfirmDlgComponent_c *v38; // x0
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  const MethodInfo *v40; // x1

  if ( (byte_40F7CFF & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_TypeInfo, *(_QWORD *)&shopIdIdx);
    byte_40F7CFF = 1;
  }
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_width(baseWindowSprite, 780, 0LL);
  v7 = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !v7 )
    goto LABEL_51;
  UIWidget__set_height(v7, 480, 0LL);
  confirmBtnObject = this->fields.confirmBtnObject;
  if ( !confirmBtnObject )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject(confirmBtnObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( !infoMsgLabel )
    goto LABEL_51;
  UILabel__set_fontSize(infoMsgLabel, 20, 0LL);
  singleMsgInfo = this->fields.singleMsgInfo;
  if ( !singleMsgInfo )
    goto LABEL_51;
  v12 = UnityEngine_GameObject__get_gameObject(singleMsgInfo, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 19.0, 0LL);
  msgLabel = (UnityEngine_Component_o *)this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_51;
  v14 = UnityEngine_Component__get_gameObject(msgLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, -29.0, 0LL);
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_51;
  v20 = *(_QWORD *)&extraGiftEntList->max_length;
  if ( (_DWORD)v20 == 1 )
  {
    v21 = extraGiftEntList->m_Items[0];
    if ( !v21 )
      goto LABEL_51;
    giftId = v21->fields.giftId;
    if ( giftId || v21->fields.idx == shopIdIdx )
    {
      SummonConfirmDlgComponent__SetBonusText(this, giftId, v21->fields.bonusType, v18);
      v23 = this->fields.extraGiftEntList;
      if ( !v23 )
        goto LABEL_51;
      if ( v23->max_length )
      {
        v24 = v23->m_Items[0];
        if ( v24 )
        {
          if ( v24->fields.bonusType == 1 )
          {
            v25 = SummonConfirmDlgComponent_TypeInfo;
            bonusMsgInfo = this->fields.bonusMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v25 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(bonusMsgInfo, v25->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetBonusTextPos(this, v27);
          }
          else
          {
            v38 = SummonConfirmDlgComponent_TypeInfo;
            extraMsgInfo = this->fields.extraMsgInfo;
            if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v38 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(extraMsgInfo, v38->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetExtraTextPos(this, v40);
          }
          return 1;
        }
LABEL_51:
        sub_B170D4();
      }
LABEL_52:
      sub_B17100(v15, v16, v17);
      sub_B170A0();
    }
    return 0;
  }
  if ( (int)v20 >= 1 )
  {
    v29 = 0;
    while ( v29 < (unsigned int)v20 )
    {
      v30 = v29;
      v31 = extraGiftEntList->m_Items[v29];
      if ( !v31 )
        goto LABEL_51;
      v16 = (unsigned int)v31->fields.giftId;
      if ( (_DWORD)v16 || v31->fields.idx == shopIdIdx )
      {
        SummonConfirmDlgComponent__SetBonusText(this, v16, v31->fields.bonusType, v18);
        extraGiftEntList = this->fields.extraGiftEntList;
        if ( !extraGiftEntList )
          goto LABEL_51;
        if ( (unsigned int)v30 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v32 = extraGiftEntList->m_Items[v30];
        if ( !v32 )
          goto LABEL_51;
        if ( v32->fields.bonusType == 1 )
        {
          v33 = SummonConfirmDlgComponent_TypeInfo;
          v34 = this->fields.bonusMsgInfo;
          if ( (BYTE3(SummonConfirmDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v33 = SummonConfirmDlgComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v34, v33->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
          SummonConfirmDlgComponent__SetBonusTextPos(this, v35);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_51;
        }
        if ( (unsigned int)v30 >= extraGiftEntList->max_length )
          goto LABEL_52;
        v36 = extraGiftEntList->m_Items[v30];
        if ( !v36 )
          goto LABEL_51;
        if ( v36->fields.bonusType == 2 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.extraMsgInfo, -96.0, 0LL);
          SummonConfirmDlgComponent__SetExtraTextPos(this, v37);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_51;
        }
      }
      LODWORD(v20) = extraGiftEntList->max_length;
      v29 = v30 + 1;
      if ( (int)v30 + 1 >= (int)v20 )
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

  if ( (byte_40F7CF2 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F7CF2 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B173C8(v7);
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

  if ( (byte_40F7CF3 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F7CF3 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SummonConfirmDlgComponent_o *)sub_B173C8(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UILabel_o *settingBtnLb; // x20
  System_String_o *v9; // x0
  UnityEngine_GameObject_o *closeBtnObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_40F7CFE & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12357/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_40F7CFE = 1;
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
        v14 = this->fields.confirmBtnObject;
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive(v14, 0, 0LL);
      }
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
LABEL_31:
        sub_B170D4();
    }
    else
    {
      v11 = this->fields.closeBtnObject;
      if ( !v11 )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf(v11, 0LL) )
      {
        v12 = this->fields.closeBtnObject;
        if ( !v12 )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive(v12, 0, 0LL);
      }
      closeBtnObject = this->fields.confirmBtnObject;
      if ( !closeBtnObject )
        goto LABEL_31;
    }
LABEL_29:
    UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
    return;
  }
  v5 = this->fields.closeBtnObject;
  if ( !v5 )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(v5, 0LL) )
  {
    v6 = this->fields.closeBtnObject;
    if ( !v6 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  }
  v7 = this->fields.confirmBtnObject;
  if ( !v7 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  if ( (this->fields.state & 0xFFFFFFFE) == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_31;
    UILabel__set_text(settingBtnLb, v9, 0LL);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0LL);
  if ( !res )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_21004260(this, 0LL, v19);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7A80 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7A80 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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