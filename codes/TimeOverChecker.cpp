void TimeOverChecker___ctor(
        TimeOverChecker_o *this,
        System_Action_o *onFinish,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C2D434(&this->fields);
  this->fields.onFinish = onFinish;
  sub_1C2D434(&this->fields.onFinish);
}


System_Collections_IEnumerator_o *TimeOverChecker__CheckTimeOver(TimeOverChecker_o *this, const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C21486 & 1) == 0 )
  {
    sub_1C2D490(&TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
    byte_4C21486 = 1;
  }
  v3 = sub_1C2D6DC(TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


void TimeOverChecker__Start(TimeOverChecker_o *this, int64_t finishedAt, const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v6; // x1
  UnityEngine_MonoBehaviour_o *v7; // x20

  this->fields.finishedAt = finishedAt;
  TimeOverChecker__Stop(this, (const MethodInfo *)finishedAt);
  if ( this->fields.finishedAt )
  {
    monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
    if ( !monoBehaviour )
      goto LABEL_7;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0) )
    {
      v7 = this->fields.monoBehaviour;
      monoBehaviour = TimeOverChecker__CheckTimeOver(this, v6);
      if ( v7 )
      {
        this->fields.coroutine = UnityEngine_MonoBehaviour__StartCoroutine_71149276(v7, monoBehaviour, 0);
        sub_1C2D434(&this->fields.coroutine);
        return;
      }
LABEL_7:
      sub_1C2D6EC(monoBehaviour, v4);
    }
  }
}


void TimeOverChecker__Stop(TimeOverChecker_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  struct UnityEngine_Coroutine_o **p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0

  p_coroutine = &this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C2D6EC(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71149896(monoBehaviour, coroutine, 0);
    *p_coroutine = 0;
    sub_1C2D434(p_coroutine);
  }
}


void TimeOverChecker__CheckTimeOver_d__7___ctor(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TimeOverChecker__CheckTimeOver_d__7__MoveNext(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  TimeOverChecker__CheckTimeOver_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct TimeOverChecker_o *_4__this; // x21
  UnityEngine_WaitForSeconds_o *v5; // x20
  __int64 finishedAt; // x20
  struct System_Action_o *onFinish; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4C21487 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C21487 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
    if ( !_4__this->fields.onFinish )
      return 0;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 1.0, 0);
    v2->fields._waitTime_5__2 = v5;
    sub_1C2D434(&v2->fields._waitTime_5__2);
  }
  finishedAt = _4__this->fields.finishedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (TimeOverChecker__CheckTimeOver_d__7_o *)NetworkManager__getTime(0);
  if ( finishedAt < (__int64)this )
  {
    onFinish = _4__this->fields.onFinish;
    if ( onFinish )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinish->fields.invoke_impl)(
        onFinish->fields.method_code,
        onFinish->fields.method);
      return 0;
    }
LABEL_16:
    sub_1C2D6EC(this, method);
  }
  v2->fields.__2__current = (Il2CppObject *)v2->fields._waitTime_5__2;
  p__2__current = &v2->fields.__2__current;
  sub_1C2D434(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *TimeOverChecker__CheckTimeOver_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TimeOverChecker__CheckTimeOver_d__7__System_Collections_IEnumerator_Reset(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_TimeOverChecker__CheckTimeOver_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *TimeOverChecker__CheckTimeOver_d__7__System_Collections_IEnumerator_get_Current(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TimeOverChecker__CheckTimeOver_d__7__System_IDisposable_Dispose(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  ;
}