System_Collections_IEnumerator_o *WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CB3F58 & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
    byte_4CB3F58 = 1;
  }
  v2 = sub_1C6BC54(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardWaitNonBlockingTaskEnd__Execute_d__0__MoveNext(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v5; // x0
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_WaitUntil_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w8

  if ( (byte_4CB3F5B & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__);
    sub_1C6BA08(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CB3F5B = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v5 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v5 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    _9__0_0 = v5->static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__0_0, v7, Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, 0);
      static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = _9__0_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v9, v10);
    }
    v11 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v11, _9__0_0, 0);
    this->fields.__2__current = (Il2CppObject *)v11;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_IEnumerator_Reset(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_IEnumerator_get_Current(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_IDisposable_Dispose(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardWaitNonBlockingTaskEnd___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB3F59 & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
    byte_4CB3F59 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardWaitNonBlockingTaskEnd___c___ctor(WarBoardWaitNonBlockingTaskEnd___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardWaitNonBlockingTaskEnd___c___Execute_b__0_0(
        WarBoardWaitNonBlockingTaskEnd___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB3F5A & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CB3F5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0);
}