void TimeOverChecker___ctor(
        TimeOverChecker_o *this,
        System_Action_o *onFinish,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)monoBehaviour, v7, v8, v9, v10, v11, v12);
  this->fields.onFinish = onFinish;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onFinish,
    (int32_t)onFinish,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_IEnumerator_o *TimeOverChecker__CheckTimeOver(TimeOverChecker_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A45D & 1) == 0 )
  {
    sub_2213A60(&TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
    byte_596A45D = 1;
  }
  v3 = sub_2213CCC(TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void TimeOverChecker__Start(TimeOverChecker_o *this, int64_t finishedAt, const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v6; // x1
  UnityEngine_MonoBehaviour_o *v7; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

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
        started = UnityEngine_MonoBehaviour__StartCoroutine_83444756(v7, monoBehaviour, 0);
        this->fields.coroutine = started;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine,
          (int32_t)started,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        return;
      }
LABEL_7:
      sub_2213CDC(monoBehaviour, v4);
    }
  }
}


void TimeOverChecker__Stop(TimeOverChecker_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  MissionNaviTransitionBoardItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_coroutine = (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_2213CDC(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_83445360(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_2213A04(p_coroutine, 0, v5, v6, v7, v8, v9, v10);
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
  __int64 v2; // x2
  TimeOverChecker__CheckTimeOver_d__7_o *v3; // x19
  int32_t _1__state; // w8
  struct TimeOverChecker_o *_4__this; // x21
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 finishedAt; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *onFinish; // x8
  Il2CppObject *waitTime_5__2; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v3 = this;
  if ( (byte_596A45E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A45E = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
    if ( !_4__this->fields.onFinish )
      return 0;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 1.0, 0);
    v3->fields._waitTime_5__2 = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._waitTime_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  finishedAt = _4__this->fields.finishedAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
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
    sub_2213CDC(this, method);
  }
  waitTime_5__2 = (Il2CppObject *)v3->fields._waitTime_5__2;
  v3->fields.__2__current = waitTime_5__2;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(p__2__current, (int32_t)waitTime_5__2, v14, v15, v16, v17, v18, v19);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TimeOverChecker__CheckTimeOver_d__7_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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