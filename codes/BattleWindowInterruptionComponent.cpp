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

  if ( (byte_4C3B116 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleWindowInterruptionComponent_OnClickCancel__);
    byte_4C3B116 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3B119 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    byte_4C3B119 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3B118 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    byte_4C3B118 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3B117 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    byte_4C3B117 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) && this->fields.canWaveRestart )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields.cancelButtonCallback = cancel;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.cancelButtonCallback,
    (int32_t)cancel,
    (int32_t)waveRestart,
    (const MethodInfo *)selectWaveRestart);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.waveRestartButtonCallback, (int32_t)waveRestart, v10, v11);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.selectWaveRestartButtonCallback,
    (int32_t)selectWaveRestart,
    v12,
    v13);
  this->fields.interruptionButtonCallback = interruption;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.interruptionButtonCallback, (int32_t)interruption, v14, v15);
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
  UILabel_o *title; // x22
  System_String_o *cancelButton; // x0
  UILabel_o *message; // x22
  UILabel_o *cancelButtonLabel; // x22
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *waveRestartExplanationLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_String_o **v25; // x8
  struct System_String_o *v26; // x1
  struct System_String_o **p_closeButtonPath; // x20
  unsigned __int128 v28; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C3B115 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_1C32C20(&StringLiteral_2781/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/);
    sub_1C32C20(&StringLiteral_2787/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/);
    sub_1C32C20(&StringLiteral_2803/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/);
    sub_1C32C20(&StringLiteral_15639/*"Window/CancelButton"*/);
    sub_1C32C20(&StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/);
    sub_1C32C20(&StringLiteral_415/*"#808080"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_2788/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/);
    sub_1C32C20(&StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/);
    byte_4C3B115 = 1;
  }
  v28 = 0u;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2788/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0);
  if ( !title )
    goto LABEL_27;
  UILabel__set_text(title, cancelButton, 0);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, cancelButton, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2781/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_27;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0);
  this->fields.canWaveRestart = canWaveRestartVal;
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0);
  if ( !waveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0);
  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2803/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, 0);
  if ( !waveRestartExplanationLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartExplanationLabel, cancelButton, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_415/*"#808080"*/, (UnityEngine_Color_o *)&v28, 0);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0);
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)cancelButton,
                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !cancelButton )
    goto LABEL_27;
  *(_OWORD *)&cancelButton[2].klass = v28;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2787/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  if ( !interruptionButtonLabel )
    goto LABEL_27;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0);
  v25 = (struct System_String_o **)(isFromBattleMenu ? &StringLiteral_15639/*"Window/CancelButton"*/ : &StringLiteral_1/*""*/);
  v26 = *v25;
  this->fields.closeButtonPath = *v25;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_1C32BC4((CGThumbnailListItem_o *)p_closeButtonPath, (int32_t)v26, v23, v24);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_27:
    sub_1C32E7C(cancelButton);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0);
}


System_String_o *BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}