void __fastcall InputUserBirthDayConfirmWindow___ctor(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4A6B47C & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6B47C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__Callback(
        InputUserBirthDayConfirmWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *v4; // x20
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B8FFB4(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayConfirmWindow__Close(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Close_31145032(this, 0LL, v2);
}


void __fastcall InputUserBirthDayConfirmWindow__Close_31145032(
        InputUserBirthDayConfirmWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A6B479 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_InputUserBirthDayConfirmWindow_EndClose__, v5);
    byte_4A6B479 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(&this->fields.closeCallbackFunc);
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__EndClose(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayConfirmWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B8FFB4(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayConfirmWindow__EndOpen(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall InputUserBirthDayConfirmWindow__Init(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__OnClickCancel(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6B47A & 1) == 0 )
  {
    sub_1B90010(&Method_InputUserBirthDayConfirmWindow_OnClickCancel__, method);
    byte_4A6B47A = 1;
  }
  v3 = Method_InputUserBirthDayConfirmWindow_OnClickCancel__;
  if ( (*((_BYTE *)Method_InputUserBirthDayConfirmWindow_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_InputUserBirthDayConfirmWindow_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  InputUserBirthDayConfirmWindow__Callback(this, 0, v5);
}


void __fastcall InputUserBirthDayConfirmWindow__OnClickDecide(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Callback(this, 1, v2);
}


void __fastcall InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        InputUserBirthDayConfirmWindow_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *notice,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *callback,
        int32_t infoPosY,
        int32_t infoSpacingY,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *confirmTxt; // x20
  UILabel_o *cancelTxt; // x20
  System_Action_o *v24; // x20

  if ( (byte_4A6B478 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, title);
    sub_1B90010(&Method_InputUserBirthDayConfirmWindow_EndOpen__, v15);
    sub_1B90010(&LocalizationManager_TypeInfo, v16);
    sub_1B90010(&StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_1B90010(&StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_4A6B478 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8FFB4(&this->fields.callbackFunc);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, title, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.noticeLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, notice, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, (float)infoPosY, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_spacingY((UILabel_o *)gameObject, infoSpacingY, 0LL);
  confirmTxt = this->fields.confirmTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmTxt
    || (UILabel__set_text(confirmTxt, (System_String_o *)gameObject, 0LL),
        cancelTxt = this->fields.cancelTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelTxt) )
  {
LABEL_14:
    sub_1B9026C(gameObject, v20);
  }
  UILabel__set_text(cancelTxt, (System_String_o *)gameObject, 0LL);
  this->fields.state = 1;
  v24 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__add_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayConfirmWindow_o *v11; // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A6B476 & 1) == 0 )
  {
    sub_1B90010(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, value);
    byte_4A6B476 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_1B9052C(v8);
  InputUserBirthDayConfirmWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall InputUserBirthDayConfirmWindow__get_closeBtnPath(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6B47B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_3196/*"BaseWindow/CancleBtn"*/, method);
    byte_4A6B47B = 1;
  }
  return (System_String_o *)StringLiteral_3196/*"BaseWindow/CancleBtn"*/;
}


void __fastcall InputUserBirthDayConfirmWindow__remove_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayConfirmWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A6B477 & 1) == 0 )
  {
    sub_1B90010(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, value);
    byte_4A6B477 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_1B9052C(v8);
  InputUserBirthDayConfirmWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
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
  sub_1B8FFB4(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CEDBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CED74;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall InputUserBirthDayConfirmWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A6B47D & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6B47D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}