void InputUserBirthDayConfirmWindow___ctor(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4CE963C & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE963C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void InputUserBirthDayConfirmWindow__Callback(
        InputUserBirthDayConfirmWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *v9; // x20
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void InputUserBirthDayConfirmWindow__Close(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Close_33633920(this, 0, v2);
}


void InputUserBirthDayConfirmWindow__Close_33633920(
        InputUserBirthDayConfirmWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CE9639 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_InputUserBirthDayConfirmWindow_EndClose__);
    byte_4CE9639 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void InputUserBirthDayConfirmWindow__EndClose(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayConfirmWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void InputUserBirthDayConfirmWindow__EndOpen(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  ;
}


void InputUserBirthDayConfirmWindow__Init(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void InputUserBirthDayConfirmWindow__OnClickCancel(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE963A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_InputUserBirthDayConfirmWindow_OnClickCancel__);
    byte_4CE963A = 1;
  }
  v3 = Method_InputUserBirthDayConfirmWindow_OnClickCancel__;
  if ( (*((_BYTE *)Method_InputUserBirthDayConfirmWindow_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_InputUserBirthDayConfirmWindow_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  InputUserBirthDayConfirmWindow__Callback(this, 0, v5);
}


void InputUserBirthDayConfirmWindow__OnClickDecide(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Callback(this, 1, v2);
}


void InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        InputUserBirthDayConfirmWindow_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *notice,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *callback,
        int32_t infoPosY,
        int32_t infoSpacingY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_GameObject_o *v23; // x0
  UILabel_o *confirmTxt; // x20
  UILabel_o *cancelTxt; // x20
  System_Action_o *v26; // x20

  if ( (byte_4CE9638 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_InputUserBirthDayConfirmWindow_EndOpen__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4CE9638 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, title, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, message, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.noticeLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, notice, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPositionY(v23, (float)infoPosY, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_spacingY((UILabel_o *)gameObject, infoSpacingY, 0);
  confirmTxt = this->fields.confirmTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmTxt
    || (UILabel__set_text(confirmTxt, (System_String_o *)gameObject, 0),
        cancelTxt = this->fields.cancelTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelTxt) )
  {
LABEL_14:
    sub_1C7BD40(gameObject, v16);
  }
  UILabel__set_text(cancelTxt, (System_String_o *)gameObject, 0);
  this->fields.state = 1;
  v26 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
}


void InputUserBirthDayConfirmWindow__add_callbackFunc(
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

  if ( (byte_4CE9636 & 1) == 0 )
  {
    sub_1C7BAE8(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    byte_4CE9636 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_1C7C0DC(v8);
  InputUserBirthDayConfirmWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *InputUserBirthDayConfirmWindow__get_closeBtnPath(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE963B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3074/*"BaseWindow/CancleBtn"*/);
    byte_4CE963B = 1;
  }
  return (System_String_o *)StringLiteral_3074/*"BaseWindow/CancleBtn"*/;
}


void InputUserBirthDayConfirmWindow__remove_callbackFunc(
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

  if ( (byte_4CE9637 & 1) == 0 )
  {
    sub_1C7BAE8(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    byte_4CE9637 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_1C7C0DC(v8);
  InputUserBirthDayConfirmWindow__Init(v11, v12);
}


void InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA9E08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA9DC0;
}


System_IAsyncResult_o *InputUserBirthDayConfirmWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE963D & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE963D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void InputUserBirthDayConfirmWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}