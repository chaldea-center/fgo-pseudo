void __fastcall CombineHelpMenu___ctor(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AB95FD & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB95FD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineHelpMenu__Close(
        CombineHelpMenu_o *this,
        CombineHelpMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AB95FB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_CombineHelpMenu_endClose__, v6);
    byte_4AB95FB = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineHelpMenu_endClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall CombineHelpMenu__Init(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineHelpMenu__Open(CombineHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall CombineHelpMenu__add_callbackFunc(
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

  if ( (byte_4AB95F9 & 1) == 0 )
  {
    sub_1BAB41C(&CombineHelpMenu_CallbackFunc_TypeInfo, value);
    byte_4AB95F9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CombineHelpMenu_CallbackFunc_c *)v8->klass != CombineHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  CombineHelpMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineHelpMenu__endClose(CombineHelpMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct CombineHelpMenu_CallbackFunc_o *v6; // x20
  struct CombineHelpMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1BAB3C0(p_callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


System_String_o *__fastcall CombineHelpMenu__get_closeBtnPath(CombineHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AB95FC & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4603/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/, method);
    byte_4AB95FC = 1;
  }
  return (System_String_o *)StringLiteral_4603/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/;
}


void __fastcall CombineHelpMenu__remove_callbackFunc(
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

  if ( (byte_4AB95FA & 1) == 0 )
  {
    sub_1BAB41C(&CombineHelpMenu_CallbackFunc_TypeInfo, value);
    byte_4AB95FA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CombineHelpMenu_CallbackFunc_c *)v8->klass != CombineHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  CombineHelpMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpMenu_CallbackFunc___ctor(
        CombineHelpMenu_CallbackFunc_o *this,
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19F33B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19F3378;
}


System_IAsyncResult_o *__fastcall CombineHelpMenu_CallbackFunc__BeginInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, &v5, callback, object);
}


void __fastcall CombineHelpMenu_CallbackFunc__EndInvoke(
        CombineHelpMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall CombineHelpMenu_CallbackFunc__Invoke(CombineHelpMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}