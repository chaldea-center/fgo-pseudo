void __fastcall WarBoardWaitNonBlockingTaskEnd___ctor(WarBoardWaitNonBlockingTaskEnd_o *this, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *v2; // x19

  if ( (byte_438BDF7 & 1) == 0 )
  {
    sub_B775C4(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
    byte_438BDF7 = 1;
  }
  v2 = (WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *)sub_B77694(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
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
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v5; // x0
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_WaitUntil_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t v23; // w8

  if ( (byte_438929B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__);
    sub_B775C4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    byte_438929B = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v23 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v5 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( (BYTE3(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v5 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__0_0 = static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__0_0,
        v8,
        Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__,
        (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
      v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      v9->__9__0_0 = _9__0_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v16, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = 1;
    result = 1;
  }
  this->fields.__1__state = v23;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389299 & 1) == 0 )
  {
    sub_B775C4(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
    byte_4389299 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438929A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438929A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}