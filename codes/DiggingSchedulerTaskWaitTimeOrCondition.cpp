void __fastcall DiggingSchedulerTaskWaitTimeOrCondition___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        float waitTime,
        System_Func_bool__o *cond,
        const MethodInfo *method)
{
  DiggingSchedulerTaskWaitTimeOrCondition_o *v6; // x20

  v6 = this;
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  *(_QWORD *)&v6->fields.waitTime = cond;
  v6 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)((char *)v6 + 48);
  *((float *)&v6[-1].fields.Cond + 1) = waitTime;
  sub_1BCA784(v6, cond);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B1113E & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method, v2);
    byte_4B1113E = 1;
  }
  v5 = sub_1BCAA2C(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
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
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v5; // s0
  float espTime_5__2; // s8
  __int64 v7; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = this->fields._espTime_5__2;
    this->fields.__1__state = -1;
    v5 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._espTime_5__2 = v5;
    if ( _4__this )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
LABEL_12:
    sub_1BCAA3C(this, method);
  if ( *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) < 0.0 )
    return 0;
  this->fields._espTime_5__2 = 0.0;
  v5 = 0.0;
LABEL_7:
  if ( v5 >= *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) )
    return 0;
  v7 = *(_QWORD *)&_4__this->fields.waitTime;
  if ( v7 )
  {
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(v7 + 24))(*(_QWORD *)(v7 + 64), *(_QWORD *)(v7 + 40)) & 1) != 0 )
      return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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