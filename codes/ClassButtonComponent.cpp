void ClassButtonComponent___ctor(ClassButtonComponent_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void ClassButtonComponent__Awake(ClassButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o v3; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_59379F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_436/*"#606060"*/);
    byte_59379F3 = 1;
  }
  v3 = (UnityEngine_Color_o)0LL;
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_436/*"#606060"*/, &v3, 0);
  this->fields.specifyDisabledColor = v3;
}


void ClassButtonComponent__OnEnable(ClassButtonComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.isUse )
    UICommonButton__OnEnable((UICommonButton_o *)this, 0);
  else
    UICommonButton__SetButtonEnable((UICommonButton_o *)this, 0, 1, 0);
}


void ClassButtonComponent__OnSelectButton(ClassButtonComponent_o *this, const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)this->fields.classPos,
      callbackFunc->fields.method);
}


void ClassButtonComponent__SetUse(ClassButtonComponent_o *this, bool use, const MethodInfo *method)
{
  this->fields.isUse = use;
  UICommonButton__SetButtonEnable((UICommonButton_o *)this, use, 1, 0);
}


void ClassButtonComponent__add_callbackFunc(
        ClassButtonComponent_o *this,
        ClassButtonComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassButtonComponent_o *v13; // x0
  ClassButtonComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59379F1 & 1) == 0 )
  {
    sub_21FFC50(&ClassButtonComponent_CallbackFunc_TypeInfo);
    byte_59379F1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ClassButtonComponent_CallbackFunc_c *)v8->klass != ClassButtonComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ClassButtonComponent_CallbackFunc_TypeInfo, v9, v10);
  ClassButtonComponent__remove_callbackFunc(v13, v14, v15);
}


int32_t ClassButtonComponent__get_ClassPos(ClassButtonComponent_o *this, const MethodInfo *method)
{
  return this->fields.classPos;
}


void ClassButtonComponent__remove_callbackFunc(
        ClassButtonComponent_o *this,
        ClassButtonComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassButtonComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59379F2 & 1) == 0 )
  {
    sub_21FFC50(&ClassButtonComponent_CallbackFunc_TypeInfo);
    byte_59379F2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ClassButtonComponent_CallbackFunc_c *)v8->klass != ClassButtonComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ClassButtonComponent_CallbackFunc_TypeInfo, v9, v10);
  ClassButtonComponent__Awake(v13, v14);
}


void ClassButtonComponent__setClassPos(
        ClassButtonComponent_o *this,
        int32_t classPos,
        ClassButtonComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassButtonComponent_CallbackFunc_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc - 2) = classPos;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


void ClassButtonComponent_CallbackFunc___ctor(
        ClassButtonComponent_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFA07C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFA034;
}


System_IAsyncResult_o *ClassButtonComponent_CallbackFunc__BeginInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = classPos;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ClassButtonComponent_CallbackFunc__EndInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ClassButtonComponent_CallbackFunc__Invoke(
        ClassButtonComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    classPos,
    this->fields.method);
}