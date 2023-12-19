void __fastcall WarBoardWaitNonBlockingTaskEnd___ctor(WarBoardWaitNonBlockingTaskEnd_o *this, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *v5; // x19

  if ( (byte_40FA91A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method);
    byte_40FA91A = 1;
  }
  v5 = (WarBoardWaitNonBlockingTaskEnd__Execute_d__0_o *)sub_B170CC(
                                                           WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo,
                                                           method,
                                                           v2,
                                                           v3,
                                                           v4);
  WarBoardWaitNonBlockingTaskEnd__Execute_d__0___ctor(v5, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v12; // x0
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_WaitUntil_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w8

  if ( (byte_40F788C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v7);
    sub_B16FFC(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_40F788C = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v30 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v12 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( (BYTE3(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v12 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__0_0 = static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
      System_Func_bool____ctor(
        _9__0_0,
        v15,
        Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v16 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      v16->__9__0_0 = _9__0_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v16->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitUntil___ctor(v23, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v23;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = 1;
    result = 1;
  }
  this->fields.__1__state = v30;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F788A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1);
    byte_40F788A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F788B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F788B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}