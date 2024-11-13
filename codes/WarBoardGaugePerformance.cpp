void __fastcall WarBoardGaugePerformance___ctor(
        WarBoardGaugePerformance_o *this,
        UISprite_o *target,
        float startValue,
        float endValue,
        float duration,
        const MethodInfo *method)
{
  WarBoardGaugePerformance_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v10 = this;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  v10->fields.target = target;
  v10 = (WarBoardGaugePerformance_o *)((char *)v10 + 56);
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)target, v11, v12, v13, v14, v15, v16);
  *(float *)&v10->monitor = startValue;
  *((float *)&v10->monitor + 1) = endValue;
  *(float *)&v10->fields.Key = duration;
}


System_Collections_IEnumerator_o *__fastcall WarBoardGaugePerformance__Execute(
        WarBoardGaugePerformance_o *this,
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

  if ( (byte_4B14073 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardGaugePerformance__Execute_d__6_TypeInfo, method, v2);
    byte_4B14073 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardGaugePerformance__Execute_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardGaugePerformance__OnEnd(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  UIBasicSprite_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
  UIBasicSprite__set_fillAmount(target, this->fields.endValue, 0LL);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardGaugePerformance__OnStart(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UIBasicSprite_o *target; // x0

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
  UIBasicSprite__set_fillAmount(target, this->fields.startValue, 0LL);
}


void __fastcall WarBoardGaugePerformance__Execute_d__6___ctor(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardGaugePerformance__Execute_d__6__MoveNext(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  struct WarBoardGaugePerformance_o *_4__this; // x21
  float now_5__2; // s8
  float v12; // s2
  UIBasicSprite_o *target; // x20
  float v14; // s2
  float v15; // s3
  bool v16; // nf
  float v17; // s2
  float v18; // s0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v12 = now_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._now_5__2 = v12;
    if ( _4__this )
    {
      target = (UIBasicSprite_o *)_4__this->fields.target;
      v14 = v12 / _4__this->fields.duration;
      v15 = fminf(v14, 1.0);
      v16 = v14 < 0.0;
      v17 = 0.0;
      if ( !v16 )
        v17 = v15;
      v18 = Easing__Func_47131320(_4__this->fields.startValue, _4__this->fields.endValue, v17, 0, 0LL);
      if ( target )
      {
        UIBasicSprite__set_fillAmount(target, v18, 0LL);
        goto LABEL_9;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  this->fields.__1__state = -1;
  this->fields._now_5__2 = 0.0;
  if ( !_4__this )
    goto LABEL_12;
LABEL_9:
  if ( this->fields._now_5__2 < _4__this->fields.duration )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardGaugePerformance__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardGaugePerformance__Execute_d__6__System_Collections_IEnumerator_Reset(
        WarBoardGaugePerformance__Execute_d__6_o *this,
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
  v8 = sub_1BCA7F4(&Method_WarBoardGaugePerformance__Execute_d__6_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardGaugePerformance__Execute_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardGaugePerformance__Execute_d__6__System_IDisposable_Dispose(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}