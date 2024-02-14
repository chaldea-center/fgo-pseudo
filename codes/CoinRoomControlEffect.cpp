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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421477E & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomControlEffect__AddValue_d__10_TypeInfo, method);
    byte_421477E = 1;
  }
  v4 = sub_B0D974(CoinRoomControlEffect__AddValue_d__10_TypeInfo, method, v2);
  CoinRoomControlEffect__AddValue_d__10___ctor((CoinRoomControlEffect__AddValue_d__10_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall CoinRoomControlEffect__SetValue(
        CoinRoomControlEffect_o *this,
        int32_t startValue,
        int32_t endValue,
        int32_t maxValue,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *targetParticle; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v7; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v8; // [xsp+20h] [xbp-30h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-8h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v10; // 0:x0.8

  m_ParticleSystem = 0LL;
  targetParticle = this->fields.targetParticle;
  this->fields.startValue = startValue;
  this->fields.endValue = endValue;
  this->fields.devideValue = maxValue;
  if ( !targetParticle )
    sub_B0D97C(0LL);
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
  int32_t _1__state; // w8
  struct CoinRoomControlEffect_o *_4__this; // x20
  CoinRoomControlEffect__AddValue_d__10_o *v4; // x19
  float Size; // s0
  float v6; // s1
  float v7; // s0
  float time_5__6; // s8
  float actionTime; // s1
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v12; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v13; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v14; // [xsp+40h] [xbp-40h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v15; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v16; // 0:x0.8

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      this->fields._startSize_5__2 = CoinRoomControlEffect__GetSize(_4__this, _4__this->fields.startValue, 0LL);
      Size = CoinRoomControlEffect__GetSize(_4__this, _4__this->fields.endValue, 0LL);
      v6 = Size - v4->fields._startSize_5__2;
      v4->fields._endSize_5__3 = Size;
      v4->fields._actionAddValue_5__4 = v6;
      this = (CoinRoomControlEffect__AddValue_d__10_o *)_4__this->fields.targetParticle;
      if ( this )
      {
        v4->fields._mainModule_5__5 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL);
        sub_B0D840(&v4->fields._mainModule_5__5, 0LL);
        v4->fields._time_5__6 = 0.0;
        v7 = 0.0;
        goto LABEL_7;
      }
    }
LABEL_11:
    sub_B0D97C(this);
  }
  time_5__6 = this->fields._time_5__6;
  this->fields.__1__state = -1;
  v7 = time_5__6 + UnityEngine_Time__get_deltaTime(0LL);
  v4->fields._time_5__6 = v7;
  if ( !_4__this )
    goto LABEL_11;
LABEL_7:
  actionTime = _4__this->fields.actionTime;
  if ( v7 >= actionTime )
  {
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v14, v4->fields._endSize_5__3, 0LL);
    v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v4->fields._mainModule_5__5;
    v12 = v14;
    UnityEngine_ParticleSystem_MainModule__set_startSize(v15, &v12, 0LL);
    return 0;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
    &v14,
    v4->fields._startSize_5__2 + (float)((float)(v7 / actionTime) * v4->fields._actionAddValue_5__4),
    0LL);
  v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v4->fields._mainModule_5__5;
  v13 = v14;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v16, &v13, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_CoinRoomControlEffect__AddValue_d__10_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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