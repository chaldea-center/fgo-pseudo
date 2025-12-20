void DiggingSchedulerTaskWaitTimeOrCondition___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        float waitTime,
        System_Func_bool__o *cond,
        const MethodInfo *method)
{
  DiggingSchedulerTaskWaitTimeOrCondition_o *v6; // x20

  v6 = this;
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0);
  *(_QWORD *)&v6->fields.waitTime = cond;
  v6 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)((char *)v6 + 48);
  *((float *)&v6[-1].fields.Cond + 1) = waitTime;
  sub_1C9403C(v6, cond);
}


System_Collections_IEnumerator_o *DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D26F94 & 1) == 0 )
  {
    sub_1C94098(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
    byte_4D26F94 = 1;
  }
  v3 = sub_1C942E4(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__MoveNext(
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
    v5 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0);
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
    sub_1C942F0(this, method);
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
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C(p__2__current, 0);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_IEnumerator_Reset(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_Collections_IEnumerator_get_Current(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3__System_IDisposable_Dispose(
        DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *this,
        const MethodInfo *method)
{
  ;
}