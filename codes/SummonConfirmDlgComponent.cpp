void SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4D28BB8 & 1) == 0 )
  {
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    byte_4D28BB8 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_CFE670;
  *(_OWORD *)&static_fields->PRIVILEGE_SUMMON_MESSAGE_WIDTH_THRESHOLD = xmmword_CFE790;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_CFFE80;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D28BB7 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D28BB7 = 1;
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
  if ( (byte_4D28BA4 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_1C94098(&StringLiteral_396/*"#,0"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D28BA4 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0);
  v17 = haveChargeStoneNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = (Il2CppObject *)System_Int32__ToString_65926240((int32_t)&v18, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
  v13 = System_String__Format_64459052(v10, v11, v12, 0);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v13, 0),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1C942F0(v13, v14);
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
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v38; // x0
  const MethodInfo *v39; // [xsp+10h] [xbp-80h]
  int32_t v40; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v41; // [xsp+28h] [xbp-68h] BYREF
  int32_t v42; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D28BA5 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&StringLiteral_12421/*"STONE_PURCHASE"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_2955/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_2956/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_4D28BA5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0);
  v42 = haveStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v41 = haveChargeStoneNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v40 = haveFreeStoneNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  baseWindow = System_String__Format_64459120(v18, v19, v20, v21, 0);
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__52598436(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1C942F0(baseWindow, v23);
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
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0);
  this->fields.state = 4;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"STONE_PURCHASE"*/, 0);
  SummonConfirmDlgComponent__Open(this, 0, 0, v38, callback, 14.0, 0, 0, 0, 1, 0, v39);
}


void SummonConfirmDlgComponent__Callback(SummonConfirmDlgComponent_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_36089492(this, 0, v2);
}


void SummonConfirmDlgComponent__Close_36089492(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D28BB3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_4D28BB3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4D28BB4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28BB4 = 1;
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
    sub_1C942F0(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7, v8, v9, v10, v11);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4D28BA1 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28BA1 = 1;
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
    sub_1C942F8(confirmTitleLabel);
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.extraGiftEntList, 0, v16, v17, v18, v19, v20, v21);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v22,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v23,
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
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_65:
    sub_1C942F0(confirmTitleLabel, method);
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

  if ( (byte_4D28BB5 & 1) == 0 )
  {
    sub_1C94098(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_1C94098(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_4D28BB5 = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C942E4(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0),
        !autoSaleDlgInfo) )
  {
    sub_1C942F0(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0);
}


void SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4D28BB6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4652/*"ConfirmWindow/CloseButton"*/);
    sub_1C94098(&StringLiteral_4654/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_1C94098(&StringLiteral_4650/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_4D28BB6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(transform, (System_String_o *)StringLiteral_4654/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(v4, (System_String_o *)StringLiteral_4652/*"ConfirmWindow/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(v5, (System_String_o *)StringLiteral_4650/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0);
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v31; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v37; // x27
  int32_t v38; // w25
  UILabel_o *v39; // x27
  UILabel_o *v40; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v42; // x25
  int32_t v43; // w23
  float CONFIRM_TITLE_LABEL_POS_Y; // s8
  SummonConfirmDlgComponent_c *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v48; // w0
  float v49; // s8
  int32_t v50; // w24
  float v51; // s9
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct UILabel_o *addMsgLabel; // x8
  int32_t mWidth; // w22
  UIWidget_o *addMsgBgSprite; // x22
  UILabel_o *v57; // x22
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v61; // x22
  System_Func_object__bool__o **v62; // x24
  System_Func_object__bool__o *v63; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x25
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  SummonConfirmDlgComponent___c_c *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x25
  System_Func_object__int__o *_9__75_1; // x26
  Il2CppObject *v75; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_ICollection_o *v84; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v86; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v88; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v90; // w8
  bool v91; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v96; // s0
  float v97; // s1
  float v98; // s8
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  bool v101; // w1
  const MethodInfo *v102; // x1
  System_Action_o *v103; // x20

  if ( (byte_4D28BAC & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C94098(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C94098(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent___c__Open_b__75_1__);
    sub_1C94098(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__);
    sub_1C94098(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28BAC = 1;
  }
  v21 = sub_1C942E4(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_147;
  *(_DWORD *)(v21 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    if ( title )
      v31 = title;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v31, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v33 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v33, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v34, msgOffY, 0);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0);
      v37 = this->fields.confirmDetailLabel;
      v38 = (int)gameObject;
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
      if ( !v37 )
        goto LABEL_147;
      UILabel__set_spacingX(v37, SummonConfirmMessageSpacingX, 0);
      v39 = this->fields.confirmDetailLabel;
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
      if ( !v39 )
        goto LABEL_147;
      UILabel__set_spacingY(v39, SummonConfirmMessageSpacingY, 0);
      v40 = this->fields.confirmDetailLabel;
      if ( !v38 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v38 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      if ( !v40 )
        goto LABEL_147;
      UILabel__set_fontSize(v40, v38, 0);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v42 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v42 )
      goto LABEL_147;
    UILabel__set_text(v42, decideTxt, 0);
  }
  v43 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0);
  if ( this->fields.state == 5 )
  {
    if ( v43 <= 2 )
    {
      v45 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v45 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y = v45->static_fields->CONFIRM_TITLE_LABEL_POS_Y;
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y = 164.0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v46, CONFIRM_TITLE_LABEL_POS_Y, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v48 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v48 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v43 <= 2 )
      v49 = 54.0;
    else
      v49 = 43.0;
    if ( v43 <= 2 )
      v50 = 20;
    else
      v50 = 18;
    if ( !gameObject )
      goto LABEL_147;
    v51 = v43 <= 2 ? 188.0 : 178.0;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v52, v51, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v53, v49, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, v50, 0);
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
    v57 = this->fields.addMsgLabel;
    if ( !LODWORD(gameObject[9].monitor) )
      j_il2cpp_runtime_class_init_0(gameObject);
    if ( !v57 )
      goto LABEL_147;
    UILabel__SetCondensedScale(
      v57,
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_147;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v21 + 20) = 1;
      v61 = (GiftMaster_o *)MasterData_object;
      v62 = (System_Func_object__bool__o **)(v21 + 24);
      while ( 1 )
      {
        v63 = *v62;
        v64 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v62 )
        {
          v63 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v63,
            (Il2CppObject *)v21,
            Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__,
            0);
          *(_QWORD *)(v21 + 24) = v63;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 24), (int32_t)v63, v65, v66, v67, v68, v69, v70);
        }
        v71 = System_Linq_Enumerable__Where_object_(
                v64,
                (System_Func_TSource__bool__o *)v63,
                (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v72 = SummonConfirmDlgComponent___c_TypeInfo;
        v73 = v71;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v72 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__75_1 = (System_Func_object__int__o *)v72->static_fields->__9__75_1;
        if ( !_9__75_1 )
        {
          if ( !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            v72 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v75 = (Il2CppObject *)v72->static_fields->__9;
          _9__75_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__75_1, v75, Method_SummonConfirmDlgComponent___c__Open_b__75_1__, 0);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__75_1,
            (int32_t)_9__75_1,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82);
        }
        v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v73,
                                                                     (System_Func_TSource__TResult__o *)_9__75_1,
                                                                     (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v84 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v83,
                                                    (const MethodInfo_31E12DC *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v84, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v61 )
            goto LABEL_147;
          GiftListByIds = GiftMaster__GetGiftListByIds(v61, (System_Collections_Generic_IEnumerable_int__o *)v84, 0);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v21 + 20), v86);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v88);
            goto LABEL_116;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 2 )
            break;
        }
        v90 = *(_DWORD *)(v21 + 20) + 1;
        v91 = *(_DWORD *)(v21 + 20) - 2 < 0;
        *(_DWORD *)(v21 + 20) = v90;
        if ( v91 == __OFSUB__(v90, 3) )
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
        v93 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(
          v93,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v94 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v96 = -42.0;
        if ( v43 > 2 )
          v96 = -44.0;
        v97 = -34.0;
        if ( v43 <= 2 )
          v97 = -30.0;
        if ( isAppendSummon )
          v98 = v97;
        else
          v98 = v96;
        if ( !gameObject )
          goto LABEL_147;
        v99 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v99, v98, 0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v100 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v100, v98, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_147;
        v94 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v94, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0);
    }
LABEL_136:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v101 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v101 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v101, 0);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.singleMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.defMsgInfo) == 0) )
  {
LABEL_147:
    sub_1C942F0(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v102);
  v103 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v103, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_4D28BAE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_4D28BAE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.defMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.confirmBtnObject) == 0) )
  {
    sub_1C942F0(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  SummonConfirmDlgComponent_c *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // [xsp+10h] [xbp-80h]
  int32_t v33; // [xsp+20h] [xbp-70h] BYREF
  int32_t v34; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v35; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4D28BAA & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&UserGachaMaster_TypeInfo);
    sub_1C94098(&StringLiteral_3756/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_1C94098(&StringLiteral_3755/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_1C94098(&StringLiteral_6562/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_4D28BAA = 1;
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
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"CONFIRM_FREESUMMON_MSG"*/, 0);
    v19 = System_String__Format(v31, v12, 0);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v14 )
    goto LABEL_18;
LABEL_11:
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v35 = maxNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(v15, v12, v16, 0);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v19 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  campaignLabel = this->fields.campaignLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6562/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0);
  v34 = remainNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v33 = maxNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(v21, v22, v23, 0);
  if ( !campaignLabel )
LABEL_20:
    sub_1C942F0(gameObject, v18);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0);
  v30 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v30 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v30->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  SummonConfirmDlgComponent__Open(this, 0, v19, 0, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0, 0, 0, 0, 0, v32);
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
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t max_length; // w22
  GachaEntity_o *v42; // x8
  GachaEntity_o *v43; // x9
  Il2CppObject *name; // x22
  Il2CppObject *v45; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Object_array *v54; // x29
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x21
  int32_t v75; // w21
  __int64 monitor; // x21
  System_String_o **v77; // x8
  GachaEntity_o *v78; // x9
  System_String_o *v79; // x20
  UILabel_o *v80; // x28
  System_String_o *v81; // x29
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  System_Object_array *v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  Il2CppObject *v95; // x21
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  Il2CppObject *v102; // x21
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  Il2CppObject *v109; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v111; // x27
  System_Object_array *v112; // x28
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  Il2CppObject *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  Il2CppObject *v126; // x20
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  Il2CppObject *v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  Il2CppObject *v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  Il2CppObject *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  Il2CppObject *v154; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x1
  System_Action_o *v158; // x20
  __int64 v159; // x0
  int32_t v160; // [xsp+4h] [xbp-8Ch]
  int32_t v161; // [xsp+8h] [xbp-88h]
  int32_t v162; // [xsp+Ch] [xbp-84h]
  int32_t v163; // [xsp+10h] [xbp-80h]
  int32_t v164; // [xsp+14h] [xbp-7Ch]
  int32_t v165; // [xsp+18h] [xbp-78h] BYREF
  int32_t v166; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v167; // [xsp+20h] [xbp-70h] BYREF
  int32_t v168; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v169; // [xsp+28h] [xbp-68h] BYREF
  int32_t v170; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D28BAD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C94098(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C94098(&StringLiteral_3761/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/);
    sub_1C94098(&StringLiteral_3762/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_3759/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_3760/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_4D28BAD = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    price,
    haveStoneNum,
    *(System_String_o **)&haveFreeStoneNum,
    haveChargeStoneNum,
    *(int64_t *)&afterStoneNum,
    *(System_String_o **)&afterFreeStoneNum);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C6A12C(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C6A12C(v22);
  MasterData_object = **(_QWORD **)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v164 = price;
  v162 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v26 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v163 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
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
    sub_1C942F8(MasterData_object);
  v32 = GachaDataInGroup->m_Items[0];
  if ( !v32 )
    goto LABEL_100;
  v29 = 0;
  v30 = (int)MasterData_object / v32->fields.drawNum1;
LABEL_21:
  v161 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v160 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v34 = System_Math__Max_65939564(v30, 1, 0);
  this->fields.extraGiftEntList = giftEntList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v42 = GachaDataInGroup->m_Items[0];
    if ( v42 )
    {
      v43 = GachaDataInGroup->m_Items[1];
      if ( v43 )
      {
        name = (Il2CppObject *)v42->fields.name;
        v45 = (Il2CppObject *)v43->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0);
        MasterData_object = sub_1C94140(object___TypeInfo, 4);
        if ( MasterData_object )
        {
          v54 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1C941D4(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !LODWORD(v54->max_length) )
            goto LABEL_101;
          v54->m_Items[0] = name;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)v54->m_Items, (int32_t)name, v48, v49, v50, v51, v52, v53);
          if ( v45 )
          {
            MasterData_object = sub_1C941D4(v45, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v54->max_length) <= 1 )
            goto LABEL_101;
          v54->m_Items[1] = v45;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v54->m_Items[1], (int32_t)v45, v55, v56, v57, v58, v59, v60);
          v170 = v34;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v170);
          v67 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C941D4(MasterData_object, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v54->max_length) <= 2 )
            goto LABEL_101;
          v54->m_Items[2] = v67;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v54->m_Items[2], (int32_t)v67, v61, v62, v63, v64, v65, v66);
          v169 = v164;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v169);
          v74 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C941D4(MasterData_object, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v54->max_length) <= 3 )
            goto LABEL_101;
          v54->m_Items[3] = v74;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v54->m_Items[3], (int32_t)v74, v68, v69, v70, v71, v72, v73);
          MasterData_object = (__int64)System_String__Format_64459188(v47, v54, 0);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0);
          v75 = v163;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1C942F0(MasterData_object, v21);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0);
  if ( (MasterData_object & 1) == 0 )
    monitor = (__int64)Entity[1].monitor;
  v77 = (System_String_o **)&StringLiteral_3760/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v29 & 1) == 0 )
  {
    if ( !LODWORD(GachaDataInGroup->max_length) )
      goto LABEL_101;
    v78 = GachaDataInGroup->m_Items[0];
    if ( !v78 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v78->fields.drawNum1 > 1 )
      v77 = (System_String_o **)&StringLiteral_3761/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v79 = *v77;
  v80 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v81 = LocalizationManager__Get(v79, 0);
  MasterData_object = sub_1C94140(object___TypeInfo, 4);
  if ( !MasterData_object )
    goto LABEL_100;
  v88 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1C941D4(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v88->max_length) )
    goto LABEL_101;
  v88->m_Items[0] = (Il2CppObject *)monitor;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v88->m_Items, monitor, v82, v83, v84, v85, v86, v87);
  v170 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v170);
  v95 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v88->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v88->max_length) <= 1 )
    goto LABEL_101;
  v88->m_Items[1] = v95;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v88->m_Items[1], (int32_t)v95, v89, v90, v91, v92, v93, v94);
  v169 = v34;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v169);
  v102 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v88->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v88->max_length) <= 2 )
    goto LABEL_101;
  v88->m_Items[2] = v102;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v88->m_Items[2], (int32_t)v102, v96, v97, v98, v99, v100, v101);
  v168 = v164;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v168);
  v109 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v88->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v88->max_length) <= 3 )
    goto LABEL_101;
  v88->m_Items[3] = v109;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v88->m_Items[3], (int32_t)v109, v103, v104, v105, v106, v107, v108);
  MasterData_object = (__int64)System_String__Format_64459188(v81, v88, 0);
  if ( !v80 )
    goto LABEL_100;
  UILabel__set_text(v80, (System_String_o *)MasterData_object, 0);
  v75 = v163;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0);
  v112 = (System_Object_array *)sub_1C94140(object___TypeInfo, 6);
  v170 = v75;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v170);
  if ( !v112 )
    goto LABEL_100;
  v119 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v112->max_length) )
    goto LABEL_101;
  v112->m_Items[0] = v119;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v112->m_Items, (int32_t)v119, v113, v114, v115, v116, v117, v118);
  v169 = v162;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v169);
  v126 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v112->max_length) <= 1 )
    goto LABEL_101;
  v112->m_Items[1] = v126;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v112->m_Items[1], (int32_t)v126, v120, v121, v122, v123, v124, v125);
  v168 = v161;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v168);
  v133 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v112->max_length) <= 2 )
    goto LABEL_101;
  v112->m_Items[2] = v133;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v112->m_Items[2], (int32_t)v133, v127, v128, v129, v130, v131, v132);
  v167 = v160;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v167);
  v140 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v112->max_length) <= 3 )
    goto LABEL_101;
  v112->m_Items[3] = v140;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v112->m_Items[3], (int32_t)v140, v134, v135, v136, v137, v138, v139);
  v166 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v166);
  v147 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v112->max_length) <= 4 )
    goto LABEL_101;
  v112->m_Items[4] = v147;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v112->m_Items[4], (int32_t)v147, v141, v142, v143, v144, v145, v146);
  v165 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v165);
  v154 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C941D4(MasterData_object, v112->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v159 = sub_1C94314();
      sub_1C941C0(v159, 0);
    }
  }
  if ( LODWORD(v112->max_length) <= 5 )
    goto LABEL_101;
  v112->m_Items[5] = v154;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v112->m_Items[5], (int32_t)v154, v148, v149, v150, v151, v152, v153);
  MasterData_object = (__int64)System_String__Format_64459188(v111, v112, 0);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v156);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v157);
  v158 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v158, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v158, 0, 0, 0);
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

  if ( (byte_4D28BAB & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3764/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/);
    byte_4D28BAB = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/, 0);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x29
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x28
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x28
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x28
  System_String_o *v49; // x26
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  Il2CppObject *v56; // x25
  Il2CppObject *v57; // x24
  Il2CppObject *v58; // x0
  SummonConfirmDlgComponent_c *v59; // x0
  __int64 v60; // x0
  const MethodInfo *v61; // [xsp+10h] [xbp-80h]
  int32_t v63; // [xsp+20h] [xbp-70h] BYREF
  int32_t v64; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v65; // [xsp+28h] [xbp-68h] BYREF
  int32_t v66; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D28BA9 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&StringLiteral_3766/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_4D28BA9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"CONFIRM_POINTSUMMON_MSG"*/, 0);
  v18 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
  v66 = needPointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v66);
  if ( !v18 )
    sub_1C942F0(v19, v20);
  v27 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C941D4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_23;
  v18->m_Items[0] = v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v18->m_Items, (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v65 = gachaTime;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v65);
  v34 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C941D4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_23;
  v18->m_Items[1] = v34;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->m_Items[1], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v64 = havePointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v64);
  v41 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C941D4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_23;
  v18->m_Items[2] = v41;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->m_Items[2], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v63 = afterPointNum;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v63);
  v48 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C941D4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_24:
      v60 = sub_1C94314();
      sub_1C941C0(v60, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 3 )
LABEL_23:
    sub_1C942F8(v19);
  v18->m_Items[3] = v48;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->m_Items[3], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Format_64459188(v17, v18, 0);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0) )
  {
    v66 = needPointNum;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    v65 = havePointNum;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
    v64 = afterPointNum;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
    v49 = System_String__Format_64459120(summonConfirmMessage, v56, v57, v58, 0);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v59 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v59 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0,
    v49,
    0,
    callback,
    v59->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0,
    0,
    0,
    0,
    gachaSubEntity,
    v61);
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
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  Il2CppObject *v54; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  Il2CppObject *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  Il2CppObject *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Il2CppObject *v82; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  Il2CppObject *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  System_String_o *v96; // x29
  System_String_o *v97; // x20
  System_String_o *v98; // x20
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x27
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v106; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v107; // x27
  GachaDetailEntity_o *v108; // x29
  System_String_o *ConfirmBonusSelectSummonTitle; // x26
  System_String_o *v110; // x20
  Il2CppObject *v111; // x24
  Il2CppObject *v112; // x0
  System_String_o *v113; // x25
  System_String_o *v114; // x24
  __int64 v115; // x20
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  __int64 v122; // x22
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  __int64 v129; // x21
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  __int64 v136; // x21
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  __int64 v143; // x21
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  __int64 v150; // x21
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  __int64 v157; // x22
  System_String_o *v158; // x20
  System_String_o *ConfirmBonusSelectSummonLowMsg; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v161; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  System_String_o *v164; // x27
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v174; // x0
  __int64 v175; // x0
  const MethodInfo *v176; // [xsp+10h] [xbp-C0h]
  int32_t v177; // [xsp+20h] [xbp-B0h]
  int32_t v178; // [xsp+2Ch] [xbp-A4h]
  int32_t v182; // [xsp+40h] [xbp-90h] BYREF
  int32_t v183; // [xsp+44h] [xbp-8Ch] BYREF
  int32_t v184; // [xsp+48h] [xbp-88h] BYREF
  int32_t v185; // [xsp+4Ch] [xbp-84h] BYREF
  int32_t v186; // [xsp+50h] [xbp-80h] BYREF
  int32_t v187; // [xsp+54h] [xbp-7Ch] BYREF
  int32_t v188; // [xsp+58h] [xbp-78h] BYREF
  int32_t v189; // [xsp+5Ch] [xbp-74h] BYREF
  System_String_o *defaultText; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *resultText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4D28BA7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_12487/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/);
    sub_1C94098(&StringLiteral_3748/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_1C94098(&StringLiteral_3744/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_1C94098(&StringLiteral_3765/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_1C94098(&StringLiteral_3745/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_1C94098(&StringLiteral_12531/*"SUMMON_WARNING_MESSAGE_501"*/);
    sub_1C94098(&StringLiteral_12529/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_12516/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_1C94098(&StringLiteral_3768/*"CONFIRM_SUMMON_MESSAGE_{0}"*/);
    sub_1C94098(&StringLiteral_12532/*"SUMMON_WARNING_MESSAGE_{0}"*/);
    sub_1C94098(&StringLiteral_12477/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_1C94098(&StringLiteral_3747/*"CONFIRM_CHARGESUMMON_MSG"*/);
    sub_1C94098(&StringLiteral_3767/*"CONFIRM_SUMMON_MESSAGE_501"*/);
    byte_4D28BA7 = 1;
  }
  defaultText = 0;
  this->fields.extraGiftEntList = giftEntList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    type,
    price,
    *(System_String_o **)&num,
    haveStoneNum,
    *(int64_t *)&haveFreeStoneNum,
    *(System_String_o **)&haveChargeStoneNum);
  if ( privilegeGachaTextId < 1 )
  {
    if ( isAppendSummon )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o **)&StringLiteral_3748/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o **)&StringLiteral_3747/*"CONFIRM_CHARGESUMMON_MSG"*/;
      if ( type != 7 )
        v30 = (System_String_o **)&StringLiteral_3765/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v29 = LocalizationManager__Get(*v30, 0);
    resultText = v29;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    resultText = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_SUMMON_MESSAGE_501"*/, 0);
    v189 = privilegeGachaTextId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
    v28 = System_String__Format((System_String_o *)StringLiteral_3768/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v27, 0);
    LocalizationManager__TryGet(&resultText, v28, resultText, 0);
    v29 = resultText;
  }
  v31 = (System_Object_array *)sub_1C94140(object___TypeInfo, 9);
  v189 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v189);
  if ( !v31 )
    goto LABEL_102;
  v40 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( !LODWORD(v31->max_length) )
    goto LABEL_101;
  v31->m_Items[0] = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v31->m_Items, (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v188 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v188);
  v47 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 1 )
    goto LABEL_101;
  v31->m_Items[1] = v47;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[1], (int32_t)v47, v41, v42, v43, v44, v45, v46);
  v187 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v187);
  v54 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 2 )
    goto LABEL_101;
  v31->m_Items[2] = v54;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[2], (int32_t)v54, v48, v49, v50, v51, v52, v53);
  v186 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v186);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 3 )
    goto LABEL_101;
  v31->m_Items[3] = v61;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[3], (int32_t)v61, v55, v56, v57, v58, v59, v60);
  v185 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v185);
  v68 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v178 = price;
  if ( LODWORD(v31->max_length) <= 4 )
    goto LABEL_101;
  v31->m_Items[4] = v68;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[4], (int32_t)v68, v62, v63, v64, v65, v66, v67);
  v184 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v184);
  v75 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 5 )
    goto LABEL_101;
  v31->m_Items[5] = v75;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[5], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  v183 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v183);
  v82 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 6 )
    goto LABEL_101;
  v31->m_Items[6] = v82;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[6], (int32_t)v82, v76, v77, v78, v79, v80, v81);
  v182 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v182);
  v89 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C941D4(addMsgBgSprite, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v31->max_length) <= 7 )
    goto LABEL_101;
  v31->m_Items[7] = v89;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[7], (int32_t)v89, v83, v84, v85, v86, v87, v88);
  if ( title )
  {
    addMsgBgSprite = sub_1C941D4(title, v31->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v177 = haveFreeStoneNum;
  if ( LODWORD(v31->max_length) <= 8 )
    goto LABEL_101;
  v31->m_Items[8] = (Il2CppObject *)title;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v31->m_Items[8], (int32_t)title, v90, v91, v92, v93, v94, v95);
  v96 = System_String__Format_64459188(v29, v31, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12529/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_102;
  v97 = (System_String_o *)addMsgBgSprite;
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
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12516/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v106 = System_String__Format(v104, DateTime, 0);
    addMsgBgSprite = (__int64)System_String__Concat_64417744(v97, v106, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v97 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 494, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12487/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0);
    defaultText = LocalizationManager__Get((System_String_o *)StringLiteral_12531/*"SUMMON_WARNING_MESSAGE_501"*/, 0);
    v189 = privilegeGachaTextId;
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
    v100 = System_String__Format((System_String_o *)StringLiteral_12532/*"SUMMON_WARNING_MESSAGE_{0}"*/, v99, 0);
    LocalizationManager__TryGet(&defaultText, v100, defaultText, 0);
    v101 = defaultText;
    v102 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v103 = System_String__Format_64459052(v101, (Il2CppObject *)title, v102, 0);
    addMsgBgSprite = (__int64)System_String__Concat_64417744(v98, v103, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v97 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 652, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 76, 0);
LABEL_60:
  v107 = callback;
  this->fields.state = 4;
  if ( gachaId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    addMsgBgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    addMsgBgSprite = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)addMsgBgSprite,
                                gachaId,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    v108 = (GachaDetailEntity_o *)addMsgBgSprite;
    ConfirmBonusSelectSummonTitle = GachaDetailEntity__GetConfirmBonusSelectSummonTitle(
                                      (GachaDetailEntity_o *)addMsgBgSprite,
                                      0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0);
    v189 = v178;
    v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
    v188 = num;
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v188);
    v113 = System_String__Format_64459052(v110, v111, v112, 0);
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0);
    v115 = sub_1C94140(object___TypeInfo, 6);
    v187 = haveStoneNum;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v187);
    if ( !v115 )
      goto LABEL_102;
    v122 = addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v115 + 24) )
        goto LABEL_101;
      *(_QWORD *)(v115 + 32) = v122;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 32), v122, v116, v117, v118, v119, v120, v121);
      v186 = haveChargeStoneNum;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v186);
      v129 = addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v115 + 24) <= 1u )
          goto LABEL_101;
        *(_QWORD *)(v115 + 40) = v129;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 40), v129, v123, v124, v125, v126, v127, v128);
        v185 = v177;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v185);
        v136 = addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v115 + 24) <= 2u )
            goto LABEL_101;
          *(_QWORD *)(v115 + 48) = v136;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 48), v136, v130, v131, v132, v133, v134, v135);
          v184 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v184);
          v143 = addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v115 + 24) <= 3u )
              goto LABEL_101;
            *(_QWORD *)(v115 + 56) = v143;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 56), v143, v137, v138, v139, v140, v141, v142);
            v183 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v183);
            v150 = addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v115 + 24) <= 4u )
                goto LABEL_101;
              *(_QWORD *)(v115 + 64) = v150;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 64), v150, v144, v145, v146, v147, v148, v149);
              v182 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v182);
              v157 = addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_1C941D4(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v115 + 24) > 5u )
                {
                  *(_QWORD *)(v115 + 72) = v157;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v115 + 72), v157, v151, v152, v153, v154, v155, v156);
                  v158 = System_String__Format_64459188(v114, (System_Object_array *)v115, 0);
                  ConfirmBonusSelectSummonLowMsg = GachaDetailEntity__GetConfirmBonusSelectSummonLowMsg(v108, 0);
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v161 = ConfirmBonusSelectSummonLowMsg;
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
                    v164 = v113;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__52598436(
                                                MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
                    if ( !addMsgBgSprite )
                      goto LABEL_102;
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)addMsgBgSprite,
                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&this->fields.bonusSelectMsgInfo,
                      (int32_t)Component_object,
                      v167,
                      v168,
                      v169,
                      v170,
                      v171,
                      v172);
                    v113 = v164;
                    v107 = callback;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      ConfirmBonusSelectSummonTitle,
                      v113,
                      v158,
                      v161,
                      tryGetBonusSelectData,
                      assetManager,
                      0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0);
                      v174 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                      SummonConfirmDlgComponent__Open(this, 0, 0, v174, v107, 14.0, 0, shopIdIdx, 0, 1, 0, v176);
                      return;
                    }
                  }
LABEL_102:
                  sub_1C942F0(addMsgBgSprite, v33);
                }
LABEL_101:
                sub_1C942F8(addMsgBgSprite);
              }
            }
          }
        }
      }
    }
LABEL_103:
    v175 = sub_1C94314();
    sub_1C941C0(v175, 0);
  }
  SummonConfirmDlgComponent__Open(this, title, v96, 0, callback, 14.0, v97, shopIdIdx, isAppendSummon, 0, 0, v176);
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

  if ( (byte_4D28BA8 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3770/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_1C94098(&StringLiteral_3771/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28BA8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"CONFIRM_TICKETSUMMON_MSG"*/, 0);
    v24 = haveTicketNum;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = afterTicketNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v16 = System_String__Format_64459052(v13, v14, v15, 0);
  }
  else
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0);
    v24 = num;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = haveTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = afterTicketNum;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v16 = System_String__Format_64459120(v17, v18, v19, v20, 0);
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
  if ( (byte_4D28BA3 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12421/*"STONE_PURCHASE"*/);
    sub_1C94098(&StringLiteral_12233/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_1C94098(&StringLiteral_396/*"#,0"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28BA3 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHORT_HAVE_CHARGE_STONE"*/, 0);
  v19 = price;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = haveChargeStoneNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v14 = (Il2CppObject *)System_Int32__ToString_65926240((int32_t)&v20, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
  v15 = System_String__Format_64459120(v11, v12, v13, v14, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"STONE_PURCHASE"*/, 0);
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

  if ( (byte_4D28BA6 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12234/*"SHORT_HAVE_POINT"*/);
    sub_1C94098(&StringLiteral_12232/*"SHORT_DLG_TITLE"*/);
    byte_4D28BA6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SHORT_DLG_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SHORT_HAVE_POINT"*/, 0);
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

  if ( (byte_4D28BA2 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12421/*"STONE_PURCHASE"*/);
    sub_1C94098(&StringLiteral_12235/*"SHORT_HAVE_STONE"*/);
    sub_1C94098(&StringLiteral_12232/*"SHORT_DLG_TITLE"*/);
    byte_4D28BA2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SHORT_DLG_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"SHORT_HAVE_STONE"*/, 0);
  v17 = haveChargeStone;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = haveFreeStone;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format_64459052(v10, v11, v12, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"STONE_PURCHASE"*/, 0);
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
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int i; // w24
  int32_t v33; // w21
  struct ItemIconComponent_array *v34; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v36; // x23
  UILabel_o *v37; // x21
  int32_t *v38; // x22
  SummonConfirmDlgComponent_c *v39; // x0
  System_String_o *v40; // x0
  int32_t v41; // w8
  System_String_o *v42; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v44; // x0
  int32_t v45; // w8
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v50; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D28BB1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__);
    sub_1C94098(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_12488/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12490/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_1C94098(&StringLiteral_12491/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_1C94098(&StringLiteral_12493/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_1C94098(&StringLiteral_12492/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_1C94098(&StringLiteral_12489/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_4D28BB1 = 1;
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
      _9__80_0 = (System_Action_object__o *)sub_1C942E4(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__80_0, v24, Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__, 0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__80_0 = (struct System_Action_ItemIconComponent__o *)_9__80_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__80_0,
        (int32_t)_9__80_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__80_0,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v33 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v33 >= *(_DWORD *)(SelfUserGame[7].fields.m_CachedPtr + 60) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v33 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v33,
                                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v34 = this->fields.extraItemIconComponents;
      if ( !v34 )
        goto LABEL_59;
      if ( (unsigned int)v33 >= LODWORD(v34->max_length) )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( (unsigned int)v33 >= LODWORD(extraMessageLabels->max_length) )
LABEL_60:
        sub_1C942F8(SelfUserGame);
      v36 = (UnityEngine_Component_o *)v34->m_Items[v33];
      if ( !v36 )
        goto LABEL_59;
      v37 = extraMessageLabels->m_Items[v33];
      v38 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v36, 0);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0);
      if ( !v38 )
        goto LABEL_59;
      ItemIconComponent__SetGift_41674460((ItemIconComponent_o *)v36, v38[5], v38[6], v38[7], 0, 0);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v39 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v39 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v39->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12488/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0);
        v41 = v38[7];
        v42 = v40;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v42, NumberFormat, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0);
        v45 = v38[7];
        v46 = v44;
        v47 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v45, 0);
        v48 = System_String__Format(v46, v47, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_64417744(
                                                     v48,
                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                     0);
      }
      v8 = SelfUserGame;
      if ( !v37 )
        goto LABEL_59;
      UILabel__set_text(v37, (System_String_o *)SelfUserGame, 0);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12491/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0);
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
             (const MethodInfo_31C2D80 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v13 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v14 = (System_String_o **)&StringLiteral_12490/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12493/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  messageLabel = this->fields.messageLabel;
  v17 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12488/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12492/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0);
  if ( !v13
    || (v19 = (System_String_o *)SelfUserGame,
        v50 = v13[7],
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v19, v20, 0),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0) )
  {
LABEL_59:
    sub_1C942F0(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_41674460((ItemIconComponent_o *)SelfUserGame, v13[5], v13[6], v13[7], 0, 0);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D28BB2 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    byte_4D28BB2 = 1;
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
      sub_1C942F8(this);
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
    sub_1C942F0(this, method);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  SummonConfirmDlgComponent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  System_Func_object__int__o *_9__79_1; // x24
  Il2CppObject *v26; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_ICollection_o *v35; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v39; // x23
  SummonConfirmDlgComponent_c *v40; // x0
  const MethodInfo *v41; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v43; // x23
  UnityEngine_Object_o *v44; // x24
  SummonConfirmDlgComponent_c *v45; // x0
  __int64 v46; // x8
  const MethodInfo *v47; // x1
  int v48; // w8
  bool v49; // nf

  if ( (byte_4D28BB0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C94098(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C94098(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C94098(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__);
    sub_1C94098(&Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__);
    sub_1C94098(&SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
    sub_1C94098(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4D28BB0 = 1;
  }
  v5 = sub_1C942E4(SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_51:
    sub_1C942F0(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
  v13 = (System_Func_object__bool__o **)(v5 + 24);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v14 = *v13;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v13 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__,
        0);
      *(_QWORD *)(v5 + 24) = v14;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v14, v16, v17, v18, v19, v20, v21);
    }
    v22 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v23 = SummonConfirmDlgComponent___c_TypeInfo;
    v24 = v22;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v23 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__79_1 = (System_Func_object__int__o *)v23->static_fields->__9__79_1;
    if ( !_9__79_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__79_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__79_1,
        v26,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__,
        0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__79_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__79_1;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__79_1,
        (int32_t)_9__79_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TResult__o *)_9__79_1,
                                                                 (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v35 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v34,
                                                (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v35, 0);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v35,
                        0);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v37);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v39 = this->fields.bonusMsgInfo;
        v40 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v40 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v39, v40->static_fields->GROUP_BONUS_LABEL_POS_Y, 0);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v41);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v43 = this->fields.extraMsgInfo;
        v44 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v44, 0, 0) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0) )
        {
          v45 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v45 = SummonConfirmDlgComponent_TypeInfo;
          }
          v46 = 48;
        }
        else
        {
LABEL_44:
          v45 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v45 = SummonConfirmDlgComponent_TypeInfo;
          }
          v46 = 44;
        }
        GameObjectExtensions__SetLocalPositionY(
          v43,
          *(float *)((char *)&v45->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v46),
          0);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v47);
      }
    }
    v48 = *(_DWORD *)(v5 + 20) + 1;
    v49 = *(_DWORD *)(v5 + 20) - 2 < 0;
    *(_DWORD *)(v5 + 20) = v48;
  }
  while ( v49 != __OFSUB__(v48, 3) );
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

  if ( (byte_4D28B9F & 1) == 0 )
  {
    sub_1C94098(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4D28B9F = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
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

  if ( (byte_4D28BA0 & 1) == 0 )
  {
    sub_1C94098(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4D28BA0 = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void SummonConfirmDlgComponent__setBtnInfoActive(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v5; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4D28BAF & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12469/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_4D28BAF = 1;
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
        sub_1C942F0(closeBtnObject, method);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUMMON_AUTOSALE_BUTTON"*/, 0);
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
    sub_1C942F0(0, isTutorial);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x2

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
    sub_1C942F0(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_36089492(this, 0, v19);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC481C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC47D4;
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
  if ( (byte_4D28BB9 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28BB9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28BBA & 1) == 0 )
  {
    sub_1C94098(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4D28BBA = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int32_t SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__79_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}