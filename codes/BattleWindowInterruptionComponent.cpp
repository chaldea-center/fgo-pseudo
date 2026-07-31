void BattleWindowInterruptionComponent___ctor(BattleWindowInterruptionComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleWindowInterruptionComponent__OnClickCancel(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_593C179 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleWindowInterruptionComponent_OnClickCancel__);
    byte_593C179 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ActionExtensions__Call(this->fields.cancelButtonCallback, 0);
  }
}


void BattleWindowInterruptionComponent__OnClickInterruption(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_593C17C & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    byte_593C17C = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ActionExtensions__Call(this->fields.interruptionButtonCallback, 0);
  }
}


void BattleWindowInterruptionComponent__OnClickSelectWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_593C17B & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    byte_593C17B = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ActionExtensions__Call(this->fields.selectWaveRestartButtonCallback, 0);
  }
}


void BattleWindowInterruptionComponent__OnClickWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_593C17A & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    byte_593C17A = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) && this->fields.canWaveRestart )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ActionExtensions__Call(this->fields.waveRestartButtonCallback, 0);
  }
}


void BattleWindowInterruptionComponent__SetButtonCallback(
        BattleWindowInterruptionComponent_o *this,
        System_Action_o *cancel,
        System_Action_o *waveRestart,
        System_Action_o *selectWaveRestart,
        System_Action_o *interruption,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields.cancelButtonCallback = cancel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelButtonCallback,
    (int32_t)cancel,
    (System_String_o *)waveRestart,
    (System_String_o *)selectWaveRestart,
    (int32_t)interruption,
    (int32_t)method,
    v6,
    v7);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waveRestartButtonCallback,
    (int32_t)waveRestart,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectWaveRestartButtonCallback,
    (int32_t)selectWaveRestart,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.interruptionButtonCallback = interruption;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.interruptionButtonCallback,
    (int32_t)interruption,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


// local variable allocation has failed, the output may be wrong!
void BattleWindowInterruptionComponent__SetInterruptionWindow(
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
  UILabel_o *title; // x22
  System_String_o *cancelButton; // x0
  __int64 v18; // x1
  UILabel_o *message; // x22
  UILabel_o *cancelButtonLabel; // x22
  bool v21; // w23
  System_String_o *v22; // x0
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *waveRestartExplanationLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o **v33; // x8
  struct System_String_o *v34; // x1
  struct System_String_o **p_closeButtonPath; // x20
  unsigned __int128 v36; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_593C178 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2897/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_21FFC50(&StringLiteral_2893/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/);
    sub_21FFC50(&StringLiteral_2899/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/);
    sub_21FFC50(&StringLiteral_2915/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    sub_21FFC50(&StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/);
    sub_21FFC50(&StringLiteral_440/*"#808080"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_2900/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/);
    sub_21FFC50(&StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/);
    byte_593C178 = 1;
  }
  v36 = 0u;
  BattleWindowInterruptionComponent__SetButtonCallback(
    this,
    cancelAction,
    waveRestartAction,
    selectWaveRestartAction,
    interruptionAction,
    (const MethodInfo *)isFromBattleMenu);
  title = this->fields.title;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0);
  if ( !title )
    goto LABEL_27;
  UILabel__set_text(title, cancelButton, 0);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, cancelButton, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2893/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_27;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_27;
  v21 = canWaveRestartVal;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0);
  v22 = (System_String_o *)StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/;
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  this->fields.canWaveRestart = v21;
  cancelButton = LocalizationManager__Get(v22, 0);
  if ( !waveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0);
  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, 0);
  if ( !waveRestartExplanationLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartExplanationLabel, cancelButton, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_440/*"#808080"*/, (UnityEngine_Color_o *)&v36, 0);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0);
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)cancelButton,
                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !cancelButton )
    goto LABEL_27;
  *(_OWORD *)&cancelButton[2].klass = v36;
  UICommonButton__SetEnable((UICommonButton_o *)cancelButton, this->fields.canWaveRestart, 0);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0);
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0);
  cancelButton = (System_String_o *)this->fields.waveRestartExplanationLabel;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0);
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !this->fields.canWaveRestart, 0);
  selectWaveRestartButtonLabel = this->fields.selectWaveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2899/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  if ( !interruptionButtonLabel )
    goto LABEL_27;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0);
  v33 = isFromBattleMenu ? (struct System_String_o **)&StringLiteral_16227/*"Window/CancelButton"*/ : (struct System_String_o **)&StringLiteral_1/*""*/;
  v34 = *v33;
  this->fields.closeButtonPath = *v33;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_closeButtonPath, (int32_t)v34, v27, v28, v29, v30, v31, v32);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_27:
    sub_21FFECC(cancelButton, v18);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0);
}


System_String_o *BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}