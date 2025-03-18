void __fastcall TimeOverChecker___ctor(
        TimeOverChecker_o *this,
        System_Action_o *onFinish,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)monoBehaviour, v7, v8, v9, v10, v11, v12);
  this->fields.onFinish = onFinish;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onFinish, (int64_t)onFinish, v13, v14, v15, v16, v17, v18);
}


System_Collections_IEnumerator_o *__fastcall TimeOverChecker__CheckTimeOver(
        TimeOverChecker_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C25E4D & 1) == 0 )
  {
    sub_1C3B764(&TimeOverChecker__CheckTimeOver_d__7_TypeInfo, method);
    byte_4C25E4D = 1;
  }
  v3 = sub_1C3B9B0(TimeOverChecker__CheckTimeOver_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TimeOverChecker__Start(TimeOverChecker_o *this, int64_t finishedAt, const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v6; // x1
  UnityEngine_MonoBehaviour_o *v7; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

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
        started = UnityEngine_MonoBehaviour__StartCoroutine_71108020(v7, monoBehaviour, 0LL);
        this->fields.coroutine = started;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.coroutine,
          (int64_t)started,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        return;
      }
LABEL_7:
      sub_1C3B9C0(monoBehaviour, v4);
    }
  }
}


void __fastcall TimeOverChecker__Stop(TimeOverChecker_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  PartyOrganizationUtility_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_coroutine = (PartyOrganizationUtility_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C3B9C0(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71108640(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1C3B708(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 finishedAt; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Action_o *onFinish; // x8
  bool result; // w0
  int64_t waitTime_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4C25E4E & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    this = (TimeOverChecker__CheckTimeOver_d__7_o *)sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4C25E4E = 1;
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
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 1.0, 0LL);
    v2->fields._waitTime_5__2 = v6;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields._waitTime_5__2, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
    sub_1C3B9C0(this, method);
  }
  waitTime_5__2 = (int64_t)v2->fields._waitTime_5__2;
  v2->fields.__2__current = (Il2CppObject *)waitTime_5__2;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, waitTime_5__2, v14, v15, v16, v17, v18, v19);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TimeOverChecker__CheckTimeOver_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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