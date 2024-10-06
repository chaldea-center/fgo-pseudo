System_Collections_IEnumerator_o *__fastcall WarBoardWaitNonBlockingTaskEnd__Execute(
        WarBoardWaitNonBlockingTaskEnd_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A6DE19 & 1) == 0 )
  {
    sub_1B90010(&WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo, method);
    byte_4A6DE19 = 1;
  }
  v2 = sub_1B9025C(WarBoardWaitNonBlockingTaskEnd__Execute_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
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
  int32_t _1__state; // w8
  bool result; // w0
  WarBoardWaitNonBlockingTaskEnd___c_c *v8; // x0
  System_Func_bool__o *_9__0_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardWaitNonBlockingTaskEnd___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_WaitUntil_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w8

  if ( (byte_4A6DE1C & 1) == 0 )
  {
    sub_1B90010(&System_Func_bool__TypeInfo, method);
    sub_1B90010(&Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, v3);
    sub_1B90010(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v4);
    sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A6DE1C = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v17 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v8 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    if ( !WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
      v8 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
    }
    _9__0_0 = v8->static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__0_0 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__0_0, v10, Method_WarBoardWaitNonBlockingTaskEnd___c__Execute_b__0_0__, 0LL);
      static_fields = WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = _9__0_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v12, v13);
    }
    v14 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v14, _9__0_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v14;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v14, v15, v16);
    v17 = 1;
    result = 1;
  }
  this->fields.__1__state = v17;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_WarBoardWaitNonBlockingTaskEnd__Execute_d__0_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6DE1A & 1) == 0 )
  {
    sub_1B90010(&WarBoardWaitNonBlockingTaskEnd___c_TypeInfo, v1);
    byte_4A6DE1A = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarBoardWaitNonBlockingTaskEnd___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields->__9 = (struct WarBoardWaitNonBlockingTaskEnd___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)WarBoardWaitNonBlockingTaskEnd___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v3; // x1

  if ( (byte_4A6DE1B & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A6DE1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v3);
  return WarBoardManager__IsNonBlockTaskEnmpty((WarBoardManager_o *)Instance, 0LL);
}