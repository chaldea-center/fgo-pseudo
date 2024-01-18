void __fastcall DiggingSchedulerTaskAnimationSkippable___ctor(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Func_bool__o *skipCond,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.animation = animation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)animation,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.animationName = animationName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)animationName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.SkipCond = skipCond;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SkipCond,
    (System_Int32_array **)skipCond,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_IEnumerator_o *__fastcall DiggingSchedulerTaskAnimationSkippable__Execute(
        DiggingSchedulerTaskAnimationSkippable_o *this,
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

  if ( (byte_418946C & 1) == 0 )
  {
    sub_B2C35C(&DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo, method);
    byte_418946C = 1;
  }
  v3 = sub_B2C42C(DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo);
  DiggingSchedulerTaskAnimationSkippable__Execute_d__6___ctor(
    (DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  System_Func_bool__o *SkipCond; // x0

  if ( (byte_418946D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool__Invoke__, method);
    byte_418946D = 1;
  }
  SkipCond = this->fields.SkipCond;
  if ( SkipCond )
    LOBYTE(SkipCond) = System_Func_bool___Invoke(
                         SkipCond,
                         (const MethodInfo_26FE90C *)Method_System_Func_bool__Invoke__);
  return (char)SkipCond;
}


void __fastcall DiggingSchedulerTaskAnimationSkippable__OnStart(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *animation; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_418946B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418946B = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.isStart = 0;
  if ( !DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(this, v3) )
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      v6 = this->fields.animation;
      if ( !v6 || (UnityEngine_Animation__Rewind(v6, 0LL), (v6 = this->fields.animation) == 0LL) )
        sub_B2C434(v6, v5);
      if ( UnityEngine_Animation__Play_50201580(v6, this->fields.animationName, 0LL) )
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_12:
      sub_B2C434(this, method);
    if ( !_4__this->fields.isStart )
      return 0;
  }
  this = (DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *)_4__this->fields.animation;
  if ( !this )
    goto LABEL_12;
  if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL)
    || DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(_4__this, 0LL) )
  {
    return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingSchedulerTaskAnimationSkippable__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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