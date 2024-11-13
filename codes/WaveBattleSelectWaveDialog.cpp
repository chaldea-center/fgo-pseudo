void __fastcall WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B122E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B122E4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Awake(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B122E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog_EndClose__, v4, v5);
    byte_4B122E0 = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0LL),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1BCAA3C(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close_33048668(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  const MethodInfo *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B122E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeCallback, method);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo, v8, v9);
    byte_4B122E1 = 1;
  }
  v10 = sub_1BCAA2C(WaveBattleSelectWaveDialog___c__DisplayClass25_0_TypeInfo, closeCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_QWORD *)(v10 + 24) = closeCallback,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)closeCallback, v19, v20, v21, v22, v23, v24),
        (waveInfoListManager = this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1BCAA3C(waveInfoListManager, v12);
  }
  WaveBattleWaveInfoListManager__DestroyWaveInfoObj(waveInfoListManager, v12);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass25_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  this->fields.state = 1;
}


void __fastcall WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B122DC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B122DC = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OnClickCancel(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_4B122E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog_OnClickCancel__, method, v2);
    byte_4B122E2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject )
      sub_1BCAA3C(0LL, method);
    UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
    v5 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4B122DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, deckEntity, questRestrictionInfo);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog_EndOpen__, v15, v16);
    byte_4B122DE = 1;
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
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Open_33050148(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B122DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endOpenCallback, method);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__, v6, v7);
    sub_1BCA7E0(&WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo, v8, v9);
    byte_4B122DF = 1;
  }
  v10 = sub_1BCAA2C(WaveBattleSelectWaveDialog___c__DisplayClass21_0_TypeInfo, endOpenCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endOpenCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endOpenCallback, v19, v20, v21, v22, v23, v24);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, callback);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(waveInfoListManager, callback, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&wave);
  WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
    waveInfoListManager,
    wave,
    overwriteLabel,
    method);
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
  System_String_o **v28; // x8
  System_String_o *v29; // x25
  UILabel_o *titleLabel; // x24
  System_String_o *v31; // x0
  __int64 v32; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  WaveBattleWaveInfoListManager_CallbackFunc_o *v39; // x25
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x6
  const MethodInfo *v42; // x2

  if ( (byte_4B122DD & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, deckEntity, questRestrictionInfo);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__, v17, v18);
    sub_1BCA7E0(&StringLiteral_15702/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15701/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_15699/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15700/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, v25, v26);
    byte_4B122DD = 1;
  }
  this->fields.CloseFunc = func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.CloseFunc,
    (int64_t)func,
    (int64_t)questRestrictionInfo,
    waveCount,
    *(System_String_o **)&restartWave,
    *(BattleSetupInfo_o **)&fromScene,
    (FollowerInfo_o *)func,
    (PartyListViewItem_o *)method);
  if ( fromScene )
    v28 = (System_String_o **)&StringLiteral_15702/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/;
  else
    v28 = (System_String_o **)&StringLiteral_15701/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/;
  v29 = *v28;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v31 = LocalizationManager__Get(v29, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, v31, 0LL);
  messageLabel = this->fields.messageLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15700/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, v31, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15699/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, v31, 0LL),
        waveInfoListManager = this->fields.waveInfoListManager,
        v39 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo,
                                                                v36,
                                                                v37,
                                                                v38),
        WaveBattleWaveInfoListManager_CallbackFunc___ctor(
          v39,
          (Il2CppObject *)this,
          Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
          v40),
        !waveInfoListManager)
    || (WaveBattleWaveInfoListManager__CreateList(
          waveInfoListManager,
          deckEntity,
          questRestrictionInfo,
          waveCount,
          v39,
          restartWave,
          v41),
        (v31 = (System_String_o *)this->fields.waveInfoListManager) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(v31, v32);
  }
  WaveBattleWaveInfoListManager__SetScrollPos((WaveBattleWaveInfoListManager_o *)v31, restartWave, v42);
}


void __fastcall WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = partySelectCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)partySelectCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog__SetWave(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
        WaveBattleSelectWaveDialog_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&currentWave);
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

  if ( (byte_4B122DA & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B122DA = 1;
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
    v9 = sub_1C05CD0(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B122D8 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B122D8 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1BCACFC(v8);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B122E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B122E3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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

  if ( (byte_4B122DB & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B122DB = 1;
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
    v9 = sub_1C05CD0(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B122D9 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B122D9 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1BCACFC(v8);
  WaveBattleSelectWaveDialog__add_CloseFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07DB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07D58;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = n;
  v17 = result;
  v15 = m;
  if ( (byte_4B122E5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11);
    byte_4B122E5 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07E2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07DE4;
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
  if ( (byte_4B122E6 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B122E6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
  WaveBattleSelectWaveDialog__Init(_4__this, method);
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
}