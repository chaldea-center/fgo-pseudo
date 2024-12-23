void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4B63247 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4B63247 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BE2550;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BE2F40;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B63246 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B63246 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v23; // x4
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v25 = haveFreeStoneNum;
  if ( (byte_4B63234 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_3083/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1BE4ACC(&StringLiteral_424/*"#,0"*/, v11);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4B63234 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3083/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_63504416((int32_t)&v25, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v20 = System_String__Format_62713180(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1BE4D28(v20, v21);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v20, 0LL);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v23);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x24
  System_String_o *v27; // x28
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x27
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x26
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_String_o *baseWindow; // x0
  __int64 v41; // x1
  System_String_o *v42; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  const MethodInfo *v46; // x6
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v57; // x0
  const MethodInfo *v58; // [xsp+10h] [xbp-80h]
  int32_t v59; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v60; // [xsp+28h] [xbp-68h] BYREF
  int32_t v61; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B63235 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1BE4ACC(&int_TypeInfo, v17);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v18);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v19);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v20);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_12466/*"STONE_PURCHASE"*/, v22);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1BE4ACC(&StringLiteral_3087/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1BE4ACC(&StringLiteral_3088/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4B63235 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3088/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v61 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v28, v29, v30);
  v60 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v32, v33, v34);
  v59 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v36, v37, v38);
  baseWindow = System_String__Format_62713248(v27, v31, v35, v39, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v42 = baseWindow;
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__50195216(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1BE4D28(baseWindow, v41);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v26,
    v42,
    tryGetBonusSelectData,
    assetManager,
    v46);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v57, callback, 14.0, 0LL, 0, 0, 1, 0LL, v58);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_33820128(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33820128(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4B63242 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_EndClose__, v10);
    byte_4B63242 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B63243 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B63243 = 1;
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
    sub_1BE4D28(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v11; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v13; // w8
  unsigned int v14; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v18; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v30; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v32; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4B63231 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B63231 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_65;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( v11 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v11];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1BE4D30(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v13 = extraItemIconComponents->max_length;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( v14 < v13 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v14];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v13 = extraItemIconComponents->max_length;
      if ( (int)++v14 >= v13 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_65;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  v18 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v18 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v18->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.extraGiftEntList, 0LL, v21, v22, v23, v24, v25, v26);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v27,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v28,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingX(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_X,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingY(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_Y,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_65;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, method);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v30);
    byte_4B612E1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v32);
    byte_4B612E1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1BE4D28(confirmTitleLabel, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4B63244 & 1) == 0 )
  {
    sub_1BE4ACC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4B63244 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1BE4D18(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          v11),
        !autoSaleDlgInfo) )
  {
    sub_1BE4D28(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, v12);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4B63245 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_4757/*"ConfirmWindow/CloseButton"*/, method);
    sub_1BE4ACC(&StringLiteral_4759/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1BE4ACC(&StringLiteral_4755/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4B63245 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(transform, (System_String_o *)StringLiteral_4759/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(v6, (System_String_o *)StringLiteral_4757/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(v7, (System_String_o *)StringLiteral_4755/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
        GachaSubEntity_o *gachaSubEntity,
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v48; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v54; // x27
  int32_t v55; // w25
  UILabel_o *v56; // x27
  UILabel_o *v57; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v59; // x25
  int32_t v60; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v65; // w0
  float v66; // s8
  int32_t v67; // w24
  float v68; // s9
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v74; // x22
  System_Func_object__bool__o **v75; // x24
  System_Func_object__bool__o *v76; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x25
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  SummonConfirmDlgComponent___c_c *v85; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x25
  System_Func_object__int__o *_9__71_1; // x26
  Il2CppObject *v88; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  System_Collections_ICollection_o *v97; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v99; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v101; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v103; // w8
  bool v104; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v109; // s0
  float v110; // s1
  float v111; // s8
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  bool v114; // w1
  const MethodInfo *v115; // x1
  System_Action_o *v116; // x20

  if ( (byte_4B6323B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, title);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GiftMaster___, v21);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v22);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v23);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v24);
    sub_1BE4ACC(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v25);
    sub_1BE4ACC(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v26);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v27);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v28);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v31);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__, v32);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__, v33);
    sub_1BE4ACC(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, v34);
    sub_1BE4ACC(&SummonConfirmDlgComponent___c_TypeInfo, v35);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v36);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v37);
    byte_4B6323B = 1;
  }
  v38 = sub_1BE4D18(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass71_0___ctor((SummonConfirmDlgComponent___c__DisplayClass71_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_136;
  *(_DWORD *)(v38 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v41, v42, v43, v44, v45, v46);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    if ( title )
      v48 = title;
    else
      v48 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v48, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v50 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v50, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v51, msgOffY, 0LL);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0LL);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0LL);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0LL);
      v54 = this->fields.confirmDetailLabel;
      v55 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 16LL);
      }
      if ( !v54 )
        goto LABEL_136;
      UILabel__set_spacingX(v54, SummonConfirmMessageSpacingX, 0LL);
      v56 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 20LL);
      }
      if ( !v56 )
        goto LABEL_136;
      UILabel__set_spacingY(v56, SummonConfirmMessageSpacingY, 0LL);
      v57 = this->fields.confirmDetailLabel;
      if ( !v55 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v55 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      }
      if ( !v57 )
        goto LABEL_136;
      UILabel__set_fontSize(v57, v55, 0LL);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v59 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v59 )
      goto LABEL_136;
    UILabel__set_text(v59, decideTxt, 0LL);
  }
  v60 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v60 <= 2 )
    {
      v62 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v62 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v62->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v63, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v65 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v65 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v60 <= 2 )
      v66 = 54.0;
    else
      v66 = 43.0;
    if ( v60 <= 2 )
      v67 = 20;
    else
      v67 = 18;
    if ( !gameObject )
      goto LABEL_136;
    v68 = v60 <= 2 ? 188.0 : 178.0;
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v69, v68, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v70, v66, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, v67, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_136;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0LL);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_125;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( *(_QWORD *)&extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_136;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_136;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v38 + 20) = 1;
      v74 = (GiftMaster_o *)MasterData_object;
      v75 = (System_Func_object__bool__o **)(v38 + 24);
      while ( 1 )
      {
        v76 = *v75;
        v77 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v75 )
        {
          v76 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v76,
            (Il2CppObject *)v38,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v38 + 24) = v76;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)v76, v78, v79, v80, v81, v82, v83);
        }
        v84 = System_Linq_Enumerable__Where_object_(
                v77,
                (System_Func_TSource__bool__o *)v76,
                (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v85 = SummonConfirmDlgComponent___c_TypeInfo;
        v86 = v84;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v85 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__71_1 = (System_Func_object__int__o *)v85->static_fields->__9__71_1;
        if ( !_9__71_1 )
        {
          if ( !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            v85 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v88 = (Il2CppObject *)v85->static_fields->__9;
          _9__71_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__71_1, v88, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__71_1,
            (int64_t)_9__71_1,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
        }
        v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v86,
                                                                     (System_Func_TSource__TResult__o *)_9__71_1,
                                                                     (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v97 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v96,
                                                    (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v97, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v74 )
            goto LABEL_136;
          GiftListByIds = GiftMaster__GetGiftListByIds(v74, (System_Collections_Generic_IEnumerable_int__o *)v97, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v38 + 20), v99);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v38 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v101);
            goto LABEL_105;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v38 + 20) == 2 )
            break;
        }
        v103 = *(_DWORD *)(v38 + 20) + 1;
        v104 = *(_DWORD *)(v38 + 20) - 2 < 0;
        *(_DWORD *)(v38 + 20) = v103;
        if ( v104 == __OFSUB__(v103, 3) )
          goto LABEL_105;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v40);
LABEL_105:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_136;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_136;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v106 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v106,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v107 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v109 = -42.0;
        if ( v60 > 2 )
          v109 = -44.0;
        v110 = -34.0;
        if ( v60 <= 2 )
          v110 = -30.0;
        if ( isAppendSummon )
          v111 = v110;
        else
          v111 = v109;
        if ( !gameObject )
          goto LABEL_136;
        v112 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v112, v111, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v113 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v113, v111, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_136;
        v107 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v107, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_125:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v114 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v114 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v114, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_136:
    sub_1BE4D28(gameObject, v40);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v115);
  v116 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v116, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_4B6323D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4B6323D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1BE4D28(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  System_String_o *v17; // x0
  SummonConfirmDlgComponent_c *v18; // x8
  Il2CppObject *v19; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  bool v21; // w22
  System_String_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  System_String_o *v29; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  SummonConfirmDlgComponent_c *v46; // x0
  System_String_o *v47; // x0
  const MethodInfo *v48; // [xsp+10h] [xbp-80h]
  int32_t v49; // [xsp+20h] [xbp-70h] BYREF
  int32_t v50; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4B6323A & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, callback);
    sub_1BE4ACC(&int_TypeInfo, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v11);
    sub_1BE4ACC(&UserGachaMaster_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_3859/*"CONFIRM_FREESUMMON_MSG"*/, v13);
    sub_1BE4ACC(&StringLiteral_3858/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v14);
    sub_1BE4ACC(&StringLiteral_6659/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v15);
    byte_4B6323A = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v16->static_fields->DailyFreeGachaResetTime;
  v17 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v18 = SummonConfirmDlgComponent_TypeInfo;
  v19 = (Il2CppObject *)v17;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v18 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v18->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v21 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v21 )
      goto LABEL_11;
LABEL_18:
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3859/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v29 = System_String__Format(v47, v19, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
    goto LABEL_18;
LABEL_11:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v51 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v23, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62713180(v22, v19, v26, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v29 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6659/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v50 = remainNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v32, v33, v34);
  v49 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62713180(v31, v35, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1BE4D28(gameObject, v28);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v46 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v46 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v46->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  SummonConfirmDlgComponent__Open(this, 0LL, v29, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, 0LL, v48);
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
  __int64 v36; // x1
  __int64 v37; // x1
  long double v38; // q0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v42; // x21
  GachaEntity_array *GachaDataInGroup; // x28
  __int64 v44; // x20
  __int64 v45; // x8
  GachaEntity_o *v46; // x8
  int32_t v47; // w26
  char v48; // w29
  int v49; // w21
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v51; // w27
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int max_length; // w22
  GachaEntity_o *v59; // x8
  GachaEntity_o *v60; // x9
  int64_t name; // x22
  int64_t v62; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Object_array *v71; // x29
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x21
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x21
  System_String_o *v98; // x0
  System_Object_array *v99; // x1
  Il2CppObject *v100; // x21
  System_String_o **v101; // x8
  GachaEntity_o *v102; // x9
  System_String_o *v103; // x20
  System_String_o *v104; // x29
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Object_array *v111; // x20
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x21
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x21
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x21
  int v142; // w21
  UILabel_o *msgLabel; // x26
  System_String_o *v144; // x27
  System_Object_array *v145; // x28
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x20
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x20
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x20
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x20
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x20
  __int64 v196; // x2
  __int64 v197; // x3
  __int64 v198; // x4
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v207; // x2
  const MethodInfo *v208; // x1
  System_Action_o *v209; // x20
  __int64 v210; // x0
  int32_t v211; // [xsp+Ch] [xbp-84h]
  int32_t v212; // [xsp+10h] [xbp-80h]
  int32_t v213; // [xsp+14h] [xbp-7Ch]
  int32_t v214; // [xsp+18h] [xbp-78h] BYREF
  int32_t v215; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v216; // [xsp+20h] [xbp-70h] BYREF
  int32_t v217; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v218; // [xsp+28h] [xbp-68h] BYREF
  int32_t v219; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B6323C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1BE4ACC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1BE4ACC(&int_TypeInfo, v24);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v25);
    sub_1BE4ACC(&System_Math_TypeInfo, v26);
    sub_1BE4ACC(&object___TypeInfo, v27);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1BE4ACC(&StringLiteral_3863/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/, v31);
    sub_1BE4ACC(&StringLiteral_3864/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v32);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v33);
    sub_1BE4ACC(&StringLiteral_3861/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v34);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v35);
    sub_1BE4ACC(&StringLiteral_3862/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v36);
    byte_4B6323C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    *(int64_t *)&price,
    haveStoneNum,
    *(System_String_o **)&haveFreeStoneNum,
    *(BattleSetupInfo_o **)&haveChargeStoneNum,
    *(FollowerInfo_o **)&afterStoneNum,
    *(PartyListViewItem_o **)&afterFreeStoneNum);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C369A8(v38);
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C369A8(v38);
  MasterData_object = **(_QWORD **)(v40 + 184);
  if ( !MasterData_object )
    goto LABEL_97;
  v213 = price;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_97;
  v42 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_97;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_97;
  MasterData_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 groupId,
                                 (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v44 = MasterData_object;
  v212 = haveStoneNum;
  if ( !MasterData_object )
    goto LABEL_18;
  v45 = *(_QWORD *)(MasterData_object + 32);
  if ( !v45 )
    goto LABEL_97;
  if ( *(_DWORD *)(v45 + 24) )
  {
    MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v42, groupId, 0LL);
    if ( !GachaDataInGroup )
      goto LABEL_97;
    if ( !GachaDataInGroup->max_length )
LABEL_98:
      sub_1BE4D30(MasterData_object, v37);
    v46 = GachaDataInGroup->m_Items[0];
    if ( !v46 )
      goto LABEL_97;
    v47 = haveChargeStoneNum;
    v48 = 0;
    v49 = (int)MasterData_object / v46->fields.drawNum1;
  }
  else
  {
LABEL_18:
    v47 = haveChargeStoneNum;
    v48 = 1;
    v49 = 1;
  }
  v211 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v51 = System_Math__Max_63517952(v49, 1, 0LL);
  this->fields.extraGiftEntList = giftEntList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !GachaDataInGroup )
    goto LABEL_97;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v59 = GachaDataInGroup->m_Items[0];
    if ( v59 )
    {
      v60 = GachaDataInGroup->m_Items[1];
      if ( v60 )
      {
        name = (int64_t)v59->fields.name;
        v62 = (int64_t)v60->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_object = sub_1BE4B74(object___TypeInfo, 4LL);
        if ( MasterData_object )
        {
          v71 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1BE4C08(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_99;
          }
          if ( !v71->max_length )
            goto LABEL_98;
          v71->m_Items[0] = (Il2CppObject *)name;
          sub_1BE4A70((PartyOrganizationUtility_o *)v71->m_Items, name, v65, v66, v67, v68, v69, v70);
          if ( v62 )
          {
            MasterData_object = sub_1BE4C08(v62, v71->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_99;
          }
          if ( v71->max_length <= 1 )
            goto LABEL_98;
          v71->m_Items[1] = (Il2CppObject *)v62;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v71->m_Items[1], v62, v72, v73, v74, v75, v76, v77);
          v219 = v51;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v78, v79, v80);
          v87 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1BE4C08(MasterData_object, v71->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_99;
          }
          if ( v71->max_length <= 2 )
            goto LABEL_98;
          v71->m_Items[2] = (Il2CppObject *)v87;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v71->m_Items[2], v87, v81, v82, v83, v84, v85, v86);
          v218 = v213;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v88, v89, v90);
          v97 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1BE4C08(MasterData_object, v71->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_99;
          }
          if ( v71->max_length <= 3 )
            goto LABEL_98;
          v71->m_Items[3] = (Il2CppObject *)v97;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v71->m_Items[3], v97, v91, v92, v93, v94, v95, v96);
          v98 = v64;
          v99 = v71;
          goto LABEL_65;
        }
      }
    }
LABEL_97:
    sub_1BE4D28(MasterData_object, v37);
  }
  if ( !v44 )
    goto LABEL_97;
  v100 = (Il2CppObject *)StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty(*(System_String_o **)(v44 + 24), 0LL);
  if ( (MasterData_object & 1) == 0 )
    v100 = *(Il2CppObject **)(v44 + 24);
  v101 = (System_String_o **)&StringLiteral_3862/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v48 & 1) == 0 )
  {
    if ( !GachaDataInGroup->max_length )
      goto LABEL_98;
    v102 = GachaDataInGroup->m_Items[0];
    if ( !v102 )
      goto LABEL_97;
    if ( *(_DWORD *)(v44 + 20) / v102->fields.drawNum1 > 1 )
      v101 = (System_String_o **)&StringLiteral_3863/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v103 = *v101;
  infoMsgLabel = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v104 = LocalizationManager__Get(v103, 0LL);
  MasterData_object = sub_1BE4B74(object___TypeInfo, 4LL);
  if ( !MasterData_object )
    goto LABEL_97;
  v111 = (System_Object_array *)MasterData_object;
  if ( v100 )
  {
    MasterData_object = sub_1BE4C08(v100, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( !v111->max_length )
    goto LABEL_98;
  v111->m_Items[0] = v100;
  sub_1BE4A70((PartyOrganizationUtility_o *)v111->m_Items, (int64_t)v100, v105, v106, v107, v108, v109, v110);
  v219 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v112, v113, v114);
  v121 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v111->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v111->max_length <= 1 )
    goto LABEL_98;
  v111->m_Items[1] = (Il2CppObject *)v121;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v111->m_Items[1], v121, v115, v116, v117, v118, v119, v120);
  v218 = v51;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v122, v123, v124);
  v131 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v111->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v111->max_length <= 2 )
    goto LABEL_98;
  v111->m_Items[2] = (Il2CppObject *)v131;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v111->m_Items[2], v131, v125, v126, v127, v128, v129, v130);
  v217 = v213;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v217, v132, v133, v134);
  v141 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v111->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v111->max_length <= 3 )
    goto LABEL_98;
  v111->m_Items[3] = (Il2CppObject *)v141;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v111->m_Items[3], v141, v135, v136, v137, v138, v139, v140);
  v98 = v104;
  v99 = v111;
LABEL_65:
  MasterData_object = (__int64)System_String__Format_62713316(v98, v99, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_97;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  v142 = v47;
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v145 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
  v219 = v212;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v146, v147, v148);
  if ( !v145 )
    goto LABEL_97;
  v155 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( !v145->max_length )
    goto LABEL_98;
  v145->m_Items[0] = (Il2CppObject *)v155;
  sub_1BE4A70((PartyOrganizationUtility_o *)v145->m_Items, v155, v149, v150, v151, v152, v153, v154);
  v218 = v142;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v156, v157, v158);
  v165 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v145->max_length <= 1 )
    goto LABEL_98;
  v145->m_Items[1] = (Il2CppObject *)v165;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v145->m_Items[1], v165, v159, v160, v161, v162, v163, v164);
  v217 = v211;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v217, v166, v167, v168);
  v175 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v145->max_length <= 2 )
    goto LABEL_98;
  v145->m_Items[2] = (Il2CppObject *)v175;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v145->m_Items[2], v175, v169, v170, v171, v172, v173, v174);
  v216 = afterStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v216, v176, v177, v178);
  v185 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v145->max_length <= 3 )
    goto LABEL_98;
  v145->m_Items[3] = (Il2CppObject *)v185;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v145->m_Items[3], v185, v179, v180, v181, v182, v183, v184);
  v215 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v215, v186, v187, v188);
  v195 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_99;
  }
  if ( v145->max_length <= 4 )
    goto LABEL_98;
  v145->m_Items[4] = (Il2CppObject *)v195;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v145->m_Items[4], v195, v189, v190, v191, v192, v193, v194);
  v214 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v214, v196, v197, v198);
  v205 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BE4C08(MasterData_object, v145->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_99:
      v210 = sub_1BE4D4C();
      sub_1BE4BF4(v210, 0LL);
    }
  }
  if ( v145->max_length <= 5 )
    goto LABEL_98;
  v145->m_Items[5] = (Il2CppObject *)v205;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v145->m_Items[5], v205, v199, v200, v201, v202, v203, v204);
  MasterData_object = (__int64)System_String__Format_62713316(v144, v145, 0LL);
  if ( !msgLabel )
    goto LABEL_97;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_97;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v207);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v208);
  v209 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v209, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v209, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x26
  System_Object_array *v22; // x27
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x29
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x28
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x28
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x28
  System_String_o *v65; // x26
  int64_t v66; // x2
  __int64 v67; // x3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *v72; // x25
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x24
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  SummonConfirmDlgComponent_c *v81; // x0
  __int64 v82; // x0
  const MethodInfo *v83; // [xsp+10h] [xbp-80h]
  int32_t v85; // [xsp+20h] [xbp-70h] BYREF
  int32_t v86; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v87; // [xsp+28h] [xbp-68h] BYREF
  int32_t v88; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B63239 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v17);
    sub_1BE4ACC(&object___TypeInfo, v18);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v19);
    sub_1BE4ACC(&StringLiteral_3867/*"CONFIRM_POINTSUMMON_MSG"*/, v20);
    byte_4B63239 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3867/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v22 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 4LL);
  v88 = needPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v88, v23, v24, v25);
  if ( !v22 )
    sub_1BE4D28(v26, v27);
  v34 = v26;
  if ( v26 )
  {
    v26 = sub_1BE4C08(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)v22->m_Items, v34, v28, v29, v30, v31, v32, v33);
  v87 = gachaTime;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v87, v35, v36, v37);
  v44 = v26;
  if ( v26 )
  {
    v26 = sub_1BE4C08(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_23;
  v22->m_Items[1] = (Il2CppObject *)v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v22->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
  v86 = havePointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v86, v45, v46, v47);
  v54 = v26;
  if ( v26 )
  {
    v26 = sub_1BE4C08(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_23;
  v22->m_Items[2] = (Il2CppObject *)v54;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v22->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
  v85 = afterPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v55, v56, v57);
  v64 = v26;
  if ( v26 )
  {
    v26 = sub_1BE4C08(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_24:
      v82 = sub_1BE4D4C();
      sub_1BE4BF4(v82, 0LL);
    }
  }
  if ( v22->max_length <= 3 )
LABEL_23:
    sub_1BE4D30(v26, v27);
  v22->m_Items[3] = (Il2CppObject *)v64;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v22->m_Items[3], v64, v58, v59, v60, v61, v62, v63);
  v65 = System_String__Format_62713316(v21, v22, 0LL);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    v88 = needPointNum;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v66, v67, v68);
    v87 = havePointNum;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v73, v74, v75);
    v86 = afterPointNum;
    v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v77, v78, v79);
    v65 = System_String__Format_62713248(summonConfirmMessage, v72, v76, v80, 0LL);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v81 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v81 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v65,
    0LL,
    callback,
    v81->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v83);
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
  __int64 v27; // x1
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
  System_String_o *v46; // x25
  System_Object_array *v47; // x26
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x27
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x27
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x27
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x27
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x27
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x27
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x27
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x27
  System_String_o *v130; // x29
  System_String_o *v131; // x27
  System_String_o *v132; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v134; // x0
  int32_t v135; // w1
  int32_t v136; // w1
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  Il2CppObject *v140; // x0
  System_String_o *v141; // x27
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  Il2CppObject *v145; // x0
  System_String_o *v146; // x27
  System_String_o *v147; // x0
  System_String_o *v148; // x27
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  Il2CppObject *v152; // x24
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  Il2CppObject *v156; // x0
  System_String_o *v157; // x27
  System_String_o *v158; // x24
  System_Object_array *v159; // x29
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x22
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int64_t v179; // x21
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x20
  __int64 v190; // x2
  __int64 v191; // x3
  __int64 v192; // x4
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x20
  __int64 v200; // x2
  __int64 v201; // x3
  __int64 v202; // x4
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  int64_t v209; // x20
  __int64 v210; // x2
  __int64 v211; // x3
  __int64 v212; // x4
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x20
  System_String_o *v220; // x20
  System_String_o *v221; // x0
  long double inited; // q0
  _QWORD *v223; // x21
  System_String_o *v224; // x22
  __int64 v225; // x8
  __int64 v226; // x0
  __int64 v227; // x0
  System_String_o *v228; // x25
  System_String_o *v229; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v231; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v243; // x0
  __int64 v244; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v246; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v251; // [xsp+40h] [xbp-80h] BYREF
  int32_t v252; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v253; // [xsp+48h] [xbp-78h] BYREF
  int32_t v254; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v255; // [xsp+50h] [xbp-70h] BYREF
  int32_t v256; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v257; // [xsp+58h] [xbp-68h] BYREF
  int32_t v258; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B63237 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_object___, title);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27);
    sub_1BE4ACC(&int_TypeInfo, v28);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v29);
    sub_1BE4ACC(&object___TypeInfo, v30);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v31);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v32);
    sub_1BE4ACC(&StringLiteral_3845/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v33);
    sub_1BE4ACC(&StringLiteral_3851/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v34);
    sub_1BE4ACC(&StringLiteral_3846/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v35);
    sub_1BE4ACC(&StringLiteral_3849/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v36);
    sub_1BE4ACC(&StringLiteral_3866/*"CONFIRM_PAYSUMMON_MSG"*/, v37);
    sub_1BE4ACC(&StringLiteral_3847/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v38);
    sub_1BE4ACC(&StringLiteral_3848/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v39);
    sub_1BE4ACC(&StringLiteral_12566/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1BE4ACC(&StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1BE4ACC(&StringLiteral_12553/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1BE4ACC(&StringLiteral_12515/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1BE4ACC(&StringLiteral_3850/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4B63237 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    *(int64_t *)&type,
    price,
    *(System_String_o **)&num,
    *(BattleSetupInfo_o **)&haveStoneNum,
    *(FollowerInfo_o **)&haveFreeStoneNum,
    *(PartyListViewItem_o **)&haveChargeStoneNum);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3851/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3866/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3850/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 8LL);
  v258 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v258, v48, v49, v50);
  if ( !v47 )
    goto LABEL_107;
  v59 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v47->max_length )
    goto LABEL_105;
  v47->m_Items[0] = (Il2CppObject *)v59;
  sub_1BE4A70((PartyOrganizationUtility_o *)v47->m_Items, v59, v53, v54, v55, v56, v57, v58);
  v257 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v257, v60, v61, v62);
  v69 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_105;
  v47->m_Items[1] = (Il2CppObject *)v69;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[1], v69, v63, v64, v65, v66, v67, v68);
  v256 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v256, v70, v71, v72);
  v79 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_105;
  v47->m_Items[2] = (Il2CppObject *)v79;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[2], v79, v73, v74, v75, v76, v77, v78);
  v255 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v255, v80, v81, v82);
  v89 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_105;
  v47->m_Items[3] = (Il2CppObject *)v89;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[3], v89, v83, v84, v85, v86, v87, v88);
  v254 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v254, v90, v91, v92);
  v99 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_105;
  v47->m_Items[4] = (Il2CppObject *)v99;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[4], v99, v93, v94, v95, v96, v97, v98);
  v253 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v253, v100, v101, v102);
  v109 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_105;
  v47->m_Items[5] = (Il2CppObject *)v109;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[5], v109, v103, v104, v105, v106, v107, v108);
  v252 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v252, v110, v111, v112);
  v119 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_105;
  v47->m_Items[6] = (Il2CppObject *)v119;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[6], v119, v113, v114, v115, v116, v117, v118);
  v251 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v251, v120, v121, v122);
  v129 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_105;
  v47->m_Items[7] = (Il2CppObject *)v129;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->m_Items[7], v129, v123, v124, v125, v126, v127, v128);
  v130 = System_String__Format_62713316(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12566/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v132 = LocalizationManager__Get((System_String_o *)StringLiteral_12553/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v134 = System_String__Format(v132, DateTime, 0LL);
    v131 = System_String__Concat_62698808(v131, v134, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v135 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v135, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v136 = 76;
  else
    v136 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v136, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(
      this,
      titlea,
      v130,
      0LL,
      callback,
      14.0,
      v131,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v246);
    return;
  }
  v258 = gachaId;
  v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v258, v137, v138, v139);
  v141 = System_String__Format((System_String_o *)StringLiteral_3849/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v140, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v141, 0LL) )
  {
    v258 = gachaId;
    v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v258, v142, v143, v144);
    v146 = System_String__Format((System_String_o *)StringLiteral_3849/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v145, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = v146;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = (System_String_o *)StringLiteral_3848/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v147, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v148 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v258 = price;
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v258, v149, v150, v151);
  v257 = num;
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257, v153, v154, v155);
  v157 = System_String__Format_62713180(v148, v152, v156, 0LL);
  v158 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v159 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
  v256 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v256, v160, v161, v162);
  if ( !v159 )
    goto LABEL_107;
  v169 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v159->max_length )
    goto LABEL_105;
  v159->m_Items[0] = (Il2CppObject *)v169;
  sub_1BE4A70((PartyOrganizationUtility_o *)v159->m_Items, v169, v163, v164, v165, v166, v167, v168);
  v255 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v255, v170, v171, v172);
  v179 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 1 )
    goto LABEL_105;
  v159->m_Items[1] = (Il2CppObject *)v179;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v159->m_Items[1], v179, v173, v174, v175, v176, v177, v178);
  v254 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v254, v180, v181, v182);
  v189 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 2 )
    goto LABEL_105;
  v159->m_Items[2] = (Il2CppObject *)v189;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v159->m_Items[2], v189, v183, v184, v185, v186, v187, v188);
  v253 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v253, v190, v191, v192);
  v199 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 3 )
    goto LABEL_105;
  v159->m_Items[3] = (Il2CppObject *)v199;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v159->m_Items[3], v199, v193, v194, v195, v196, v197, v198);
  v252 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v252, v200, v201, v202);
  v209 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 4 )
    goto LABEL_105;
  v159->m_Items[4] = (Il2CppObject *)v209;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v159->m_Items[4], v209, v203, v204, v205, v206, v207, v208);
  v251 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v251, v210, v211, v212);
  v219 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BE4C08(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v244 = sub_1BE4D4C();
      sub_1BE4BF4(v244, 0LL);
    }
  }
  if ( v159->max_length <= 5 )
LABEL_105:
    sub_1BE4D30(addMsgBgSprite, v52);
  v159->m_Items[5] = (Il2CppObject *)v219;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v159->m_Items[5], v219, v213, v214, v215, v216, v217, v218);
  v220 = System_String__Format_62713316(v158, v159, 0LL);
  v221 = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v223 = Method_System_Array_Empty_object___;
  v224 = v221;
  v225 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v225 )
  {
    sub_1C36A04(Method_System_Array_Empty_object___);
    v225 = v223[7];
  }
  v226 = *(_QWORD *)(v225 + 16);
  if ( (*(_BYTE *)(v226 + 309) & 1) == 0 )
    v226 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v226 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v226);
  v227 = *(_QWORD *)(v223[7] + 16LL);
  if ( (*(_BYTE *)(v227 + 309) & 1) == 0 )
    v227 = sub_1C369A8(inited);
  v228 = v157;
  v229 = System_String__Format_62713316(v224, **(System_Object_array ***)(v227 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v231 = v229;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__50195216(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v236,
            v237,
            v238,
            v239,
            v240,
            v241);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1BE4D28(addMsgBgSprite, v52);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v228,
    v220,
    v231,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v243 = LocalizationManager__Get((System_String_o *)StringLiteral_12515/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v243, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v246);
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
  const MethodInfo *v40; // [xsp+10h] [xbp-60h]
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v42; // [xsp+28h] [xbp-48h] BYREF
  int32_t v43; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4B63238 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, title);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_3868/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1BE4ACC(&StringLiteral_3869/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v16);
    byte_4B63238 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_62713180(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3869/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_62713248(v27, v31, v35, v39, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v26, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v40);
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
  const MethodInfo *v28; // [xsp+10h] [xbp-70h]
  int32_t v29; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v30; // [xsp+28h] [xbp-58h] BYREF
  int32_t v31; // [xsp+2Ch] [xbp-54h] BYREF

  v31 = haveFreeStoneNum;
  if ( (byte_4B63233 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_12466/*"STONE_PURCHASE"*/, v11);
    sub_1BE4ACC(&StringLiteral_12294/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1BE4ACC(&StringLiteral_424/*"#,0"*/, v13);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v14);
    byte_4B63233 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12294/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_63504416((int32_t)&v31, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v26 = System_String__Format_62713248(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v26, v27, callback, 14.0, 0LL, 0, 0, 0, 0LL, v28);
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
  const MethodInfo *v17; // [xsp+10h] [xbp-50h]
  int32_t v18; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4B63236 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_12295/*"SHORT_HAVE_POINT"*/, v8);
    sub_1BE4ACC(&StringLiteral_12293/*"SHORT_DLG_TITLE"*/, v9);
    byte_4B63236 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12295/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveFreeStone,
        int32_t haveChargeStone,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  const MethodInfo *v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+28h] [xbp-48h] BYREF
  int32_t v27; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4B63232 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&haveFreeStone);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_12466/*"STONE_PURCHASE"*/, v10);
    sub_1BE4ACC(&StringLiteral_12296/*"SHORT_HAVE_STONE"*/, v11);
    sub_1BE4ACC(&StringLiteral_12293/*"SHORT_DLG_TITLE"*/, v12);
    byte_4B63232 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SHORT_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SHORT_HAVE_STONE"*/, 0LL);
  v27 = haveChargeStone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v26 = haveFreeStone;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v19, v20, v21);
  v23 = System_String__Format_62713180(v14, v18, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v13, v23, v24, callback, 14.0, 0LL, 0, 0, 0, 0LL, v25);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v25; // x1
  int32_t m_CachedPtr; // w21
  BalanceConfig_c *v27; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v30; // x20
  System_String_o **v31; // x9
  System_String_o *v32; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v34; // x8
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v42; // x0
  System_Action_object__o *_9__76_0; // x22
  Il2CppObject *v44; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int i; // w24
  int32_t v53; // w21
  struct ItemIconComponent_array *v54; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v56; // x23
  UILabel_o *v57; // x21
  int32_t *v58; // x22
  SummonConfirmDlgComponent_c *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w8
  System_String_o *v62; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v64; // x0
  int32_t v65; // w8
  System_String_o *v66; // x22
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v70; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B63240 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v7);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1BE4ACC(&int_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, v15);
    sub_1BE4ACC(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_116/*" "*/, v17);
    sub_1BE4ACC(&StringLiteral_12525/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1BE4ACC(&StringLiteral_12527/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1BE4ACC(&StringLiteral_12528/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1BE4ACC(&StringLiteral_12530/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1BE4ACC(&StringLiteral_12529/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1BE4ACC(&StringLiteral_12526/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4B63240 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v42 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v42 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_0 = (System_Action_object__o *)v42->static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__76_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__76_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__76_0,
        (int64_t)_9__76_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__76_0,
      (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v53 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v53 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 48LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v53 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v53,
                                                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v54 = this->fields.extraItemIconComponents;
      if ( !v54 )
        goto LABEL_59;
      if ( v53 >= v54->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v53 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1BE4D30(SelfUserGame, v25);
      v56 = (UnityEngine_Component_o *)v54->m_Items[v53];
      if ( !v56 )
        goto LABEL_59;
      v57 = extraMessageLabels->m_Items[v53];
      v58 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v56, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v58 )
        goto LABEL_59;
      ItemIconComponent__SetGift_39048172((ItemIconComponent_o *)v56, v58[5], v58[6], v58[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v59 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v59 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v59->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12525/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v61 = v58[7];
        v62 = v60;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v62, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v65 = v58[7];
        v66 = v64;
        v67 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v65, 0LL);
        v68 = System_String__Format(v66, v67, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_62698808(
                                                     v68,
                                                     (System_String_o *)StringLiteral_116/*" "*/,
                                                     0LL);
      }
      v25 = SelfUserGame;
      if ( !v57 )
        goto LABEL_59;
      UILabel__set_text(v57, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12528/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v27->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12527/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12530/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12525/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12529/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v35 = *v34;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v35, 0LL);
  if ( !v30
    || (v39 = (System_String_o *)SelfUserGame,
        v70 = v30[7],
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v36, v37, v38),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1BE4D28(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_39048172((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
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
    sub_1BE4D28(this, method);
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
  if ( (byte_4B63241 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4B63241 = 1;
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
    if ( (signed int)v5 >= SLODWORD(this->fields.closeBtnLb->fields.bottomAnchor) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1BE4D30(this, method);
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
    sub_1BE4D28(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
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
  __int64 v17; // x20
  UIWidget_o *baseWindowSprite; // x0
  __int64 v19; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v25; // x22
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  SummonConfirmDlgComponent___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x23
  System_Func_object__int__o *_9__75_1; // x24
  Il2CppObject *v38; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_ICollection_o *v47; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v51; // x23
  SummonConfirmDlgComponent_c *v52; // x0
  const MethodInfo *v53; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v55; // x23
  UnityEngine_Object_o *v56; // x24
  SummonConfirmDlgComponent_c *v57; // x0
  __int64 v58; // x8
  const MethodInfo *v59; // x1
  int v60; // w8
  bool v61; // nf

  if ( (byte_4B6323F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1BE4ACC(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1BE4ACC(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__, v13);
    sub_1BE4ACC(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1BE4ACC(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, v15);
    sub_1BE4ACC(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4B6323F = 1;
  }
  v17 = sub_1BE4D18(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass75_0___ctor((SummonConfirmDlgComponent___c__DisplayClass75_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_51;
  *(_DWORD *)(v17 + 16) = shopIdIdx;
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
    || (v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v22, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v23, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1BE4D28(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v26, v28, v29, v30, v31, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v35 = SummonConfirmDlgComponent___c_TypeInfo;
    v36 = v34;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v35 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__75_1 = (System_Func_object__int__o *)v35->static_fields->__9__75_1;
    if ( !_9__75_1 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__75_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__75_1,
        v38,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__75_1,
        (int64_t)_9__75_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__75_1,
                                                                 (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v47 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v46,
                                                (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v47, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v47,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v17 + 20), v49);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 1 )
      {
        v51 = this->fields.bonusMsgInfo;
        v52 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v52 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v51, v52->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v53);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 2 )
      {
        v55 = this->fields.extraMsgInfo;
        v56 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v57 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v57 = SummonConfirmDlgComponent_TypeInfo;
          }
          v58 = 36LL;
        }
        else
        {
LABEL_44:
          v57 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v57 = SummonConfirmDlgComponent_TypeInfo;
          }
          v58 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v55,
          *(float *)((char *)&v57->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v58),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v59);
      }
    }
    v60 = *(_DWORD *)(v17 + 20) + 1;
    v61 = *(_DWORD *)(v17 + 20) - 2 < 0;
    *(_DWORD *)(v17 + 20) = v60;
  }
  while ( v61 != __OFSUB__(v60, 3) );
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

  if ( (byte_4B6322F & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4B6322F = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
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

  if ( (byte_4B63230 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4B63230 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v6; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4B6323E & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_12508/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4B6323E = 1;
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
        sub_1BE4D28(closeBtnObject, method);
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
  v6 = this->fields.state;
  if ( v6 == 8 || v6 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1BE4D28(0LL, isTutorial);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close_33735152(autoSaleDlgInfo, 0LL, method);
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
    sub_1BE4D28(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_33820128(this, 0LL, v19);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A22B98;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A22B50;
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
  if ( (byte_4B63248 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B63248 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63249 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4B63249 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___Open_b__71_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BE4D28(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c___SetBonusText_b__76_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0LL)) == 0LL )
  {
    sub_1BE4D28(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BE4D28(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass71_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass71_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass71_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BE4D28(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass75_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass75_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BE4D28(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}