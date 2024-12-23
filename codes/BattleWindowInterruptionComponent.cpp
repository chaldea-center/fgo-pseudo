void __fastcall BattleWindowInterruptionComponent___ctor(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleWindowInterruptionComponent__OnClickCancel(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B69EB9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleWindowInterruptionComponent_OnClickCancel__, method);
    byte_4B69EB9 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ActionExtensions__Call(this->fields.cancelButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickInterruption(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B69EBC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleWindowInterruptionComponent_OnClickInterruption__, method);
    byte_4B69EBC = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    ActionExtensions__Call(this->fields.interruptionButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickSelectWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B69EBB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__, method);
    byte_4B69EBB = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ActionExtensions__Call(this->fields.selectWaveRestartButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B69EBA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__, method);
    byte_4B69EBA = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) && this->fields.canWaveRestart )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ActionExtensions__Call(this->fields.waveRestartButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__SetButtonCallback(
        BattleWindowInterruptionComponent_o *this,
        System_Action_o *cancel,
        System_Action_o *waveRestart,
        System_Action_o *selectWaveRestart,
        System_Action_o *interruption,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
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

  this->fields.cancelButtonCallback = cancel;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.cancelButtonCallback,
    (int64_t)cancel,
    (int64_t)waveRestart,
    (int32_t)selectWaveRestart,
    (System_String_o *)interruption,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.waveRestartButtonCallback,
    (int64_t)waveRestart,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.selectWaveRestartButtonCallback,
    (int64_t)selectWaveRestart,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.interruptionButtonCallback = interruption;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.interruptionButtonCallback,
    (int64_t)interruption,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowInterruptionComponent__SetInterruptionWindow(
        BattleWindowInterruptionComponent_o *this,
        System_Action_o *cancelAction,
        System_Action_o *waveRestartAction,
        System_Action_o *selectWaveRestartAction,
        System_Action_o *interruptionAction,
        bool isFromBattleMenu,
        bool canWaveRestartVal,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UILabel_o *title; // x22
  System_String_o *cancelButton; // x0
  __int64 v28; // x1
  UILabel_o *message; // x22
  UILabel_o *cancelButtonLabel; // x22
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *waveRestartExplanationLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o **v41; // x8
  struct System_String_o *v42; // x1
  struct System_String_o **p_closeButtonPath; // x20
  unsigned __int128 v44; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B69EB8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, cancelAction);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v16);
    sub_1BE4ACC(&StringLiteral_2925/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, v17);
    sub_1BE4ACC(&StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, v18);
    sub_1BE4ACC(&StringLiteral_2947/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v19);
    sub_1BE4ACC(&StringLiteral_15848/*"Window/CancelButton"*/, v20);
    sub_1BE4ACC(&StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, v21);
    sub_1BE4ACC(&StringLiteral_440/*"#808080"*/, v22);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v23);
    sub_1BE4ACC(&StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, v24);
    sub_1BE4ACC(&StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, v25);
    byte_4B69EB8 = 1;
  }
  v44 = 0uLL;
  BattleWindowInterruptionComponent__SetButtonCallback(
    this,
    cancelAction,
    waveRestartAction,
    selectWaveRestartAction,
    interruptionAction,
    (const MethodInfo *)isFromBattleMenu);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0LL);
  if ( !title )
    goto LABEL_27;
  UILabel__set_text(title, cancelButton, 0LL);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0LL);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, cancelButton, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2925/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_27;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0LL);
  this->fields.canWaveRestart = canWaveRestartVal;
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0LL);
  if ( !waveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0LL);
  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, 0LL);
  if ( !waveRestartExplanationLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartExplanationLabel, cancelButton, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_440/*"#808080"*/, (UnityEngine_Color_o *)&v44, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0LL);
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)cancelButton,
                                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !cancelButton )
    goto LABEL_27;
  *(_OWORD *)&cancelButton[2].klass = v44;
  UICommonButton__SetEnable((UICommonButton_o *)cancelButton, this->fields.canWaveRestart, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0LL);
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartExplanationLabel;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0LL);
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !this->fields.canWaveRestart, 0LL);
  selectWaveRestartButtonLabel = this->fields.selectWaveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0LL);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  if ( !interruptionButtonLabel )
    goto LABEL_27;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0LL);
  v41 = isFromBattleMenu ? (struct System_String_o **)&StringLiteral_15848/*"Window/CancelButton"*/ : (struct System_String_o **)&StringLiteral_1/*""*/;
  v42 = *v41;
  this->fields.closeButtonPath = *v41;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_closeButtonPath, (int64_t)v42, v35, v36, v37, v38, v39, v40);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_27:
    sub_1BE4D28(cancelButton, v28);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0LL);
}


System_String_o *__fastcall BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}