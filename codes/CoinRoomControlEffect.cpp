void CoinRoomControlEffect___ctor(CoinRoomControlEffect_o *this, const MethodInfo *method)
{
  this->fields.coefficient = 15.0;
  *(_QWORD *)&this->fields.endValue = 0x6400000064LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *CoinRoomControlEffect__AddValue(
        CoinRoomControlEffect_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974829 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomControlEffect__AddValue_d__10_TypeInfo);
    byte_5974829 = 1;
  }
  v3 = sub_2213CCC(CoinRoomControlEffect__AddValue_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


float CoinRoomControlEffect__GetSize(CoinRoomControlEffect_o *this, int32_t value, const MethodInfo *method)
{
  return this->fields.coefficient * (float)((float)value / (float)this->fields.devideValue);
}


void CoinRoomControlEffect__KeyEventStartAddValue(CoinRoomControlEffect_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  this->fields.actionTime = time;
  v4 = CoinRoomControlEffect__AddValue(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomControlEffect__SetValue(
        CoinRoomControlEffect_o *this,
        int32_t startValue,
        int32_t endValue,
        int32_t maxValue,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *targetParticle; // x0
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  int32_t v8; // s0
  int32_t devideValue; // s1
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v11; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v12; // [xsp+28h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-18h] BYREF

  targetParticle = this->fields.targetParticle;
  m_ParticleSystem = 0;
  this->fields.startValue = startValue;
  this->fields.endValue = endValue;
  this->fields.devideValue = maxValue;
  if ( !targetParticle )
    sub_2213CDC(0, *(_QWORD *)&startValue);
  v7.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(targetParticle, 0).fields.m_ParticleSystem;
  v8 = this->fields.startValue;
  devideValue = this->fields.devideValue;
  m_ParticleSystem = v7.fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
    &v12,
    this->fields.coefficient * (float)((float)v8 / (float)devideValue),
    0);
  v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v11 = v12;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v10, &v11, 0);
}


float CoinRoomControlEffect__get_Coefficient(CoinRoomControlEffect_o *this, const MethodInfo *method)
{
  return this->fields.coefficient;
}


void CoinRoomControlEffect__AddValue_d__10___ctor(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CoinRoomControlEffect__AddValue_d__10__MoveNext(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  int32x2_t v2; // d0
  int32_t _1__state; // w8
  struct CoinRoomControlEffect_o *_4__this; // x21
  CoinRoomControlEffect__AddValue_d__10_o *v5; // x19
  int32x2_t v6; // d0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float v13; // s0
  float time_5__6; // s8
  float actionTime; // s1
  UnityEngine_ParticleSystem_MainModule_o v16; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool result; // w0
  UnityEngine_ParticleSystem_MainModule_o v25; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v26; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v27; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v28; // [xsp+40h] [xbp-50h] BYREF

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = this;
  if ( _1__state == 1 )
  {
    time_5__6 = this->fields._time_5__6;
    this->fields.__1__state = -1;
    v13 = time_5__6 + UnityEngine_Time__get_deltaTime(0);
    v5->fields._time_5__6 = v13;
    if ( _4__this )
      goto LABEL_7;
LABEL_11:
    sub_2213CDC(this, method);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_11;
  v2.n64_f32[0] = (float)_4__this->fields.devideValue;
  v6.n64_u64[0] = vmul_n_f32(
                    vdiv_f32(vcvt_f32_s32(*(int32x2_t *)&_4__this->fields.startValue), vdup_lane_s32(v2, 0)),
                    _4__this->fields.coefficient).n64_u64[0];
  *(int32x2_t *)&this->fields._startSize_5__2 = v6;
  LODWORD(this->fields._actionAddValue_5__4) = vsub_f32(vdup_lane_s32(v6, 1), v6).n64_u32[0];
  this = (CoinRoomControlEffect__AddValue_d__10_o *)_4__this->fields.targetParticle;
  if ( !this )
    goto LABEL_11;
  v5->fields._mainModule_5__5 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields._mainModule_5__5, 0, v7, v8, v9, v10, v11, v12);
  v13 = 0.0;
  v5->fields._time_5__6 = 0.0;
LABEL_7:
  actionTime = _4__this->fields.actionTime;
  if ( v13 < actionTime )
  {
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
      &v28,
      v5->fields._startSize_5__2 + (float)((float)(v13 / actionTime) * v5->fields._actionAddValue_5__4),
      0);
    v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
    v27 = v28;
    UnityEngine_ParticleSystem_MainModule__set_startSize(v16, &v27, 0);
    v5->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v5->fields.__2__current;
    sub_2213A04(p__2__current, 0, v18, v19, v20, v21, v22, v23);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v28, v5->fields._endSize_5__3, 0);
  v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
  v26 = v28;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v25, &v26, 0);
  return 0;
}


Il2CppObject *CoinRoomControlEffect__AddValue_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CoinRoomControlEffect__AddValue_d__10__System_Collections_IEnumerator_Reset(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CoinRoomControlEffect__AddValue_d__10_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CoinRoomControlEffect__AddValue_d__10__System_Collections_IEnumerator_get_Current(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CoinRoomControlEffect__AddValue_d__10__System_IDisposable_Dispose(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  ;
}