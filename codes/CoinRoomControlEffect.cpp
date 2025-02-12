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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BCB18B & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomControlEffect__AddValue_d__10_TypeInfo, method);
    byte_4BCB18B = 1;
  }
  v3 = sub_1C1AE20(CoinRoomControlEffect__AddValue_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
    sub_1C1AE30(0LL, startValue);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  float v13; // s0
  float time_5__6; // s8
  float actionTime; // s1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  UnityEngine_ParticleSystem_MinMaxCurve_o v24; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v25; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v26; // [xsp+40h] [xbp-50h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v28; // 0:x0.8

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = this;
  if ( _1__state == 1 )
  {
    time_5__6 = this->fields._time_5__6;
    this->fields.__1__state = -1;
    v13 = time_5__6 + UnityEngine_Time__get_deltaTime(0LL);
    v5->fields._time_5__6 = v13;
    if ( _4__this )
      goto LABEL_7;
LABEL_11:
    sub_1C1AE30(this, method);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&v5->fields._mainModule_5__5, 0LL, v7, v8, v9, v10, v11, v12);
  v5->fields._time_5__6 = 0.0;
  v13 = 0.0;
LABEL_7:
  actionTime = _4__this->fields.actionTime;
  if ( v13 < actionTime )
  {
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
      &v26,
      v5->fields._startSize_5__2 + (float)((float)(v13 / actionTime) * v5->fields._actionAddValue_5__4),
      0LL);
    v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
    v25 = v26;
    UnityEngine_ParticleSystem_MainModule__set_startSize(v27, &v25, 0LL);
    v5->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
    sub_1C1AB78(p__2__current, 0LL, v17, v18, v19, v20, v21, v22);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v26, v5->fields._endSize_5__3, 0LL);
  v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v5->fields._mainModule_5__5;
  v24 = v26;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v28, &v24, 0LL);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_CoinRoomControlEffect__AddValue_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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