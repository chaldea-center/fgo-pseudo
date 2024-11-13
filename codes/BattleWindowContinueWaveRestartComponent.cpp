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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19445 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__, method, v2);
    byte_4B19445 = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0LL)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
  {
    v4 = Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowContinueWaveRestartComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ActionExtensions__Call(this->fields.cancelCallback, 0LL);
  }
}


void __fastcall BattleWindowContinueWaveRestartComponent__OnClickDecide(
        BattleWindowContinueWaveRestartComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19444 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__, method, v2);
    byte_4B19444 = 1;
  }
  if ( !BattleWindowComponent__IsCloseorClosing((BattleWindowComponent_o *)this, 0LL)
    && !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
  {
    v4 = Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowContinueWaveRestartComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  System_String_o *v18; // x6
  const MethodInfo *v19; // x7

  if ( (byte_4B19443 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, decideCall, cancelCall);
    sub_1BCA7E0(&StringLiteral_3918/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3917/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3919/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3920/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v13, v14);
    byte_4B19443 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, decideCall);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3920/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3917/*"CONTINUE_WAVE_RESTART_WINDOW_DECIDE_BUTTON"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3918/*"CONTINUE_WAVE_RESTART_WINDOW_GIVE_UP_BUTTON"*/, 0LL);
  BattleWindowContinueWaveRestartComponent__SetWindow_44961452(this, decideCall, cancelCall, v15, v16, v17, v18, v19);
}


void __fastcall BattleWindowContinueWaveRestartComponent__SetWindow_44961452(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.decideCallback,
    (int64_t)decideCall,
    (int64_t)cancelCall,
    (int32_t)title,
    message,
    (BattleSetupInfo_o *)decideLabel,
    (FollowerInfo_o *)cancelLabel,
    (PartyListViewItem_o *)method);
  this->fields.cancelCallback = cancelCall;
  sub_1BCA784(
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
    sub_1BCAA3C(titleLabel, v20);
  }
  UILabel__set_text(titleLabel, cancelLabel, 0LL);
}