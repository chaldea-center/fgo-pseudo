void __fastcall DiggingSchedulerTaskWaitTimeOrCondition___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        float waitTime,
        System_Func_bool__o *cond,
        const MethodInfo *method)
{
  DiggingSchedulerTaskWaitTimeOrCondition_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  *(_QWORD *)&v6->fields.waitTime = cond;
  v6 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)((char *)v6 + 48);
  *((float *)&v6[-1].fields.Cond + 1) = waitTime;
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)cond, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBCD6 & 1) == 0 )
  {
    sub_B16FFC(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method);
    byte_40FBCD6 = 1;
  }
  v6 = sub_B170CC(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method, v2, v3, v4);
  DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3___ctor(
    (DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__MoveNext(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v11; // s0
  float espTime_5__2; // s8
  System_Func_bool__o *v13; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F8B6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool__Invoke__, method);
    byte_40F8B6C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = this->fields._espTime_5__2;
    this->fields.__1__state = -1;
    v11 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._espTime_5__2 = v11;
    if ( _4__this )
      goto LABEL_9;
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
LABEL_14:
    sub_B170D4();
  if ( *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) < 0.0 )
    return 0;
  this->fields._espTime_5__2 = 0.0;
  v11 = 0.0;
LABEL_9:
  if ( v11 >= *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) )
    return 0;
  v13 = *(System_Func_bool__o **)&_4__this->fields.waitTime;
  if ( v13 )
  {
    if ( System_Func_bool___Invoke(v13, (const MethodInfo_284E7E4 *)Method_System_Func_bool__Invoke__) )
      return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_IEnumerator_Reset(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
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
  sub_B17000(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_IEnumerator_get_Current(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_IDisposable_Dispose(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  ;
}