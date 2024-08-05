void __fastcall WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FA727 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FA727 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Awake(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  System_Action_o *v5; // x20

  if ( (byte_49FA723 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_WaveBattleSelectWaveDialog_EndClose__, v3);
    byte_49FA723 = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0LL),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1B64ACC(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close_32128480(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20

  if ( (byte_49FA724 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, closeCallback);
    sub_1B64870(&Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__, v5);
    sub_1B64870(&WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo, v6);
    byte_49FA724 = 1;
  }
  v7 = sub_1B64ABC(WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = closeCallback,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)closeCallback, v12, v13),
        (waveInfoListManager = this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1B64ACC(waveInfoListManager, v9);
  }
  WaveBattleWaveInfoListManager__DestroyWaveInfoObj(waveInfoListManager, v9);
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1B64ACC(0LL, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  this->fields.state = 1;
}


void __fastcall WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49FA71F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FA71F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OnClickCancel(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_49FA725 & 1) == 0 )
  {
    sub_1B64870(&Method_WaveBattleSelectWaveDialog_OnClickCancel__, method);
    byte_49FA725 = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject )
      sub_1B64ACC(0LL, method);
    UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
    v4 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64888(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
// attributes: thunk
void __fastcall WaveBattleSelectWaveDialog__OnSelectWavePartyList(
        WaveBattleSelectWaveDialog_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattleSelectWaveDialog__Close(this, *(const MethodInfo **)&result);
}


void __fastcall WaveBattleSelectWaveDialog__Open(
        WaveBattleSelectWaveDialog_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        int32_t restartWave,
        int32_t fromScene,
        WaveBattleSelectWaveDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_49FA721 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, deckEntity);
    sub_1B64870(&Method_WaveBattleSelectWaveDialog_EndOpen__, v15);
    byte_49FA721 = 1;
  }
  WaveBattleSelectWaveDialog__SetDialog(
    this,
    deckEntity,
    questRestrictionInfo,
    waveCount,
    restartWave,
    fromScene,
    func,
    method);
  v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Open_32129960(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20

  if ( (byte_49FA722 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, endOpenCallback);
    sub_1B64870(&Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__, v5);
    sub_1B64870(&WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo, v6);
    byte_49FA722 = 1;
  }
  v7 = sub_1B64ABC(WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64ACC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = endOpenCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)endOpenCallback, v12, v13);
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64ACC(0LL, callback);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(waveInfoListManager, callback, method);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64ACC(0LL, wave);
  WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
    waveInfoListManager,
    wave,
    overwriteLabel,
    method);
}


void __fastcall WaveBattleSelectWaveDialog__SetDialog(
        WaveBattleSelectWaveDialog_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        int32_t restartWave,
        int32_t fromScene,
        WaveBattleSelectWaveDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o **v21; // x8
  System_String_o *v22; // x25
  UILabel_o *titleLabel; // x24
  System_String_o *v24; // x0
  __int64 v25; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v29; // x25
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x6
  const MethodInfo *v32; // x2

  if ( (byte_49FA720 & 1) == 0 )
  {
    sub_1B64870(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, deckEntity);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__, v16);
    sub_1B64870(&StringLiteral_15469/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/, v17);
    sub_1B64870(&StringLiteral_15468/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/, v18);
    sub_1B64870(&StringLiteral_15466/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, v19);
    sub_1B64870(&StringLiteral_15467/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, v20);
    byte_49FA720 = 1;
  }
  this->fields.CloseFunc = func;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.CloseFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    waveCount);
  if ( fromScene )
    v21 = (System_String_o **)&StringLiteral_15469/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/;
  else
    v21 = (System_String_o **)&StringLiteral_15468/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/;
  v22 = *v21;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get(v22, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, v24, 0LL);
  messageLabel = this->fields.messageLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15467/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, v24, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15466/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, v24, 0LL),
        waveInfoListManager = this->fields.waveInfoListManager,
        v29 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1B64ABC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo),
        WaveBattleWaveInfoListManager_CallbackFunc___ctor(
          v29,
          (Il2CppObject *)this,
          Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
          v30),
        !waveInfoListManager)
    || (WaveBattleWaveInfoListManager__CreateList(
          waveInfoListManager,
          deckEntity,
          questRestrictionInfo,
          waveCount,
          v29,
          restartWave,
          v31),
        (v24 = (System_String_o *)this->fields.waveInfoListManager) == 0LL) )
  {
LABEL_14:
    sub_1B64ACC(v24, v25);
  }
  WaveBattleWaveInfoListManager__SetScrollPos((WaveBattleWaveInfoListManager_o *)v24, restartWave, v32);
}


void __fastcall WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackFunc = partySelectCallback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)partySelectCallback,
    (int32_t)method,
    v3);
}


void __fastcall WaveBattleSelectWaveDialog__SetWave(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64ACC(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
        WaveBattleSelectWaveDialog_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64ACC(0LL, currentWave);
  WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(waveInfoListManager, currentWave, method);
}


void __fastcall WaveBattleSelectWaveDialog__add_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FA71D & 1) == 0 )
  {
    sub_1B64870(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value);
    byte_49FA71D = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1B64D8C(v8);
  WaveBattleSelectWaveDialog__remove_CloseFunc(v11, v12, v13);
}


void __fastcall WaveBattleSelectWaveDialog__add_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FA71B & 1) == 0 )
  {
    sub_1B64870(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value);
    byte_49FA71B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1B64D8C(v8);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_49FA726 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FA726 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B64ACC(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__remove_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FA71E & 1) == 0 )
  {
    sub_1B64870(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value);
    byte_49FA71E = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1B64D8C(v8);
  WaveBattleSelectWaveDialog__Awake(v11, v12);
}


void __fastcall WaveBattleSelectWaveDialog__remove_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FA71C & 1) == 0 )
  {
    sub_1B64870(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value);
    byte_49FA71C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1B64D8C(v8);
  WaveBattleSelectWaveDialog__add_CloseFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A7804;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A77A4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleSelectWaveDialog_CallbackFunc__BeginInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = result;
  v20 = m;
  if ( (byte_49FA728 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49FA728 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1B64824(this, v18, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__Invoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A7878;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7830;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleSelectWaveDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_49FA729 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isDecide);
    byte_49FA729 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass21_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass21_0___Open_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_o *_4__this; // x8
  WaveBattleSelectWaveDialog___c__DisplayClass21_0_o *v3; // x19
  struct WaveBattleSelectWaveDialog_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (WaveBattleSelectWaveDialog___c__DisplayClass21_0_o *)_4__this->fields.maskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1B64ACC(this, method);
  }
  v4->fields.state = 1;
  ActionExtensions__Call(v3->fields.endOpenCallback, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass25_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass25_0___Close_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  WaveBattleSelectWaveDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  WaveBattleSelectWaveDialog__Init(_4__this, method);
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
}