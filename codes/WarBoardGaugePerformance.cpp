void WarBoardGaugePerformance___ctor(
        WarBoardGaugePerformance_o *this,
        UISprite_o *target,
        float startValue,
        float endValue,
        float duration,
        const MethodInfo *method)
{
  WarBoardGaugePerformance_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = this;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  v10->fields.target = target;
  v10 = (WarBoardGaugePerformance_o *)((char *)v10 + 56);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)target, v11, v12, v13, v14, v15, v16);
  *(float *)&v10->monitor = startValue;
  *((float *)&v10->monitor + 1) = endValue;
  *(float *)&v10->fields.Key = duration;
}


System_Collections_IEnumerator_o *WarBoardGaugePerformance__Execute(
        WarBoardGaugePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E39D & 1) == 0 )
  {
    sub_2213A60(&WarBoardGaugePerformance__Execute_d__6_TypeInfo);
    byte_596E39D = 1;
  }
  v3 = sub_2213CCC(WarBoardGaugePerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardGaugePerformance__OnEnd(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  UIBasicSprite_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  UIBasicSprite__set_fillAmount(target, this->fields.endValue, 0);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardGaugePerformance__OnStart(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UIBasicSprite_o *target; // x0

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  UIBasicSprite__set_fillAmount(target, this->fields.startValue, 0);
}


void WarBoardGaugePerformance__Execute_d__6___ctor(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardGaugePerformance__Execute_d__6__MoveNext(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct WarBoardGaugePerformance_o *_4__this; // x21
  float now_5__2; // s8
  float v12; // s0
  float v13; // s2
  UIBasicSprite_o *target; // x20
  float v15; // s0
  float v16; // s1
  float v17; // s0
  float v18; // s0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    now_5__2 = this->fields._now_5__2;
    this->fields.__1__state = -1;
    v12 = now_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields._now_5__2 = v12;
    if ( _4__this )
    {
      v13 = 0.0;
      target = (UIBasicSprite_o *)_4__this->fields.target;
      v15 = v12 / _4__this->fields.duration;
      v16 = 1.0;
      if ( v15 <= 1.0 )
        v16 = v15;
      if ( v15 >= 0.0 )
        v13 = v16;
      v17 = Easing__Func_56120036(_4__this->fields.startValue, _4__this->fields.endValue, v13, 0, 0);
      if ( target )
      {
        UIBasicSprite__set_fillAmount(target, v17, 0);
        v18 = this->fields._now_5__2;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  v18 = 0.0;
  this->fields._now_5__2 = 0.0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
LABEL_11:
  if ( v18 < _4__this->fields.duration )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  return 0;
}


Il2CppObject *WarBoardGaugePerformance__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardGaugePerformance__Execute_d__6__System_Collections_IEnumerator_Reset(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardGaugePerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardGaugePerformance__Execute_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardGaugePerformance__Execute_d__6__System_IDisposable_Dispose(
        WarBoardGaugePerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}