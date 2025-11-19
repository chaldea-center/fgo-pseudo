void BattleWindowContinueWaveRestartComponent___ctor(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleWindowContinueWaveRestartComponent__OnClickCancel(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CB9AED & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__);
    byte_4CB9AED = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ActionExtensions__Call(this->fields.cancelCallback, 0);
  }
}


void BattleWindowContinueWaveRestartComponent__OnClickDecide(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CB9AEC & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__);
    byte_4CB9AEC = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
  {
    v3 = Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ActionExtensions__Call(this->fields.decideCallback, 0);
  }
}


void BattleWindowContinueWaveRestartComponent__SetWindow(
        BattleWindowContinueWaveRestartComponent_o *this,
        System_Action_o *decideCall,
        System_Action_o *cancelCall,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  System_String_o *v10; // x6
  const MethodInfo *v11; // x7

  if ( (byte_4CB9AEB & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3820/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3819/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3821/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_3822/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/);
    byte_4CB9AEB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, 0);
  BattleWindowContinueWaveRestartComponent__SetWindow_47905296(this, decideCall, cancelCall, v7, v8, v9, v10, v11);
}


void BattleWindowContinueWaveRestartComponent__SetWindow_47905296(
        BattleWindowContinueWaveRestartComponent_o *this,
        System_Action_o *decideCall,
        System_Action_o *cancelCall,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideLabel,
        System_String_o *cancelLabel,
        const MethodInfo *method)
{
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  UILabel_o *titleLabel; // x0

  this->fields.decideCallback = decideCall;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.decideCallback,
    (int32_t)decideCall,
    (int32_t)cancelCall,
    (const MethodInfo *)title);
  this->fields.cancelCallback = cancelCall;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)cancelCall, v14, v15);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, title, 0), (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, message, 0), (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, decideLabel, 0), (titleLabel = this->fields.cancelButtonLabel) == 0) )
  {
    sub_1C6BC60(titleLabel, v16);
  }
  UILabel__set_text(titleLabel, cancelLabel, 0);
}