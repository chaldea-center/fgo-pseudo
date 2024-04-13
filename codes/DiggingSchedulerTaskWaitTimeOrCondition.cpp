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
  sub_B5D560((BattleServantConfConponent_o *)v6, (System_Int32_array **)cond, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA9B3 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9B3 = 1;
  }
  v5 = sub_B5D694(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
  DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3___ctor(
    (DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *v4; // x19
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v7; // s0
  float espTime_5__2; // s8
  System_Func_bool__o *v9; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E64C4 & 1) == 0 )
  {
    this = (DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *)sub_B5D5C4(
                                                                        &Method_System_Func_bool__Invoke__,
                                                                        (_DWORD)method,
                                                                        v2,
                                                                        v3);
    byte_42E64C4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = v4->fields._espTime_5__2;
    v4->fields.__1__state = -1;
    v7 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v4->fields._espTime_5__2 = v7;
    if ( _4__this )
      goto LABEL_9;
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
LABEL_14:
    sub_B5D69C(this, method);
  if ( *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) < 0.0 )
    return 0;
  v4->fields._espTime_5__2 = 0.0;
  v7 = 0.0;
LABEL_9:
  if ( v7 >= *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) )
    return 0;
  v9 = *(System_Func_bool__o **)&_4__this->fields.waitTime;
  if ( v9 )
  {
    if ( System_Func_bool___Invoke(v9, (const MethodInfo_278D9D8 *)Method_System_Func_bool__Invoke__) )
      return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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