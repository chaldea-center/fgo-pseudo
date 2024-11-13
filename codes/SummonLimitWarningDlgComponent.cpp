void __fastcall SummonLimitWarningDlgComponent___ctor(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B129E3 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B129E3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__Close(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonLimitWarningDlgComponent__Close_33790964(this, 0LL, v2);
}


void __fastcall SummonLimitWarningDlgComponent__Close_33790964(
        SummonLimitWarningDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B129DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_EndClose__, v10, v11);
    byte_4B129DE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__EndClose(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  SummonLimitWarningDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonLimitWarningDlgComponent__EndOpen(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SummonLimitWarningDlgComponent__Init(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B129DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B129DA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel2) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel2) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.settingLabel) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(gameObject, v5);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OnClickCancel(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B129E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_OnClickCancel__, method, v2);
    byte_4B129E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_SummonLimitWarningDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SummonLimitWarningDlgComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v6);
    SummonLimitWarningDlgComponent__callback(this, 0, v7);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickDecide(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B129DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_OnClickDecide__, method, v2);
    byte_4B129DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_SummonLimitWarningDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SummonLimitWarningDlgComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v6);
    SummonLimitWarningDlgComponent__callback(this, 2, v7);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickOtherScene(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B129E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_OnClickOtherScene__, method, v2);
    byte_4B129E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_SummonLimitWarningDlgComponent_OnClickOtherScene__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickOtherScene__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SummonLimitWarningDlgComponent_OnClickOtherScene__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v6);
    SummonLimitWarningDlgComponent__callback(this, 1, v7);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickSetting(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  AutomaticSaleDlgComponent_CallbackFunc_o *v16; // x21

  if ( (byte_4B129E2 & 1) == 0 )
  {
    sub_1BCA7E0(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_OnClickSetting__, v4, v5);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_settingResult__, v6, v7);
    byte_4B129E2 = 1;
  }
  v8 = Method_SummonLimitWarningDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SummonLimitWarningDlgComponent_OnClickSetting__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v16 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                            v13,
                                                            v14,
                                                            v15),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_SummonLimitWarningDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1BCAA3C(gameObject, v11);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v16, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenManaWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_GameObject_o *v39; // x20
  __int64 v40; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *msgLabel; // x21
  System_String_o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  BalanceConfig_c *v46; // x8
  Il2CppObject *v47; // x20
  Il2CppObject *v48; // x0
  UILabel_o *otherLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x20
  int32_t UserItemMax; // [xsp+8h] [xbp-38h] BYREF
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B129DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, autoSaleDialogCloseCallback);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12511/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12512/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12513/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/, v23, v24);
    byte_4B129DC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v27, v28, v29, v30, v31, v32);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_37;
  v39 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12513/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12512/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v39 )
    goto LABEL_37;
  v43 = (System_String_o *)gameObject;
  m_CachedPtr = v39[7].fields.m_CachedPtr;
  v44 = j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
  v46 = BalanceConfig_TypeInfo;
  v47 = (Il2CppObject *)v44;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v45);
    v46 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v46->static_fields->UserItemMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserItemMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v43, v47, v48, 0LL);
  if ( !msgLabel )
    goto LABEL_37;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  otherLabel = this->fields.otherLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12511/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel
    || (UILabel__set_text(otherLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_37:
    sub_1BCAA3C(gameObject, v26);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v52);
  this->fields.state = 1;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  System_String_o *v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  BalanceConfig_c *v57; // x8
  Il2CppObject *v58; // x20
  Il2CppObject *v59; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B129DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, autoSaleDialogCloseCallback);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12520/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12518/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12523/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12521/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12519/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, v29, v30);
    byte_4B129DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v33, v34, v35, v36, v37, v38);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v45 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v46, 8.0, 152.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v47, 8.0, 87.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v48, 2.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12523/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v45 )
    goto LABEL_43;
  v54 = (System_String_o *)gameObject;
  klass = (int)v45[4].klass;
  v55 = j_il2cpp_value_box_0(int_TypeInfo, &klass);
  v57 = BalanceConfig_TypeInfo;
  v58 = (Il2CppObject *)v55;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v56);
    v57 = BalanceConfig_TypeInfo;
  }
  QpMax = v57->static_fields->QpMax;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v54, v58, v59, 0LL);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_43:
    sub_1BCAA3C(gameObject, v32);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v64);
  this->fields.state = 1;
  v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning2(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  System_String_o *v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  BalanceConfig_c *v57; // x8
  Il2CppObject *v58; // x20
  Il2CppObject *v59; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B129DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, autoSaleDialogCloseCallback);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SummonLimitWarningDlgComponent_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12524/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12520/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12522/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12518/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12519/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, v29, v30);
    byte_4B129DD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v33, v34, v35, v36, v37, v38);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v45 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v46, 8.0, 140.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v47, 8.0, 74.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v48, 3.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v45 )
    goto LABEL_43;
  v54 = (System_String_o *)gameObject;
  klass = (int)v45[4].klass;
  v55 = j_il2cpp_value_box_0(int_TypeInfo, &klass);
  v57 = BalanceConfig_TypeInfo;
  v58 = (Il2CppObject *)v55;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v56);
    v57 = BalanceConfig_TypeInfo;
  }
  QpMax = v57->static_fields->QpMax;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v54, v58, v59, 0LL);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12510/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_43:
    sub_1BCAA3C(gameObject, v32);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v64);
  this->fields.state = 1;
  v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent__SetButtonEnable(
        SummonLimitWarningDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w20

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_1BCAA3C(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__add_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonLimitWarningDlgComponent_o *v11; // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B129D8 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B129D8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v8->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SummonLimitWarningDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SummonLimitWarningDlgComponent__callback(
        SummonLimitWarningDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *v10; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall SummonLimitWarningDlgComponent__remove_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonLimitWarningDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B129D9 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B129D9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v8->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SummonLimitWarningDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent__settingResult(
        SummonLimitWarningDlgComponent_o *this,
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
    sub_1BCAA3C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonLimitWarningDlgComponent__Close_33790964(this, 0LL, v19);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))autoSaleDialogCloseCallbackFunc->fields.m_target)(
      autoSaleDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&autoSaleDialogCloseCallbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09070;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09028;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonLimitWarningDlgComponent_CallbackFunc__BeginInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B129E4 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonLimitWarningDlgComponent_Result_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B129E4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SummonLimitWarningDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__EndInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__Invoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}