void __fastcall ContinueDeviceDispMenu___ctor(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42B1EE0 & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42B1EE0 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceDispMenu__Callback(ContinueDeviceDispMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ContinueDeviceDispMenu_CallbackFunc_o *v9; // x19
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ContinueDeviceDispMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__Close(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceDispMenu__Close_28593304(this, 0LL, v2);
}


void __fastcall ContinueDeviceDispMenu__Close_28593304(
        ContinueDeviceDispMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B1EDB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ContinueDeviceDispMenu_EndClose__);
    byte_42B1EDB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
}


void __fastcall ContinueDeviceDispMenu__EndClose(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceDispMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__EndCopyDialog(
        ContinueDeviceDispMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B1EDD & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B1EDD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall ContinueDeviceDispMenu__EndOpen(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ContinueDeviceDispMenu__Init(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_42B1ED9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1ED9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceDispMenu__OnClickCancel(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42B1EDF & 1) == 0 )
  {
    sub_B52984(&Method_ContinueDeviceDispMenu_OnClickCancel__);
    byte_42B1EDF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_ContinueDeviceDispMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ContinueDeviceDispMenu__Callback(this, 0, v5);
  }
}


void __fastcall ContinueDeviceDispMenu__OnClickCopy(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  System_String_o *code; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v5; // x21
  NotificationDialog_ClickDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B1EDC & 1) == 0 )
  {
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_ContinueDeviceDispMenu_EndCopyDialog__);
    sub_B52984(&UnityEngine_GUIUtility_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_3398/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/);
    byte_42B1EDC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    code = this->fields.code;
    if ( (BYTE3(UnityEngine_GUIUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(code, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3398/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/, 0LL);
    v6 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceDispMenu_EndCopyDialog__,
      0LL);
    if ( !Instance )
      sub_B52A5C(v7, v8);
    CommonUI__OpenNotificationDialog_18160348(
      Instance,
      0LL,
      v5,
      v6,
      -1,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      0,
      0,
      0LL,
      1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__OnClickDecide(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B1EDE & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1EDE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ContinueDeviceDispMenu__Callback(this, 1, v3);
  }
}


void __fastcall ContinueDeviceDispMenu__Open(
        ContinueDeviceDispMenu_o *this,
        System_String_o *code,
        ContinueDeviceDispMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t state; // w8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *continueCodeLabel; // x0
  __int64 v20; // x1
  UILabel_o *explanation2Label; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  UILabel_o *copyLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v27; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_42B1EDA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ContinueDeviceDispMenu_EndOpen__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_3403/*"CONTINUE_DEVICE_DISP_TITLE"*/);
    sub_B52984(&StringLiteral_3399/*"CONTINUE_DEVICE_DISP_CANCEL"*/);
    sub_B52984(&StringLiteral_3402/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/);
    sub_B52984(&StringLiteral_3401/*"CONTINUE_DEVICE_DISP_DECIDE"*/);
    sub_B52984(&StringLiteral_3400/*"CONTINUE_DEVICE_DISP_COPY"*/);
    sub_B52984(&StringLiteral_3416/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/);
    byte_42B1EDA = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)p_callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 2;
  }
  else if ( !state )
  {
    this->fields.code = code;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.code,
      (System_Int32_array **)code,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CONTINUE_DEVICE_DISP_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, continueCodeLabel, 0LL);
    explanation2Label = this->fields.explanation2Label;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3402/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3416/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    continueCodeLabel = System_String__Concat_44570600(v22, (System_String_o *)StringLiteral_26/*"\n"*/, v23, 0LL);
    if ( !explanation2Label )
      goto LABEL_17;
    UILabel__set_text(explanation2Label, continueCodeLabel, 0LL);
    copyLabel = this->fields.copyLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CONTINUE_DEVICE_DISP_COPY"*/, 0LL);
    if ( !copyLabel )
      goto LABEL_17;
    UILabel__set_text(copyLabel, continueCodeLabel, 0LL);
    decideLabel = this->fields.decideLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3401/*"CONTINUE_DEVICE_DISP_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, continueCodeLabel, 0LL),
          cancelLabel = this->fields.cancelLabel,
          continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, continueCodeLabel, 0LL),
          (continueCodeLabel = (System_String_o *)this->fields.continueCodeLabel) == 0LL) )
    {
LABEL_17:
      sub_B52A5C(continueCodeLabel, v20);
    }
    UILabel__set_text((UILabel_o *)continueCodeLabel, this->fields.code, 0LL);
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__add_callbackFunc(
        ContinueDeviceDispMenu_o *this,
        ContinueDeviceDispMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceDispMenu_o *v11; // x0
  ContinueDeviceDispMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B1ED7 & 1) == 0 )
  {
    sub_B52984(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_42B1ED7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_B52D50(v8);
  ContinueDeviceDispMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ContinueDeviceDispMenu__remove_callbackFunc(
        ContinueDeviceDispMenu_o *this,
        ContinueDeviceDispMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceDispMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B1ED8 & 1) == 0 )
  {
    sub_B52984(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_42B1ED8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_B52D50(v8);
  ContinueDeviceDispMenu__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceDispMenu_CallbackFunc___ctor(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ContinueDeviceDispMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AE2D2 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AE2D2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ContinueDeviceDispMenu_CallbackFunc__EndInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceDispMenu_CallbackFunc__Invoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ContinueDeviceDispMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ContinueDeviceDispMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ContinueDeviceDispMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ContinueDeviceDispMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}