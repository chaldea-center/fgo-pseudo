void CombineHelpMenu___ctor(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_593C928 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593C928 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CombineHelpMenu__Close(
        CombineHelpMenu_o *this,
        CombineHelpMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593C926 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineHelpMenu_endClose__);
    byte_593C926 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineHelpMenu_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void CombineHelpMenu__Init(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CombineHelpMenu__Open(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CombineHelpMenu_o *v12; // x0
  CombineHelpMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593C924 & 1) == 0 )
  {
    sub_21FFC50(&CombineHelpMenu_CallbackFunc_TypeInfo);
    byte_593C924 = 1;
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
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, CombineHelpMenu_CallbackFunc_TypeInfo, v9);
  CombineHelpMenu__remove_callbackFunc(v12, v13, v14);
}


void CombineHelpMenu__endClose(CombineHelpMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct CombineHelpMenu_CallbackFunc_o *v10; // x20
  struct CombineHelpMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


System_String_o *CombineHelpMenu__get_closeBtnPath(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_593C927 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4740/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_593C927 = 1;
  }
  return (System_String_o *)StringLiteral_4740/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CombineHelpMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593C925 & 1) == 0 )
  {
    sub_21FFC50(&CombineHelpMenu_CallbackFunc_TypeInfo);
    byte_593C925 = 1;
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
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, CombineHelpMenu_CallbackFunc_TypeInfo, v9);
  CombineHelpMenu__Init(v12, v13);
}


void CombineHelpMenu_CallbackFunc___ctor(
        CombineHelpMenu_CallbackFunc_o *this,
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
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20019D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001990;
}


System_IAsyncResult_o *CombineHelpMenu_CallbackFunc__BeginInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void CombineHelpMenu_CallbackFunc__EndInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CombineHelpMenu_CallbackFunc__Invoke(CombineHelpMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}