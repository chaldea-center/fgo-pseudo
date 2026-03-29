void WarBoardGaugePerformance___ctor(
        WarBoardGaugePerformance_o *this,
        UISprite_o *target,
        float startValue,
        float endValue,
        float duration,
        const MethodInfo *method)
{
  WarBoardGaugePerformance_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v10 = this;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)target);
  v10->fields.target = target;
  v10 = (WarBoardGaugePerformance_o *)((char *)v10 + 56);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v10, (int32_t)target, v11, v12, v13, v14, v15, v16);
  *(float *)&v10->monitor = startValue;
  *((float *)&v10->monitor + 1) = endValue;
  *(float *)&v10->fields.Key = duration;
}


System_Collections_IEnumerator_o *WarBoardGaugePerformance__Execute(
        WarBoardGaugePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E628 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardGaugePerformance__Execute_d__6_TypeInfo);
    byte_4D2E628 = 1;
  }
  v3 = sub_1C93D20(WarBoardGaugePerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardGaugePerformance__OnEnd(WarBoardGaugePerformance_o *this, const MethodInfo *method)
{
  UIBasicSprite_o *target; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  target = (UIBasicSprite_o *)this->fields.target;
  if ( !target )
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(0, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
      target = (UIBasicSprite_o *)_4__this->fields.target;
      v14 = v12 / _4__this->fields.duration;
      v15 = fminf(v14, 1.0);
      v16 = v14 < 0.0;
      v17 = 0.0;
      if ( !v16 )
        v17 = v15;
      v18 = Easing__Func_49777208(_4__this->fields.startValue, _4__this->fields.endValue, v17, 0, 0);
      if ( target )
      {
        UIBasicSprite__set_fillAmount(target, v18, 0);
        goto LABEL_9;
      }
    }
LABEL_12:
    sub_1C93D2C(this, method);
  }
  this->fields.__1__state = -1;
  this->fields._now_5__2 = 0.0;
  if ( !_4__this )
    goto LABEL_12;
LABEL_9:
  if ( this->fields._now_5__2 < _4__this->fields.duration )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardGaugePerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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