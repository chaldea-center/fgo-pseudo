System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x19

  if ( (byte_49FA357 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method);
    byte_49FA357 = 1;
  }
  v3 = sub_1B64314(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
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
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v9; // x0
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_WaitUntil_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w8

  if ( (byte_49FA35A & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v4);
    sub_1B640C8(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_49FA35A = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v18 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    _9__0_0 = v9->static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
      System_Func_bool____ctor(_9__0_0, v11, Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, 0LL);
      static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = _9__0_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v13, v14);
    }
    v15 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, method, v2);
    UnityEngine_WaitUntil___ctor(v15, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v15, v16, v17);
    v18 = 1;
    result = 1;
  }
  this->fields.__1__state = v18;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA358 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1);
    byte_49FA358 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FA359 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA359 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}