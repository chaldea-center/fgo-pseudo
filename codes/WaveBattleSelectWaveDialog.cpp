void __fastcall WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7372 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7372 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Awake(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *maskObject; // x0
  System_Action_o *v9; // x20

  if ( (byte_42E736E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog_EndClose__, v5, v6, v7);
    byte_42E736E = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0LL),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0LL) )
  {
    sub_B5D69C(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close_22707844(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42E736F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__, v6, v7, v8);
    sub_B5D5C4(&WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo, v9, v10, v11);
    byte_42E736F = 1;
  }
  v12 = sub_B5D694(WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo);
  WaveBattleSelectWaveDialog___c__DisplayClass25_0___ctor(
    (WaveBattleSelectWaveDialog___c__DisplayClass25_0_o *)v12,
    0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)this,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 24) = closeCallback,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)closeCallback,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (waveInfoListManager = this->fields.waveInfoListManager) == 0LL) )
  {
    sub_B5D69C(waveInfoListManager, v14);
  }
  WaveBattleWaveInfoListManager__DestroyWaveInfoObj(waveInfoListManager, v14);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v27, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  this->fields.state = 1;
}


void __fastcall WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E736A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E736A = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OnClickCancel(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x0

  if ( (byte_42E7370 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E7370 = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject )
      sub_B5D69C(0LL, method);
    UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
    v6 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_42E736C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)deckEntity, (_DWORD)questRestrictionInfo, *(_QWORD *)&waveCount);
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog_EndOpen__, v15, v16, v17);
    byte_42E736C = 1;
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
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Open_22707384(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42E736D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endOpenCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__, v6, v7, v8);
    sub_B5D5C4(&WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo, v9, v10, v11);
    byte_42E736D = 1;
  }
  v12 = sub_B5D694(WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo);
  WaveBattleSelectWaveDialog___c__DisplayClass21_0___ctor(
    (WaveBattleSelectWaveDialog___c__DisplayClass21_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = endOpenCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)endOpenCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B5D69C(0LL, callback);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(waveInfoListManager, callback, method);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_String_o **v33; // x8
  bool v34; // zf
  UILabel_o *titleLabel; // x24
  System_String_o *v36; // x25
  System_String_o *v37; // x0
  __int64 v38; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v42; // x25
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x2

  if ( (byte_42E736B & 1) == 0 )
  {
    sub_B5D5C4(
      &WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo,
      (_DWORD)deckEntity,
      (_DWORD)questRestrictionInfo,
      *(_QWORD *)&waveCount);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_15542/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_15541/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15539/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_15540/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, v30, v31, v32);
    byte_42E736B = 1;
  }
  this->fields.CloseFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CloseFunc,
    (System_Int32_array **)func,
    (System_String_array **)questRestrictionInfo,
    *(System_String_array ***)&waveCount,
    *(System_Boolean_array ***)&restartWave,
    *(System_Int32_array ***)&fromScene,
    (System_Int32_array *)func,
    (System_Int32_array *)method);
  v33 = (System_String_o **)&StringLiteral_15541/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/;
  v34 = fromScene == 0;
  titleLabel = this->fields.titleLabel;
  if ( !v34 )
    v33 = (System_String_o **)&StringLiteral_15542/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/;
  v36 = *v33;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get(v36, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, v37, 0LL);
  messageLabel = this->fields.messageLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15540/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, v37, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15539/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, v37, 0LL),
        waveInfoListManager = this->fields.waveInfoListManager,
        v42 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B5D694(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo),
        WaveBattleWaveInfoListManager_CallbackFunc___ctor(
          v42,
          (Il2CppObject *)this,
          Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
          0LL),
        !waveInfoListManager)
    || (WaveBattleWaveInfoListManager__CreateList(
          waveInfoListManager,
          deckEntity,
          questRestrictionInfo,
          waveCount,
          v42,
          restartWave,
          v43),
        (v37 = (System_String_o *)this->fields.waveInfoListManager) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(v37, v38);
  }
  WaveBattleWaveInfoListManager__SetScrollPos((WaveBattleWaveInfoListManager_o *)v37, restartWave, v44);
}


void __fastcall WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = partySelectCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)partySelectCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WaveBattleSelectWaveDialog__SetWave(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B5D69C(0LL, wave);
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
    sub_B5D69C(0LL, currentWave);
  WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(waveInfoListManager, currentWave, method);
}


void __fastcall WaveBattleSelectWaveDialog__add_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveDialog_o *v12; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7368 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7368 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v7 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v9->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CloseFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveDialog__remove_CloseFunc(v12, v13, v14);
}


void __fastcall WaveBattleSelectWaveDialog__add_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveDialog_o *v12; // x0
  WaveBattleSelectWaveDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7366 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7366 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v9->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7371 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7371 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__remove_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E7369 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7369 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v7 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v9->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CloseFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveDialog__Awake(v12, v13);
}


void __fastcall WaveBattleSelectWaveDialog__remove_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveDialog_o *v12; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7367 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7367 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v9->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveDialog__add_CloseFunc(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v15 = m;
  v16 = n;
  if ( (byte_42E5FFB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, *(_QWORD *)&m);
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E5FFB = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__Invoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WaveBattleSelectWaveDialog_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleSelectWaveDialog_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattleSelectWaveDialog_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WaveBattleSelectWaveDialog_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)n, (unsigned int)m, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)n, (unsigned int)m, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)n, (unsigned int)m, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)n,
      (unsigned int)m,
      v25);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattleSelectWaveDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_42E5FFC & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5FFC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WaveBattleSelectWaveDialog_CloseDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WaveBattleSelectWaveDialog_CloseDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WaveBattleSelectWaveDialog_CloseDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  WaveBattleSelectWaveDialog__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
}