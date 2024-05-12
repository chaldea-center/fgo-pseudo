void __fastcall BattleWindowInterruptionComponent___ctor(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleWindowInterruptionComponent__OnClickCancel(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_438A8E9 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleWindowInterruptionComponent_OnClickCancel__);
    byte_438A8E9 = 1;
  }
  if ( this->fields.state == 3 )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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

  if ( (byte_438A8EC & 1) == 0 )
  {
    sub_B775C4(&Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    byte_438A8EC = 1;
  }
  if ( this->fields.state == 3 )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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

  if ( (byte_438A8EB & 1) == 0 )
  {
    sub_B775C4(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    byte_438A8EB = 1;
  }
  if ( this->fields.state == 3 )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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

  if ( (byte_438A8EA & 1) == 0 )
  {
    sub_B775C4(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    byte_438A8EA = 1;
  }
  if ( this->fields.state == 3 )
  {
    v3 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  this->fields.cancelButtonCallback = cancel;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cancelButtonCallback,
    (System_Int32_array **)cancel,
    (System_String_array **)waveRestart,
    (System_String_array **)selectWaveRestart,
    (System_Boolean_array **)interruption,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.waveRestartButtonCallback,
    (System_Int32_array **)waveRestart,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectWaveRestartButtonCallback,
    (System_Int32_array **)selectWaveRestart,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.interruptionButtonCallback = interruption;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.interruptionButtonCallback,
    (System_Int32_array **)interruption,
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
        const MethodInfo *method)
{
  UILabel_o *title; // x21
  System_String_o *cancelButton; // x0
  __int64 v15; // x1
  UILabel_o *message; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_o **v27; // x8
  struct System_String_o *v28; // x1
  struct System_String_o **p_closeButtonPath; // x20

  if ( (byte_438A8E8 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_B775C4(&StringLiteral_2541/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/);
    sub_B775C4(&StringLiteral_2547/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/);
    sub_B775C4(&StringLiteral_15768/*"Window/CancelButton"*/);
    sub_B775C4(&StringLiteral_2544/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_2548/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/);
    sub_B775C4(&StringLiteral_2546/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/);
    byte_438A8E8 = 1;
  }
  BattleWindowInterruptionComponent__SetButtonCallback(
    this,
    cancelAction,
    waveRestartAction,
    selectWaveRestartAction,
    interruptionAction,
    (const MethodInfo *)isFromBattleMenu);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2548/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0LL);
  if ( !title )
    goto LABEL_20;
  UILabel__set_text(title, cancelButton, 0LL);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2546/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0LL);
  if ( !message )
    goto LABEL_20;
  UILabel__set_text(message, cancelButton, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2541/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_20;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0LL);
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2544/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0LL);
  if ( !waveRestartButtonLabel )
    goto LABEL_20;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  selectWaveRestartButtonLabel = this->fields.selectWaveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2547/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0LL);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_20;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  if ( !interruptionButtonLabel )
    goto LABEL_20;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0LL);
  v27 = (struct System_String_o **)&StringLiteral_15768/*"Window/CancelButton"*/;
  if ( !isFromBattleMenu )
    v27 = (struct System_String_o **)&StringLiteral_1/*""*/;
  v28 = *v27;
  this->fields.closeButtonPath = *v27;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_B77560(
    (BattleServantConfConponent_o *)p_closeButtonPath,
    (System_Int32_array **)v28,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_20:
    sub_B7769C(cancelButton, v15);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0LL);
}


System_String_o *__fastcall BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}