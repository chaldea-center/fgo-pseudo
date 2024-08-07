// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMovePerformance___ctor(
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
  int32_t v18; // w3
  __int64 v19; // x1
  float v20; // s12
  float v21; // s10
  float v22; // s9

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  v12 = from.fields.z;
  v13 = from.fields.y;
  v14 = from.fields.x;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  this->fields.target = target;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.target, (int32_t)target, v17, v18);
  this->fields.from.fields.x = v14;
  this->fields.from.fields.y = v13;
  this->fields.from.fields.z = v12;
  this->fields.to.fields.x = x;
  this->fields.to.fields.y = y;
  this->fields.to.fields.z = z;
  if ( !byte_49F9823 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v19);
    byte_49F9823 = 1;
  }
  v20 = x - v14;
  v21 = y - v13;
  v22 = z - v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields.duration = sqrtf((float)(v22 * v22) + (float)((float)(v20 * v20) + (float)(v21 * v21))) / pixelPerSec;
  this->fields.easeType = easeType;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMovePerformance__Execute(
        WarBoardMovePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCA44 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardMovePerformance__Execute_d__7_TypeInfo, method);
    byte_49FCA44 = 1;
  }
  v3 = sub_1B64C4C(WarBoardMovePerformance__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardMovePerformance__OnEnd(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0LL)) == 0LL )
    sub_1B64C5C(target, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, this->fields.to, 0LL);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardMovePerformance__OnStart(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_GameObject_o *target; // x0

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0LL)) == 0LL )
    sub_1B64C5C(target, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, this->fields.from, 0LL);
}


void __fastcall WarBoardMovePerformance__Execute_d__7___ctor(
        WarBoardMovePerformance__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMovePerformance__Execute_d__7__MoveNext(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int v14; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v6 = this;
  if ( _1__state == 1 )
  {
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v9 = now_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v6->fields._now_5__2 = v9;
    if ( !_4__this
      || (this = (WarBoardMovePerformance__Execute_d__7_o *)_4__this->fields.target) == 0LL
      || ((v10 = v9 / _4__this->fields.duration, v11 = fminf(v10, 1.0), v10 < 0.0) ? (v12 = 0.0) : (v12 = v11),
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
          *(UnityEngine_Vector3_o *)&v14 = Easing__Func(
                                             _4__this->fields.from,
                                             _4__this->fields.to,
                                             v12,
                                             _4__this->fields.easeType,
                                             0LL),
          !transform) )
    {
LABEL_15:
      sub_1B64C5C(this, method);
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
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
    v6->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v6->fields.__2__current;
    sub_1B649A4(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardMovePerformance__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardMovePerformance__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardMovePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall WarBoardMovePerformance__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardMovePerformance__Execute_d__7__System_IDisposable_Dispose(
        WarBoardMovePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}