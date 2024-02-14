void __fastcall WarBoardWaitNonBlockingTaskEnd___ctor(WarBoardWaitNonBlockingTaskEnd_o *this, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *v3; // x19

  if ( (byte_4215663 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method);
    byte_4215663 = 1;
  }
  v3 = (WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *)sub_B0D974(
                                                           WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo,
                                                           method,
                                                           v2);
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(v3, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v3;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v10; // x0
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *v14; // x0
  UnityEngine_WaitUntil_o *v15; // x21
  int32_t v16; // w8

  if ( (byte_4211F29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v5);
    sub_B0D8A4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_4211F29 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v16 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v10 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( (BYTE3(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v10 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__0_0 = static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, method, v2);
      System_Func_bool____ctor(
        _9__0_0,
        v13,
        Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__,
        (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
      v14 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      v14->__9__0_0 = _9__0_0;
      sub_B0D840(&v14->__9__0_0, _9__0_0);
    }
    v15 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, method, v2);
    UnityEngine_WaitUntil___ctor(v15, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_B0D840(&this->fields.__2__current, v15);
    v16 = 1;
    result = 1;
  }
  this->fields.__1__state = v16;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0

  if ( (byte_4211F27 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1);
    byte_4211F27 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211F28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4211F28 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}