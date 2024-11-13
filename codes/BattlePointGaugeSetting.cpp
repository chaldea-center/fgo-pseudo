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
    sub_1BCAA3C(this, *(_QWORD *)&phase);
  max_length = barProgressValues->max_length;
  result = 0.0;
  if ( max_length > phase )
  {
    if ( max_length <= (unsigned int)phase )
      sub_1BCAA44(this, phase);
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
  if ( (byte_4B1924A & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&phaseValue, method);
    byte_4B1924A = 1;
  }
  sprite = v4->fields.sprite;
  if ( !sprite )
    sub_1BCAA3C(this, *(_QWORD *)&phaseValue);
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
  if ( (byte_4B1924B & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&effectId, method);
    byte_4B1924B = 1;
  }
  sprite = v4->fields.sprite;
  if ( !sprite )
    sub_1BCAA3C(this, *(_QWORD *)&effectId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8
  System_Collections_Generic_IEnumerable_TSource__o *stepUpEffectPrefabs; // x20
  System_Func_object__bool__o *v22; // x21
  Il2CppObject *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *monitor; // x1
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x19

  if ( (byte_4B1924C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___,
      *(_QWORD *)&effectId,
      effectPrefab);
    sub_1BCA7E0(&System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__, v11, v12);
    sub_1BCA7E0(&BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo, v13, v14);
    byte_4B1924C = 1;
  }
  v15 = sub_1BCAA2C(BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&effectId, effectPrefab, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 || (*(_DWORD *)(v15 + 16) = effectId, (effect = this->fields.effect) == 0LL) )
    sub_1BCAA3C(v16, v17);
  stepUpEffectPrefabs = (System_Collections_Generic_IEnumerable_TSource__o *)effect->fields.stepUpEffectPrefabs;
  v22 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo,
                                         v17,
                                         v18,
                                         v19);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          stepUpEffectPrefabs,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
  if ( v23 )
    monitor = (UnityEngine_GameObject_o *)v23[1].monitor;
  else
    monitor = 0LL;
  *effectPrefab = monitor;
  sub_1BCA784((PartyOrganizationUtility_o *)effectPrefab, (int64_t)monitor, v24, v25, v26, v27, v28, v29);
  v32 = (UnityEngine_Object_o *)*effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  return UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
}


void __fastcall BattlePointGaugeSetting__ValidateSerializedField(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x20
  System_String_o *name; // x0
  __int64 v5; // x1
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x20

  sprite = this->fields.sprite;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !sprite
    || (effect = this->fields.effect, name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL), !effect)
    || !effect->fields.stepUpEffectPrefabs )
  {
    sub_1BCAA3C(name, v5);
  }
}


int32_t __fastcall BattlePointGaugeSetting__get_EffectNumPerPhase(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(this, method);
  return effect->fields.effectNumPerPhase;
}


System_String_o *__fastcall BattlePointGaugeSetting__get_EffectSeName(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(this, method);
  return effect->fields.effectSeName;
}


UnityEngine_GameObject_o *__fastcall BattlePointGaugeSetting__get_PointEffectPrefab(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(this, method);
  return effect->fields.pointEffectPrefab;
}


int32_t __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(this, method);
  return effect->fields.pointEffectSpeedUpBorderEffectNum;
}


float __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, settingFileName);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1924D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17316/*"battlepoint_phase_{0}"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17317/*"battlepoint_step_{0}"*/, v9, v10);
    byte_4B1924D = 1;
  }
  v11 = StringLiteral_17316/*"battlepoint_phase_{0}"*/;
  this->fields.phaseSpriteNameFormat = (struct System_String_o *)StringLiteral_17316/*"battlepoint_phase_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_17317/*"battlepoint_step_{0}"*/;
  this->fields.stepSpriteNameFormat = (struct System_String_o *)StringLiteral_17317/*"battlepoint_step_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stepSpriteNameFormat, v12, v13, v14, v15, v16, v17, v18);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.effectId == this->fields.effectId;
}