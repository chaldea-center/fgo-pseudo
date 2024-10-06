void __fastcall TimeOverChecker___ctor(
        TimeOverChecker_o *this,
        System_Action_o *onFinish,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)monoBehaviour, v7, v8);
  this->fields.onFinish = onFinish;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onFinish, (int32_t)onFinish, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall TimeOverChecker__CheckTimeOver(
        TimeOverChecker_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A73ADD & 1) == 0 )
  {
    sub_1B90010(&TimeOverChecker__CheckTimeOver_d__7_TypeInfo, method);
    byte_4A73ADD = 1;
  }
  v3 = sub_1B9025C(TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TimeOverChecker__Start(TimeOverChecker_o *this, int64_t finishedAt, const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v6; // x1
  UnityEngine_MonoBehaviour_o *v7; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v9; // w2
  int32_t v10; // w3

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
        started = UnityEngine_MonoBehaviour__StartCoroutine_69524712(v7, monoBehaviour, 0LL);
        this->fields.coroutine = started;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v9, v10);
        return;
      }
LABEL_7:
      sub_1B9026C(monoBehaviour, v4);
    }
  }
}


void __fastcall TimeOverChecker__Stop(TimeOverChecker_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  ServantStatusBattleListViewItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_coroutine = (ServantStatusBattleListViewItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1B9026C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_69525332(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1B8FFB4(p_coroutine, 0, v5, v6);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct TimeOverChecker_o *_4__this; // x21
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 finishedAt; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Action_o *onFinish; // x8
  bool result; // w0
  Il2CppObject *waitTime_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4A73ADE & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_1B90010(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4A73ADE = 1;
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
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B9025C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 1.0, 0LL);
    v2->fields._waitTime_5__2 = v6;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields._waitTime_5__2, (int32_t)v6, v7, v8);
  }
  finishedAt = _4__this->fields.finishedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (TimeOverChecker__CheckTimeOver_d__7_o *)NetworkManager__getTime(0LL);
  if ( finishedAt < (__int64)this )
  {
    onFinish = _4__this->fields.onFinish;
    if ( onFinish )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFinish->fields.m_target)(
        onFinish->fields.original_method_info,
        *(_QWORD *)&onFinish->fields.extra_arg);
      return 0;
    }
LABEL_16:
    sub_1B9026C(this, method);
  }
  waitTime_5__2 = (Il2CppObject *)v2->fields._waitTime_5__2;
  v2->fields.__2__current = waitTime_5__2;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B8FFB4(p__2__current, (int32_t)waitTime_5__2, v10, v11);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_TimeOverChecker__CheckTimeOver_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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