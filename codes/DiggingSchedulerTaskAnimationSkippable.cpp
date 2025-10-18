void DiggingSchedulerTaskAnimationSkippable___ctor(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Func_bool__o *skipCond,
        const MethodInfo *method)
{
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0);
  this->fields.animation = animation;
  sub_1C36FFC(&this->fields.animation, animation);
  this->fields.animationName = animationName;
  sub_1C36FFC(&this->fields.animationName, animationName);
  this->fields.SkipCond = skipCond;
  sub_1C36FFC(&this->fields.SkipCond, skipCond);
}


System_Collections_IEnumerator_o *DiggingSchedulerTaskAnimationSkippable__Execute(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C3D7AE & 1) == 0 )
  {
    sub_1C37058(&DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
    byte_4C3D7AE = 1;
  }
  v3 = sub_1C372A4(DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *SkipCond; // x8

  SkipCond = this->fields.SkipCond;
  if ( SkipCond )
    return ((__int64 (__fastcall *)(intptr_t, intptr_t))SkipCond->fields.invoke_impl)(
             SkipCond->fields.method_code,
             SkipCond->fields.method);
  else
    return 0;
}


void DiggingSchedulerTaskAnimationSkippable__OnStart(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *SkipCond; // x8
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_4C3D7AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D7AD = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0);
  SkipCond = this->fields.SkipCond;
  this->fields.isStart = 0;
  if ( !SkipCond
    || (((__int64 (__fastcall *)(intptr_t, intptr_t))SkipCond->fields.invoke_impl)(
          SkipCond->fields.method_code,
          SkipCond->fields.method)
      & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
    {
      v5 = this->fields.animation;
      if ( !v5 || (UnityEngine_Animation__Rewind(v5, 0), (v5 = this->fields.animation) == 0) )
        sub_1C372B4(v5);
      if ( UnityEngine_Animation__Play_71012036(v5, this->fields.animationName, 0) )
        this->fields.isStart = 1;
    }
  }
}


void DiggingSchedulerTaskAnimationSkippable__Execute_d__6___ctor(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingSchedulerTaskAnimationSkippable__Execute_d__6__MoveNext(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DiggingSchedulerTaskAnimationSkippable_o *_4__this; // x20
  DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *v4; // x19
  struct System_Func_bool__o *SkipCond; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

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
      sub_1C372B4(this);
    if ( !_4__this->fields.isStart )
      return 0;
  }
  this = (DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *)_4__this->fields.animation;
  if ( !this )
    goto LABEL_13;
  if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
    return 0;
  SkipCond = _4__this->fields.SkipCond;
  if ( SkipCond )
  {
    if ( (((__int64 (__fastcall *)(intptr_t, intptr_t))SkipCond->fields.invoke_impl)(
            SkipCond->fields.method_code,
            SkipCond->fields.method)
        & 1) != 0 )
      return 0;
  }
  v4->fields.__2__current = 0;
  p__2__current = &v4->fields.__2__current;
  sub_1C36FFC(p__2__current, 0);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_IEnumerator_Reset(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_DiggingSchedulerTaskAnimationSkippable__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_Collections_IEnumerator_get_Current(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingSchedulerTaskAnimationSkippable__Execute_d__6__System_IDisposable_Dispose(
        DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}