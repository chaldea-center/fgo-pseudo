void __fastcall BattleWindowContinueWaveRestartComponent___ctor(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleWindowContinueWaveRestartComponent__OnClickCancel(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  unsigned int state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4214039 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__, method);
    byte_4214039 = 1;
  }
  state = this->fields.state;
  if ( state > 4 || ((1 << state) & 0x16) == 0 )
  {
    v4 = Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ActionExtensions__Call(this->fields.cancelCallback, 0LL);
  }
}


void __fastcall BattleWindowContinueWaveRestartComponent__OnClickDecide(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  unsigned int state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4214038 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__, method);
    byte_4214038 = 1;
  }
  state = this->fields.state;
  if ( state > 4 || ((1 << state) & 0x16) == 0 )
  {
    v4 = Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    ActionExtensions__Call(this->fields.decideCallback, 0LL);
  }
}


void __fastcall BattleWindowContinueWaveRestartComponent__SetWindow(
        BattleWindowContinueWaveRestartComponent_o *this,
        System_Action_o *decideCall,
        System_Action_o *cancelCall,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  System_String_o *v14; // x6
  const MethodInfo *v15; // x7

  if ( (byte_4214037 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, decideCall);
    sub_B0D8A4(&StringLiteral_3401/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, v7);
    sub_B0D8A4(&StringLiteral_3400/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v8);
    sub_B0D8A4(&StringLiteral_3402/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v9);
    sub_B0D8A4(&StringLiteral_3403/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v10);
    byte_4214037 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3402/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3401/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, 0LL);
  BattleWindowContinueWaveRestartComponent__SetWindow_23840128(this, decideCall, cancelCall, v11, v12, v13, v14, v15);
}


void __fastcall BattleWindowContinueWaveRestartComponent__SetWindow_23840128(
        BattleWindowContinueWaveRestartComponent_o *this,
        System_Action_o *decideCall,
        System_Action_o *cancelCall,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideLabel,
        System_String_o *cancelLabel,
        const MethodInfo *method)
{
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *titleLabel; // x0

  this->fields.decideCallback = decideCall;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.decideCallback,
    (System_Int32_array **)decideCall,
    (System_String_array **)cancelCall,
    (System_String_array **)title,
    (System_Boolean_array **)message,
    (System_Int32_array **)decideLabel,
    (System_Int32_array *)cancelLabel,
    (System_Int32_array *)method);
  this->fields.cancelCallback = cancelCall;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)cancelCall,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, message, 0LL), (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, decideLabel, 0LL), (titleLabel = this->fields.cancelButtonLabel) == 0LL) )
  {
    sub_B0D97C(titleLabel);
  }
  UILabel__set_text(titleLabel, cancelLabel, 0LL);
}