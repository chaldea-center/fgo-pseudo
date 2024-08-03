void __fastcall BattlePointGaugeSetting___ctor(BattlePointGaugeSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattlePointGaugeSetting__GetBarProgressValue(
        BattlePointGaugeSetting_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  struct System_Single_array *barProgressValues; // x8
  int32_t max_length; // w9
  float result; // s0

  sprite = this->fields.sprite;
  if ( !sprite || (barProgressValues = sprite->fields.barProgressValues) == 0LL )
    sub_1B64324(this);
  max_length = barProgressValues->max_length;
  result = 0.0;
  if ( max_length > phase )
  {
    if ( max_length <= (unsigned int)phase )
      sub_1B6432C(this, *(_QWORD *)&phase);
    return barProgressValues->m_Items[phase + 1];
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePointGaugeSetting__GetPhaseSpriteName(
        BattlePointGaugeSetting_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *v4; // x20
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *phaseSpriteNameFormat; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FF35F & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1B640C8(&int_TypeInfo, *(_QWORD *)&phaseValue);
    byte_49FF35F = 1;
  }
  sprite = v4->fields.sprite;
  if ( !sprite )
    sub_1B64324(this);
  phaseSpriteNameFormat = sprite->fields.phaseSpriteNameFormat;
  v9 = phaseValue;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(phaseSpriteNameFormat, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePointGaugeSetting__GetStepSpriteName(
        BattlePointGaugeSetting_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *v4; // x20
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *stepSpriteNameFormat; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FF360 & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1B640C8(&int_TypeInfo, *(_QWORD *)&effectId);
    byte_49FF360 = 1;
  }
  sprite = v4->fields.sprite;
  if ( !sprite )
    sub_1B64324(this);
  stepSpriteNameFormat = sprite->fields.stepSpriteNameFormat;
  v9 = effectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(stepSpriteNameFormat, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePointGaugeSetting__TryGetStepUpEffect(
        BattlePointGaugeSetting_o *this,
        int32_t effectId,
        UnityEngine_GameObject_o **effectPrefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8
  System_Collections_Generic_IEnumerable_TSource__o *stepUpEffectPrefabs; // x20
  System_Func_object__bool__o *v17; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_GameObject_o *monitor; // x1
  UnityEngine_Object_o *v22; // x19

  if ( (byte_49FF361 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___,
      *(_QWORD *)&effectId);
    sub_1B640C8(&System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__, v9);
    sub_1B640C8(&BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo, v10);
    byte_49FF361 = 1;
  }
  v11 = sub_1B64314(BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&effectId, effectPrefab);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 || (*(_DWORD *)(v11 + 16) = effectId, (effect = this->fields.effect) == 0LL) )
    sub_1B64324(v12);
  stepUpEffectPrefabs = (System_Collections_Generic_IEnumerable_TSource__o *)effect->fields.stepUpEffectPrefabs;
  v17 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo,
                                         v13,
                                         v14);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          stepUpEffectPrefabs,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
  if ( v18 )
    monitor = (UnityEngine_GameObject_o *)v18[1].monitor;
  else
    monitor = 0LL;
  *effectPrefab = monitor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)effectPrefab, (int32_t)monitor, v19, v20);
  v22 = (UnityEngine_Object_o *)*effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
}


void __fastcall BattlePointGaugeSetting__ValidateSerializedField(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x20
  System_String_o *name; // x0
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x20

  sprite = this->fields.sprite;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !sprite
    || (effect = this->fields.effect, name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL), !effect)
    || !effect->fields.stepUpEffectPrefabs )
  {
    sub_1B64324(name);
  }
}


int32_t __fastcall BattlePointGaugeSetting__get_EffectNumPerPhase(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(this);
  return effect->fields.effectNumPerPhase;
}


System_String_o *__fastcall BattlePointGaugeSetting__get_EffectSeName(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(this);
  return effect->fields.effectSeName;
}


UnityEngine_GameObject_o *__fastcall BattlePointGaugeSetting__get_PointEffectPrefab(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(this);
  return effect->fields.pointEffectPrefab;
}


int32_t __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(this);
  return effect->fields.pointEffectSpeedUpBorderEffectNum;
}


float __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(this);
  return effect->fields.pointEffectSpeedUpCoefficient;
}


void __fastcall BattlePointGaugeSetting_EffectSection___ctor(
        BattlePointGaugeSetting_EffectSection_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.effectNumPerPhase = 0xA0000000ALL;
  this->fields.pointEffectSpeedUpCoefficient = 0.1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePointGaugeSetting_EffectSection__ValidateSerializedField(
        BattlePointGaugeSetting_EffectSection_o *this,
        System_String_o *settingFileName,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_StepUpEffectData_array *stepUpEffectPrefabs; // x8
  int max_length; // w8
  int v5; // w9

  stepUpEffectPrefabs = this->fields.stepUpEffectPrefabs;
  if ( !stepUpEffectPrefabs )
    sub_1B64324(this);
  max_length = stepUpEffectPrefabs->max_length;
  v5 = -1;
  do
    ++v5;
  while ( v5 < max_length );
}


void __fastcall BattlePointGaugeSetting_EffectSection_StepUpEffectData___ctor(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattlePointGaugeSetting_EffectSection_StepUpEffectData__get_EffectId(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.effectId;
}


UnityEngine_GameObject_o *__fastcall BattlePointGaugeSetting_EffectSection_StepUpEffectData__get_EffectPrefab(
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.effectPrefab;
}


void __fastcall BattlePointGaugeSetting_SpriteSection___ctor(
        BattlePointGaugeSetting_SpriteSection_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF362 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17076/*"battlepoint_phase_{0}"*/, method);
    sub_1B640C8(&StringLiteral_17077/*"battlepoint_step_{0}"*/, v5);
    byte_49FF362 = 1;
  }
  v6 = StringLiteral_17076/*"battlepoint_phase_{0}"*/;
  this->fields.phaseSpriteNameFormat = (struct System_String_o *)StringLiteral_17076/*"battlepoint_phase_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, v6, v2, v3);
  v7 = StringLiteral_17077/*"battlepoint_step_{0}"*/;
  this->fields.stepSpriteNameFormat = (struct System_String_o *)StringLiteral_17077/*"battlepoint_step_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stepSpriteNameFormat, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePointGaugeSetting_SpriteSection__ValidateSerializedField(
        BattlePointGaugeSetting_SpriteSection_o *this,
        System_String_o *settingFileName,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePointGaugeSetting___c__DisplayClass17_0___ctor(
        BattlePointGaugeSetting___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePointGaugeSetting___c__DisplayClass17_0___TryGetStepUpEffect_b__0(
        BattlePointGaugeSetting___c__DisplayClass17_0_o *this,
        BattlePointGaugeSetting_EffectSection_StepUpEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.effectId == this->fields.effectId;
}