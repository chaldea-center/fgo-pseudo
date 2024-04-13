void __fastcall WarBoardWaitNonBlockingTaskEnd___ctor(WarBoardWaitNonBlockingTaskEnd_o *this, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *v4; // x19

  if ( (byte_42E9354 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9354 = 1;
  }
  v4 = (WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *)sub_B5D694(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(v4, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardWaitNonBlockingTaskEnd__Execute_d__0__MoveNext(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v19; // x0
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *v23; // x0
  UnityEngine_WaitUntil_o *v24; // x21
  int32_t v25; // w8

  if ( (byte_42E5FE7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v8, v9, v10);
    sub_B5D5C4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42E5FE7 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v25 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v19 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( (BYTE3(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v19 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__0_0 = static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__0_0,
        v22,
        Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v23 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      v23->__9__0_0 = _9__0_0;
      sub_B5D560(&v23->__9__0_0);
    }
    v24 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v24, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v24;
    sub_B5D560(&this->fields.__2__current);
    v25 = 1;
    result = 1;
  }
  this->fields.__1__state = v25;
  return result;
}


Il2CppObject *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_IEnumerator_Reset(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_Collections_IEnumerator_get_Current(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardWaitNonBlockingTaskEnd__Execute_d__0__System_IDisposable_Dispose(
        WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardWaitNonBlockingTaskEnd___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FE5 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1, v2, v3);
    byte_42E5FE5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarBoardWaitNonBlockingTaskEnd___c___ctor(
        WarBoardWaitNonBlockingTaskEnd___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardWaitNonBlockingTaskEnd___c___Execute_b__0_0(
        WarBoardWaitNonBlockingTaskEnd___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5FE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5FE6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}