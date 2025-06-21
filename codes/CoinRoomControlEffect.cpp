void __fastcall CoinRoomControlEffect___ctor(CoinRoomControlEffect_o *this, const MethodInfo *method)
{
  this->fields.coefficient = 15.0;
  *(_QWORD *)&this->fields.endValue = 0x6400000064LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CoinRoomControlEffect__AddValue(
        CoinRoomControlEffect_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B20110 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomControlEffect__AddValue_d__10_TypeInfo, method);
    byte_4B20110 = 1;
  }
  v3 = sub_1BCB244(CoinRoomControlEffect__AddValue_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


float __fastcall CoinRoomControlEffect__GetSize(CoinRoomControlEffect_o *this, int32_t value, const MethodInfo *method)
{
  return this->fields.coefficient * (float)((float)value / (float)this->fields.devideValue);
}


void __fastcall CoinRoomControlEffect__KeyEventStartAddValue(
        CoinRoomControlEffect_o *this,
        float time,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  this->fields.actionTime = time;
  v4 = CoinRoomControlEffect__AddValue(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall CoinRoomControlEffect__SetValue(
        CoinRoomControlEffect_o *this,
        int32_t startValue,
        int32_t endValue,
        int32_t maxValue,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *targetParticle; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v7; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v8; // [xsp+28h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v10; // 0:x0.8

  targetParticle = this->fields.targetParticle;
  this->fields.startValue = startValue;
  this->fields.endValue = endValue;
  this->fields.devideValue = maxValue;
  if ( !targetParticle )
    sub_1BCB254(0LL, startValue);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(targetParticle, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
    &v8,
    this->fields.coefficient * (float)((float)this->fields.startValue / (float)this->fields.devideValue),
    0LL);
  v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v7 = v8;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v10, &v7, 0LL);
}


float __fastcall CoinRoomControlEffect__get_Coefficient(CoinRoomControlEffect_o *this, const MethodInfo *method)
{
  return this->fields.coefficient;
}


void __fastcall CoinRoomControlEffect__AddValue_d__10___ctor(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CoinRoomControlEffect__AddValue_d__10__MoveNext(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  int32x2_t v2; // d0
  int32_t _1__state; // w8
  struct CoinRoomControlEffect_o *_4__this; // x21
  CoinRoomControlEffect__AddValue_d__10_o *v5; // x19
  int32x2_t v6; // d0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  float v9; // s0
  float time_5__6; // s8
  float actionTime; // s1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  UnityEngine_ParticleSystem_MinMaxCurve_o v16; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v17; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v18; // [xsp+40h] [xbp-50h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v20; // 0:x0.8

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = this;
  if ( _1__state == 1 )
  {
    time_5__6 = this->fields._time_5__6;
    this->fields.__1__state = -1;
    v9 = time_5__6 + UnityEngine_Time__get_deltaTime(0LL);
    v5->fields._time_5__6 = v9;
    if ( _4__this )
      goto LABEL_7;
LABEL_11:
    sub_1BCB254(this, method);
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
  v5->fields._mainModule_5__5 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL);
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->fields._mainModule_5__5, 0, v7, v8);
  v5->fields._time_5__6 = 0.0;
  v9 = 0.0;
LABEL_7:
  actionTime = _4__this->fields.actionTime;
  if ( v9 < actionTime )
  {
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
      &v18,
      v5->fields._startSize_5__2 + (float)((float)(v9 / actionTime) * v5->fields._actionAddValue_5__4),
      0LL);
    v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
    v17 = v18;
    UnityEngine_ParticleSystem_MainModule__set_startSize(v19, &v17, 0LL);
    v5->fields.__2__current = 0LL;
    p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
    sub_1BCAF9C(p__2__current, 0, v13, v14);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v18, v5->fields._endSize_5__3, 0LL);
  v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
  v16 = v18;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v20, &v16, 0LL);
  return 0;
}


Il2CppObject *__fastcall CoinRoomControlEffect__AddValue_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CoinRoomControlEffect__AddValue_d__10__System_Collections_IEnumerator_Reset(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_CoinRoomControlEffect__AddValue_d__10_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall CoinRoomControlEffect__AddValue_d__10__System_Collections_IEnumerator_get_Current(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CoinRoomControlEffect__AddValue_d__10__System_IDisposable_Dispose(
        CoinRoomControlEffect__AddValue_d__10_o *this,
        const MethodInfo *method)
{
  ;
}