void CriFsRequest___ctor(CriFsRequest_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
}


System_Collections_IEnumerator_o *CriFsRequest__CheckDone(CriFsRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4CAF7BA & 1) == 0 )
  {
    sub_1C6BA08(&CriFsRequest__CheckDone_d__23_TypeInfo);
    byte_4CAF7BA = 1;
  }
  v3 = sub_1C6BC54(CriFsRequest__CheckDone_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void CriFsRequest__Dispose(CriFsRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CAF7B9 & 1) == 0 )
  {
    sub_1C6BA08(&System_GC_TypeInfo);
    byte_4CAF7B9 = 1;
  }
  if ( !this->fields._isDisposed_k__BackingField )
  {
    ((void (__fastcall *)(CriFsRequest_o *, __int64, const MethodInfo *))this->klass->vtable._7_Dispose.methodPtr)(
      this,
      1,
      this->klass->vtable._7_Dispose.method);
    this->fields._isDisposed_k__BackingField = 1;
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__SuppressFinalize((Il2CppObject *)this, 0);
  }
}


void CriFsRequest__Dispose_31039464(CriFsRequest_o *this, bool disposing, const MethodInfo *method)
{
  ;
}


void CriFsRequest__Done(CriFsRequest_o *this, const MethodInfo *method)
{
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
  this->fields._isDone_k__BackingField = 1;
  if ( doneDelegate_k__BackingField )
    ((void (__fastcall *)(intptr_t, CriFsRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
      doneDelegate_k__BackingField->fields.method_code,
      this,
      doneDelegate_k__BackingField->fields.method);
}


// positive sp value has been detected, the output may be wrong!
void CriFsRequest__Finalize(CriFsRequest_o *this, const MethodInfo *method)
{
  if ( !this->fields._isDisposed_k__BackingField )
  {
    ((void (__fastcall *)(CriFsRequest_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_Dispose.methodPtr)(
      this,
      0,
      this->klass->vtable._7_Dispose.method);
    this->fields._isDisposed_k__BackingField = 1;
  }
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void CriFsRequest__Stop(CriFsRequest_o *this, const MethodInfo *method)
{
  ;
}


void CriFsRequest__Update(CriFsRequest_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_YieldInstruction_o *CriFsRequest__WaitForDone(
        CriFsRequest_o *this,
        UnityEngine_MonoBehaviour_o *mb,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x0
  __int64 v5; // x1

  v4 = CriFsRequest__CheckDone(this, (const MethodInfo *)mb);
  if ( !mb )
    sub_1C6BC60(v4, v5);
  return (UnityEngine_YieldInstruction_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(mb, v4, 0);
}


CriFsRequest_DoneDelegate_o *CriFsRequest__get_doneDelegate(CriFsRequest_o *this, const MethodInfo *method)
{
  return this->fields._doneDelegate_k__BackingField;
}


System_String_o *CriFsRequest__get_error(CriFsRequest_o *this, const MethodInfo *method)
{
  return this->fields._error_k__BackingField;
}


bool CriFsRequest__get_isDisposed(CriFsRequest_o *this, const MethodInfo *method)
{
  return this->fields._isDisposed_k__BackingField;
}


bool CriFsRequest__get_isDone(CriFsRequest_o *this, const MethodInfo *method)
{
  return this->fields._isDone_k__BackingField;
}


void CriFsRequest__set_doneDelegate(CriFsRequest_o *this, CriFsRequest_DoneDelegate_o *value, const MethodInfo *method)
{
  this->fields._doneDelegate_k__BackingField = value;
  sub_1C6B9AC(&this->fields._doneDelegate_k__BackingField, value);
}


void CriFsRequest__set_error(CriFsRequest_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields._error_k__BackingField = value;
  sub_1C6B9AC(&this->fields._error_k__BackingField, value);
}


void CriFsRequest__set_isDisposed(CriFsRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDisposed_k__BackingField = value;
}


void CriFsRequest__set_isDone(CriFsRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDone_k__BackingField = value;
}


void CriFsRequest_DoneDelegate___ctor(
        CriFsRequest_DoneDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A960A0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C6BAC0(method);
        v12 = sub_1C6C054(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A9619C;
          else
            v9 = sub_1A96160;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A960DC;
        }
        else
        {
          v9 = sub_1A960B0;
        }
      }
      else
      {
        v9 = sub_1A96080;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A96038;
}


System_IAsyncResult_o *CriFsRequest_DoneDelegate__BeginInvoke(
        CriFsRequest_DoneDelegate_o *this,
        CriFsRequest_o *request,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  CriFsRequest_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = request;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v6, callback, object);
}


void CriFsRequest_DoneDelegate__EndInvoke(
        CriFsRequest_DoneDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void CriFsRequest_DoneDelegate__Invoke(
        CriFsRequest_DoneDelegate_o *this,
        CriFsRequest_o *request,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, CriFsRequest_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    request,
    this->fields.method);
}


void CriFsRequest__CheckDone_d__23___ctor(
        CriFsRequest__CheckDone_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CriFsRequest__CheckDone_d__23__MoveNext(CriFsRequest__CheckDone_d__23_o *this, const MethodInfo *method)
{
  struct CriFsRequest_o *_4__this; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C6BC60(this, method);
  if ( _4__this->fields._isDone_k__BackingField )
    return 0;
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C6B9AC(&this->fields.__2__current, 0);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *CriFsRequest__CheckDone_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CriFsRequest__CheckDone_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CriFsRequest__CheckDone_d__23__System_Collections_IEnumerator_Reset(
        CriFsRequest__CheckDone_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_CriFsRequest__CheckDone_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *CriFsRequest__CheckDone_d__23__System_Collections_IEnumerator_get_Current(
        CriFsRequest__CheckDone_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CriFsRequest__CheckDone_d__23__System_IDisposable_Dispose(
        CriFsRequest__CheckDone_d__23_o *this,
        const MethodInfo *method)
{
  ;
}