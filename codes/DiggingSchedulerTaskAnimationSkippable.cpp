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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)animation,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.animationName = animationName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)animationName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.SkipCond = skipCond;
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBCD4 & 1) == 0 )
  {
    sub_B16FFC(&DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo, method);
    byte_40FBCD4 = 1;
  }
  v6 = sub_B170CC(DiggingSchedulerTaskAnimationSkippable__Execute_d__6_TypeInfo, method, v2, v3, v4);
  DiggingSchedulerTaskAnimationSkippable__Execute_d__6___ctor(
    (DiggingSchedulerTaskAnimationSkippable__Execute_d__6_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  System_Func_bool__o *SkipCond; // x0

  if ( (byte_40FBCD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool__Invoke__, method);
    byte_40FBCD5 = 1;
  }
  SkipCond = this->fields.SkipCond;
  if ( SkipCond )
    LOBYTE(SkipCond) = System_Func_bool___Invoke(
                         SkipCond,
                         (const MethodInfo_284E7E4 *)Method_System_Func_bool__Invoke__);
  return (char)SkipCond;
}


void __fastcall DiggingSchedulerTaskAnimationSkippable__OnStart(
        DiggingSchedulerTaskAnimationSkippable_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v5; // x0
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_40FBCD3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBCD3 = 1;
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
      v5 = this->fields.animation;
      if ( !v5 || (UnityEngine_Animation__Rewind(v5, 0LL), (v6 = this->fields.animation) == 0LL) )
        sub_B170D4();
      if ( UnityEngine_Animation__Play_49744236(v6, this->fields.animationName, 0LL) )
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
  UnityEngine_Animation_o *animation; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
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
      sub_B170D4();
    if ( !_4__this->fields.isStart )
      return 0;
  }
  animation = _4__this->fields.animation;
  if ( !animation )
    goto LABEL_12;
  if ( !UnityEngine_Animation__get_isPlaying(animation, 0LL)
    || DiggingSchedulerTaskAnimationSkippable__IsSkipCondSatisfied(_4__this, 0LL) )
  {
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v6, v7, v8, v9, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DiggingSchedulerTaskAnimationSkippable__Execute_d__6_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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