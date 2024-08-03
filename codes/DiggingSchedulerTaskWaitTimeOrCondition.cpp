void __fastcall DiggingSchedulerTaskWaitTimeOrCondition___ctor(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        float waitTime,
        System_Func_bool__o *cond,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = (ServantStatusBattleListViewItem_o *)this;
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  v6->fields.sortValue1 = (int64_t)cond;
  v6 = (ServantStatusBattleListViewItem_o *)((char *)v6 + 48);
  *((float *)&v6[-1].fields.isMine + 1) = waitTime;
  sub_1B6406C(v6, (int32_t)cond, v7, v8);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00556 & 1) == 0 )
  {
    sub_1B640C8(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method);
    byte_4A00556 = 1;
  }
  v4 = sub_1B64314(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v7; // s0
  float espTime_5__2; // s8
  __int64 v9; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = this->fields._espTime_5__2;
    this->fields.__1__state = -1;
    v7 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._espTime_5__2 = v7;
    if ( _4__this )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
LABEL_12:
    sub_1B64324(this);
  if ( *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) < 0.0 )
    return 0;
  this->fields._espTime_5__2 = 0.0;
  v7 = 0.0;
LABEL_7:
  if ( v7 >= *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) )
    return 0;
  v9 = *(_QWORD *)&_4__this->fields.waitTime;
  if ( v9 )
  {
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 24))(*(_QWORD *)(v9 + 64), *(_QWORD *)(v9 + 40)) & 1) != 0 )
      return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v2, v3);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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