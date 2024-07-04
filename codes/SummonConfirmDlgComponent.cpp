void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_48DF0E3 & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_48DF0E3 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  *(_QWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 0x30C00000019LL;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_B71F00;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_QWORD *)&static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y = 0xC2AC0000C3230000LL;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_48DF0E2 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48DF0E2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_31906084(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_31906084(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_48DF0DE & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_48DF0DE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_48DF0DF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DF0DF = 1;
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
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0LL);
      goto LABEL_9;
    }
LABEL_12:
    sub_1B00F28(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *confirmTitleLabel; // x0
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v12; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v20; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v22; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_48DF0D1 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1B00CCC(&StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48DF0D1 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraMessageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_51;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  v12 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v12 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v12->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, 0, v15, v16);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v17,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v18,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_51;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0LL);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v20);
    byte_48DD9F1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v22);
    byte_48DD9F1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !confirmTitleLabel )
LABEL_51:
    sub_1B00F28(confirmTitleLabel, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v10; // x21

  if ( (byte_48DF0E0 & 1) == 0 )
  {
    sub_1B00CCC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1B00CCC(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_48DF0E0 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B00CE4(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1B00F18(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1B00F28(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_48DF0E1 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4626/*"ConfirmWindow/CloseButton"*/, method);
    sub_1B00CCC(&StringLiteral_4628/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    byte_48DF0E1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_40637724(transform, (System_String_o *)StringLiteral_4628/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_40637724(v5, (System_String_o *)StringLiteral_4626/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v31; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v36; // x25
  int32_t v37; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v42; // w0
  float v43; // s8
  int32_t v44; // w24
  float v45; // s9
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  const MethodInfo *v50; // x3
  struct GachaExtraGiftEntity_array *v51; // x8
  int max_length; // w9
  unsigned int v53; // w10
  __int64 v54; // x22
  GachaExtraGiftEntity_o *v55; // x10
  UnityEngine_Object_o *bonusMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v57; // x8
  GachaExtraGiftEntity_o *v58; // x8
  UnityEngine_Object_o *extraMsgInfo; // x21
  struct GachaExtraGiftEntity_array *v60; // x8
  GachaExtraGiftEntity_o *v61; // x8
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v66; // s0
  float v67; // s1
  float v68; // s8
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  unsigned int v71; // w8
  const MethodInfo *v72; // x1
  System_Action_o *v73; // x20

  if ( (byte_48DF0D9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, title);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v20);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B00CCC(&Method_SummonConfirmDlgComponent_EndOpen__, v22);
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, v23);
    sub_1B00CCC(&StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_1B00CCC(&StringLiteral_1/*""*/, v25);
    byte_48DF0D9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_114;
    if ( title )
      v31 = title;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v31, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_114;
    v33 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_114;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v34, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v36 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v36 )
      goto LABEL_114;
    UILabel__set_text(v36, decideTxt, 0LL);
  }
  v37 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v37 <= 2 )
    {
      v39 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v39 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v39->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_114;
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v40, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v42 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v42 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v37 <= 2 )
      v43 = 54.0;
    else
      v43 = 43.0;
    if ( v37 <= 2 )
      v44 = 20;
    else
      v44 = 18;
    if ( !gameObject )
      goto LABEL_114;
    v45 = v37 <= 2 ? 188.0 : 178.0;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, v45, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_114;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, v43, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_114;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_114;
    UILabel__set_fontSize((UILabel_o *)gameObject, v44, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_114;
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
        goto LABEL_114;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_114;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
      v51 = this->fields.extraGiftEntList;
      if ( !v51 )
        goto LABEL_114;
      max_length = v51->max_length;
      if ( max_length < 1 )
        goto LABEL_89;
      v53 = 0;
      while ( 1 )
      {
        if ( v53 >= max_length )
          goto LABEL_115;
        v54 = (int)v53;
        v55 = v51->m_Items[v53];
        if ( !v55 )
          goto LABEL_114;
        giftId = (const MethodInfo *)(unsigned int)v55->fields.giftId;
        if ( (_DWORD)giftId )
        {
          if ( v55->fields.idx == shopIdIdx )
            break;
        }
        v53 = v54 + 1;
        if ( (int)v54 + 1 >= max_length )
          goto LABEL_89;
      }
      SummonConfirmDlgComponent__SetBonusText(this, (int32_t)giftId, v55->fields.bonusType, v50);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v57 = this->fields.extraGiftEntList;
        if ( !v57 )
          goto LABEL_114;
        if ( (unsigned int)v54 >= v57->max_length )
          goto LABEL_115;
        v58 = v57->m_Items[v54];
        if ( !v58 )
          goto LABEL_114;
        if ( v58->fields.bonusType == 1 )
          SummonConfirmDlgComponent__SetBonusTextPos(this, giftId);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_89;
      v60 = this->fields.extraGiftEntList;
      if ( !v60 )
        goto LABEL_114;
      if ( (unsigned int)v54 < v60->max_length )
      {
        v61 = v60->m_Items[v54];
        if ( !v61 )
          goto LABEL_114;
        if ( v61->fields.bonusType == 2 )
          SummonConfirmDlgComponent__SetExtraTextPos(this, giftId);
LABEL_89:
        if ( isBonusSelect )
        {
          baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          if ( baseWindowSprite )
          {
            UIWidget__set_width(
              baseWindowSprite,
              SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
              0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
            if ( gameObject )
            {
              UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              gameObject = this->fields.bonusMsgInfo;
              if ( gameObject )
              {
                v63 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(
                  v63,
                  SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
                  0LL);
                gameObject = this->fields.extraMsgInfo;
                if ( gameObject )
                {
                  v64 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                  BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
LABEL_108:
                  GameObjectExtensions__SetLocalPositionY(v64, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
                  goto LABEL_109;
                }
              }
            }
          }
        }
        else
        {
          gameObject = this->fields.bonusMsgInfo;
          v66 = -42.0;
          if ( v37 > 2 )
            v66 = -44.0;
          v67 = -34.0;
          if ( v37 <= 2 )
            v67 = -30.0;
          if ( isAppendSummon )
            v68 = v67;
          else
            v68 = v66;
          if ( gameObject )
          {
            v69 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v69, v68, 0LL);
            gameObject = this->fields.extraMsgInfo;
            if ( gameObject )
            {
              v70 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v70, v68, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
              gameObject = this->fields.confirmBtnObject;
              if ( gameObject )
              {
                v64 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
                goto LABEL_108;
              }
            }
          }
        }
LABEL_114:
        sub_1B00F28(gameObject, giftId);
      }
LABEL_115:
      sub_1B00F30(gameObject, giftId);
    }
LABEL_109:
    state = this->fields.state;
  }
  gameObject = this->fields.settingBtnObject;
  v71 = state & 0xFFFFFFFE;
  if ( !gameObject )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(gameObject, v71 == 6, 0LL);
  gameObject = this->fields.singleMsgInfo;
  if ( !gameObject )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.defMsgInfo;
  if ( !gameObject )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v72);
  v73 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
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
  System_String_o *v16; // x0
  SummonConfirmDlgComponent_c *v17; // x8
  Il2CppObject *v18; // x22
  SummonControl_c *v19; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  bool v22; // w23
  System_String_o *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v32; // x24
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x25
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  SummonConfirmDlgComponent_c *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // [xsp+8h] [xbp-78h]
  int32_t v46; // [xsp+10h] [xbp-70h] BYREF
  int32_t v47; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v48; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+28h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_48DF0D8 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, callback);
    sub_1B00CCC(&int_TypeInfo, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_1B00CCC(&SummonControl_TypeInfo, v10);
    sub_1B00CCC(&UserGachaMaster_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_3774/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_1B00CCC(&StringLiteral_3773/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_1B00CCC(&StringLiteral_6458/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_48DF0D8 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v15->static_fields->DailyFreeGachaResetTime;
  v16 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v17 = SummonConfirmDlgComponent_TypeInfo;
  v18 = (Il2CppObject *)v16;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v17 = SummonConfirmDlgComponent_TypeInfo;
  }
  v19 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v17->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v19 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v19->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v22 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v22 )
      goto LABEL_13;
LABEL_20:
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v30 = System_String__Format(v44, v18, 0LL);
    goto LABEL_21;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v22 )
    goto LABEL_20;
LABEL_13:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v48 = maxNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v24, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_60340120(v23, v18, v27, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_22;
  v30 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v47 = remainNum;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v33, v34, v35);
  v46 = maxNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v37, v38, v39);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_60340120(v32, v36, v40, 0LL);
  if ( !campaignLabel )
LABEL_22:
    sub_1B00F28(gameObject, v29);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v43 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v43 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v43->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_21:
  this->fields.state = 7;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v41,
    v42);
  SummonConfirmDlgComponent__Open(this, 0LL, v30, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v45);
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
  __int64 v36; // x0
  __int64 v37; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int32_t v40; // w2
  int32_t v41; // w3
  void *v42; // x28
  __int64 v43; // x8
  int v44; // w24
  int max_length; // w21
  GachaEntity_o *v46; // x8
  GachaEntity_o *v47; // x9
  Il2CppObject *name; // x21
  Il2CppObject *v49; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v51; // w25
  System_String_o *v52; // x28
  int32_t v53; // w2
  int32_t v54; // w3
  System_Object_array *v55; // x29
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
  System_Int32_c *v67; // x0
  int32_t *v68; // x1
  Il2CppObject *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x20
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  Il2CppObject *v86; // x20
  UILabel_o *msgLabel; // x26
  System_String_o *v88; // x27
  System_Object_array *v89; // x28
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x20
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x20
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int32_t v105; // w2
  int32_t v106; // w3
  Il2CppObject *v107; // x20
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  int32_t v111; // w2
  int32_t v112; // w3
  Il2CppObject *v113; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  int32_t v117; // w2
  int32_t v118; // w3
  Il2CppObject *v119; // x20
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  int32_t v123; // w2
  int32_t v124; // w3
  Il2CppObject *v125; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x1
  System_Action_o *v129; // x20
  __int64 v130; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v132; // [xsp+Ch] [xbp-84h]
  int32_t v133; // [xsp+10h] [xbp-80h]
  int32_t v134; // [xsp+14h] [xbp-7Ch]
  int32_t v135; // [xsp+18h] [xbp-78h] BYREF
  int32_t v136; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v137; // [xsp+20h] [xbp-70h] BYREF
  int32_t v138; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v139; // [xsp+28h] [xbp-68h] BYREF
  int v140; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_48DF0DA & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1B00CCC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1B00CCC(&int_TypeInfo, v24);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v25);
    sub_1B00CCC(&object___TypeInfo, v26);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B00CCC(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1B00CCC(&StringLiteral_3778/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_1B00CCC(&StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_1B00CCC(&StringLiteral_3776/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_1B00CCC(&StringLiteral_1/*""*/, v33);
    sub_1B00CCC(&StringLiteral_3777/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_48DF0DA = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, price, haveStoneNum);
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1B52BA8(v36);
  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1B52BA8(v37);
  MasterData_object = **(void ***)(v37 + 184);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_83;
  v133 = haveFreeStoneNum;
  v134 = haveStoneNum;
  v132 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_83;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v42 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v43 = *((_QWORD *)MasterData_object + 4);
  if ( !v43 )
    goto LABEL_83;
  if ( *(_QWORD *)(v43 + 24) )
    v44 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v44 = 1;
  this->fields.extraGiftEntList = giftEntList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v40, v41);
  if ( !GachaDataInGroup )
    goto LABEL_83;
  max_length = GachaDataInGroup->max_length;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  if ( max_length == 2 )
  {
    v46 = GachaDataInGroup->m_Items[0];
    if ( !v46 )
      goto LABEL_83;
    v47 = GachaDataInGroup->m_Items[1];
    if ( !v47 )
      goto LABEL_83;
    name = (Il2CppObject *)v46->fields.name;
    v49 = (Il2CppObject *)v47->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v51 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3776/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1B00D74(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v55 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1B00E08(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( !v55->max_length )
      goto LABEL_84;
    v55->m_Items[0] = name;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)name, v53, v54);
    if ( v49 )
    {
      MasterData_object = (void *)sub_1B00E08(v49, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_84;
    v55->m_Items[1] = v49;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v49, v56, v57);
    v140 = v44;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v58, v59, v60);
    v63 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B00E08(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_84;
    v55->m_Items[2] = v63;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v63, v61, v62);
    v67 = int_TypeInfo;
    v68 = &v139;
    v139 = price;
  }
  else
  {
    if ( !v42 )
      goto LABEL_83;
    v69 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v42 + 3), 0LL) )
      v69 = (Il2CppObject *)*((_QWORD *)v42 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v51 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1B00D74(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_83;
    v55 = (System_Object_array *)MasterData_object;
    if ( v69 )
    {
      MasterData_object = (void *)sub_1B00E08(v69, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( !v55->max_length )
      goto LABEL_84;
    v55->m_Items[0] = v69;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v69, v70, v71);
    v140 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v72, v73, v74);
    v77 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B00E08(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_84;
    v55->m_Items[1] = v77;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v77, v75, v76);
    v139 = v44;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v78, v79, v80);
    v83 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B00E08(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_85;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_84;
    v55->m_Items[2] = v83;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v83, v81, v82);
    v67 = int_TypeInfo;
    v138 = price;
    v68 = &v138;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v67, v68, v64, v65, v66);
  v86 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v55->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_84;
  v55->m_Items[3] = v86;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v55->m_Items[3], (int32_t)v86, v84, v85);
  MasterData_object = System_String__Format_60340256(v52, v55, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_83;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3778/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v89 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 6LL);
  v140 = v134;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v90, v91, v92);
  if ( !v89 )
LABEL_83:
    sub_1B00F28(MasterData_object, v35);
  v95 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( !v89->max_length )
    goto LABEL_84;
  v89->m_Items[0] = v95;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v89->m_Items, (int32_t)v95, v93, v94);
  v139 = v51;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v96, v97, v98);
  v101 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( v89->max_length <= 1 )
    goto LABEL_84;
  v89->m_Items[1] = v101;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v89->m_Items[1], (int32_t)v101, v99, v100);
  v138 = v133;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v102, v103, v104);
  v107 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( v89->max_length <= 2 )
    goto LABEL_84;
  v89->m_Items[2] = v107;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v89->m_Items[2], (int32_t)v107, v105, v106);
  v137 = v132;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v108, v109, v110);
  v113 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( v89->max_length <= 3 )
    goto LABEL_84;
  v89->m_Items[3] = v113;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v89->m_Items[3], (int32_t)v113, v111, v112);
  v136 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v114, v115, v116);
  v119 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_85;
  }
  if ( v89->max_length <= 4 )
    goto LABEL_84;
  v89->m_Items[4] = v119;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v89->m_Items[4], (int32_t)v119, v117, v118);
  v135 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v135, v120, v121, v122);
  v125 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B00E08(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_85:
      v130 = sub_1B00F4C();
      sub_1B00DF4(v130, 0LL);
    }
  }
  if ( v89->max_length <= 5 )
LABEL_84:
    sub_1B00F30(MasterData_object, v35);
  v89->m_Items[5] = v125;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v89->m_Items[5], (int32_t)v125, v123, v124);
  MasterData_object = System_String__Format_60340256(v88, v89, 0LL);
  if ( !msgLabel )
    goto LABEL_83;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_83;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = this->fields.defMsgInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v127);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v128);
  v129 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v129, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v129, 0, 0LL);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  SummonConfirmDlgComponent_c *v32; // x0
  const MethodInfo *v33; // [xsp+8h] [xbp-68h]
  int32_t v34; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v35; // [xsp+18h] [xbp-58h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_48DF0D7 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v13);
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_3781/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_48DF0D7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v36 = needPointNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v17, v18, v19);
  v35 = havePointNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v21, v22, v23);
  v34 = afterPointNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v25, v26, v27);
  v29 = System_String__Format_60340188(v16, v20, v24, v28, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v30,
    v31);
  v32 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v32 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v29,
    0LL,
    callback,
    v32->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v33);
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
  System_String_o **v45; // x8
  System_String_o *v46; // x26
  System_Object_array *v47; // x27
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x25
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x25
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x25
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x25
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x25
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x25
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x25
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x25
  System_String_o *v98; // x29
  System_String_o *v99; // x25
  System_String_o *v100; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v102; // x0
  int32_t v103; // w1
  int32_t v104; // w1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  System_String_o *v109; // x25
  System_String_o *v110; // x25
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  Il2CppObject *v114; // x24
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x0
  System_String_o *v119; // x25
  System_String_o *v120; // x24
  __int64 v121; // x29
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int32_t v125; // w2
  int32_t v126; // w3
  __int64 v127; // x22
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  int32_t v131; // w2
  int32_t v132; // w3
  __int64 v133; // x21
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v139; // x20
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x20
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  int32_t v149; // w2
  int32_t v150; // w3
  __int64 v151; // x20
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x20
  System_String_o *v158; // x20
  System_String_o *v159; // x0
  _QWORD *v160; // x21
  System_String_o *v161; // x22
  __int64 v162; // x8
  __int64 v163; // x0
  __int64 v164; // x0
  System_String_o *v165; // x28
  System_String_o *v166; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v168; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v173; // w2
  int32_t v174; // w3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v176; // x0
  __int64 v177; // x0
  const MethodInfo *v178; // [xsp+8h] [xbp-B8h]
  System_String_o *v179; // [xsp+18h] [xbp-A8h]
  int32_t v180; // [xsp+24h] [xbp-9Ch]
  System_String_o *titlea; // [xsp+30h] [xbp-90h]
  int32_t v183; // [xsp+3Ch] [xbp-84h] BYREF
  int32_t v184; // [xsp+40h] [xbp-80h] BYREF
  int32_t v185; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v186; // [xsp+48h] [xbp-78h] BYREF
  int32_t v187; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v188; // [xsp+50h] [xbp-70h] BYREF
  int32_t v189; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v190; // [xsp+58h] [xbp-68h] BYREF
  int32_t v191; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_48DF0D5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_object___, title);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_1B00CCC(&int_TypeInfo, v29);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v30);
    sub_1B00CCC(&object___TypeInfo, v31);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v32);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v33);
    sub_1B00CCC(&StringLiteral_3761/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_1B00CCC(&StringLiteral_3766/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v35);
    sub_1B00CCC(&StringLiteral_3762/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v36);
    sub_1B00CCC(&StringLiteral_3764/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v37);
    sub_1B00CCC(&StringLiteral_3780/*"CONFIRM_PAYSUMMON_MSG"*/, v38);
    sub_1B00CCC(&StringLiteral_3763/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v39);
    sub_1B00CCC(&StringLiteral_12170/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1B00CCC(&StringLiteral_3714/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1B00CCC(&StringLiteral_12157/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1B00CCC(&StringLiteral_12123/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1B00CCC(&StringLiteral_3765/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_48DF0D5 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, type, price);
  v179 = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3766/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3780/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3765/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 8LL);
  v191 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v191, v48, v49, v50);
  if ( !v47 )
    goto LABEL_98;
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( !v47->max_length )
    goto LABEL_96;
  v47->m_Items[0] = v55;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v55, v53, v54);
  v190 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v190, v56, v57, v58);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_96;
  v47->m_Items[1] = v61;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v61, v59, v60);
  v189 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v189, v62, v63, v64);
  v67 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_96;
  v47->m_Items[2] = v67;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v67, v65, v66);
  v188 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v188, v68, v69, v70);
  v73 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_96;
  v47->m_Items[3] = v73;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v73, v71, v72);
  v187 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v187, v74, v75, v76);
  v79 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_96;
  v47->m_Items[4] = v79;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[4], (int32_t)v79, v77, v78);
  v186 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v186, v80, v81, v82);
  v85 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_96;
  v47->m_Items[5] = v85;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[5], (int32_t)v85, v83, v84);
  v185 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v185, v86, v87, v88);
  v91 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_96;
  v47->m_Items[6] = v91;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[6], (int32_t)v91, v89, v90);
  v184 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v184, v92, v93, v94);
  v97 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B00E08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_97;
  }
  v180 = haveFreeStoneNum;
  if ( v47->max_length <= 7 )
    goto LABEL_96;
  v47->m_Items[7] = v97;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->m_Items[7], (int32_t)v97, v95, v96);
  v98 = System_String__Format_60340256(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12157/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v102 = System_String__Format(v100, DateTime, 0LL);
    v99 = System_String__Concat_60325748(v99, v102, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_98;
  v103 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v103, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_98;
  if ( isPickup )
    v104 = 76;
  else
    v104 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v104, 0LL);
  this->fields.state = 4;
  if ( gachaId )
  {
    v191 = gachaId;
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v191, v105, v106, v107);
    v109 = System_String__Format((System_String_o *)StringLiteral_3764/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v108, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titlea = LocalizationManager__Get(v109, 0LL);
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
    v190 = price;
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v190, v111, v112, v113);
    v189 = num;
    v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189, v115, v116, v117);
    v119 = System_String__Format_60340120(v110, v114, v118, 0LL);
    v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
    v121 = sub_1B00D74(object___TypeInfo, 6LL);
    v188 = haveStoneNum;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v188, v122, v123, v124);
    if ( !v121 )
      goto LABEL_98;
    v127 = addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v121 + 24) )
        goto LABEL_96;
      *(_QWORD *)(v121 + 32) = v127;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 32), v127, v125, v126);
      v187 = haveChargeStoneNum;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v187, v128, v129, v130);
      v133 = addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v121 + 24) <= 1u )
          goto LABEL_96;
        *(_QWORD *)(v121 + 40) = v133;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 40), v133, v131, v132);
        v186 = v180;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v186, v134, v135, v136);
        v139 = addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v121 + 24) <= 2u )
            goto LABEL_96;
          *(_QWORD *)(v121 + 48) = v139;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 48), v139, v137, v138);
          v185 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v185, v140, v141, v142);
          v145 = addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v121 + 24) <= 3u )
              goto LABEL_96;
            *(_QWORD *)(v121 + 56) = v145;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 56), v145, v143, v144);
            v184 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v184, v146, v147, v148);
            v151 = addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v121 + 24) <= 4u )
                goto LABEL_96;
              *(_QWORD *)(v121 + 64) = v151;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 64), v151, v149, v150);
              v183 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v183, v152, v153, v154);
              v157 = addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_1B00E08(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v121 + 24) > 5u )
                {
                  *(_QWORD *)(v121 + 72) = v157;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v121 + 72), v157, v155, v156);
                  v158 = System_String__Format_60340256(v120, (System_Object_array *)v121, 0LL);
                  v159 = LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
                  v160 = Method_System_Array_Empty_object___;
                  v161 = v159;
                  v162 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
                  if ( !v162 )
                  {
                    sub_1B52C04(Method_System_Array_Empty_object___);
                    v162 = v160[7];
                  }
                  v163 = *(_QWORD *)(v162 + 16);
                  if ( (*(_BYTE *)(v163 + 309) & 1) == 0 )
                    v163 = sub_1B52BA8(v163);
                  if ( !*(_DWORD *)(v163 + 224) )
                    j_il2cpp_runtime_class_init_0(v163);
                  v164 = *(_QWORD *)(v160[7] + 16LL);
                  if ( (*(_BYTE *)(v164 + 309) & 1) == 0 )
                    v164 = sub_1B52BA8(v164);
                  v165 = v119;
                  v166 = System_String__Format_60340256(v161, **(System_Object_array ***)(v164 + 184), 0LL);
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v168 = v166;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_98;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_98;
                    MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__48061460(
                                                MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
                    if ( !addMsgBgSprite )
                      goto LABEL_98;
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)addMsgBgSprite,
                                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                    sub_1B00C70(
                      (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
                      (int32_t)Component_object,
                      v173,
                      v174);
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      titlea,
                      v165,
                      v158,
                      v168,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
                      v176 = LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
                      SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v176, callback, 14.0, 0LL, shopIdIdx, 0, 1, v178);
                      return;
                    }
                  }
LABEL_98:
                  sub_1B00F28(addMsgBgSprite, v52);
                }
LABEL_96:
                sub_1B00F30(addMsgBgSprite, v52);
              }
            }
          }
        }
      }
    }
LABEL_97:
    v177 = sub_1B00F4C();
    sub_1B00DF4(v177, 0LL);
  }
  SummonConfirmDlgComponent__Open(this, v179, v98, 0LL, callback, 14.0, v99, shopIdIdx, isAppendSummon, 0, v178);
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x25
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // [xsp+8h] [xbp-68h]
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v42; // [xsp+28h] [xbp-48h] BYREF
  int32_t v43; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_48DF0D6 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, title);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_3782/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1B00CCC(&StringLiteral_3783/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1B00CCC(&StringLiteral_1/*""*/, v16);
    byte_48DF0D6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3782/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_60340120(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3783/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_60340188(v27, v31, v35, v39, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v26, 0LL, callback, 14.0, 0LL, 0, 0, 0, v40);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // [xsp+8h] [xbp-68h]
  int32_t v29; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v30; // [xsp+18h] [xbp-58h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-54h] BYREF

  v31 = haveFreeStoneNum;
  if ( (byte_48DF0D3 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_12086/*"STONE_PURCHASE"*/, v11);
    sub_1B00CCC(&StringLiteral_11915/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1B00CCC(&StringLiteral_426/*"#,0"*/, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    byte_48DF0D3 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_61130888((int32_t)&v31, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
  v26 = System_String__Format_60340188(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12086/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v26, v27, callback, 14.0, 0LL, 0, 0, 0, v28);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]
  int32_t v18; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_48DF0D4 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_11916/*"SHORT_HAVE_POINT"*/, v8);
    sub_1B00CCC(&StringLiteral_11914/*"SHORT_DLG_TITLE"*/, v9);
    byte_48DF0D4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, v17);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]
  int32_t v20; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_48DF0D2 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_12086/*"STONE_PURCHASE"*/, v8);
    sub_1B00CCC(&StringLiteral_11917/*"SHORT_HAVE_STONE"*/, v9);
    sub_1B00CCC(&StringLiteral_11914/*"SHORT_DLG_TITLE"*/, v10);
    byte_48DF0D2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SHORT_HAVE_STONE"*/, 0LL);
  v20 = haveNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15);
  v17 = System_String__Format(v12, v16, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12086/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v11, v17, v18, callback, 14.0, 0LL, 0, 0, 0, v19);
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
  Il2CppObject *Entity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v24; // x23
  System_String_o *v25; // x21
  System_String_o *v26; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x24
  int32_t mana; // w22
  BalanceConfig_c *v33; // x0
  System_String_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x1
  System_String_o *v40; // x21
  System_String_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  DataManager_o *v46; // x20
  int32_t num; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v48; // [xsp+8h] [xbp-58h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48DF0DD & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&giftId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B00CCC(&int_TypeInfo, v10);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B00CCC(&StringLiteral_12135/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v13);
    sub_1B00CCC(&StringLiteral_12136/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v14);
    sub_1B00CCC(&StringLiteral_12137/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v15);
    sub_1B00CCC(&StringLiteral_12139/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v16);
    sub_1B00CCC(&StringLiteral_12138/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v17);
    sub_1B00CCC(&StringLiteral_1/*""*/, v18);
    byte_48DF0DD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_33;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !DataById || !Instance )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             DataById->fields.objectId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12137/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
    num = DataById->fields.num;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v42, v43, v44);
    Instance = (DataManager_o *)System_String__Format(v41, v45, 0LL);
    if ( Entity )
    {
      v46 = Instance;
      Instance = (DataManager_o *)this->fields.extraItemIconComponent;
      if ( Instance )
      {
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)Entity[1].klass, -1, 0LL);
        Instance = (DataManager_o *)this->fields.extraTitleLabel;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, v40, 0LL);
          Instance = (DataManager_o *)this->fields.extraMessageLabel;
          if ( Instance )
          {
            v39 = (System_String_o *)v46;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1B00F28(Instance, v20);
  }
  if ( bonusType != 1 )
    return;
  this->fields.isGetBonus = 1;
  v24 = SelfUserGame;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12136/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
  v49 = DataById->fields.num;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v27, v28, v29);
  Instance = (DataManager_o *)System_String__Format(v26, v30, 0LL);
  if ( !Entity )
    goto LABEL_33;
  v31 = (System_String_o *)Instance;
  Instance = (DataManager_o *)this->fields.bonusItemIconComponent;
  if ( !Instance )
    goto LABEL_33;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)Entity[1].klass, -1, 0LL);
  if ( !v24 )
    goto LABEL_33;
  mana = v24->fields.mana;
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  if ( mana == v33->static_fields->ManaMax )
  {
    this->fields.isGetBonus = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12139/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, 0LL);
    v48 = DataById->fields.num;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v35, v36, v37);
    v31 = System_String__Format(v34, v38, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)Instance, v25, 0LL);
  Instance = (DataManager_o *)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_33;
  v39 = v31;
LABEL_31:
  UILabel__set_text((UILabel_o *)Instance, v39, 0LL);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, method);
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
  __int64 v21; // x22
  il2cpp_array_size_t v22; // w25
  _DWORD *v23; // x9
  __int64 v24; // x9
  SummonConfirmDlgComponent_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x21
  const MethodInfo *v27; // x1
  __int64 v28; // x9
  const MethodInfo *v29; // x1
  SummonConfirmDlgComponent_c *v30; // x0
  UnityEngine_GameObject_o *extraMsgInfo; // x20
  const MethodInfo *v32; // x1

  v3 = shopIdIdx;
  if ( (byte_48DF0DC & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_TypeInfo, *(_QWORD *)&shopIdIdx);
    byte_48DF0DC = 1;
  }
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_48;
  UIWidget__set_width(baseWindowSprite, 780, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_48;
  UIWidget__set_height(baseWindowSprite, 480, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.confirmBtnObject;
  if ( !baseWindowSprite )
    goto LABEL_48;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.infoMsgLabel;
  if ( !baseWindowSprite )
    goto LABEL_48;
  UILabel__set_fontSize((UILabel_o *)baseWindowSprite, 20, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.singleMsgInfo;
  if ( !baseWindowSprite )
    goto LABEL_48;
  v8 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 19.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.msgLabel;
  if ( !baseWindowSprite )
    goto LABEL_48;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, -29.0, 0LL);
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_48;
  v12 = *(_QWORD *)&extraGiftEntList->max_length;
  if ( (_DWORD)v12 == 1 )
  {
    v13 = extraGiftEntList->m_Items[0];
    if ( !v13 )
      goto LABEL_48;
    giftId = v13->fields.giftId;
    if ( giftId || v13->fields.idx == v3 )
    {
      SummonConfirmDlgComponent__SetBonusText(this, giftId, v13->fields.bonusType, v10);
      v15 = this->fields.extraGiftEntList;
      if ( !v15 )
        goto LABEL_48;
      if ( v15->max_length )
      {
        v16 = v15->m_Items[0];
        if ( v16 )
        {
          if ( v16->fields.bonusType == 1 )
          {
            v17 = SummonConfirmDlgComponent_TypeInfo;
            bonusMsgInfo = this->fields.bonusMsgInfo;
            if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
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
            if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
              v30 = SummonConfirmDlgComponent_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionY(extraMsgInfo, v30->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
            SummonConfirmDlgComponent__SetExtraTextPos(this, v32);
          }
          return 1;
        }
LABEL_48:
        sub_1B00F28(baseWindowSprite, *(_QWORD *)&shopIdIdx);
      }
LABEL_49:
      sub_1B00F30(baseWindowSprite, *(_QWORD *)&shopIdIdx);
    }
    return 0;
  }
  if ( (int)v12 >= 1 )
  {
    v21 = 4LL;
    while ( 1 )
    {
      v22 = v21 - 4;
      if ( (int)v21 - 4 >= (unsigned int)v12 )
        goto LABEL_49;
      v23 = (_DWORD *)*((_QWORD *)&extraGiftEntList->obj.klass + v21);
      if ( !v23 )
        goto LABEL_48;
      *(_QWORD *)&shopIdIdx = (unsigned int)v23[6];
      if ( shopIdIdx || v23[5] == v3 )
      {
        SummonConfirmDlgComponent__SetBonusText(this, shopIdIdx, v23[9], v10);
        extraGiftEntList = this->fields.extraGiftEntList;
        if ( !extraGiftEntList )
          goto LABEL_48;
        if ( v22 >= extraGiftEntList->max_length )
          goto LABEL_49;
        v24 = *((_QWORD *)&extraGiftEntList->obj.klass + v21);
        if ( !v24 )
          goto LABEL_48;
        if ( *(_DWORD *)(v24 + 36) == 1 )
        {
          v25 = SummonConfirmDlgComponent_TypeInfo;
          v26 = this->fields.bonusMsgInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v25 = SummonConfirmDlgComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionY(v26, v25->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
          SummonConfirmDlgComponent__SetBonusTextPos(this, v27);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_48;
        }
        if ( v22 >= extraGiftEntList->max_length )
          goto LABEL_49;
        v28 = *((_QWORD *)&extraGiftEntList->obj.klass + v21);
        if ( !v28 )
          goto LABEL_48;
        if ( *(_DWORD *)(v28 + 36) == 2 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.extraMsgInfo, -96.0, 0LL);
          SummonConfirmDlgComponent__SetExtraTextPos(this, v29);
          extraGiftEntList = this->fields.extraGiftEntList;
          if ( !extraGiftEntList )
            goto LABEL_48;
        }
      }
      LODWORD(v12) = extraGiftEntList->max_length;
      if ( (int)++v21 - 4 >= (int)v12 )
        return 1;
    }
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

  if ( (byte_48DF0CF & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_48DF0CF = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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

  if ( (byte_48DF0D0 & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_48DF0D0 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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

  if ( (byte_48DF0DB & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_12115/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_48DF0DB = 1;
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
        goto LABEL_30;
      if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
      {
        confirmBtnObject = this->fields.confirmBtnObject;
        if ( !confirmBtnObject )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
      }
      confirmBtnObject = this->fields.closeBtnObject;
      if ( !confirmBtnObject )
LABEL_30:
        sub_1B00F28(confirmBtnObject, method);
    }
    else
    {
      confirmBtnObject = this->fields.closeBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_30;
      if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
      {
        confirmBtnObject = this->fields.closeBtnObject;
        if ( !confirmBtnObject )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
      }
      confirmBtnObject = this->fields.confirmBtnObject;
      if ( !confirmBtnObject )
        goto LABEL_30;
    }
LABEL_28:
    UnityEngine_GameObject__SetActive(confirmBtnObject, 1, 0LL);
    return;
  }
  confirmBtnObject = this->fields.closeBtnObject;
  if ( !confirmBtnObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf(confirmBtnObject, 0LL) )
  {
    confirmBtnObject = this->fields.closeBtnObject;
    if ( !confirmBtnObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive(confirmBtnObject, 0, 0LL);
  }
  confirmBtnObject = this->fields.confirmBtnObject;
  if ( !confirmBtnObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(confirmBtnObject, 1, 0LL);
  if ( (this->fields.state & 0xFFFFFFFE) == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    confirmBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12115/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_30;
    UILabel__set_text(settingBtnLb, (System_String_o *)confirmBtnObject, 0LL);
    confirmBtnObject = this->fields.settingBtnObject;
    if ( !confirmBtnObject )
      goto LABEL_30;
    goto LABEL_28;
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
    sub_1B00F28(0LL, isTutorial);
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
    sub_1B00F28(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_31906084(this, 0LL, v11);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1946F40;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1946EF8;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_48DF0E4 & 1) == 0 )
  {
    sub_1B00CCC(&bool_TypeInfo, result);
    byte_48DF0E4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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