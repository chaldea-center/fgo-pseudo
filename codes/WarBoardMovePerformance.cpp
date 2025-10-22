void WarBoardMovePerformance___ctor(
        WarBoardMovePerformance_o *this,
        UnityEngine_GameObject_o *target,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float pixelPerSec,
        int32_t easeType,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s12
  float v12; // s11
  float v13; // s13
  float v14; // s14
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  float v19; // s12
  float v20; // s10
  float v21; // s9

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  v12 = from.fields.z;
  v13 = from.fields.y;
  v14 = from.fields.x;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  this->fields.target = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.target, (int32_t)target, v17, v18);
  this->fields.from.fields.x = v14;
  this->fields.from.fields.y = v13;
  this->fields.from.fields.z = v12;
  this->fields.to.fields.x = x;
  this->fields.to.fields.y = y;
  this->fields.to.fields.z = z;
  if ( !byte_4C506A3 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A3 = 1;
  }
  v19 = x - v14;
  v20 = y - v13;
  v21 = z - v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields.duration = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20))) / pixelPerSec;
  this->fields.easeType = easeType;
}


System_Collections_IEnumerator_o *WarBoardMovePerformance__Execute(
        WarBoardMovePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C549DA & 1) == 0 )
  {
    sub_1C3E564(&WarBoardMovePerformance__Execute_d__7_TypeInfo);
    byte_4C549DA = 1;
  }
  v3 = sub_1C3E7B0(WarBoardMovePerformance__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardMovePerformance__OnEnd(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0)) == 0 )
    sub_1C3E7C0(target, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, this->fields.to, 0);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardMovePerformance__OnStart(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_GameObject_o *target; // x0

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0)) == 0 )
    sub_1C3E7C0(target, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, this->fields.from, 0);
}


void WarBoardMovePerformance__Execute_d__7___ctor(
        WarBoardMovePerformance__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardMovePerformance__Execute_d__7__MoveNext(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct WarBoardMovePerformance_o *_4__this; // x21
  WarBoardMovePerformance__Execute_d__7_o *v6; // x19
  float v7; // s0
  float now_5__2; // s8
  float v9; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s8
  UnityEngine_Transform_o *transform; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v6 = this;
  if ( _1__state == 1 )
  {
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v9 = now_5__2 + UnityEngine_Time__get_deltaTime(0);
    v6->fields._now_5__2 = v9;
    if ( !_4__this
      || (this = (WarBoardMovePerformance__Execute_d__7_o *)_4__this->fields.target) == 0
      || ((v10 = v9 / _4__this->fields.duration, v11 = fminf(v10, 1.0), v10 < 0.0) ? (v12 = 0.0) : (v12 = v11),
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
          v16 = Easing__Func(_4__this->fields.from, _4__this->fields.to, v12, _4__this->fields.easeType, 0),
          !transform) )
    {
LABEL_15:
      sub_1C3E7C0(this, method);
    }
    UnityEngine_Transform__set_localPosition(transform, v16, 0);
    v7 = v6->fields._now_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    v7 = 0.0;
    this->fields._now_5__2 = 0.0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
  }
  if ( v7 < _4__this->fields.duration )
  {
    v6->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v6->fields.__2__current;
    sub_1C3E508(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *WarBoardMovePerformance__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardMovePerformance__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardMovePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *WarBoardMovePerformance__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardMovePerformance__Execute_d__7__System_IDisposable_Dispose(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}