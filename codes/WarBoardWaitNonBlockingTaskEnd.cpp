void __fastcall WarBoardWaitNonBlockingTaskEnd___ctor(WarBoardWaitNonBlockingTaskEnd_o *this, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *v2; // x19

  if ( (byte_41888F8 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method);
    byte_41888F8 = 1;
  }
  v2 = (WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *)sub_B2C42C(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v9; // x0
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *v13; // x0
  UnityEngine_WaitUntil_o *v14; // x21
  int32_t v15; // w8

  if ( (byte_4185552 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v4);
    sub_B2C35C(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4185552 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v15 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( (BYTE3(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__0_0 = static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__0_0,
        v12,
        Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v13 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      v13->__9__0_0 = _9__0_0;
      sub_B2C2F8(&v13->__9__0_0, _9__0_0);
    }
    v14 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v14, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v14;
    sub_B2C2F8(&this->fields.__2__current, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0

  if ( (byte_4185550 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1);
    byte_4185550 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185551 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4185551 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}