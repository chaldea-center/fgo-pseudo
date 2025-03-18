void __fastcall SummonLimitWarningDlgComponent___ctor(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E709 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1E709 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__Close(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonLimitWarningDlgComponent__Close_34478616(this, 0LL, v2);
}


void __fastcall SummonLimitWarningDlgComponent__Close_34478616(
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
  System_Action_o *v11; // x20

  if ( (byte_4C1E704 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_EndClose__, v10);
    byte_4C1E704 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C1E700 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1E700 = 1;
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
    sub_1C3B9C0(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OnClickCancel(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C1E707 & 1) == 0 )
  {
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_OnClickCancel__, method);
    byte_4C1E707 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SummonLimitWarningDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 0, v6);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickDecide(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C1E705 & 1) == 0 )
  {
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_OnClickDecide__, method);
    byte_4C1E705 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SummonLimitWarningDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 2, v6);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickOtherScene(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C1E706 & 1) == 0 )
  {
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_OnClickOtherScene__, method);
    byte_4C1E706 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickOtherScene__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickOtherScene__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SummonLimitWarningDlgComponent_OnClickOtherScene__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 1, v6);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickSetting(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v10; // x21

  if ( (byte_4C1E708 & 1) == 0 )
  {
    sub_1C3B764(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_OnClickSetting__, v3);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_settingResult__, v4);
    byte_4C1E708 = 1;
  }
  v5 = Method_SummonLimitWarningDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_SummonLimitWarningDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C3B9B0(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonLimitWarningDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1C3B9C0(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenManaWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x20
  UILabel_o *titleLabel; // x21
  UILabel_o *msgLabel; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_String_o *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  BalanceConfig_c *v41; // x8
  Il2CppObject *v42; // x20
  Il2CppObject *v43; // x0
  UILabel_o *otherLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x20
  int32_t UserItemMax; // [xsp+8h] [xbp-38h] BYREF
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1E702 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&BalanceConfig_TypeInfo, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_1C3B764(&StringLiteral_12636/*"Spanish (Venezuela)"*/, v11);
    sub_1C3B764(&StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, v12);
    sub_1C3B764(&StringLiteral_12637/*"Special Attribute"*/, v13);
    sub_1C3B764(&StringLiteral_12632/*"Spanish (Puerto Rico)"*/, v14);
    sub_1C3B764(&StringLiteral_12638/*"SpecialItemHelp"*/, v15);
    byte_4C1E702 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_37;
  v30 = gameObject;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SpecialItemHelp"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12637/*"Special Attribute"*/, 0LL);
  if ( !v30 )
    goto LABEL_37;
  v36 = (System_String_o *)gameObject;
  m_CachedPtr = v30[7].fields.m_CachedPtr;
  v37 = j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v33, v34, v35);
  v41 = BalanceConfig_TypeInfo;
  v42 = (Il2CppObject *)v37;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v41->static_fields->UserItemMax;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserItemMax, v38, v39, v40);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63382984(v36, v42, v43, 0LL);
  if ( !msgLabel )
    goto LABEL_37;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  otherLabel = this->fields.otherLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12636/*"Spanish (Venezuela)"*/, 0LL);
  if ( !otherLabel
    || (UILabel__set_text(otherLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12632/*"Spanish (Puerto Rico)"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, 0LL),
        !settingLabel) )
  {
LABEL_37:
    sub_1C3B9C0(gameObject, v17);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v47);
  this->fields.state = 1;
  v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_String_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  BalanceConfig_c *v49; // x8
  Il2CppObject *v50; // x20
  Il2CppObject *v51; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v56; // x2
  System_Action_o *v57; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1E701 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&BalanceConfig_TypeInfo, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_1C3B764(&StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, v11);
    sub_1C3B764(&StringLiteral_12645/*"Specified argument was out of the range of valid values."*/, v12);
    sub_1C3B764(&StringLiteral_12643/*"Specified SeekOrigin value is invalid."*/, v13);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v14);
    sub_1C3B764(&StringLiteral_12648/*"Specified cipher mode is not valid for this algorithm."*/, v15);
    sub_1C3B764(&StringLiteral_12632/*"Spanish (Puerto Rico)"*/, v16);
    sub_1C3B764(&StringLiteral_12646/*"Specified block size is not valid for this algorithm."*/, v17);
    sub_1C3B764(&StringLiteral_12644/*"Specified TypeData instance does not have Type set."*/, v18);
    byte_4C1E701 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v21, v22, v23, v24, v25, v26);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v33 = gameObject;
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
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v34, 8.0, 152.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v35, 8.0, 87.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v36, 2.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12646/*"Specified block size is not valid for this algorithm."*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12648/*"Specified cipher mode is not valid for this algorithm."*/, 0LL);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12643/*"Specified SeekOrigin value is invalid."*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"Specified argument was out of the range of valid values."*/, 0LL);
  if ( !v33 )
    goto LABEL_43;
  v44 = (System_String_o *)gameObject;
  klass = (int)v33[4].klass;
  v45 = j_il2cpp_value_box_0(int_TypeInfo, &klass, v41, v42, v43);
  v49 = BalanceConfig_TypeInfo;
  v50 = (Il2CppObject *)v45;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  QpMax = v49->static_fields->QpMax;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax, v46, v47, v48);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63382984(v44, v50, v51, 0LL);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12644/*"Specified TypeData instance does not have Type set."*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12632/*"Spanish (Puerto Rico)"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, 0LL),
        !settingLabel) )
  {
LABEL_43:
    sub_1C3B9C0(gameObject, v20);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v56);
  this->fields.state = 1;
  v57 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning2(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_String_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  BalanceConfig_c *v49; // x8
  Il2CppObject *v50; // x20
  Il2CppObject *v51; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v56; // x2
  System_Action_o *v57; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1E703 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&BalanceConfig_TypeInfo, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_1C3B764(&StringLiteral_12649/*"Specified file length was too large for the file system."*/, v11);
    sub_1C3B764(&StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, v12);
    sub_1C3B764(&StringLiteral_12645/*"Specified argument was out of the range of valid values."*/, v13);
    sub_1C3B764(&StringLiteral_12647/*"Specified cast is not valid."*/, v14);
    sub_1C3B764(&StringLiteral_12643/*"Specified SeekOrigin value is invalid."*/, v15);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v16);
    sub_1C3B764(&StringLiteral_12632/*"Spanish (Puerto Rico)"*/, v17);
    sub_1C3B764(&StringLiteral_12644/*"Specified TypeData instance does not have Type set."*/, v18);
    byte_4C1E703 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v21, v22, v23, v24, v25, v26);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v33 = gameObject;
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
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v34, 8.0, 140.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v35, 8.0, 74.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34963392(v36, 3.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12647/*"Specified cast is not valid."*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12649/*"Specified file length was too large for the file system."*/, 0LL);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12643/*"Specified SeekOrigin value is invalid."*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"Specified argument was out of the range of valid values."*/, 0LL);
  if ( !v33 )
    goto LABEL_43;
  v44 = (System_String_o *)gameObject;
  klass = (int)v33[4].klass;
  v45 = j_il2cpp_value_box_0(int_TypeInfo, &klass, v41, v42, v43);
  v49 = BalanceConfig_TypeInfo;
  v50 = (Il2CppObject *)v45;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  QpMax = v49->static_fields->QpMax;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax, v46, v47, v48);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63382984(v44, v50, v51, 0LL);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12644/*"Specified TypeData instance does not have Type set."*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12632/*"Spanish (Puerto Rico)"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12597/*"Some services couldn't be initialized. Look at inner exceptions to get more information."*/, 0LL),
        !settingLabel) )
  {
LABEL_43:
    sub_1C3B9C0(gameObject, v20);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v56);
  this->fields.state = 1;
  v57 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
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
    sub_1C3B9C0(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__add_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonLimitWarningDlgComponent_o *v10; // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C1E6FE & 1) == 0 )
  {
    sub_1C3B764(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4C1E6FE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v7->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  SummonLimitWarningDlgComponent__remove_callbackFunc(v10, v11, v12);
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
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // x21
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonLimitWarningDlgComponent__remove_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonLimitWarningDlgComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C1E6FF & 1) == 0 )
  {
    sub_1C3B764(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4C1E6FF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v7->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  SummonLimitWarningDlgComponent__Init(v10, v11);
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
    sub_1C3B9C0(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonLimitWarningDlgComponent__Close_34478616(this, 0LL, v19);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A78BE8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A78BA0;
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
  if ( (byte_4C1E70A & 1) == 0 )
  {
    sub_1C3B764(&SummonLimitWarningDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_4C1E70A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SummonLimitWarningDlgComponent_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__EndInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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