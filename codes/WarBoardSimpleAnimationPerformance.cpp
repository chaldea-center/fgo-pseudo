void __fastcall WarBoardSimpleAnimationPerformance___ctor(
        WarBoardSimpleAnimationPerformance_o *this,
        SimpleAnimation_o *animation,
        System_String_o *animationName,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)animation);
  this->fields.animation = animation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)animation,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.animationName = animationName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)animationName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_IEnumerator_o *__fastcall WarBoardSimpleAnimationPerformance__Execute(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAB7C & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB7C = 1;
  }
  v5 = sub_B5D694(WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
  WarBoardSimpleAnimationPerformance__Execute_d__5___ctor(
    (WarBoardSimpleAnimationPerformance__Execute_d__5_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardSimpleAnimationPerformance__OnEnd(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *EndCallback; // x0

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    WarBoardTaskBase_TaskCallback__Invoke(EndCallback, 0LL);
}


void __fastcall WarBoardSimpleAnimationPerformance__OnStart(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardTaskBase_TaskCallback_o *StartCallback; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0

  if ( (byte_42EAB7B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB7B = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    WarBoardTaskBase_TaskCallback__Invoke(StartCallback, 0LL);
  this->fields.isStart = 0;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v8 = this->fields.animation;
    if ( !v8 || (SimpleAnimation__Rewind(v8, 0LL), (v8 = this->fields.animation) == 0LL) )
      sub_B5D69C(v8, v7);
    if ( SimpleAnimation__Play_16676044(v8, this->fields.animationName, 0LL) )
      this->fields.isStart = 1;
  }
}


bool __fastcall WarBoardSimpleAnimationPerformance___Execute_b__5_0(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B5D69C(0LL, method);
  return !SimpleAnimation__CheckPlaying(animation, 0LL) || this->fields.IsForceEnd;
}


void __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5___ctor(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__MoveNext(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardSimpleAnimationPerformance__Execute_d__5_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct WarBoardSimpleAnimationPerformance_o *_4__this; // x20
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E5FCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v8, v9, v10);
    this = (WarBoardSimpleAnimationPerformance__Execute_d__5_o *)sub_B5D5C4(
                                                                   &Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
                                                                   v11,
                                                                   v12,
                                                                   v13);
    byte_42E5FCF = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    if ( !_4__this->fields.isStart )
    {
      return 0;
    }
    else
    {
      v16 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v16,
        (Il2CppObject *)_4__this,
        Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v17 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_Reset(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardSimpleAnimationPerformance__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_IDisposable_Dispose(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  ;
}