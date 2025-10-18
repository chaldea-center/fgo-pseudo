void DebugInputComponent___ctor(DebugInputComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void DebugInputComponent__cancel(DebugInputComponent_o *this, const MethodInfo *method)
{
  struct DebugInputComponent_EndInputCallBack_o *inputCallBack; // x8

  if ( (byte_4C44587 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C44587 = 1;
  }
  inputCallBack = this->fields.inputCallBack;
  if ( inputCallBack )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, _QWORD, intptr_t))inputCallBack->fields.invoke_impl)(
      inputCallBack->fields.method_code,
      string_TypeInfo->static_fields->Empty,
      0,
      inputCallBack->fields.method);
}


void DebugInputComponent__setCallBack(
        DebugInputComponent_o *this,
        DebugInputComponent_EndInputCallBack_o *cb,
        const MethodInfo *method)
{
  UIInput_o *inputField; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C44586 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44586 = 1;
  }
  inputField = this->fields.inputField;
  if ( !inputField )
    sub_1C372B4(0);
  UIInput__set_value(inputField, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.inputCallBack = cb;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.inputCallBack, (int32_t)cb, v6, v7);
}


void DebugInputComponent__submit(DebugInputComponent_o *this, const MethodInfo *method)
{
  struct DebugInputComponent_EndInputCallBack_o *inputCallBack; // x19
  UIInput_o *inputField; // x0
  System_String_o *value; // x0

  inputCallBack = this->fields.inputCallBack;
  if ( inputCallBack )
  {
    inputField = this->fields.inputField;
    if ( !inputField )
      sub_1C372B4(0);
    value = UIInput__get_value(inputField, 0);
    ((void (__fastcall *)(intptr_t, System_String_o *, __int64, intptr_t))inputCallBack->fields.invoke_impl)(
      inputCallBack->fields.method_code,
      value,
      1,
      inputCallBack->fields.method);
  }
}


void DebugInputComponent_EndInputCallBack___ctor(
        DebugInputComponent_EndInputCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7C308;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A7C330;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7C2B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *DebugInputComponent_EndInputCallBack__BeginInvoke(
        DebugInputComponent_EndInputCallBack_o *this,
        System_String_o *input,
        bool submit,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = submit;
  if ( (byte_4C44588 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C44588 = 1;
  }
  v13[2] = 0;
  v13[0] = input;
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, submit, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void DebugInputComponent_EndInputCallBack__EndInvoke(
        DebugInputComponent_EndInputCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void DebugInputComponent_EndInputCallBack__Invoke(
        DebugInputComponent_EndInputCallBack_o *this,
        System_String_o *input,
        bool submit,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    input,
    submit,
    this->fields.method);
}