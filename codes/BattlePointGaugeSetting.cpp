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
  float result; // s0
  int32_t max_length; // w9

  sprite = this->fields.sprite;
  if ( !sprite || (barProgressValues = sprite->fields.barProgressValues) == 0 )
    sub_21FFECC(this, *(_QWORD *)&phase);
  result = 0.0;
  max_length = barProgressValues->max_length;
  if ( max_length > phase )
  {
    if ( max_length <= (unsigned int)phase )
      sub_21FFED4(this);
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
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *phaseSpriteNameFormat; // x19
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  sprite = this->fields.sprite;
  if ( !sprite )
    sub_21FFECC(this, *(_QWORD *)&phaseValue);
  phaseSpriteNameFormat = sprite->fields.phaseSpriteNameFormat;
  v7 = phaseValue;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v7);
  return System_String__Format(phaseSpriteNameFormat, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattlePointGaugeSetting__GetStepSpriteName(
        BattlePointGaugeSetting_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *stepSpriteNameFormat; // x19
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  sprite = this->fields.sprite;
  if ( !sprite )
    sub_21FFECC(this, *(_QWORD *)&effectId);
  stepSpriteNameFormat = sprite->fields.stepSpriteNameFormat;
  v7 = effectId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v7);
  return System_String__Format(stepSpriteNameFormat, v5, 0);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *monitor; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x19

  if ( (byte_593BF37 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
    sub_21FFC50(&System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__);
    sub_21FFC50(&BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo);
    byte_593BF37 = 1;
  }
  v7 = sub_21FFEBC(BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 || (effect = this->fields.effect, *(_DWORD *)(v7 + 16) = effectId, !effect) )
    sub_21FFECC(v8, v9);
  stepUpEffectPrefabs = (System_Collections_Generic_IEnumerable_TSource__o *)effect->fields.stepUpEffectPrefabs;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          stepUpEffectPrefabs,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
  if ( v13 )
    monitor = (UnityEngine_GameObject_o *)v13[1].monitor;
  else
    monitor = 0;
  *effectPrefab = monitor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)effectPrefab, (int32_t)monitor, v14, v15, v16, v17, v18, v19);
  v22 = (UnityEngine_Object_o *)*effectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  return UnityEngine_Object__op_Inequality(v22, 0, 0);
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
    sub_21FFECC(name, v5);
  }
}


int32_t BattlePointGaugeSetting__get_EffectNumPerPhase(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_21FFECC(this, method);
  return effect->fields.effectNumPerPhase;
}


System_String_o *BattlePointGaugeSetting__get_EffectSeName(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_21FFECC(this, method);
  return effect->fields.effectSeName;
}


UnityEngine_GameObject_o *BattlePointGaugeSetting__get_PointEffectPrefab(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_21FFECC(this, method);
  return effect->fields.pointEffectPrefab;
}


int32_t BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_21FFECC(this, method);
  return effect->fields.pointEffectSpeedUpBorderEffectNum;
}


float BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_21FFECC(this, method);
  return effect->fields.pointEffectSpeedUpCoefficient;
}


void BattlePointGaugeSetting_EffectSection___ctor(
        BattlePointGaugeSetting_EffectSection_o *this,
        const MethodInfo *method)
{
  this->fields.pointEffectSpeedUpCoefficient = 0.1;
  *(_QWORD *)&this->fields.effectNumPerPhase = 0xA0000000ALL;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePointGaugeSetting_EffectSection__ValidateSerializedField(
        BattlePointGaugeSetting_EffectSection_o *this,
        System_String_o *settingFileName,
        const MethodInfo *method)
{
  if ( !this->fields.stepUpEffectPrefabs )
    sub_21FFECC(this, settingFileName);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593BF38 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17810/*"battlepoint_phase_{0}"*/);
    sub_21FFC50(&StringLiteral_17811/*"battlepoint_step_{0}"*/);
    byte_593BF38 = 1;
  }
  v9 = StringLiteral_17810/*"battlepoint_phase_{0}"*/;
  this->fields.phaseSpriteNameFormat = (struct System_String_o *)StringLiteral_17810/*"battlepoint_phase_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17811/*"battlepoint_step_{0}"*/;
  this->fields.stepSpriteNameFormat = (struct System_String_o *)StringLiteral_17811/*"battlepoint_step_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stepSpriteNameFormat, v10, v11, v12, v13, v14, v15, v16);
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
    sub_21FFECC(this, 0);
  return x->fields.effectId == this->fields.effectId;
}