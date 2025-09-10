void WarBoardSimpleAnimationPerformance___ctor(
        WarBoardSimpleAnimationPerformance_o *this,
        SimpleAnimation_o *animation,
        System_String_o *animationName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)animation);
  this->fields.animation = animation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)animation, v7, v8);
  this->fields.animationName = animationName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationName, (int32_t)animationName, v9, v10);
}


System_Collections_IEnumerator_o *WarBoardSimpleAnimationPerformance__Execute(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24F92 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
    byte_4C24F92 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *animation; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4C24F91 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F91 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  this->fields.isStart = 0;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    v6 = this->fields.animation;
    if ( !v6 || (SimpleAnimation__Rewind(v6, 0), (v6 = this->fields.animation) == 0) )
      sub_1C2D6EC(v6, v5);
    if ( SimpleAnimation__Play_66404364(v6, this->fields.animationName, 0) )
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
    sub_1C2D6EC(0, method);
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
  WarBoardSimpleAnimationPerformance__Execute_d__5_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardSimpleAnimationPerformance_o *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4C24F93 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    this = (WarBoardSimpleAnimationPerformance__Execute_d__5_o *)sub_1C2D490(&Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__);
    byte_4C24F93 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C2D6EC(this, method);
    if ( !_4__this->fields.isStart )
    {
      return 0;
    }
    else
    {
      v5 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v5,
        (Il2CppObject *)_4__this,
        Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
        0);
      v6 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v6, v5, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    }
  }
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardSimpleAnimationPerformance__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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