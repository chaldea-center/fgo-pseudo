void __fastcall DiggingSchedulerTaskAnimationSkippable___ctor(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Func_bool__o *skipCond,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.animation = animation;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.animation, (int32_t)animation, v9, v10);
  this->fields.animationName = animationName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.animationName, (int32_t)animationName, v11, v12);
  this->fields.SkipCond = skipCond;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SkipCond, (int32_t)skipCond, v13, v14);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskAnimationSkippable__Execute(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A02657 & 1) == 0 )
  {
    sub_1B64870(&DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo, method);
    byte_4A02657 = 1;
  }
  v3 = sub_1B64ABC(DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *SkipCond; // x8

  SkipCond = this->fields.SkipCond;
  if ( SkipCond )
    return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))SkipCond->fields.m_target)(
             SkipCond->fields.original_method_info,
             *(_QWORD *)&SkipCond->fields.extra_arg);
  else
    return 0;
}


void __fastcall DiggingSchedulerTaskAnimationSkippable__OnStart(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *SkipCond; // x8
  UnityEngine_Object_o *animation; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4A02656 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A02656 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  SkipCond = this->fields.SkipCond;
  this->fields.isStart = 0;
  if ( !SkipCond
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))SkipCond->fields.m_target)(
          SkipCond->fields.original_method_info,
          *(_QWORD *)&SkipCond->fields.extra_arg) & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      v6 = this->fields.animation;
      if ( !v6 || (UnityEngine_Animation__Rewind(v6, 0LL), (v6 = this->fields.animation) == 0LL) )
        sub_1B64ACC(v6, v5);
      if ( UnityEngine_Animation__Play_68881008(v6, this->fields.animationName, 0LL) )
        this->fields.isStart = 1;
    }
  }
}


void __fastcall DiggingSchedulerTaskAnimationSkippable__Execute_d__6___ctor(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingSchedulerTaskAnimationSkippable__Execute_d__6__MoveNext(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskAnimationSkippable_o *_4__this; // x20
  DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Func_bool__o *SkipCond; // x8
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_13:
      sub_1B64ACC(this, method);
    if ( !_4__this->fields.isStart )
      return 0;
  }
  this = (DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *)_4__this->fields.animation;
  if ( !this )
    goto LABEL_13;
  if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
    return 0;
  SkipCond = _4__this->fields.SkipCond;
  if ( SkipCond )
  {
    if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))SkipCond->fields.m_target)(
            SkipCond->fields.original_method_info,
            *(_QWORD *)&SkipCond->fields.extra_arg) & 1) != 0 )
      return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B64814(p__2__current, 0, v5, v6);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_IEnumerator_Reset(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_DiggingSchedulerTaskAnimationSkippable__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_IEnumerator_get_Current(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_IDisposable_Dispose(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}