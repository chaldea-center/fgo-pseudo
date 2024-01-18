void __fastcall WarBoardGaugePerformance___ctor(
        WarBoardGaugePerformance_o *this,
        UISprite_o *target,
        float startValue,
        float endValue,
        float duration,
        const MethodInfo *method)
{
  WarBoardGaugePerformance_o *v10; // x20

  v10 = this;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  v10->fields.target = target;
  v10 = (WarBoardGaugePerformance_o *)((char *)v10 + 56);
  sub_B2C2F8(v10, target);
  *(float *)&v10->monitor = startValue;
  *((float *)&v10->monitor + 1) = endValue;
  *(float *)&v10->fields.Key = duration;
}


System_Collections_IEnumerator_o *__fastcall WarBoardGaugePerformance__Execute(
        WarBoardGaugePerformance_o *this,
        const MethodInfo *method)
{
  WarBoardGaugePerformance__Execute_d__6_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4184064 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardGaugePerformance__Execute_d__6_TypeInfo, method);
    byte_4184064 = 1;
  }
  v3 = (WarBoardGaugePerformance__Execute_d__6_o *)sub_B2C42C(WarBoardGaugePerformance__Execute_d__6_TypeInfo);
  WarBoardGaugePerformance__Execute_d__6___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardGaugePerformance__OnEnd(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  UIBasicSprite_o *target; // x0

  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_B2C434(0LL, method);
  UIBasicSprite__set_fillAmount(target, this->fields.endValue, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardGaugePerformance__OnStart(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIBasicSprite_o *target; // x0

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_B2C434(0LL, v3);
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
  int32_t _1__state; // w8
  struct WarBoardGaugePerformance_o *_4__this; // x21
  float now_5__2; // s8
  float v6; // s0
  float v7; // s0
  UIBasicSprite_o *target; // x20
  float v9; // s0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v6 = now_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._now_5__2 = v6;
    if ( _4__this )
    {
      v7 = UnityEngine_Mathf__Clamp(v6 / _4__this->fields.duration, 0.0, 1.0, 0LL);
      target = (UIBasicSprite_o *)_4__this->fields.target;
      v9 = Easing__Func_33139736(_4__this->fields.startValue, _4__this->fields.endValue, v7, 0, 0LL);
      if ( target )
      {
        UIBasicSprite__set_fillAmount(target, v9, 0LL);
        goto LABEL_7;
      }
    }
LABEL_10:
    sub_B2C434(this, method);
  }
  this->fields.__1__state = -1;
  this->fields._now_5__2 = 0.0;
  if ( !_4__this )
    goto LABEL_10;
LABEL_7:
  if ( this->fields._now_5__2 >= _4__this->fields.duration )
    return 0;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardGaugePerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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