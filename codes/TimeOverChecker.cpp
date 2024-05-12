void __fastcall TimeOverChecker___ctor(
        TimeOverChecker_o *this,
        System_Action_o *onFinish,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B77560(&this->fields);
  this->fields.onFinish = onFinish;
  sub_B77560(&this->fields.onFinish);
}


System_Collections_IEnumerator_o *__fastcall TimeOverChecker__CheckTimeOver(
        TimeOverChecker_o *this,
        const MethodInfo *method)
{
  TimeOverChecker__CheckTimeOver_d__7_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4387A56 & 1) == 0 )
  {
    sub_B775C4(&TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
    byte_4387A56 = 1;
  }
  v3 = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_B77694(TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
  TimeOverChecker__CheckTimeOver_d__7___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v3->fields.__4__this = this;
  sub_B77560(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TimeOverChecker__Start(TimeOverChecker_o *this, int64_t finishedAt, const MethodInfo *method)
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
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
    {
      v7 = this->fields.monoBehaviour;
      monoBehaviour = TimeOverChecker__CheckTimeOver(this, v6);
      if ( v7 )
      {
        this->fields.coroutine = UnityEngine_MonoBehaviour__StartCoroutine_36304832(v7, monoBehaviour, 0LL);
        sub_B77560(&this->fields.coroutine);
        return;
      }
LABEL_7:
      sub_B7769C(monoBehaviour, v4);
    }
  }
}


void __fastcall TimeOverChecker__Stop(TimeOverChecker_o *this, const MethodInfo *method)
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
      sub_B7769C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_36305500(monoBehaviour, coroutine, 0LL);
    *p_coroutine = 0LL;
    sub_B77560(p_coroutine);
  }
}


void __fastcall TimeOverChecker__CheckTimeOver_d__7___ctor(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TimeOverChecker__CheckTimeOver_d__7__MoveNext(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  TimeOverChecker__CheckTimeOver_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct TimeOverChecker_o *_4__this; // x21
  UnityEngine_WaitForSeconds_o *v5; // x20
  int64_t finishedAt; // x20
  bool result; // w0

  v2 = this;
  if ( (byte_438873A & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_438873A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_17;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_17;
    if ( !_4__this->fields.onFinish )
      return 0;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 1.0, 0LL);
    v2->fields._waitTime_5__2 = v5;
    sub_B77560(&v2->fields._waitTime_5__2);
  }
  finishedAt = _4__this->fields.finishedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( finishedAt < NetworkManager__getTime(0LL) )
  {
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)_4__this->fields.onFinish;
    if ( this )
    {
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    }
LABEL_17:
    sub_B7769C(this, method);
  }
  v2->fields.__2__current = (Il2CppObject *)v2->fields._waitTime_5__2;
  sub_B77560(&v2->fields.__2__current);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall TimeOverChecker__CheckTimeOver_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TimeOverChecker__CheckTimeOver_d__7__System_Collections_IEnumerator_Reset(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_TimeOverChecker__CheckTimeOver_d__7_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall TimeOverChecker__CheckTimeOver_d__7__System_Collections_IEnumerator_get_Current(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TimeOverChecker__CheckTimeOver_d__7__System_IDisposable_Dispose(
        TimeOverChecker__CheckTimeOver_d__7_o *this,
        const MethodInfo *method)
{
  ;
}