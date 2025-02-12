void __fastcall BattleWindowContinueWaveRestartComponent___ctor(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleWindowContinueWaveRestartComponent__OnClickCancel(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4BCADC0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__, method);
    byte_4BCADC0 = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0LL)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ActionExtensions__Call(this->fields.cancelCallback, 0LL);
  }
}


void __fastcall BattleWindowContinueWaveRestartComponent__OnClickDecide(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4BCADBF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__, method);
    byte_4BCADBF = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0LL)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
  {
    v3 = Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
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

  if ( (byte_4BCADBE & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, decideCall);
    sub_1C1ABD4(&StringLiteral_3934/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, v7);
    sub_1C1ABD4(&StringLiteral_3933/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v8);
    sub_1C1ABD4(&StringLiteral_3935/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v9);
    sub_1C1ABD4(&StringLiteral_3936/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v10);
    byte_4BCADBE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3935/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3933/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3934/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, 0LL);
  BattleWindowContinueWaveRestartComponent__SetWindow_45487528(this, decideCall, cancelCall, v11, v12, v13, v14, v15);
}


void __fastcall BattleWindowContinueWaveRestartComponent__SetWindow_45487528(
        BattleWindowContinueWaveRestartComponent_o *this,
        System_Action_o *decideCall,
        System_Action_o *cancelCall,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideLabel,
        System_String_o *cancelLabel,
        const MethodInfo *method)
{
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UILabel_o *titleLabel; // x0

  this->fields.decideCallback = decideCall;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.decideCallback,
    (int64_t)decideCall,
    (int64_t)cancelCall,
    (int32_t)title,
    message,
    (BattleSetupInfo_o *)decideLabel,
    (FollowerInfo_o *)cancelLabel,
    (PartyListViewItem_o *)method);
  this->fields.cancelCallback = cancelCall;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.cancelCallback,
    (int64_t)cancelCall,
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
    sub_1C1AE30(titleLabel, v20);
  }
  UILabel__set_text(titleLabel, cancelLabel, 0LL);
}