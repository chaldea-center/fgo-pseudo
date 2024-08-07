void __fastcall ClassButtonComponent___ctor(ClassButtonComponent_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall ClassButtonComponent__OnSelectButton(ClassButtonComponent_o *this, const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)this->fields.classPos,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ClassButtonComponent__add_callbackFunc(
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

  if ( (byte_49FDFAA & 1) == 0 )
  {
    sub_1B64A00(&ClassButtonComponent_CallbackFunc_TypeInfo, value);
    byte_49FDFAA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonComponent_CallbackFunc_c *)v8->klass != ClassButtonComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  ClassButtonComponent__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ClassButtonComponent__get_ClassPos(ClassButtonComponent_o *this, const MethodInfo *method)
{
  return this->fields.classPos;
}


void __fastcall ClassButtonComponent__remove_callbackFunc(
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
  int32_t v12; // w1
  ClassButtonComponent_CallbackFunc_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_49FDFAB & 1) == 0 )
  {
    sub_1B64A00(&ClassButtonComponent_CallbackFunc_TypeInfo, value);
    byte_49FDFAB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonComponent_CallbackFunc_c *)v8->klass != ClassButtonComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  ClassButtonComponent__setClassPos(v11, v12, v13, v14);
}


void __fastcall ClassButtonComponent__setClassPos(
        ClassButtonComponent_o *this,
        int32_t classPos,
        ClassButtonComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  struct ClassButtonComponent_CallbackFunc_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc - 2) = classPos;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)p_callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonComponent_CallbackFunc___ctor(
        ClassButtonComponent_CallbackFunc_o *this,
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC9B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC968;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassButtonComponent_CallbackFunc__BeginInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = classPos;
  if ( (byte_49FDFAC & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&classPos);
    byte_49FDFAC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall ClassButtonComponent_CallbackFunc__EndInvoke(
        ClassButtonComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall ClassButtonComponent_CallbackFunc__Invoke(
        ClassButtonComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    classPos,
    *(_QWORD *)&this->fields.extra_arg);
}