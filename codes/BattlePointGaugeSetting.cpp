void BattlePointGaugeSetting___ctor(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
float BattlePointGaugeSetting__GetBarProgressValue(
        BattlePointGaugeSetting_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  struct System_Single_array *barProgressValues; // x8
  int32_t max_length; // w9
  float result; // s0

  sprite = this->fields.sprite;
  if ( !sprite || (barProgressValues = sprite->fields.barProgressValues) == 0 )
    sub_1C2D6EC(this, phase);
  max_length = barProgressValues->max_length;
  result = 0.0;
  if ( max_length > phase )
  {
    if ( max_length <= (unsigned int)phase )
      sub_1C2D6F4(this, *(_QWORD *)&phase, method);
    return barProgressValues->m_Items[phase];
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattlePointGaugeSetting__GetPhaseSpriteName(
        BattlePointGaugeSetting_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePointGaugeSetting_o *v6; // x20
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *phaseSpriteNameFormat; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4C2A8A2 & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1C2D490(&int_TypeInfo);
    byte_4C2A8A2 = 1;
  }
  sprite = v6->fields.sprite;
  if ( !sprite )
    sub_1C2D6EC(this, *(_QWORD *)&phaseValue);
  phaseSpriteNameFormat = sprite->fields.phaseSpriteNameFormat;
  v11 = phaseValue;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(phaseSpriteNameFormat, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattlePointGaugeSetting__GetStepSpriteName(
        BattlePointGaugeSetting_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePointGaugeSetting_o *v6; // x20
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *stepSpriteNameFormat; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4C2A8A3 & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1C2D490(&int_TypeInfo);
    byte_4C2A8A3 = 1;
  }
  sprite = v6->fields.sprite;
  if ( !sprite )
    sub_1C2D6EC(this, *(_QWORD *)&effectId);
  stepSpriteNameFormat = sprite->fields.stepSpriteNameFormat;
  v11 = effectId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(stepSpriteNameFormat, v9, 0);
}


bool BattlePointGaugeSetting__TryGetStepUpEffect(
        BattlePointGaugeSetting_o *this,
        int32_t effectId,
        UnityEngine_GameObject_o **effectPrefab,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8
  System_Collections_Generic_IEnumerable_TSource__o *stepUpEffectPrefabs; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *monitor; // x1
  UnityEngine_Object_o *v17; // x19

  if ( (byte_4C2A8A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
    sub_1C2D490(&System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__);
    sub_1C2D490(&BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo);
    byte_4C2A8A4 = 1;
  }
  v7 = sub_1C2D6DC(BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 || (*(_DWORD *)(v7 + 16) = effectId, (effect = this->fields.effect) == 0) )
    sub_1C2D6EC(v8, v9);
  stepUpEffectPrefabs = (System_Collections_Generic_IEnumerable_TSource__o *)effect->fields.stepUpEffectPrefabs;
  v12 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          stepUpEffectPrefabs,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
  if ( v13 )
    monitor = (UnityEngine_GameObject_o *)v13[1].monitor;
  else
    monitor = 0;
  *effectPrefab = monitor;
  sub_1C2D434((CGThumbnailListItem_o *)effectPrefab, (int32_t)monitor, v14, v15);
  v17 = (UnityEngine_Object_o *)*effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v17, 0, 0);
}


void BattlePointGaugeSetting__ValidateSerializedField(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x20
  System_String_o *name; // x0
  __int64 v5; // x1
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x20

  sprite = this->fields.sprite;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !sprite
    || (effect = this->fields.effect, name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0), !effect)
    || !effect->fields.stepUpEffectPrefabs )
  {
    sub_1C2D6EC(name, v5);
  }
}


int32_t BattlePointGaugeSetting__get_EffectNumPerPhase(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(this, method);
  return effect->fields.effectNumPerPhase;
}


System_String_o *BattlePointGaugeSetting__get_EffectSeName(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(this, method);
  return effect->fields.effectSeName;
}


UnityEngine_GameObject_o *BattlePointGaugeSetting__get_PointEffectPrefab(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(this, method);
  return effect->fields.pointEffectPrefab;
}


int32_t BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(this, method);
  return effect->fields.pointEffectSpeedUpBorderEffectNum;
}


float BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(this, method);
  return effect->fields.pointEffectSpeedUpCoefficient;
}


void BattlePointGaugeSetting_EffectSection___ctor(
        BattlePointGaugeSetting_EffectSection_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.effectNumPerPhase = 0xA0000000ALL;
  this->fields.pointEffectSpeedUpCoefficient = 0.1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePointGaugeSetting_EffectSection__ValidateSerializedField(
        BattlePointGaugeSetting_EffectSection_o *this,
        System_String_o *settingFileName,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_StepUpEffectData_array *stepUpEffectPrefabs; // x8
  int max_length; // w8
  int v5; // w9

  stepUpEffectPrefabs = this->fields.stepUpEffectPrefabs;
  if ( !stepUpEffectPrefabs )
    sub_1C2D6EC(this, settingFileName);
  max_length = stepUpEffectPrefabs->max_length;
  v5 = -1;
  do
    ++v5;
  while ( v5 < max_length );
}


void BattlePointGaugeSetting_EffectSection_StepUpEffectData___ctor(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattlePointGaugeSetting_EffectSection_StepUpEffectData__get_EffectId(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.effectId;
}


UnityEngine_GameObject_o *BattlePointGaugeSetting_EffectSection_StepUpEffectData__get_EffectPrefab(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.effectPrefab;
}


void BattlePointGaugeSetting_SpriteSection___ctor(
        BattlePointGaugeSetting_SpriteSection_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A8A5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17108/*"battlepoint_phase_{0}"*/);
    sub_1C2D490(&StringLiteral_17109/*"battlepoint_step_{0}"*/);
    byte_4C2A8A5 = 1;
  }
  v5 = StringLiteral_17108/*"battlepoint_phase_{0}"*/;
  this->fields.phaseSpriteNameFormat = (struct System_String_o *)StringLiteral_17108/*"battlepoint_phase_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  v6 = StringLiteral_17109/*"battlepoint_step_{0}"*/;
  this->fields.stepSpriteNameFormat = (struct System_String_o *)StringLiteral_17109/*"battlepoint_step_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.stepSpriteNameFormat, v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePointGaugeSetting_SpriteSection__ValidateSerializedField(
        BattlePointGaugeSetting_SpriteSection_o *this,
        System_String_o *settingFileName,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeSetting___c__DisplayClass17_0___ctor(
        BattlePointGaugeSetting___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePointGaugeSetting___c__DisplayClass17_0___TryGetStepUpEffect_b__0(
        BattlePointGaugeSetting___c__DisplayClass17_0_o *this,
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.effectId == this->fields.effectId;
}