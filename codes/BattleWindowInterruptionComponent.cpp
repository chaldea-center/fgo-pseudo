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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E7DFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleWindowInterruptionComponent_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E7DFA = 1;
  }
  if ( this->fields.state == 3 )
  {
    v5 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    ActionExtensions__Call(this->fields.cancelButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickInterruption(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E7DFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleWindowInterruptionComponent_OnClickInterruption__, (_DWORD)method, v2, v3);
    byte_42E7DFD = 1;
  }
  if ( this->fields.state == 3 )
  {
    v5 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    ActionExtensions__Call(this->fields.interruptionButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickSelectWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E7DFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__, (_DWORD)method, v2, v3);
    byte_42E7DFC = 1;
  }
  if ( this->fields.state == 3 )
  {
    v5 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ActionExtensions__Call(this->fields.selectWaveRestartButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E7DFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__, (_DWORD)method, v2, v3);
    byte_42E7DFB = 1;
  }
  if ( this->fields.state == 3 )
  {
    v5 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelButtonCallback,
    (System_Int32_array **)cancel,
    (System_String_array **)waveRestart,
    (System_String_array **)selectWaveRestart,
    (System_Boolean_array **)interruption,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.waveRestartButtonCallback,
    (System_Int32_array **)waveRestart,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectWaveRestartButtonCallback,
    (System_Int32_array **)selectWaveRestart,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.interruptionButtonCallback = interruption;
  sub_B5D560(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  UILabel_o *title; // x21
  System_String_o *cancelButton; // x0
  __int64 v39; // x1
  UILabel_o *message; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_String_o **v51; // x8
  struct System_String_o *v52; // x1
  struct System_String_o **p_closeButtonPath; // x20

  if ( (byte_42E7DF9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)cancelAction, (_DWORD)waveRestartAction, selectWaveRestartAction);
    sub_B5D5C4(&StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2488/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2494/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2491/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_2495/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_2493/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, v34, v35, v36);
    byte_42E7DF9 = 1;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2495/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0LL);
  if ( !title )
    goto LABEL_20;
  UILabel__set_text(title, cancelButton, 0LL);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0LL);
  if ( !message )
    goto LABEL_20;
  UILabel__set_text(message, cancelButton, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_20;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0LL);
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2491/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0LL);
  if ( !waveRestartButtonLabel )
    goto LABEL_20;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  selectWaveRestartButtonLabel = this->fields.selectWaveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2494/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0LL);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_20;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  if ( !interruptionButtonLabel )
    goto LABEL_20;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0LL);
  v51 = (struct System_String_o **)&StringLiteral_15667/*"Window/CancelButton"*/;
  if ( !isFromBattleMenu )
    v51 = (struct System_String_o **)&StringLiteral_1/*""*/;
  v52 = *v51;
  this->fields.closeButtonPath = *v51;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_closeButtonPath,
    (System_Int32_array **)v52,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_20:
    sub_B5D69C(cancelButton, v39);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0LL);
}


System_String_o *__fastcall BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}