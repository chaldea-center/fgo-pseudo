void SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4CB276E & 1) == 0 )
  {
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    byte_4CB276E = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_CEBDE0;
  *(_OWORD *)&static_fields->PRIVILEGE_SUMMON_MESSAGE_WIDTH_THRESHOLD = xmmword_CEBEF0;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_CED5E0;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB276D & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB276D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v10; // x23
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v16; // x4
  int32_t v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  v18 = haveFreeStoneNum;
  if ( (byte_4CB275A & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2942/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CB275A = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2942/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0);
  v17 = haveChargeStoneNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = (Il2CppObject *)System_Int32__ToString_65475288((int32_t)&v18, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
  v13 = System_String__Format_64008100(v10, v11, v12, 0);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v13, 0),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1C6BC60(v13, v14);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v13, 0);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v16);
}


void SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
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
  Il2CppObject *v19; // x27
  Il2CppObject *v20; // x26
  Il2CppObject *v21; // x0
  System_String_o *baseWindow; // x0
  __int64 v23; // x1
  System_String_o *v24; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v34; // x0
  const MethodInfo *v35; // [xsp+10h] [xbp-80h]
  int32_t v36; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v37; // [xsp+28h] [xbp-68h] BYREF
  int32_t v38; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB275B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_12371/*"STONE_PURCHASE"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_2946/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2947/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_4CB275B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2946/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0);
  v38 = haveStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v37 = haveChargeStoneNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v36 = haveFreeStoneNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  baseWindow = System_String__Format_64008168(v18, v19, v20, v21, 0);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v24 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
  if ( !baseWindowSprite )
    goto LABEL_25;
  UIWidget__set_width(baseWindowSprite, SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH, 0);
  baseWindow = (System_String_o *)this->fields.baseWindowSprite;
  if ( !baseWindow )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)baseWindow, 580, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  baseWindow = (System_String_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( assetManager )
    {
      baseWindow = (System_String_o *)this->fields.baseWindow;
      if ( baseWindow )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__52199488(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v31, v32);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1C6BC60(baseWindow, v23);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v17,
    v24,
    tryGetBonusSelectData,
    assetManager,
    0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0);
  this->fields.state = 4;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12371/*"STONE_PURCHASE"*/, 0);
  SummonConfirmDlgComponent__Open(this, 0, 0, v34, callback, 14.0, 0, 0, 0, 1, 0, v35);
}


void SummonConfirmDlgComponent__Callback(SummonConfirmDlgComponent_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_35735108(this, 0, v2);
}


void SummonConfirmDlgComponent__Close_35735108(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB2769 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_4CB2769 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4CB276A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB276A = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0);
      goto LABEL_9;
    }
LABEL_12:
    sub_1C6BC60(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4CB2757 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2757 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_65;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v6];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1C6BC68(confirmTitleLabel);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v8 = extraItemIconComponents->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v9 < v8 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v9];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0);
      v8 = extraItemIconComponents->max_length;
      if ( (int)++v9 >= v8 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_65;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0);
  v13 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v13 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v13->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v15, -64.0, 0);
  this->fields.extraGiftEntList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, 0, v16, v17);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v18,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v19,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingX(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_X,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingY(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_Y,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_65;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_65:
    sub_1C6BC60(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  *(_QWORD *)&this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonConfirmDlgComponent__OnClickCancel(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 0, v2);
}


void SummonConfirmDlgComponent__OnClickDecide(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 1, v2);
}


void SummonConfirmDlgComponent__OnClickSetting(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4CB276B & 1) == 0 )
  {
    sub_1C6BA08(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_4CB276B = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C6BC54(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0),
        !autoSaleDlgInfo) )
  {
    sub_1C6BC60(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0);
}


void SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4CB276C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4639/*"ConfirmWindow/CloseButton"*/);
    sub_1C6BA08(&StringLiteral_4641/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_1C6BA08(&StringLiteral_4637/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_4CB276C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_4641/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(v4, (System_String_o *)StringLiteral_4639/*"ConfirmWindow/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(v5, (System_String_o *)StringLiteral_4637/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0);
}


void SummonConfirmDlgComponent__Open(
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
        GachaSubEntity_o *gachaSubEntity,
        const MethodInfo *method)
{
  __int64 v21; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v27; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v29; // x1
  UnityEngine_GameObject_o *v30; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v33; // x27
  int32_t v34; // w25
  UILabel_o *v35; // x27
  UILabel_o *v36; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v38; // x25
  int32_t v39; // w23
  float CONFIRM_TITLE_LABEL_POS_Y; // s8
  SummonConfirmDlgComponent_c *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v44; // w0
  float v45; // s8
  int32_t v46; // w24
  float v47; // s9
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  struct UILabel_o *addMsgLabel; // x8
  int32_t mWidth; // w22
  UIWidget_o *addMsgBgSprite; // x22
  UILabel_o *v53; // x22
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v57; // x22
  System_Func_object__bool__o **v58; // x24
  System_Func_object__bool__o *v59; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x25
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  SummonConfirmDlgComponent___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x25
  System_Func_object__int__o *_9__75_1; // x26
  Il2CppObject *v67; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_ICollection_o *v72; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v74; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v76; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v78; // w8
  bool v79; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v84; // s0
  float v85; // s1
  float v86; // s8
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  bool v89; // w1
  const MethodInfo *v90; // x1
  System_Action_o *v91; // x20

  if ( (byte_4CB2762 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C6BA08(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent___c__Open_b__75_1__);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__);
    sub_1C6BA08(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2762 = 1;
  }
  v21 = sub_1C6BC54(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_147;
  *(_DWORD *)(v21 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    if ( title )
      v27 = title;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v27, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v29 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v29, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v30, msgOffY, 0);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0);
      v33 = this->fields.confirmDetailLabel;
      v34 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 16);
      }
      if ( !v33 )
        goto LABEL_147;
      UILabel__set_spacingX(v33, SummonConfirmMessageSpacingX, 0);
      v35 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 20);
      }
      if ( !v35 )
        goto LABEL_147;
      UILabel__set_spacingY(v35, SummonConfirmMessageSpacingY, 0);
      v36 = this->fields.confirmDetailLabel;
      if ( !v34 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v34 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      if ( !v36 )
        goto LABEL_147;
      UILabel__set_fontSize(v36, v34, 0);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v38 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v38 )
      goto LABEL_147;
    UILabel__set_text(v38, decideTxt, 0);
  }
  v39 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0);
  if ( this->fields.state == 5 )
  {
    if ( v39 <= 2 )
    {
      v41 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v41 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y = v41->static_fields->CONFIRM_TITLE_LABEL_POS_Y;
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y = 164.0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v42, CONFIRM_TITLE_LABEL_POS_Y, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v44 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v44 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v39 <= 2 )
      v45 = 54.0;
    else
      v45 = 43.0;
    if ( v39 <= 2 )
      v46 = 20;
    else
      v46 = 18;
    if ( !gameObject )
      goto LABEL_147;
    v47 = v39 <= 2 ? 188.0 : 178.0;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v48, v47, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v49, v45, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, v46, 0);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0);
    addMsgLabel = this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_147;
    mWidth = addMsgLabel->fields.mWidth;
    gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( mWidth > *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 28) )
    {
      addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
      if ( !LODWORD(gameObject[9].monitor) )
        j_il2cpp_runtime_class_init_0(gameObject);
      if ( !addMsgBgSprite )
        goto LABEL_147;
      UIWidget__set_width(
        addMsgBgSprite,
        SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_MAX_FRAME_SIZE,
        0);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    v53 = this->fields.addMsgLabel;
    if ( !LODWORD(gameObject[9].monitor) )
      j_il2cpp_runtime_class_init_0(gameObject);
    if ( !v53 )
      goto LABEL_147;
    UILabel__SetCondensedScale(
      v53,
      SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_ADD_MESSAGE_MAX_WIDTH,
      0,
      0);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_136;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_147;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_147;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_147;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v21 + 20) = 1;
      v57 = (GiftMaster_o *)MasterData_object;
      v58 = (System_Func_object__bool__o **)(v21 + 24);
      while ( 1 )
      {
        v59 = *v58;
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v58 )
        {
          v59 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v59,
            (Il2CppObject *)v21,
            Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__,
            0);
          *(_QWORD *)(v21 + 24) = v59;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 24), (int32_t)v59, v61, v62);
        }
        v63 = System_Linq_Enumerable__Where_object_(
                v60,
                (System_Func_TSource__bool__o *)v59,
                (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v64 = SummonConfirmDlgComponent___c_TypeInfo;
        v65 = v63;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v64 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__75_1 = (System_Func_object__int__o *)v64->static_fields->__9__75_1;
        if ( !_9__75_1 )
        {
          if ( !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            v64 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v67 = (Il2CppObject *)v64->static_fields->__9;
          _9__75_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__75_1, v67, Method_SummonConfirmDlgComponent___c__Open_b__75_1__, 0);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__75_1, (int32_t)_9__75_1, v69, v70);
        }
        v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v65,
                                                                     (System_Func_TSource__TResult__o *)_9__75_1,
                                                                     (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v72 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v71,
                                                    (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v72, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v57 )
            goto LABEL_147;
          GiftListByIds = GiftMaster__GetGiftListByIds(v57, (System_Collections_Generic_IEnumerable_int__o *)v72, 0);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v21 + 20), v74);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v76);
            goto LABEL_116;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 2 )
            break;
        }
        v78 = *(_DWORD *)(v21 + 20) + 1;
        v79 = *(_DWORD *)(v21 + 20) - 2 < 0;
        *(_DWORD *)(v21 + 20) = v78;
        if ( v79 == __OFSUB__(v78, 3) )
          goto LABEL_116;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v23);
LABEL_116:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_147;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_147;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v81 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(
          v81,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v82 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v84 = -42.0;
        if ( v39 > 2 )
          v84 = -44.0;
        v85 = -34.0;
        if ( v39 <= 2 )
          v85 = -30.0;
        if ( isAppendSummon )
          v86 = v85;
        else
          v86 = v84;
        if ( !gameObject )
          goto LABEL_147;
        v87 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v87, v86, 0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v88 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v88, v86, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_147;
        v82 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v82, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0);
    }
LABEL_136:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v89 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v89 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v89, 0);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.singleMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.defMsgInfo) == 0) )
  {
LABEL_147:
    sub_1C6BC60(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v90);
  v91 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v91, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4CB2764 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_4CB2764 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.defMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.confirmBtnObject) == 0) )
  {
    sub_1C6BC60(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  System_String_o *v10; // x0
  SummonConfirmDlgComponent_c *v11; // x8
  Il2CppObject *v12; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  bool v14; // w22
  System_String_o *v15; // x22
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  SummonConfirmDlgComponent_c *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // [xsp+10h] [xbp-80h]
  int32_t v29; // [xsp+20h] [xbp-70h] BYREF
  int32_t v30; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v31; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4CB2760 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&UserGachaMaster_TypeInfo);
    sub_1C6BA08(&StringLiteral_3743/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_1C6BA08(&StringLiteral_3742/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_1C6BA08(&StringLiteral_6547/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_4CB2760 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v9->static_fields->DailyFreeGachaResetTime;
  v10 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0);
  v11 = SummonConfirmDlgComponent_TypeInfo;
  v12 = (Il2CppObject *)v10;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v11 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v11->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v14 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v14 )
      goto LABEL_11;
LABEL_18:
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"CONFIRM_FREESUMMON_MSG"*/, 0);
    v19 = System_String__Format(v27, v12, 0);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v14 )
    goto LABEL_18;
LABEL_11:
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v31 = maxNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64008100(v15, v12, v16, 0);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v19 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  campaignLabel = this->fields.campaignLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6547/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0);
  v30 = remainNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v29 = maxNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64008100(v21, v22, v23, 0);
  if ( !campaignLabel )
LABEL_20:
    sub_1C6BC60(gameObject, v18);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0);
  v26 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v26 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v26->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v24,
    v25);
  SummonConfirmDlgComponent__Open(this, 0, v19, 0, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0, 0, 0, 0, 0, v28);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenConfirmGroupSummon(
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
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v26; // x20
  GachaEntity_array *GachaDataInGroup; // x28
  Il2CppObject *Entity; // x29
  char v29; // w25
  int32_t v30; // w21
  Il2CppClass *klass; // x8
  GachaEntity_o *v32; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v34; // w27
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t max_length; // w22
  GachaEntity_o *v38; // x8
  GachaEntity_o *v39; // x9
  Il2CppObject *name; // x22
  Il2CppObject *v41; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Object_array *v46; // x29
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x21
  int32_t v55; // w21
  __int64 monitor; // x21
  System_String_o **v57; // x8
  GachaEntity_o *v58; // x9
  System_String_o *v59; // x20
  UILabel_o *v60; // x28
  System_String_o *v61; // x29
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Object_array *v64; // x20
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x21
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v75; // x27
  System_Object_array *v76; // x28
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  Il2CppObject *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x1
  System_Action_o *v98; // x20
  __int64 v99; // x0
  int32_t v100; // [xsp+4h] [xbp-8Ch]
  int32_t v101; // [xsp+8h] [xbp-88h]
  int32_t v102; // [xsp+Ch] [xbp-84h]
  int32_t v103; // [xsp+10h] [xbp-80h]
  int32_t v104; // [xsp+14h] [xbp-7Ch]
  int32_t v105; // [xsp+18h] [xbp-78h] BYREF
  int32_t v106; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v107; // [xsp+20h] [xbp-70h] BYREF
  int32_t v108; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v109; // [xsp+28h] [xbp-68h] BYREF
  int32_t v110; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB2763 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C6BA08(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C6BA08(&StringLiteral_3748/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/);
    sub_1C6BA08(&StringLiteral_3749/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3746/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_3747/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_4CB2763 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    price,
    *(const MethodInfo **)&haveStoneNum);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C41A9C(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C41A9C(v22);
  MasterData_object = **(_QWORD **)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v104 = price;
  v102 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v26 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v103 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0);
  v29 = 1;
  if ( (MasterData_object & 1) != 0 )
    goto LABEL_20;
  v30 = 1;
  if ( !Entity )
    goto LABEL_21;
  klass = Entity[2].klass;
  if ( !klass )
    goto LABEL_100;
  if ( !LODWORD(klass->_1.namespaze) )
  {
    v29 = 1;
LABEL_20:
    v30 = 1;
    goto LABEL_21;
  }
  MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v26, groupId, 0);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  if ( !LODWORD(GachaDataInGroup->max_length) )
LABEL_101:
    sub_1C6BC68(MasterData_object);
  v32 = GachaDataInGroup->m_Items[0];
  if ( !v32 )
    goto LABEL_100;
  v29 = 0;
  v30 = (int)MasterData_object / v32->fields.drawNum1;
LABEL_21:
  v101 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v100 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v34 = System_Math__Max_65488612(v30, 1, 0);
  this->fields.extraGiftEntList = giftEntList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v35, v36);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v38 = GachaDataInGroup->m_Items[0];
    if ( v38 )
    {
      v39 = GachaDataInGroup->m_Items[1];
      if ( v39 )
      {
        name = (Il2CppObject *)v38->fields.name;
        v41 = (Il2CppObject *)v39->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3746/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0);
        MasterData_object = sub_1C6BAB0(object___TypeInfo, 4);
        if ( MasterData_object )
        {
          v46 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1C6BB44(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !LODWORD(v46->max_length) )
            goto LABEL_101;
          v46->m_Items[0] = name;
          sub_1C6B9AC((CGThumbnailListItem_o *)v46->m_Items, (int32_t)name, v44, v45);
          if ( v41 )
          {
            MasterData_object = sub_1C6BB44(v41, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 1 )
            goto LABEL_101;
          v46->m_Items[1] = v41;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v41, v47, v48);
          v110 = v34;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v110);
          v51 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C6BB44(MasterData_object, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 2 )
            goto LABEL_101;
          v46->m_Items[2] = v51;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v46->m_Items[2], (int32_t)v51, v49, v50);
          v109 = v104;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v109);
          v54 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C6BB44(MasterData_object, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 3 )
            goto LABEL_101;
          v46->m_Items[3] = v54;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v46->m_Items[3], (int32_t)v54, v52, v53);
          MasterData_object = (__int64)System_String__Format_64008236(v43, v46, 0);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0);
          v55 = v103;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1C6BC60(MasterData_object, v21);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0);
  if ( (MasterData_object & 1) == 0 )
    monitor = (__int64)Entity[1].monitor;
  v57 = (System_String_o **)&StringLiteral_3747/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v29 & 1) == 0 )
  {
    if ( !LODWORD(GachaDataInGroup->max_length) )
      goto LABEL_101;
    v58 = GachaDataInGroup->m_Items[0];
    if ( !v58 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v58->fields.drawNum1 > 1 )
      v57 = (System_String_o **)&StringLiteral_3748/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v59 = *v57;
  v60 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v61 = LocalizationManager__Get(v59, 0);
  MasterData_object = sub_1C6BAB0(object___TypeInfo, 4);
  if ( !MasterData_object )
    goto LABEL_100;
  v64 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1C6BB44(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v64->max_length) )
    goto LABEL_101;
  v64->m_Items[0] = (Il2CppObject *)monitor;
  sub_1C6B9AC((CGThumbnailListItem_o *)v64->m_Items, monitor, v62, v63);
  v110 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v110);
  v67 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v64->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v64->max_length) <= 1 )
    goto LABEL_101;
  v64->m_Items[1] = v67;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v64->m_Items[1], (int32_t)v67, v65, v66);
  v109 = v34;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v70 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v64->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v64->max_length) <= 2 )
    goto LABEL_101;
  v64->m_Items[2] = v70;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v64->m_Items[2], (int32_t)v70, v68, v69);
  v108 = v104;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v108);
  v73 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v64->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v64->max_length) <= 3 )
    goto LABEL_101;
  v64->m_Items[3] = v73;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v64->m_Items[3], (int32_t)v73, v71, v72);
  MasterData_object = (__int64)System_String__Format_64008236(v61, v64, 0);
  if ( !v60 )
    goto LABEL_100;
  UILabel__set_text(v60, (System_String_o *)MasterData_object, 0);
  v55 = v103;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3749/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0);
  v76 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 6);
  v110 = v55;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v110);
  if ( !v76 )
    goto LABEL_100;
  v79 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v76->max_length) )
    goto LABEL_101;
  v76->m_Items[0] = v79;
  sub_1C6B9AC((CGThumbnailListItem_o *)v76->m_Items, (int32_t)v79, v77, v78);
  v109 = v102;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v82 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 1 )
    goto LABEL_101;
  v76->m_Items[1] = v82;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->m_Items[1], (int32_t)v82, v80, v81);
  v108 = v101;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v108);
  v85 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 2 )
    goto LABEL_101;
  v76->m_Items[2] = v85;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->m_Items[2], (int32_t)v85, v83, v84);
  v107 = v100;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v107);
  v88 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 3 )
    goto LABEL_101;
  v76->m_Items[3] = v88;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->m_Items[3], (int32_t)v88, v86, v87);
  v106 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v91 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 4 )
    goto LABEL_101;
  v76->m_Items[4] = v91;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->m_Items[4], (int32_t)v91, v89, v90);
  v105 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v105);
  v94 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C6BB44(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v99 = sub_1C6BC84();
      sub_1C6BB30(v99, 0);
    }
  }
  if ( LODWORD(v76->max_length) <= 5 )
    goto LABEL_101;
  v76->m_Items[5] = v94;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->m_Items[5], (int32_t)v94, v92, v93);
  MasterData_object = (__int64)System_String__Format_64008236(v75, v76, 0);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_100;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  if ( *p_extraGiftEntList && (*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v96);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v97);
  v98 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v98, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v98, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmOnePayFree(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x22
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // [xsp+10h] [xbp-50h]
  int32_t GachaDailyMaxDrawNumResetAt; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4CB2761 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3751/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/);
    byte_4CB2761 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v7->static_fields->GachaDailyMaxDrawNumResetAt;
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&GachaDailyMaxDrawNumResetAt, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v10 = System_String__Format(v9, v8, 0);
  this->fields.state = 9;
  SummonConfirmDlgComponent__Open(this, title, v10, 0, callback, 35.0, 0, 0, 0, 0, 0, v11);
}


void SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t gachaTime,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        System_String_o *summonConfirmMessage,
        GachaSubEntity_o *gachaSubEntity,
        const MethodInfo *method)
{
  System_String_o *v17; // x26
  System_Object_array *v18; // x27
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x29
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x28
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x28
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x28
  System_String_o *v33; // x26
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x25
  Il2CppObject *v37; // x24
  Il2CppObject *v38; // x0
  SummonConfirmDlgComponent_c *v39; // x0
  __int64 v40; // x0
  const MethodInfo *v41; // [xsp+10h] [xbp-80h]
  int32_t v43; // [xsp+20h] [xbp-70h] BYREF
  int32_t v44; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v45; // [xsp+28h] [xbp-68h] BYREF
  int32_t v46; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB275F & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_3753/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_4CB275F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"CONFIRM_POINTSUMMON_MSG"*/, 0);
  v18 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
  v46 = needPointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v46);
  if ( !v18 )
    sub_1C6BC60(v19, v20);
  v23 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C6BB44(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_23;
  v18->m_Items[0] = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)v18->m_Items, (int32_t)v23, v21, v22);
  v45 = gachaTime;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v26 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C6BB44(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_23;
  v18->m_Items[1] = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v26, v24, v25);
  v44 = havePointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v29 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C6BB44(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_23;
  v18->m_Items[2] = v29;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[2], (int32_t)v29, v27, v28);
  v43 = afterPointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v32 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C6BB44(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_24:
      v40 = sub_1C6BC84();
      sub_1C6BB30(v40, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 3 )
LABEL_23:
    sub_1C6BC68(v19);
  v18->m_Items[3] = v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[3], (int32_t)v32, v30, v31);
  v33 = System_String__Format_64008236(v17, v18, 0);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0) )
  {
    v46 = needPointNum;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v45 = havePointNum;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v44 = afterPointNum;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v33 = System_String__Format_64008168(summonConfirmMessage, v36, v37, v38, 0);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v34,
    v35);
  v39 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v39 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0,
    v33,
    0,
    callback,
    v39->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0,
    0,
    0,
    0,
    gachaSubEntity,
    v41);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenConfirmStone(
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
        int32_t privilegeGachaTextId,
        const MethodInfo *method)
{
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x26
  System_String_o **v30; // x8
  System_Object_array *v31; // x27
  __int64 addMsgBgSprite; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x20
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_o *v60; // x29
  System_String_o *v61; // x20
  System_String_o *v62; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x27
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v70; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v71; // x27
  GachaDetailEntity_o *v72; // x29
  System_String_o *ConfirmBonusSelectSummonTitle; // x26
  System_String_o *v74; // x20
  Il2CppObject *v75; // x24
  Il2CppObject *v76; // x0
  System_String_o *v77; // x25
  System_String_o *v78; // x24
  __int64 v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x22
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x21
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x21
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x21
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x21
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x22
  System_String_o *v98; // x20
  System_String_o *ConfirmBonusSelectSummonLowMsg; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v101; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  System_String_o *v104; // x27
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v110; // x0
  __int64 v111; // x0
  const MethodInfo *v112; // [xsp+10h] [xbp-C0h]
  int32_t v113; // [xsp+20h] [xbp-B0h]
  int32_t v114; // [xsp+2Ch] [xbp-A4h]
  int32_t v118; // [xsp+40h] [xbp-90h] BYREF
  int32_t v119; // [xsp+44h] [xbp-8Ch] BYREF
  int32_t v120; // [xsp+48h] [xbp-88h] BYREF
  int32_t v121; // [xsp+4Ch] [xbp-84h] BYREF
  int32_t v122; // [xsp+50h] [xbp-80h] BYREF
  int32_t v123; // [xsp+54h] [xbp-7Ch] BYREF
  int32_t v124; // [xsp+58h] [xbp-78h] BYREF
  int32_t v125; // [xsp+5Ch] [xbp-74h] BYREF
  System_String_o *defaultText; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *resultText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4CB275D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_12437/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/);
    sub_1C6BA08(&StringLiteral_3735/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_1C6BA08(&StringLiteral_3731/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_1C6BA08(&StringLiteral_3752/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_1C6BA08(&StringLiteral_3732/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_1C6BA08(&StringLiteral_12481/*"SUMMON_WARNING_MESSAGE_501"*/);
    sub_1C6BA08(&StringLiteral_12479/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_12466/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_1C6BA08(&StringLiteral_3755/*"CONFIRM_SUMMON_MESSAGE_{0}"*/);
    sub_1C6BA08(&StringLiteral_12482/*"SUMMON_WARNING_MESSAGE_{0}"*/);
    sub_1C6BA08(&StringLiteral_12427/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_1C6BA08(&StringLiteral_3734/*"CONFIRM_CHARGESUMMON_MSG"*/);
    sub_1C6BA08(&StringLiteral_3754/*"CONFIRM_SUMMON_MESSAGE_501"*/);
    byte_4CB275D = 1;
  }
  defaultText = 0;
  this->fields.extraGiftEntList = giftEntList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    type,
    *(const MethodInfo **)&price);
  if ( privilegeGachaTextId < 1 )
  {
    if ( isAppendSummon )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o **)&StringLiteral_3735/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o **)&StringLiteral_3734/*"CONFIRM_CHARGESUMMON_MSG"*/;
      if ( type != 7 )
        v30 = (System_String_o **)&StringLiteral_3752/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v29 = LocalizationManager__Get(*v30, 0);
    resultText = v29;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    resultText = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"CONFIRM_SUMMON_MESSAGE_501"*/, 0);
    v125 = privilegeGachaTextId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
    v28 = System_String__Format((System_String_o *)StringLiteral_3755/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v27, 0);
    LocalizationManager__TryGet(&resultText, v28, resultText, 0);
    v29 = resultText;
  }
  v31 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 9);
  v125 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v125);
  if ( !v31 )
    goto LABEL_102;
  v36 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( !LODWORD(v31->max_length) )
    goto LABEL_101;
  v31->m_Items[0] = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)v31->m_Items, (int32_t)v36, v34, v35);
  v124 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v124);
  v39 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 1 )
    goto LABEL_101;
  v31->m_Items[1] = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[1], (int32_t)v39, v37, v38);
  v123 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v42 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 2 )
    goto LABEL_101;
  v31->m_Items[2] = v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[2], (int32_t)v42, v40, v41);
  v122 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v122);
  v45 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 3 )
    goto LABEL_101;
  v31->m_Items[3] = v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[3], (int32_t)v45, v43, v44);
  v121 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v121);
  v48 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v114 = price;
  if ( LODWORD(v31->max_length) <= 4 )
    goto LABEL_101;
  v31->m_Items[4] = v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[4], (int32_t)v48, v46, v47);
  v120 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v120);
  v51 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 5 )
    goto LABEL_101;
  v31->m_Items[5] = v51;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[5], (int32_t)v51, v49, v50);
  v119 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v119);
  v54 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 6 )
    goto LABEL_101;
  v31->m_Items[6] = v54;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[6], (int32_t)v54, v52, v53);
  v118 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v118);
  v57 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 7 )
    goto LABEL_101;
  v31->m_Items[7] = v57;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[7], (int32_t)v57, v55, v56);
  if ( title )
  {
    addMsgBgSprite = sub_1C6BB44(title, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v113 = haveFreeStoneNum;
  if ( LODWORD(v31->max_length) <= 8 )
    goto LABEL_101;
  v31->m_Items[8] = (Il2CppObject *)title;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->m_Items[8], (int32_t)title, v58, v59);
  v60 = System_String__Format_64008236(v29, v31, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12479/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_102;
  v61 = (System_String_o *)addMsgBgSprite;
  UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 434, 0);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_102;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 60, 0);
  if ( privilegeGachaTextId < 1 )
  {
    if ( !isPickup )
      goto LABEL_60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v70 = System_String__Format(v68, DateTime, 0);
    addMsgBgSprite = (__int64)System_String__Concat_63966792(v61, v70, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v61 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 494, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0);
    defaultText = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"SUMMON_WARNING_MESSAGE_501"*/, 0);
    v125 = privilegeGachaTextId;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
    v64 = System_String__Format((System_String_o *)StringLiteral_12482/*"SUMMON_WARNING_MESSAGE_{0}"*/, v63, 0);
    LocalizationManager__TryGet(&defaultText, v64, defaultText, 0);
    v65 = defaultText;
    v66 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v67 = System_String__Format_64008100(v65, (Il2CppObject *)title, v66, 0);
    addMsgBgSprite = (__int64)System_String__Concat_63966792(v62, v67, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v61 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 652, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 76, 0);
LABEL_60:
  v71 = callback;
  this->fields.state = 4;
  if ( gachaId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    addMsgBgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    addMsgBgSprite = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)addMsgBgSprite,
                                gachaId,
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    v72 = (GachaDetailEntity_o *)addMsgBgSprite;
    ConfirmBonusSelectSummonTitle = GachaDetailEntity__GetConfirmBonusSelectSummonTitle(
                                      (GachaDetailEntity_o *)addMsgBgSprite,
                                      0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0);
    v125 = v114;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
    v124 = num;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
    v77 = System_String__Format_64008100(v74, v75, v76, 0);
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0);
    v79 = sub_1C6BAB0(object___TypeInfo, 6);
    v123 = haveStoneNum;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v123);
    if ( !v79 )
      goto LABEL_102;
    v82 = addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v79 + 24) )
        goto LABEL_101;
      *(_QWORD *)(v79 + 32) = v82;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 32), v82, v80, v81);
      v122 = haveChargeStoneNum;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v122);
      v85 = addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v79 + 24) <= 1u )
          goto LABEL_101;
        *(_QWORD *)(v79 + 40) = v85;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 40), v85, v83, v84);
        v121 = v113;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v121);
        v88 = addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v79 + 24) <= 2u )
            goto LABEL_101;
          *(_QWORD *)(v79 + 48) = v88;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 48), v88, v86, v87);
          v120 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v120);
          v91 = addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v79 + 24) <= 3u )
              goto LABEL_101;
            *(_QWORD *)(v79 + 56) = v91;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 56), v91, v89, v90);
            v119 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v119);
            v94 = addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v79 + 24) <= 4u )
                goto LABEL_101;
              *(_QWORD *)(v79 + 64) = v94;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 64), v94, v92, v93);
              v118 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v118);
              v97 = addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_1C6BB44(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v79 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v79 + 24) > 5u )
                {
                  *(_QWORD *)(v79 + 72) = v97;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 72), v97, v95, v96);
                  v98 = System_String__Format_64008236(v78, (System_Object_array *)v79, 0);
                  ConfirmBonusSelectSummonLowMsg = GachaDetailEntity__GetConfirmBonusSelectSummonLowMsg(v72, 0);
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v101 = ConfirmBonusSelectSummonLowMsg;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_102;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_102;
                    MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v104 = v77;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__52199488(
                                                MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
                    if ( !addMsgBgSprite )
                      goto LABEL_102;
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)addMsgBgSprite,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo,
                      (int32_t)Component_object,
                      v107,
                      v108);
                    v77 = v104;
                    v71 = callback;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      ConfirmBonusSelectSummonTitle,
                      v77,
                      v98,
                      v101,
                      tryGetBonusSelectData,
                      assetManager,
                      0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0);
                      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                      SummonConfirmDlgComponent__Open(this, 0, 0, v110, v71, 14.0, 0, shopIdIdx, 0, 1, 0, v112);
                      return;
                    }
                  }
LABEL_102:
                  sub_1C6BC60(addMsgBgSprite, v33);
                }
LABEL_101:
                sub_1C6BC68(addMsgBgSprite);
              }
            }
          }
        }
      }
    }
LABEL_103:
    v111 = sub_1C6BC84();
    sub_1C6BB30(v111, 0);
  }
  SummonConfirmDlgComponent__Open(this, title, v60, 0, callback, 14.0, v61, shopIdIdx, isAppendSummon, 0, 0, v112);
}


void SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v13; // x24
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x25
  Il2CppObject *v18; // x24
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // [xsp+10h] [xbp-60h]
  int32_t v22; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v23; // [xsp+28h] [xbp-48h] BYREF
  int32_t v24; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4CB275E & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3757/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_1C6BA08(&StringLiteral_3758/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB275E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"CONFIRM_TICKETSUMMON_MSG"*/, 0);
    v24 = haveTicketNum;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = afterTicketNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v16 = System_String__Format_64008100(v13, v14, v15, 0);
  }
  else
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0);
    v24 = num;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = haveTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = afterTicketNum;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v16 = System_String__Format_64008168(v17, v18, v19, v20, 0);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v16, 0, callback, 14.0, 0, 0, 0, 0, 0, v21);
}


void SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v10; // x22
  System_String_o *v11; // x24
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-70h]
  int32_t v18; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v19; // [xsp+28h] [xbp-58h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-54h] BYREF

  v20 = haveFreeStoneNum;
  if ( (byte_4CB2759 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12371/*"STONE_PURCHASE"*/);
    sub_1C6BA08(&StringLiteral_12185/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2759 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SHORT_HAVE_CHARGE_STONE"*/, 0);
  v19 = price;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = haveChargeStoneNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v14 = (Il2CppObject *)System_Int32__ToString_65475288((int32_t)&v20, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
  v15 = System_String__Format_64008168(v11, v12, v13, v14, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12371/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v15, v16, callback, 14.0, 0, 0, 0, 0, 0, v17);
}


void SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // [xsp+10h] [xbp-50h]
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4CB275C & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12186/*"SHORT_HAVE_POINT"*/);
    sub_1C6BA08(&StringLiteral_12184/*"SHORT_DLG_TITLE"*/);
    byte_4CB275C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SHORT_DLG_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SHORT_HAVE_POINT"*/, 0);
  v12 = havePoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10 = System_String__Format(v8, v9, 0);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v10, 0, callback, 14.0, 0, 0, 0, 0, 0, v11);
}


void SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveFreeStone,
        int32_t haveChargeStone,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4CB2758 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12371/*"STONE_PURCHASE"*/);
    sub_1C6BA08(&StringLiteral_12187/*"SHORT_HAVE_STONE"*/);
    sub_1C6BA08(&StringLiteral_12184/*"SHORT_DLG_TITLE"*/);
    byte_4CB2758 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SHORT_DLG_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SHORT_HAVE_STONE"*/, 0);
  v17 = haveChargeStone;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = haveFreeStone;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format_64008100(v10, v11, v12, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12371/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v9, v13, v14, callback, 14.0, 0, 0, 0, 0, 0, v15);
}


void SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v8; // x1
  int32_t klass; // w21
  BalanceConfig_c *v10; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v13; // x20
  System_String_o **v14; // x9
  System_String_o *v15; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v22; // x0
  System_Action_object__o *_9__80_0; // x22
  Il2CppObject *v24; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int i; // w24
  int32_t v29; // w21
  struct ItemIconComponent_array *v30; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v32; // x23
  UILabel_o *v33; // x21
  int32_t *v34; // x22
  SummonConfirmDlgComponent_c *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w8
  System_String_o *v38; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v40; // x0
  int32_t v41; // w8
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v46; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB2767 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__);
    sub_1C6BA08(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_12438/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_12440/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12441/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12443/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12442/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_1C6BA08(&StringLiteral_12439/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_4CB2767 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v22 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v22 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__80_0 = (System_Action_object__o *)v22->static_fields->__9__80_0;
    if ( !_9__80_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__80_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__80_0, v24, Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__, 0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__80_0 = (struct System_Action_ItemIconComponent__o *)_9__80_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__80_0, (int32_t)_9__80_0, v26, v27);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__80_0,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v29 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v29 >= *(_DWORD *)(SelfUserGame[7].fields.m_CachedPtr + 60) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v29 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v29,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v30 = this->fields.extraItemIconComponents;
      if ( !v30 )
        goto LABEL_59;
      if ( (unsigned int)v29 >= LODWORD(v30->max_length) )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( (unsigned int)v29 >= LODWORD(extraMessageLabels->max_length) )
LABEL_60:
        sub_1C6BC68(SelfUserGame);
      v32 = (UnityEngine_Component_o *)v30->m_Items[v29];
      if ( !v32 )
        goto LABEL_59;
      v33 = extraMessageLabels->m_Items[v29];
      v34 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v32, 0);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0);
      if ( !v34 )
        goto LABEL_59;
      ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)v32, v34[5], v34[6], v34[7], 0, 0);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v35 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v35 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v35->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0);
        v37 = v34[7];
        v38 = v36;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v37, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v38, NumberFormat, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0);
        v41 = v34[7];
        v42 = v40;
        v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41, 0);
        v44 = System_String__Format(v42, v43, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_63966792(
                                                     v44,
                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                     0);
      }
      v8 = SelfUserGame;
      if ( !v33 )
        goto LABEL_59;
      UILabel__set_text(v33, (System_String_o *)SelfUserGame, 0);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0);
    if ( extraTitleLabel )
    {
      UILabel__set_text(extraTitleLabel, (System_String_o *)SelfUserGame, 0);
      return;
    }
    goto LABEL_59;
  }
  if ( bonusType != 1 )
    return;
  if ( !SelfUserGame )
    goto LABEL_59;
  klass = (int32_t)SelfUserGame[8].klass;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = klass < v10->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_3161D1C *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v13 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v14 = (System_String_o **)&StringLiteral_12440/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12443/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  messageLabel = this->fields.messageLabel;
  v17 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12438/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12442/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0);
  if ( !v13
    || (v19 = (System_String_o *)SelfUserGame,
        v46 = v13[7],
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v19, v20, 0),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0) )
  {
LABEL_59:
    sub_1C6BC60(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)SelfUserGame, v13[5], v13[6], v13[7], 0, 0);
}


void SummonConfirmDlgComponent__SetBonusTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *titleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *messageLabel; // x9
  SummonConfirmDlgComponent_o *v5; // x19
  int v6; // w8
  int v7; // w22
  int v8; // w23
  int addMsgBgSprite; // w24
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
  addMsgBgSprite = (int)this->fields.addMsgBgSprite;
  v10 = v6 >> 1;
  v11 = addMsgBgSprite >= 0 ? LODWORD(this->fields.addMsgBgSprite) : addMsgBgSprite + 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v10 + (v11 >> 1)), 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  v15 = *(float *)&localPosition;
  v16 = v7 + mWidth + addMsgBgSprite;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v17, (float)(v15 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0);
  v18 = v16 >= 0 ? v16 : v16 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.bonusMsgInfo, (float)(v10 - (v18 >> 1)), 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.titleLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemIconComponent) == 0)
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusMsgInfo) == 0) )
  {
LABEL_31:
    sub_1C6BC60(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *v2; // x19
  struct UILabel_o *extraTitleLabel; // x8
  float v4; // s10
  unsigned int v5; // w23
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
  if ( (byte_4CB2768 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    byte_4CB2768 = 1;
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
    if ( (signed int)v5 >= SLODWORD(this->fields.closeBtn->fields.pressed.fields.g) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= LODWORD(extraItemIconComponents->max_length) )
LABEL_28:
      sub_1C6BC68(this);
    this = (SummonConfirmDlgComponent_o *)extraItemIconComponents->m_Items[v5];
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v2->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v5 >= LODWORD(extraMessageLabels->max_length) )
      goto LABEL_28;
    v10 = v2->fields.extraItemIconComponents;
    if ( !v10 )
      goto LABEL_27;
    if ( v5 >= LODWORD(v10->max_length) )
      goto LABEL_28;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_27;
    v12 = &extraMessageLabels->obj.klass + (int)v5;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_27;
    iconSprite = v11->fields.iconSprite;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)v12[4], 0);
    if ( !iconSprite )
      goto LABEL_27;
    implementedInterfaces = (int)v13->_1.implementedInterfaces;
    v16 = (float)iconSprite->fields.mWidth * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v19, v6 + v16, 0);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v21, 0);
    GameObjectExtensions__SetLocalPositionX(v20, v16 + LocalPositionX, 0);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    v24 = GameObjectExtensions__GetLocalPositionX(v23, 0);
    v25 = (int)v13->_1.implementedInterfaces;
    v26 = v24;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)iconSprite,
                                            0);
    if ( !this )
      goto LABEL_27;
    v7 = v7 + (float)(v16 + (float)((float)(LocalScaleX * (float)implementedInterfaces) * 0.5));
    v6 = v26 + (float)v25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    ++v5;
  }
  GameObjectExtensions__SetLocalPositionX(v2->fields.extraMsgInfo, v4 - v7, 0);
  this = (SummonConfirmDlgComponent_o *)v2->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v2->fields.extraMsgInfo) == 0) )
  {
LABEL_27:
    sub_1C6BC60(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


bool SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
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
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  SummonConfirmDlgComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  System_Func_object__int__o *_9__79_1; // x24
  Il2CppObject *v22; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
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

  if ( (byte_4CB2766 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C6BA08(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__);
    sub_1C6BA08(&Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__);
    sub_1C6BA08(&SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
    sub_1C6BA08(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4CB2766 = 1;
  }
  v5 = sub_1C6BC54(SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_51;
  *(_DWORD *)(v5 + 16) = shopIdIdx;
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_width(baseWindowSprite, 780, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_height(baseWindowSprite, 480, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.confirmBtnObject;
  if ( !baseWindowSprite )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.infoMsgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)baseWindowSprite, 20, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.singleMsgInfo;
  if ( !baseWindowSprite
    || (v10 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0),
        GameObjectExtensions__SetLocalPositionY(v10, 19.0, 0),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0)
    || (v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0),
        GameObjectExtensions__SetLocalPositionY(v11, -29.0, 0),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_51:
    sub_1C6BC60(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___);
  v13 = (System_Func_object__bool__o **)(v5 + 24);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v14 = *v13;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v13 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__,
        0);
      *(_QWORD *)(v5 + 24) = v14;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v14, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v19 = SummonConfirmDlgComponent___c_TypeInfo;
    v20 = v18;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v19 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__79_1 = (System_Func_object__int__o *)v19->static_fields->__9__79_1;
    if ( !_9__79_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__79_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__79_1,
        v22,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__,
        0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__79_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__79_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__79_1, (int32_t)_9__79_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__79_1,
                                                                 (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v27 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v26,
                                                (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v27, 0);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v27,
                        0);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v29);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v31 = this->fields.bonusMsgInfo;
        v32 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v32 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v31, v32->static_fields->GROUP_BONUS_LABEL_POS_Y, 0);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v33);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v35 = this->fields.extraMsgInfo;
        v36 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v36, 0, 0) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0) )
        {
          v37 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v37 = SummonConfirmDlgComponent_TypeInfo;
          }
          v38 = 48;
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
          v38 = 44;
        }
        GameObjectExtensions__SetLocalPositionY(
          v35,
          *(float *)((char *)&v37->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v38),
          0);
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


void SummonConfirmDlgComponent__add_callbackFunc(
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

  if ( (byte_4CB2755 & 1) == 0 )
  {
    sub_1C6BA08(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4CB2755 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  SummonConfirmDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void SummonConfirmDlgComponent__remove_callbackFunc(
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

  if ( (byte_4CB2756 & 1) == 0 )
  {
    sub_1C6BA08(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4CB2756 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void SummonConfirmDlgComponent__setBtnInfoActive(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v5; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4CB2765 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12419/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_4CB2765 = 1;
  }
  state = this->fields.state;
  if ( state > 9 )
    return;
  if ( ((1 << state) & 0x370) == 0 )
  {
    if ( ((1 << state) & 6) != 0 )
    {
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
      {
        closeBtnObject = this->fields.closeBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
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
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
      {
        closeBtnObject = this->fields.confirmBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
      }
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
LABEL_32:
        sub_1C6BC60(closeBtnObject, method);
    }
LABEL_30:
    UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0);
    return;
  }
  closeBtnObject = this->fields.closeBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
  {
    closeBtnObject = this->fields.closeBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
  }
  closeBtnObject = this->fields.confirmBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0);
  v5 = this->fields.state;
  if ( v5 == 8 || v5 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SUMMON_AUTOSALE_BUTTON"*/, 0);
    if ( !settingBtnLb )
      goto LABEL_32;
    UILabel__set_text(settingBtnLb, (System_String_o *)closeBtnObject, 0);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    goto LABEL_30;
  }
}


void SummonConfirmDlgComponent__setTutorial(
        SummonConfirmDlgComponent_o *this,
        bool isTutorial,
        const MethodInfo *method)
{
  struct UIButton_o *closeBtn; // x0

  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    sub_1C6BC60(0, isTutorial);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))closeBtn->klass->vtable._5_set_isEnabled.methodPtr)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._5_set_isEnabled.method);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__settingResult(SummonConfirmDlgComponent_o *this, bool res, const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0);
      return;
    }
LABEL_8:
    sub_1C6BC60(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_35735108(this, 0, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))autoSaleDialogCloseCallbackFunc->fields.invoke_impl)(
      autoSaleDialogCloseCallbackFunc->fields.method_code,
      autoSaleDialogCloseCallbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent_CallbackFunc___ctor(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9DAE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DAA0;
}


System_IAsyncResult_o *SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB276F & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB276F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void SummonConfirmDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2770 & 1) == 0 )
  {
    sub_1C6BA08(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4CB2770 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SummonConfirmDlgComponent___c___Open_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.giftId;
}


void SummonConfirmDlgComponent___c___SetBonusText_b__80_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0)) == 0 )
  {
    sub_1C6BC60(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int32_t SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__79_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.giftId;
}


void SummonConfirmDlgComponent___c__DisplayClass75_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonConfirmDlgComponent___c__DisplayClass75_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void SummonConfirmDlgComponent___c__DisplayClass79_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonConfirmDlgComponent___c__DisplayClass79_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass79_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}