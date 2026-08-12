void DebugInputComponent___ctor(DebugInputComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void DebugInputComponent__cancel(DebugInputComponent_o *this, const MethodInfo *method)
{
  struct DebugInputComponent_EndInputCallBack_o *inputCallBack; // x8

  inputCallBack = this->fields.inputCallBack;
  if ( inputCallBack )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))inputCallBack->fields.invoke_impl)(
      inputCallBack->fields.method_code,
      **(_QWORD **)(qword_5984390 + 184),
      0,
      inputCallBack->fields.method);
}


void DebugInputComponent__setCallBack(
        DebugInputComponent_o *this,
        DebugInputComponent_EndInputCallBack_o *cb,
        const MethodInfo *method)
{
  UIInput_o *inputField; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5971E71 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971E71 = 1;
  }
  inputField = this->fields.inputField;
  if ( !inputField )
    sub_2213CDC(0, cb);
  UIInput__set_value(inputField, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.inputCallBack = cb;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.inputCallBack, (int32_t)cb, v6, v7, v8, v9, v10, v11);
}


void DebugInputComponent__submit(DebugInputComponent_o *this, const MethodInfo *method)
{
  struct DebugInputComponent_EndInputCallBack_o *inputCallBack; // x19
  UIInput_o *inputField; // x0
  System_String_o *value; // x1

  inputCallBack = this->fields.inputCallBack;
  if ( inputCallBack )
  {
    inputField = this->fields.inputField;
    if ( !inputField )
      sub_2213CDC(0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200EA50;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_200EA74;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_200E9F8;
}


System_IAsyncResult_o *DebugInputComponent_EndInputCallBack__BeginInvoke(
        DebugInputComponent_EndInputCallBack_o *this,
        System_String_o *input,
        bool submit,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  bool v11[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v11[0] = submit;
  v10[0] = input;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_5984328, v11);
  return sub_2213A14(this, v10, callback, object);
}


void DebugInputComponent_EndInputCallBack__EndInvoke(
        DebugInputComponent_EndInputCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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