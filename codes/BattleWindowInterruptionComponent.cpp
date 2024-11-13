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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19447 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowInterruptionComponent_OnClickCancel__, method, v2);
    byte_4B19447 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v4 = Method_BattleWindowInterruptionComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowInterruptionComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ActionExtensions__Call(this->fields.cancelButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickInterruption(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1944A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowInterruptionComponent_OnClickInterruption__, method, v2);
    byte_4B1944A = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v4 = Method_BattleWindowInterruptionComponent_OnClickInterruption__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickInterruption__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowInterruptionComponent_OnClickInterruption__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    ActionExtensions__Call(this->fields.interruptionButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickSelectWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19449 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__, method, v2);
    byte_4B19449 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    v4 = Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowInterruptionComponent_OnClickSelectWaveRestart__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ActionExtensions__Call(this->fields.selectWaveRestartButtonCallback, 0LL);
  }
}


void __fastcall BattleWindowInterruptionComponent__OnClickWaveRestart(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19448 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleWindowInterruptionComponent_OnClickWaveRestart__, method, v2);
    byte_4B19448 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) && this->fields.canWaveRestart )
  {
    v4 = Method_BattleWindowInterruptionComponent_OnClickWaveRestart__;
    if ( (*((_BYTE *)Method_BattleWindowInterruptionComponent_OnClickWaveRestart__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleWindowInterruptionComponent_OnClickWaveRestart__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cancelButtonCallback,
    (int64_t)cancel,
    (int64_t)waveRestart,
    (int32_t)selectWaveRestart,
    (System_String_o *)interruption,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.waveRestartButtonCallback = waveRestart;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.waveRestartButtonCallback,
    (int64_t)waveRestart,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.selectWaveRestartButtonCallback = selectWaveRestart;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectWaveRestartButtonCallback,
    (int64_t)selectWaveRestart,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.interruptionButtonCallback = interruption;
  sub_1BCA784(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  UILabel_o *title; // x22
  System_String_o *cancelButton; // x0
  __int64 v40; // x1
  UILabel_o *message; // x22
  UILabel_o *cancelButtonLabel; // x22
  UILabel_o *waveRestartButtonLabel; // x21
  UILabel_o *waveRestartExplanationLabel; // x21
  UILabel_o *selectWaveRestartButtonLabel; // x21
  UILabel_o *interruptionButtonLabel; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_String_o **v53; // x8
  struct System_String_o *v54; // x1
  struct System_String_o **p_closeButtonPath; // x20
  unsigned __int128 v56; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B19446 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, cancelAction, waveRestartAction);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2919/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2925/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2941/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_2922/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_440/*"#808080"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2926/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_2924/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, v35, v36);
    byte_4B19446 = 1;
  }
  v56 = 0uLL;
  BattleWindowInterruptionComponent__SetButtonCallback(
    this,
    cancelAction,
    waveRestartAction,
    selectWaveRestartAction,
    interruptionAction,
    (const MethodInfo *)isFromBattleMenu);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2926/*"BATTLE_INTERRUPTION_WINDOW_TITLE"*/, 0LL);
  if ( !title )
    goto LABEL_27;
  UILabel__set_text(title, cancelButton, 0LL);
  message = this->fields.message;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2924/*"BATTLE_INTERRUPTION_WINDOW_MESSAGE"*/, 0LL);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, cancelButton, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_INTERRUPTION_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_27;
  UILabel__set_text(cancelButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, isFromBattleMenu, 0LL);
  this->fields.canWaveRestart = canWaveRestartVal;
  waveRestartButtonLabel = this->fields.waveRestartButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2922/*"BATTLE_INTERRUPTION_WINDOW_CURRENT_WAVE_RESTART"*/, 0LL);
  if ( !waveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartButtonLabel, cancelButton, 0LL);
  waveRestartExplanationLabel = this->fields.waveRestartExplanationLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_MENU_WAVE_RESTART_EXPLANATION_LABEL"*/, 0LL);
  if ( !waveRestartExplanationLabel )
    goto LABEL_27;
  UILabel__set_text(waveRestartExplanationLabel, cancelButton, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_440/*"#808080"*/, (UnityEngine_Color_o *)&v56, 0LL);
  cancelButton = (System_String_o *)this->fields.waveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelButton, 0LL);
  if ( !cancelButton )
    goto LABEL_27;
  cancelButton = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)cancelButton,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !cancelButton )
    goto LABEL_27;
  *(_OWORD *)&cancelButton[2].klass = v56;
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
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2925/*"BATTLE_INTERRUPTION_WINDOW_SELECT_WAVE_RESTART"*/, 0LL);
  if ( !selectWaveRestartButtonLabel )
    goto LABEL_27;
  UILabel__set_text(selectWaveRestartButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.selectWaveRestartButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 1, 0LL);
  interruptionButtonLabel = this->fields.interruptionButtonLabel;
  cancelButton = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  if ( !interruptionButtonLabel )
    goto LABEL_27;
  UILabel__set_text(interruptionButtonLabel, cancelButton, 0LL);
  cancelButton = (System_String_o *)this->fields.interruptionButton;
  if ( !cancelButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, !isFromBattleMenu, 0LL);
  v53 = isFromBattleMenu ? (struct System_String_o **)&StringLiteral_15808/*"Window/CancelButton"*/ : (struct System_String_o **)&StringLiteral_1/*""*/;
  v54 = *v53;
  this->fields.closeButtonPath = *v53;
  p_closeButtonPath = &this->fields.closeButtonPath;
  sub_1BCA784((PartyOrganizationUtility_o *)p_closeButtonPath, (int64_t)v54, v47, v48, v49, v50, v51, v52);
  cancelButton = *(p_closeButtonPath - 5);
  if ( !cancelButton )
LABEL_27:
    sub_1BCAA3C(cancelButton, v40);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cancelButton, isFromBattleMenu, 0LL);
}


System_String_o *__fastcall BattleWindowInterruptionComponent__get_closeBtnPath(
        BattleWindowInterruptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonPath;
}