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
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCB16A & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomControlEffect__AddValue_d__10_TypeInfo);
    byte_4CCB16A = 1;
  }
  v3 = sub_1C715FC(CoinRoomControlEffect__AddValue_d__10_TypeInfo);
  CoinRoomControlEffect__AddValue_d__10___ctor((CoinRoomControlEffect__AddValue_d__10_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void CoinRoomControlEffect__SetValue(
        CoinRoomControlEffect_o *this,
        int32_t startValue,
        int32_t endValue,
        int32_t maxValue,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *targetParticle; // x0
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v8; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v9; // [xsp+28h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-18h] BYREF

  targetParticle = this->fields.targetParticle;
  this->fields.startValue = startValue;
  this->fields.endValue = endValue;
  this->fields.devideValue = maxValue;
  if ( !targetParticle )
    sub_1C71608(0, startValue);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(targetParticle, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
    &v9,
    this->fields.coefficient * (float)((float)this->fields.startValue / (float)this->fields.devideValue),
    0);
  v7.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v8 = v9;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v7, &v8, 0);
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
  int32_t _1__state; // w8
  struct CoinRoomControlEffect_o *_4__this; // x20
  CoinRoomControlEffect__AddValue_d__10_o *v4; // x19
  float Size; // s0
  float v6; // s1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  float v13; // s0
  float time_5__6; // s8
  float actionTime; // s1
  UnityEngine_ParticleSystem_MainModule_o v16; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  bool result; // w0
  UnityEngine_ParticleSystem_MainModule_o v25; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v26; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v27; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v28; // [xsp+40h] [xbp-50h] BYREF

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    time_5__6 = this->fields._time_5__6;
    this->fields.__1__state = -1;
    v13 = time_5__6 + UnityEngine_Time__get_deltaTime(0);
    v4->fields._time_5__6 = v13;
    if ( _4__this )
      goto LABEL_7;
LABEL_11:
    sub_1C71608(this, method);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_11;
  this->fields._startSize_5__2 = CoinRoomControlEffect__GetSize(_4__this, _4__this->fields.startValue, 0);
  Size = CoinRoomControlEffect__GetSize(_4__this, _4__this->fields.endValue, 0);
  v6 = Size - v4->fields._startSize_5__2;
  v4->fields._endSize_5__3 = Size;
  v4->fields._actionAddValue_5__4 = v6;
  this = (CoinRoomControlEffect__AddValue_d__10_o *)_4__this->fields.targetParticle;
  if ( !this )
    goto LABEL_11;
  v4->fields._mainModule_5__5 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0);
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields._mainModule_5__5, 0, v7, v8, v9, v10, v11, v12);
  v4->fields._time_5__6 = 0.0;
  v13 = 0.0;
LABEL_7:
  actionTime = _4__this->fields.actionTime;
  if ( v13 < actionTime )
  {
    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(
      &v28,
      v4->fields._startSize_5__2 + (float)((float)(v13 / actionTime) * v4->fields._actionAddValue_5__4),
      0);
    v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v4->fields._mainModule_5__5;
    v27 = v28;
    UnityEngine_ParticleSystem_MainModule__set_startSize(v16, &v27, 0);
    v4->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v4->fields.__2__current;
    sub_1C71354(p__2__current, 0, v18, v19, v20, v21, v22, v23);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v28, v4->fields._endSize_5__3, 0);
  v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v4->fields._mainModule_5__5;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CoinRoomControlEffect__AddValue_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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