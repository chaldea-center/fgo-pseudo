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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  float v25; // s12
  float v26; // s10
  float v27; // s9

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  v12 = from.fields.z;
  v13 = from.fields.y;
  v14 = from.fields.x;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  this->fields.target = target;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)target, v17, v18, v19, v20, v21, v22);
  this->fields.from.fields.x = v14;
  this->fields.from.fields.y = v13;
  this->fields.from.fields.z = v12;
  this->fields.to.fields.x = x;
  this->fields.to.fields.y = y;
  this->fields.to.fields.z = z;
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v23, v24);
    byte_4B109C3 = 1;
  }
  v25 = x - v14;
  v26 = y - v13;
  v27 = z - v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
  this->fields.duration = sqrtf((float)(v27 * v27) + (float)((float)(v25 * v25) + (float)(v26 * v26))) / pixelPerSec;
  this->fields.easeType = easeType;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMovePerformance__Execute(
        WarBoardMovePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14078 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMovePerformance__Execute_d__7_TypeInfo, method, v2);
    byte_4B14078 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardMovePerformance__Execute_d__7_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardMovePerformance__OnEnd(WarBoardMovePerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = this->fields.target;
  if ( !target || (target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(target, 0LL)) == 0LL )
    sub_1BCAA3C(target, method);
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
    sub_1BCAA3C(target, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  struct WarBoardMovePerformance_o *_4__this; // x21
  WarBoardMovePerformance__Execute_d__7_o *v10; // x19
  float v11; // s0
  float now_5__2; // s8
  float v13; // s0
  float v14; // s0
  float v15; // s1
  float v16; // s8
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v10 = this;
  if ( _1__state == 1 )
  {
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v13 = now_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v10->fields._now_5__2 = v13;
    if ( !_4__this
      || (this = (WarBoardMovePerformance__Execute_d__7_o *)_4__this->fields.target) == 0LL
      || ((v14 = v13 / _4__this->fields.duration, v15 = fminf(v14, 1.0), v14 < 0.0) ? (v16 = 0.0) : (v16 = v15),
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
          *(UnityEngine_Vector3_o *)&v18 = Easing__Func(
                                             _4__this->fields.from,
                                             _4__this->fields.to,
                                             v16,
                                             _4__this->fields.easeType,
                                             0LL),
          !transform) )
    {
LABEL_15:
      sub_1BCAA3C(this, method);
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
    v11 = v10->fields._now_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    v11 = 0.0;
    this->fields._now_5__2 = 0.0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
  }
  if ( v11 < _4__this->fields.duration )
  {
    v10->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v10->fields.__2__current;
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardMovePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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