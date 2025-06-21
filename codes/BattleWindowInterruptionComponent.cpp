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

  if ( (byte_4B1FB1C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleWindowInterruptionComponent_OnClickCancel__, method);
    byte_4B1FB1C = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ActionExtensions__Call(this->fields.cancelButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickInterruption(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B1FB1F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleWindowInterruptionComponent_OnClickInterruption__, method);
    byte_4B1FB1F = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    ActionExtensions__Call(this->fields.interruptionButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickSelectWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B1FB1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__, method);
    byte_4B1FB1E = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ActionExtensions__Call(this->fields.selectWaveRestartButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B1FB1D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__, method);
    byte_4B1FB1D = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) && this->fields.canWaveRestart )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields.cancelButtonCallback = cancel;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.cancelButtonCallback,
    (int32_t)cancel,
    (int32_t)waveRestart,
    (const MethodInfo *)selectWaveRestart);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.waveRestartButtonCallback, (int32_t)waveRestart, v10, v11);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.selectWaveRestartButtonCallback,
    (int32_t)selectWaveRestart,
    v12,
    v13);
  this->fields.interruptionButtonCallback = interruption;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.interruptionButtonCallback, (int32_t)interruption, v14, v15);
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_String_o **v37; // x8
  struct System_String_o *v38; // x1
  struct System_String_o **p_closeButtonPath; // x20
  unsigned __int128 v40; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B1FB1B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, cancelAction);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_2769/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v16);
    sub_1BCAFF8(&StringLiteral_2765/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, v17);
    sub_1BCAFF8(&StringLiteral_2771/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, v18);
    sub_1BCAFF8(&StringLiteral_2787/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v19);
    sub_1BCAFF8(&StringLiteral_15507/*"Window/CancelButton"*/, v20);
    sub_1BCAFF8(&StringLiteral_2768/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, v21);
    sub_1BCAFF8(&StringLiteral_413/*"#808080"*/, v22);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v23);
    sub_1BCAFF8(&StringLiteral_2772/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, v24);
    sub_1BCAFF8(&StringLiteral_2770/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, v25);
    byte_4B1FB1B = 1;
  }
  v40 = 0uLL;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2772/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0LL);
  if ( !title )
    goto LABEL_27;
  UILabel__set_text(title, cancelButton, 0LL);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2770/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0LL);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, cancelButton, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2765/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_27;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0LL);
  this->fields.canWaveRestart = canWaveRestartVal;
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2768/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0LL);
  if ( !waveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0LL);
  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2787/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, 0LL);
  if ( !waveRestartExplanationLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartExplanationLabel, cancelButton, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_413/*"#808080"*/, (UnityEngine_Color_o *)&v40, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0LL);
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)cancelButton,
                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !cancelButton )
    goto LABEL_27;
  *(_OWORD *)&cancelButton[2].klass = v40;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2771/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0LL);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2769/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  if ( !interruptionButtonLabel )
    goto LABEL_27;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0LL);
  v37 = isFromBattleMenu ? (struct System_String_o **)&StringLiteral_15507/*"Window/CancelButton"*/ : (struct System_String_o **)&StringLiteral_1/*""*/;
  v38 = *v37;
  this->fields.closeButtonPath = *v37;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_closeButtonPath, (int32_t)v38, v35, v36);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_27:
    sub_1BCB254(cancelButton, v28);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0LL);
}


System_String_o *__fastcall BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}