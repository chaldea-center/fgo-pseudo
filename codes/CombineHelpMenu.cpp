void CombineHelpMenu___ctor(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B246 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2B246 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CombineHelpMenu__Close(
        CombineHelpMenu_o *this,
        CombineHelpMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C2B244 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineHelpMenu_endClose__);
    byte_4C2B244 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineHelpMenu_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void CombineHelpMenu__Init(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CombineHelpMenu__Open(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
}


void CombineHelpMenu__add_callbackFunc(
        CombineHelpMenu_o *this,
        CombineHelpMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CombineHelpMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CombineHelpMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineHelpMenu_o *v11; // x0
  CombineHelpMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2B242 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpMenu_CallbackFunc_TypeInfo);
    byte_4C2B242 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CombineHelpMenu_CallbackFunc_c *)v8->klass != CombineHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CombineHelpMenu__remove_callbackFunc(v11, v12, v13);
}


void CombineHelpMenu__endClose(CombineHelpMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct CombineHelpMenu_CallbackFunc_o *v6; // x20
  struct CombineHelpMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C2D434(p_callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


System_String_o *CombineHelpMenu__get_closeBtnPath(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B245 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4566/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_4C2B245 = 1;
  }
  return (System_String_o *)StringLiteral_4566/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/;
}


void CombineHelpMenu__remove_callbackFunc(
        CombineHelpMenu_o *this,
        CombineHelpMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CombineHelpMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CombineHelpMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineHelpMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C2B243 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpMenu_CallbackFunc_TypeInfo);
    byte_4C2B243 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CombineHelpMenu_CallbackFunc_c *)v8->klass != CombineHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CombineHelpMenu__Init(v11, v12);
}


void CombineHelpMenu_CallbackFunc___ctor(
        CombineHelpMenu_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76594;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76554;
}


System_IAsyncResult_o *CombineHelpMenu_CallbackFunc__BeginInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void CombineHelpMenu_CallbackFunc__EndInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CombineHelpMenu_CallbackFunc__Invoke(CombineHelpMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}