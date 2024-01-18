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
  float x; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  WarBoardMovePerformance_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  MethodInfo v23; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  v13 = from.fields.z;
  v14 = from.fields.y;
  v15 = from.fields.x;
  v16 = this;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  v16->fields.target = target;
  v16 = (WarBoardMovePerformance_o *)((char *)v16 + 56);
  sub_B2C2F8((BattleServantConfConponent_o *)v16, (System_Int32_array **)target, v17, v18, v19, v20, v21, v22);
  v24.fields.x = x - v15;
  v24.fields.y = y - v14;
  v24.fields.z = z - v13;
  *((float *)&v16->monitor + 1) = v15;
  *(float *)&v16->fields.Key = v14;
  *((float *)&v16->fields.Key + 1) = v13;
  *(float *)&v16->fields.IsEnabled = x;
  *(float *)(&v16->fields.NonBlocking + 2) = y;
  *(float *)&v16->fields.StartCallback = z;
  *(float *)&v23.methodPointer = x - v15;
  *((float *)&v23.methodPointer + 1) = y - v14;
  *(float *)&v23.invoker_method = z - v13;
  *(float *)&v16->monitor = UnityEngine_Vector3__get_magnitude(v24, &v23) / pixelPerSec;
  HIDWORD(v16->fields.StartCallback) = easeType;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMovePerformance__Execute(
        WarBoardMovePerformance_o *this,
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

  if ( (byte_4186531 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMovePerformance__Execute_d__7_TypeInfo, method);
    byte_4186531 = 1;
  }
  v3 = sub_B2C42C(WarBoardMovePerformance__Execute_d__7_TypeInfo);
  WarBoardMovePerformance__Execute_d__7___ctor((WarBoardMovePerformance__Execute_d__7_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardMovePerformance__OnEnd(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0

  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0LL)) == 0LL )
    sub_B2C434(target, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, this->fields.to, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMovePerformance__OnStart(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *target; // x0

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0LL)) == 0LL )
    sub_B2C434(target, v3);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct WarBoardMovePerformance_o *_4__this; // x20
  WarBoardMovePerformance__Execute_d__7_o *v10; // x19
  float *p_duration; // x21
  float v12; // s0
  float now_5__2; // s8
  float v14; // s0
  float v15; // s0
  float v16; // s8
  UnityEngine_Transform_o *transform; // x0
  int32_t easeType; // w8
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  UnityEngine_Vector3_o from; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o to; // 0:s3.4,4:s4.4,8:s5.4

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v10 = this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._now_5__2 = 0.0;
    if ( _4__this )
    {
      p_duration = &_4__this->fields.duration;
      v12 = 0.0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B2C434(this, method);
  }
  now_5__2 = this->fields._now_5__2;
  this->fields.__1__state = -1;
  v14 = now_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  v10->fields._now_5__2 = v14;
  if ( !_4__this )
    goto LABEL_12;
  p_duration = &_4__this->fields.duration;
  v15 = UnityEngine_Mathf__Clamp(v14 / _4__this->fields.duration, 0.0, 1.0, 0LL);
  this = (WarBoardMovePerformance__Execute_d__7_o *)_4__this->fields.target;
  if ( !this )
    goto LABEL_12;
  v16 = v15;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  easeType = _4__this->fields.easeType;
  from = _4__this->fields.from;
  to = _4__this->fields.to;
  v19 = transform;
  *(UnityEngine_Vector3_o *)&v20 = Easing__Func(from, to, v16, easeType, 0LL);
  if ( !v19 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v12 = v10->fields._now_5__2;
LABEL_9:
  if ( v12 >= *p_duration )
    return 0;
  v10->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v10->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardMovePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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