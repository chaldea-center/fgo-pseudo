void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4BF9D8B & 1) == 0 )
  {
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4BF9D8B = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_C069A0;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_C07390;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BF9D8A & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BF9D8A = 1;
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
  if ( (byte_4BF9D78 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&price);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_3085/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1C2E12C(&StringLiteral_405/*"#,0"*/, v11);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4BF9D78 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3085/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v25, (System_String_o *)StringLiteral_405/*"#,0"*/, 0LL);
  v20 = System_String__Format_63249956(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1C2E388(v20, v21);
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
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v56; // x0
  const MethodInfo *v57; // [xsp+10h] [xbp-80h]
  int32_t v58; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+28h] [xbp-68h] BYREF
  int32_t v60; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BF9D79 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1C2E12C(&int_TypeInfo, v17);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v18);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v19);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v20);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1C2E12C(&StringLiteral_12524/*"STONE_PURCHASE"*/, v22);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1C2E12C(&StringLiteral_3089/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1C2E12C(&StringLiteral_3090/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4BF9D79 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3090/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3089/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v60 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v28, v29, v30);
  v59 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v32, v33, v34);
  v58 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v36, v37, v38);
  baseWindow = System_String__Format_63250024(v27, v31, v35, v39, 0LL);
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__50692032(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1C2E388(baseWindow, v41);
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
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v56, callback, 14.0, 0LL, 0, 0, 1, 0LL, v57);
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
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C2E0D0(
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

  SummonConfirmDlgComponent__Close_34188712(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_34188712(
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

  if ( (byte_4BF9D86 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_EndClose__, v10);
    byte_4BF9D86 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4BF9D87 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9D87 = 1;
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
    sub_1C2E388(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4BF9D75 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    byte_4BF9D75 = 1;
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
    sub_1C2E390(confirmTitleLabel, method);
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.extraGiftEntList, 0LL, v21, v22, v23, v24, v25, v26);
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
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0LL);
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
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v30);
    byte_4BF7D91 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v32);
    byte_4BF7D91 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1C2E388(confirmTitleLabel, method);
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

  if ( (byte_4BF9D88 & 1) == 0 )
  {
    sub_1C2E12C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4BF9D88 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2E144(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C2E378(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1C2E388(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4BF9D89 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4761/*"ConfirmWindow/CloseButton"*/, method);
    sub_1C2E12C(&StringLiteral_4763/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1C2E12C(&StringLiteral_4759/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4BF9D89 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43187880(transform, (System_String_o *)StringLiteral_4763/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43187880(v6, (System_String_o *)StringLiteral_4761/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43187880(v7, (System_String_o *)StringLiteral_4759/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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

  if ( (byte_4BF9D7F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, title);
    sub_1C2E12C(&Method_DataManager_GetMasterData_GiftMaster___, v21);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v22);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_int___, v23);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v24);
    sub_1C2E12C(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v25);
    sub_1C2E12C(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v26);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v27);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v28);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v31);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__, v32);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__, v33);
    sub_1C2E12C(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, v34);
    sub_1C2E12C(&SummonConfirmDlgComponent___c_TypeInfo, v35);
    sub_1C2E12C(&StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, v36);
    sub_1C2E12C(&StringLiteral_1/*""*/, v37);
    byte_4BF9D7F = 1;
  }
  v38 = sub_1C2E378(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_136;
  *(_DWORD *)(v38 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v41, v42, v43, v44, v45, v46);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v38 + 20) = 1;
      v74 = (GiftMaster_o *)MasterData_object;
      v75 = (System_Func_object__bool__o **)(v38 + 24);
      while ( 1 )
      {
        v76 = *v75;
        v77 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v75 )
        {
          v76 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v76,
            (Il2CppObject *)v38,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v38 + 24) = v76;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)v76, v78, v79, v80, v81, v82, v83);
        }
        v84 = System_Linq_Enumerable__Where_object_(
                v77,
                (System_Func_TSource__bool__o *)v76,
                (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
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
          _9__71_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__71_1, v88, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1C2E0D0(
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
                                                                     (const MethodInfo_30032B4 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v97 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v96,
                                                    (const MethodInfo_300F934 *)Method_System_Linq_Enumerable_ToList_int___);
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
    sub_1C2E388(gameObject, v40);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v115);
  v116 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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

  if ( (byte_4BF9D81 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4BF9D81 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1C2E388(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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

  if ( (byte_4BF9D7E & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, callback);
    sub_1C2E12C(&int_TypeInfo, v9);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v11);
    sub_1C2E12C(&UserGachaMaster_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_3862/*"CONFIRM_FREESUMMON_MSG"*/, v13);
    sub_1C2E12C(&StringLiteral_3861/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v14);
    sub_1C2E12C(&StringLiteral_6682/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v15);
    byte_4BF9D7E = 1;
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
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3862/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v29 = System_String__Format(v47, v19, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
    goto LABEL_18;
LABEL_11:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v51 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v23, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(v22, v19, v26, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v29 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6682/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v50 = remainNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v32, v33, v34);
  v49 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(v31, v35, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1C2E388(gameObject, v28);
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
  sub_1C2E0D0(
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
  GachaMaster_o *v42; // x20
  GachaEntity_array *GachaDataInGroup; // x28
  Il2CppObject *Entity; // x29
  char v45; // w25
  int v46; // w21
  Il2CppClass *klass; // x8
  GachaEntity_o *v48; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v50; // w27
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int max_length; // w22
  GachaEntity_o *v58; // x8
  GachaEntity_o *v59; // x9
  int64_t name; // x22
  int64_t v61; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Object_array *v70; // x29
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x21
  int v97; // w21
  Il2CppObject *monitor; // x21
  System_String_o **v99; // x8
  GachaEntity_o *v100; // x9
  System_String_o *v101; // x20
  UILabel_o *v102; // x28
  System_String_o *v103; // x29
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_Object_array *v110; // x20
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x21
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x21
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v142; // x27
  System_Object_array *v143; // x28
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x20
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x20
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x20
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  int64_t v183; // x20
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  int64_t v193; // x20
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  int64_t v203; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v205; // x2
  const MethodInfo *v206; // x1
  System_Action_o *v207; // x20
  __int64 v208; // x0
  int32_t v209; // [xsp+4h] [xbp-8Ch]
  int32_t v210; // [xsp+8h] [xbp-88h]
  int32_t v211; // [xsp+Ch] [xbp-84h]
  int32_t v212; // [xsp+10h] [xbp-80h]
  int32_t v213; // [xsp+14h] [xbp-7Ch]
  int32_t v214; // [xsp+18h] [xbp-78h] BYREF
  int32_t v215; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v216; // [xsp+20h] [xbp-70h] BYREF
  int32_t v217; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v218; // [xsp+28h] [xbp-68h] BYREF
  int32_t v219; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BF9D80 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1C2E12C(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1C2E12C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1C2E12C(&int_TypeInfo, v24);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v25);
    sub_1C2E12C(&System_Math_TypeInfo, v26);
    sub_1C2E12C(&object___TypeInfo, v27);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1C2E12C(&StringLiteral_3866/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/, v31);
    sub_1C2E12C(&StringLiteral_3867/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v32);
    sub_1C2E12C(&StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, v33);
    sub_1C2E12C(&StringLiteral_3864/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v34);
    sub_1C2E12C(&StringLiteral_1/*""*/, v35);
    sub_1C2E12C(&StringLiteral_3865/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v36);
    byte_4BF9D80 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2E0D0(
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
    v39 = sub_1C80008(v38);
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C80008(v38);
  MasterData_object = **(_QWORD **)(v40 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v213 = price;
  v211 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v42 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v212 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0LL);
  v45 = 1;
  if ( (MasterData_object & 1) != 0 )
    goto LABEL_20;
  v46 = 1;
  if ( !Entity )
    goto LABEL_21;
  klass = Entity[2].klass;
  if ( !klass )
    goto LABEL_100;
  if ( !LODWORD(klass->_1.namespaze) )
  {
    v45 = 1;
LABEL_20:
    v46 = 1;
    goto LABEL_21;
  }
  MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v42, groupId, 0LL);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  if ( !GachaDataInGroup->max_length )
LABEL_101:
    sub_1C2E390(MasterData_object, v37);
  v48 = GachaDataInGroup->m_Items[0];
  if ( !v48 )
    goto LABEL_100;
  v45 = 0;
  v46 = (int)MasterData_object / v48->fields.drawNum1;
LABEL_21:
  v210 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v209 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v50 = System_Math__Max_64054728(v46, 1, 0LL);
  this->fields.extraGiftEntList = giftEntList;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v58 = GachaDataInGroup->m_Items[0];
    if ( v58 )
    {
      v59 = GachaDataInGroup->m_Items[1];
      if ( v59 )
      {
        name = (int64_t)v58->fields.name;
        v61 = (int64_t)v59->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_object = sub_1C2E1D4(object___TypeInfo, 4LL);
        if ( MasterData_object )
        {
          v70 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1C2E268(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !v70->max_length )
            goto LABEL_101;
          v70->m_Items[0] = (Il2CppObject *)name;
          sub_1C2E0D0((PartyOrganizationUtility_o *)v70->m_Items, name, v64, v65, v66, v67, v68, v69);
          if ( v61 )
          {
            MasterData_object = sub_1C2E268(v61, v70->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v70->max_length <= 1 )
            goto LABEL_101;
          v70->m_Items[1] = (Il2CppObject *)v61;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v70->m_Items[1], v61, v71, v72, v73, v74, v75, v76);
          v219 = v50;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v77, v78, v79);
          v86 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C2E268(MasterData_object, v70->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v70->max_length <= 2 )
            goto LABEL_101;
          v70->m_Items[2] = (Il2CppObject *)v86;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v70->m_Items[2], v86, v80, v81, v82, v83, v84, v85);
          v218 = v213;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v87, v88, v89);
          v96 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C2E268(MasterData_object, v70->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v70->max_length <= 3 )
            goto LABEL_101;
          v70->m_Items[3] = (Il2CppObject *)v96;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v70->m_Items[3], v96, v90, v91, v92, v93, v94, v95);
          MasterData_object = (__int64)System_String__Format_63250092(v63, v70, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
          v97 = v212;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1C2E388(MasterData_object, v37);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0LL);
  if ( (MasterData_object & 1) == 0 )
    monitor = (Il2CppObject *)Entity[1].monitor;
  v99 = (System_String_o **)&StringLiteral_3865/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v45 & 1) == 0 )
  {
    if ( !GachaDataInGroup->max_length )
      goto LABEL_101;
    v100 = GachaDataInGroup->m_Items[0];
    if ( !v100 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v100->fields.drawNum1 > 1 )
      v99 = (System_String_o **)&StringLiteral_3866/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v101 = *v99;
  v102 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v103 = LocalizationManager__Get(v101, 0LL);
  MasterData_object = sub_1C2E1D4(object___TypeInfo, 4LL);
  if ( !MasterData_object )
    goto LABEL_100;
  v110 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1C2E268(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v110->max_length )
    goto LABEL_101;
  v110->m_Items[0] = monitor;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v110->m_Items, (int64_t)monitor, v104, v105, v106, v107, v108, v109);
  v219 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v111, v112, v113);
  v120 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v110->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v110->max_length <= 1 )
    goto LABEL_101;
  v110->m_Items[1] = (Il2CppObject *)v120;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v110->m_Items[1], v120, v114, v115, v116, v117, v118, v119);
  v218 = v50;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v121, v122, v123);
  v130 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v110->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v110->max_length <= 2 )
    goto LABEL_101;
  v110->m_Items[2] = (Il2CppObject *)v130;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v110->m_Items[2], v130, v124, v125, v126, v127, v128, v129);
  v217 = v213;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v217, v131, v132, v133);
  v140 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v110->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v110->max_length <= 3 )
    goto LABEL_101;
  v110->m_Items[3] = (Il2CppObject *)v140;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v110->m_Items[3], v140, v134, v135, v136, v137, v138, v139);
  MasterData_object = (__int64)System_String__Format_63250092(v103, v110, 0LL);
  if ( !v102 )
    goto LABEL_100;
  UILabel__set_text(v102, (System_String_o *)MasterData_object, 0LL);
  v97 = v212;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_3867/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v143 = (System_Object_array *)sub_1C2E1D4(object___TypeInfo, 6LL);
  v219 = v97;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v219, v144, v145, v146);
  if ( !v143 )
    goto LABEL_100;
  v153 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v143->max_length )
    goto LABEL_101;
  v143->m_Items[0] = (Il2CppObject *)v153;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v143->m_Items, v153, v147, v148, v149, v150, v151, v152);
  v218 = v211;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v218, v154, v155, v156);
  v163 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v143->max_length <= 1 )
    goto LABEL_101;
  v143->m_Items[1] = (Il2CppObject *)v163;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v143->m_Items[1], v163, v157, v158, v159, v160, v161, v162);
  v217 = v210;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v217, v164, v165, v166);
  v173 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v143->max_length <= 2 )
    goto LABEL_101;
  v143->m_Items[2] = (Il2CppObject *)v173;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v143->m_Items[2], v173, v167, v168, v169, v170, v171, v172);
  v216 = v209;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v216, v174, v175, v176);
  v183 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v143->max_length <= 3 )
    goto LABEL_101;
  v143->m_Items[3] = (Il2CppObject *)v183;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v143->m_Items[3], v183, v177, v178, v179, v180, v181, v182);
  v215 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v215, v184, v185, v186);
  v193 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v143->max_length <= 4 )
    goto LABEL_101;
  v143->m_Items[4] = (Il2CppObject *)v193;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v143->m_Items[4], v193, v187, v188, v189, v190, v191, v192);
  v214 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v214, v194, v195, v196);
  v203 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C2E268(MasterData_object, v143->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v208 = sub_1C2E3AC();
      sub_1C2E254(v208, 0LL);
    }
  }
  if ( v143->max_length <= 5 )
    goto LABEL_101;
  v143->m_Items[5] = (Il2CppObject *)v203;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v143->m_Items[5], v203, v197, v198, v199, v200, v201, v202);
  MasterData_object = (__int64)System_String__Format_63250092(v142, v143, 0LL);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_100;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v205);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v206);
  v207 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v207, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v207, 0, 0LL);
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

  if ( (byte_4BF9D7D & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v17);
    sub_1C2E12C(&object___TypeInfo, v18);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v19);
    sub_1C2E12C(&StringLiteral_3870/*"CONFIRM_POINTSUMMON_MSG"*/, v20);
    byte_4BF9D7D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3870/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v22 = (System_Object_array *)sub_1C2E1D4(object___TypeInfo, 4LL);
  v88 = needPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v88, v23, v24, v25);
  if ( !v22 )
    sub_1C2E388(v26, v27);
  v34 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = (Il2CppObject *)v34;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v22->m_Items, v34, v28, v29, v30, v31, v32, v33);
  v87 = gachaTime;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v87, v35, v36, v37);
  v44 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_23;
  v22->m_Items[1] = (Il2CppObject *)v44;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v22->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
  v86 = havePointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v86, v45, v46, v47);
  v54 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_23;
  v22->m_Items[2] = (Il2CppObject *)v54;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v22->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
  v85 = afterPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v55, v56, v57);
  v64 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_24:
      v82 = sub_1C2E3AC();
      sub_1C2E254(v82, 0LL);
    }
  }
  if ( v22->max_length <= 3 )
LABEL_23:
    sub_1C2E390(v26, v27);
  v22->m_Items[3] = (Il2CppObject *)v64;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v22->m_Items[3], v64, v58, v59, v60, v61, v62, v63);
  v65 = System_String__Format_63250092(v21, v22, 0LL);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    v88 = needPointNum;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v66, v67, v68);
    v87 = havePointNum;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v73, v74, v75);
    v86 = afterPointNum;
    v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v77, v78, v79);
    v65 = System_String__Format_63250024(summonConfirmMessage, v72, v76, v80, 0LL);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C2E0D0(
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
  const MethodInfo *v245; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v250; // [xsp+40h] [xbp-80h] BYREF
  int32_t v251; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v252; // [xsp+48h] [xbp-78h] BYREF
  int32_t v253; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v254; // [xsp+50h] [xbp-70h] BYREF
  int32_t v255; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v256; // [xsp+58h] [xbp-68h] BYREF
  int32_t v257; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4BF9D7B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_object___, title);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27);
    sub_1C2E12C(&int_TypeInfo, v28);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v29);
    sub_1C2E12C(&object___TypeInfo, v30);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v31);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v32);
    sub_1C2E12C(&StringLiteral_3848/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v33);
    sub_1C2E12C(&StringLiteral_3854/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v34);
    sub_1C2E12C(&StringLiteral_3849/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v35);
    sub_1C2E12C(&StringLiteral_3852/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v36);
    sub_1C2E12C(&StringLiteral_3869/*"CONFIRM_PAYSUMMON_MSG"*/, v37);
    sub_1C2E12C(&StringLiteral_3850/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v38);
    sub_1C2E12C(&StringLiteral_3851/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v39);
    sub_1C2E12C(&StringLiteral_12627/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1C2E12C(&StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1C2E12C(&StringLiteral_12614/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1C2E12C(&StringLiteral_12576/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1C2E12C(&StringLiteral_3853/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4BF9D7B = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1C2E0D0(
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
    v45 = (System_String_o **)&StringLiteral_3854/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3869/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3853/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1C2E1D4(object___TypeInfo, 8LL);
  v257 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v257, v48, v49, v50);
  if ( !v47 )
    goto LABEL_107;
  v59 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v47->max_length )
    goto LABEL_105;
  v47->m_Items[0] = (Il2CppObject *)v59;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v47->m_Items, v59, v53, v54, v55, v56, v57, v58);
  v256 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v256, v60, v61, v62);
  v69 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_105;
  v47->m_Items[1] = (Il2CppObject *)v69;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[1], v69, v63, v64, v65, v66, v67, v68);
  v255 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v255, v70, v71, v72);
  v79 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_105;
  v47->m_Items[2] = (Il2CppObject *)v79;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[2], v79, v73, v74, v75, v76, v77, v78);
  v254 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v254, v80, v81, v82);
  v89 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_105;
  v47->m_Items[3] = (Il2CppObject *)v89;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[3], v89, v83, v84, v85, v86, v87, v88);
  v253 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v253, v90, v91, v92);
  v99 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_105;
  v47->m_Items[4] = (Il2CppObject *)v99;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[4], v99, v93, v94, v95, v96, v97, v98);
  v252 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v252, v100, v101, v102);
  v109 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_105;
  v47->m_Items[5] = (Il2CppObject *)v109;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[5], v109, v103, v104, v105, v106, v107, v108);
  v251 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v251, v110, v111, v112);
  v119 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_105;
  v47->m_Items[6] = (Il2CppObject *)v119;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[6], v119, v113, v114, v115, v116, v117, v118);
  v250 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v250, v120, v121, v122);
  v129 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_105;
  v47->m_Items[7] = (Il2CppObject *)v129;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v47->m_Items[7], v129, v123, v124, v125, v126, v127, v128);
  v130 = System_String__Format_63250092(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12627/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v132 = LocalizationManager__Get((System_String_o *)StringLiteral_12614/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v134 = System_String__Format(v132, DateTime, 0LL);
    v131 = System_String__Concat_63235584(v131, v134, 0LL);
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
      v245);
    return;
  }
  v257 = gachaId;
  v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257, v137, v138, v139);
  v141 = System_String__Format((System_String_o *)StringLiteral_3852/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v140, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v141, 0LL) )
  {
    v257 = gachaId;
    v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257, v142, v143, v144);
    v146 = System_String__Format((System_String_o *)StringLiteral_3852/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v145, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = v146;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v147 = (System_String_o *)StringLiteral_3851/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v147, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v148 = LocalizationManager__Get((System_String_o *)StringLiteral_3849/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v257 = price;
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257, v149, v150, v151);
  v256 = num;
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v256, v153, v154, v155);
  v157 = System_String__Format_63249956(v148, v152, v156, 0LL);
  v158 = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v159 = (System_Object_array *)sub_1C2E1D4(object___TypeInfo, 6LL);
  v255 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v255, v160, v161, v162);
  if ( !v159 )
    goto LABEL_107;
  v169 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v159->max_length )
    goto LABEL_105;
  v159->m_Items[0] = (Il2CppObject *)v169;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v159->m_Items, v169, v163, v164, v165, v166, v167, v168);
  v254 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v254, v170, v171, v172);
  v179 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 1 )
    goto LABEL_105;
  v159->m_Items[1] = (Il2CppObject *)v179;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v159->m_Items[1], v179, v173, v174, v175, v176, v177, v178);
  v253 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v253, v180, v181, v182);
  v189 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 2 )
    goto LABEL_105;
  v159->m_Items[2] = (Il2CppObject *)v189;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v159->m_Items[2], v189, v183, v184, v185, v186, v187, v188);
  v252 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v252, v190, v191, v192);
  v199 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 3 )
    goto LABEL_105;
  v159->m_Items[3] = (Il2CppObject *)v199;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v159->m_Items[3], v199, v193, v194, v195, v196, v197, v198);
  v251 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v251, v200, v201, v202);
  v209 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v159->max_length <= 4 )
    goto LABEL_105;
  v159->m_Items[4] = (Il2CppObject *)v209;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v159->m_Items[4], v209, v203, v204, v205, v206, v207, v208);
  v250 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v250, v210, v211, v212);
  v219 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C2E268(addMsgBgSprite, v159->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v244 = sub_1C2E3AC();
      sub_1C2E254(v244, 0LL);
    }
  }
  if ( v159->max_length <= 5 )
LABEL_105:
    sub_1C2E390(addMsgBgSprite, v52);
  v159->m_Items[5] = (Il2CppObject *)v219;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v159->m_Items[5], v219, v213, v214, v215, v216, v217, v218);
  v220 = System_String__Format_63250092(v158, v159, 0LL);
  v221 = LocalizationManager__Get((System_String_o *)StringLiteral_3848/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v223 = Method_System_Array_Empty_object___;
  v224 = v221;
  v225 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v225 )
  {
    sub_1C80064(Method_System_Array_Empty_object___);
    v225 = v223[7];
  }
  v226 = *(_QWORD *)(v225 + 16);
  if ( (*(_BYTE *)(v226 + 309) & 1) == 0 )
    v226 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v226 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v226);
  v227 = *(_QWORD *)(v223[7] + 16LL);
  if ( (*(_BYTE *)(v227 + 309) & 1) == 0 )
    v227 = sub_1C80008(inited);
  v228 = v157;
  v229 = System_String__Format_63250092(v224, **(System_Object_array ***)(v227 + 184), 0LL);
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__50692032(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C2E0D0(
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
    sub_1C2E388(addMsgBgSprite, v52);
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
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v243 = LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v243, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v245);
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

  if ( (byte_4BF9D7C & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, title);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_3871/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1C2E12C(&StringLiteral_3872/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1C2E12C(&StringLiteral_1/*""*/, v16);
    byte_4BF9D7C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3871/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_63249956(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3872/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_63250024(v27, v31, v35, v39, 0LL);
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
  if ( (byte_4BF9D77 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&price);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_12524/*"STONE_PURCHASE"*/, v11);
    sub_1C2E12C(&StringLiteral_12352/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1C2E12C(&StringLiteral_405/*"#,0"*/, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    byte_4BF9D77 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12352/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v31, (System_String_o *)StringLiteral_405/*"#,0"*/, 0LL);
  v26 = System_String__Format_63250024(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_4BF9D7A & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_12353/*"SHORT_HAVE_POINT"*/, v8);
    sub_1C2E12C(&StringLiteral_12351/*"SHORT_DLG_TITLE"*/, v9);
    byte_4BF9D7A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SHORT_HAVE_POINT"*/, 0LL);
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

  if ( (byte_4BF9D76 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&haveFreeStone);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_12524/*"STONE_PURCHASE"*/, v10);
    sub_1C2E12C(&StringLiteral_12354/*"SHORT_HAVE_STONE"*/, v11);
    sub_1C2E12C(&StringLiteral_12351/*"SHORT_DLG_TITLE"*/, v12);
    byte_4BF9D76 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SHORT_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12354/*"SHORT_HAVE_STONE"*/, 0LL);
  v27 = haveChargeStone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v26 = haveFreeStone;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v19, v20, v21);
  v23 = System_String__Format_63249956(v14, v18, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_4BF9D84 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1C2E12C(&BalanceConfig_TypeInfo, v7);
    sub_1C2E12C(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1C2E12C(&int_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v13);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, v15);
    sub_1C2E12C(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_117/*" "*/, v17);
    sub_1C2E12C(&StringLiteral_12586/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1C2E12C(&StringLiteral_12588/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1C2E12C(&StringLiteral_12589/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1C2E12C(&StringLiteral_12591/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1C2E12C(&StringLiteral_12590/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1C2E12C(&StringLiteral_12587/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4BF9D84 = 1;
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
      _9__76_0 = (System_Action_object__o *)sub_1C2E378(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__76_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1C2E0D0(
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
      (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
        sub_1C2E390(SelfUserGame, v25);
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
      ItemIconComponent__SetGift_39457192((ItemIconComponent_o *)v56, v58[5], v58[6], v58[7], 0, 0LL);
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
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v61 = v58[7];
        v62 = v60;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v62, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12587/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v65 = v58[7];
        v66 = v64;
        v67 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v65, 0LL);
        v68 = System_String__Format(v66, v67, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_63235584(
                                                     v68,
                                                     (System_String_o *)StringLiteral_117/*" "*/,
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
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12589/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
             (const MethodInfo_2FF280C *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12588/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12591/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12586/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12590/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
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
    sub_1C2E388(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_39457192((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
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
    sub_1C2E388(this, method);
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
  if ( (byte_4BF9D85 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4BF9D85 = 1;
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
      sub_1C2E390(this, method);
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
    sub_1C2E388(this, method);
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

  if ( (byte_4BF9D83 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1C2E12C(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1C2E12C(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C2E12C(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__, v13);
    sub_1C2E12C(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1C2E12C(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, v15);
    sub_1C2E12C(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4BF9D83 = 1;
  }
  v17 = sub_1C2E378(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1C2E388(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v26, v28, v29, v30, v31, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
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
      _9__75_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__75_1,
        v38,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1C2E0D0(
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
                                                                 (const MethodInfo_30032B4 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v47 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v46,
                                                (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4BF9D73 & 1) == 0 )
  {
    sub_1C2E12C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4BF9D73 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BF9D74 & 1) == 0 )
  {
    sub_1C2E12C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4BF9D74 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BF9D82 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_12569/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4BF9D82 = 1;
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
        sub_1C2E388(closeBtnObject, method);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12569/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1C2E388(0LL, isTutorial);
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
    sub_1C2E388(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_34188712(this, 0LL, v19);
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A6B63C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6B5F4;
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
  if ( (byte_4BF9D8C & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, result);
    byte_4BF9D8C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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

  if ( (byte_4BF9D8D & 1) == 0 )
  {
    sub_1C2E12C(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4BF9D8D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1C2E0D0(
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}