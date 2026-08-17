void DiggingSchedulerTaskAnimationSkippable___ctor(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Func_bool__o *skipCond,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0);
  this->fields.animation = animation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animation,
    (int32_t)animation,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.animationName = animationName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationName,
    (int32_t)animationName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.SkipCond = skipCond;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SkipCond,
    (int32_t)skipCond,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_IEnumerator_o *DiggingSchedulerTaskAnimationSkippable__Execute(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596AAAD & 1) == 0 )
  {
    sub_2213A60(&DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
    byte_596AAAD = 1;
  }
  v3 = sub_2213CCC(DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Func_bool__o *SkipCond; // x8
  UnityEngine_Object_o *animation; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *v8; // x0

  if ( (byte_596AAAC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AAAC = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
    {
      v8 = this->fields.animation;
      if ( !v8 || (UnityEngine_Animation__Rewind(v8, 0), (v8 = this->fields.animation) == 0) )
        sub_2213CDC(v8, v7);
      if ( UnityEngine_Animation__Play_83078544(v8, this->fields.animationName, 0) )
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Func_bool__o *SkipCond; // x8
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

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
      sub_2213CDC(this, method);
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
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
  sub_2213A04(p__2__current, 0, v5, v6, v7, v8, v9, v10);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingSchedulerTaskAnimationSkippable__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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