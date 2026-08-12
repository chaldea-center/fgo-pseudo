void DiggingSchedulerTaskWaitTimeOrCondition___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        float waitTime,
        System_Func_bool__o *cond,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0);
  *(_QWORD *)&this->fields.waitTime = cond;
  *(float *)(&this->fields._IsPause_k__BackingField + 3) = waitTime;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.waitTime, (int32_t)cond, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596AAAE & 1) == 0 )
  {
    sub_2213A60(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
    byte_596AAAE = 1;
  }
  v3 = sub_2213CCC(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v11; // s0
  float v12; // s1
  float espTime_5__2; // s8
  __int64 v14; // x8
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = this->fields._espTime_5__2;
    this->fields.__1__state = -1;
    v12 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields._espTime_5__2 = v12;
    if ( _4__this )
    {
      v11 = *(float *)(&_4__this->fields._IsPause_k__BackingField + 3);
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
LABEL_13:
    sub_2213CDC(this, method);
  v11 = *(float *)(&_4__this->fields._IsPause_k__BackingField + 3);
  if ( v11 < 0.0 )
    return 0;
  v12 = 0.0;
  this->fields._espTime_5__2 = 0.0;
LABEL_8:
  if ( v12 >= v11 )
    return 0;
  v14 = *(_QWORD *)&_4__this->fields.waitTime;
  if ( v14 )
  {
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(v14 + 24))(*(_QWORD *)(v14 + 64), *(_QWORD *)(v14 + 40)) & 1) != 0 )
      return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p__2__current - 2) = 1;
  return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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