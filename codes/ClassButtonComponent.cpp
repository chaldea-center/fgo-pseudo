void ClassButtonComponent___ctor(ClassButtonComponent_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void ClassButtonComponent__Awake(ClassButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o v3; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C560F9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_411/*"#606060"*/);
    byte_4C560F9 = 1;
  }
  v3 = (UnityEngine_Color_o)0LL;
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_411/*"#606060"*/, &v3, 0);
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
  bool v3; // w1

  v3 = use;
  this->fields.isUse = v3;
  UICommonButton__SetButtonEnable((UICommonButton_o *)this, v3, 1, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassButtonComponent_o *v11; // x0
  ClassButtonComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C560F7 & 1) == 0 )
  {
    sub_1C3E564(&ClassButtonComponent_CallbackFunc_TypeInfo);
    byte_4C560F7 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ClassButtonComponent__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassButtonComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C560F8 & 1) == 0 )
  {
    sub_1C3E564(&ClassButtonComponent_CallbackFunc_TypeInfo);
    byte_4C560F8 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ClassButtonComponent__Awake(v11, v12);
}


void ClassButtonComponent__setClassPos(
        ClassButtonComponent_o *this,
        int32_t classPos,
        ClassButtonComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc - 2) = classPos;
  sub_1C3E508((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)callback, method);
}


void ClassButtonComponent_CallbackFunc___ctor(
        ClassButtonComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A82BF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A82BB0;
}


System_IAsyncResult_o *ClassButtonComponent_CallbackFunc__BeginInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = classPos;
  if ( (byte_4C560FA & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C560FA = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ClassButtonComponent_CallbackFunc__EndInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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