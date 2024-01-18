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
  sub_B2C2F8((BattleServantConfConponent_o *)v6, (System_Int32_array **)cond, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskWaitTimeOrCondition__Execute(
        DiggingSchedulerTaskWaitTimeOrCondition_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418946E & 1) == 0 )
  {
    sub_B2C35C(&DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo, method);
    byte_418946E = 1;
  }
  v3 = sub_B2C42C(DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_TypeInfo);
  DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3___ctor(
    (DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *v8; // x19
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskWaitTimeOrCondition_o *_4__this; // x20
  float v11; // s0
  float espTime_5__2; // s8
  System_Func_bool__o *v13; // x0
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19

  v8 = this;
  if ( (byte_41864FD & 1) == 0 )
  {
    this = (DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_o *)sub_B2C35C(
                                                                        &Method_System_Func_bool__Invoke__,
                                                                        method);
    byte_41864FD = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    espTime_5__2 = v8->fields._espTime_5__2;
    v8->fields.__1__state = -1;
    v11 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v8->fields._espTime_5__2 = v11;
    if ( _4__this )
      goto LABEL_9;
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_14:
    sub_B2C434(this, method);
  if ( *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) < 0.0 )
    return 0;
  v8->fields._espTime_5__2 = 0.0;
  v11 = 0.0;
LABEL_9:
  if ( v11 >= *(float *)(&_4__this->fields._IsPause_k__BackingField + 3) )
    return 0;
  v13 = *(System_Func_bool__o **)&_4__this->fields.waitTime;
  if ( v13 )
  {
    if ( System_Func_bool___Invoke(v13, (const MethodInfo_26FE90C *)Method_System_Func_bool__Invoke__) )
      return 0;
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingSchedulerTaskWaitTimeOrCondition__Execute_d__3_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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