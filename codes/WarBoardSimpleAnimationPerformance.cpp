void WarBoardSimpleAnimationPerformance___ctor(
        WarBoardSimpleAnimationPerformance_o *this,
        SimpleAnimation_o *animation,
        System_String_o *animationName,
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

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)animation);
  this->fields.animation = animation;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animation,
    (int32_t)animation,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.animationName = animationName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationName,
    (int32_t)animationName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_IEnumerator_o *WarBoardSimpleAnimationPerformance__Execute(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593625D & 1) == 0 )
  {
    sub_21FFC50(&WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
    byte_593625D = 1;
  }
  v3 = sub_21FFEBC(WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardSimpleAnimationPerformance__OnEnd(WarBoardSimpleAnimationPerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardSimpleAnimationPerformance__OnStart(WarBoardSimpleAnimationPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0

  if ( (byte_593625C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593625C = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  v5 = UnityEngine_Object_TypeInfo;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  this->fields.isStart = 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, method, v2);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    v8 = this->fields.animation;
    if ( !v8 || (SimpleAnimation__Rewind(v8, 0), (v8 = this->fields.animation) == 0) )
      sub_21FFECC(v8, v7);
    if ( SimpleAnimation__Play_78338864(v8, this->fields.animationName, 0) )
      this->fields.isStart = 1;
  }
}


bool WarBoardSimpleAnimationPerformance___Execute_b__5_0(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_21FFECC(0, method);
  return !SimpleAnimation__CheckPlaying(animation, 0) || this->fields.IsForceEnd;
}


void WarBoardSimpleAnimationPerformance__Execute_d__5___ctor(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardSimpleAnimationPerformance__Execute_d__5__MoveNext(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardSimpleAnimationPerformance_o *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8

  if ( (byte_593625E & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__);
    byte_593625E = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    if ( !_4__this->fields.isStart )
      return 0;
    v6 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v6,
      (Il2CppObject *)_4__this,
      Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
      0);
    v7 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_Reset(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardSimpleAnimationPerformance__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardSimpleAnimationPerformance__Execute_d__5__System_IDisposable_Dispose(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  ;
}