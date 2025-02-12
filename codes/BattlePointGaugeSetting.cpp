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
    sub_1C13F80(this, phase);
  max_length = barProgressValues->max_length;
  result = 0.0;
  if ( max_length > phase )
  {
    if ( max_length <= (unsigned int)phase )
      sub_1C13F88(this, *(_QWORD *)&phase);
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
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePointGaugeSetting_o *v6; // x20
  struct BattlePointGaugeSetting_SpriteSection_o *sprite; // x8
  System_String_o *phaseSpriteNameFormat; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4BB77ED & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1C13D24(&int_TypeInfo, *(_QWORD *)&phaseValue);
    byte_4BB77ED = 1;
  }
  sprite = v6->fields.sprite;
  if ( !sprite )
    sub_1C13F80(this, *(_QWORD *)&phaseValue);
  phaseSpriteNameFormat = sprite->fields.phaseSpriteNameFormat;
  v11 = phaseValue;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(phaseSpriteNameFormat, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePointGaugeSetting__GetStepSpriteName(
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
  if ( (byte_4BB77EE & 1) == 0 )
  {
    this = (BattlePointGaugeSetting_o *)sub_1C13D24(&int_TypeInfo, *(_QWORD *)&effectId);
    byte_4BB77EE = 1;
  }
  sprite = v6->fields.sprite;
  if ( !sprite )
    sub_1C13F80(this, *(_QWORD *)&effectId);
  stepSpriteNameFormat = sprite->fields.stepSpriteNameFormat;
  v11 = effectId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(stepSpriteNameFormat, v9, 0LL);
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
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8
  System_Collections_Generic_IEnumerable_TSource__o *stepUpEffectPrefabs; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *monitor; // x1
  UnityEngine_Object_o *v25; // x19

  if ( (byte_4BB77EF & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___,
      *(_QWORD *)&effectId);
    sub_1C13D24(&System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__, v9);
    sub_1C13D24(&BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo, v10);
    byte_4BB77EF = 1;
  }
  v11 = sub_1C13F70(BattlePointGaugeSetting___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 || (*(_DWORD *)(v11 + 16) = effectId, (effect = this->fields.effect) == 0LL) )
    sub_1C13F80(v12, v13);
  stepUpEffectPrefabs = (System_Collections_Generic_IEnumerable_TSource__o *)effect->fields.stepUpEffectPrefabs;
  v16 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattlePointGaugeSetting_EffectSection_StepUpEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattlePointGaugeSetting___c__DisplayClass17_0__TryGetStepUpEffect_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          stepUpEffectPrefabs,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointGaugeSetting_EffectSection_StepUpEffectData___);
  if ( v17 )
    monitor = (UnityEngine_GameObject_o *)v17[1].monitor;
  else
    monitor = 0LL;
  *effectPrefab = monitor;
  sub_1C13CC8((PartyOrganizationUtility_o *)effectPrefab, (int64_t)monitor, v18, v19, v20, v21, v22, v23);
  v25 = (UnityEngine_Object_o *)*effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
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
    sub_1C13F80(name, v5);
  }
}


int32_t __fastcall BattlePointGaugeSetting__get_EffectNumPerPhase(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C13F80(this, method);
  return effect->fields.effectNumPerPhase;
}


System_String_o *__fastcall BattlePointGaugeSetting__get_EffectSeName(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C13F80(this, method);
  return effect->fields.effectSeName;
}


UnityEngine_GameObject_o *__fastcall BattlePointGaugeSetting__get_PointEffectPrefab(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C13F80(this, method);
  return effect->fields.pointEffectPrefab;
}


int32_t __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C13F80(this, method);
  return effect->fields.pointEffectSpeedUpBorderEffectNum;
}


float __fastcall BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
        BattlePointGaugeSetting_o *this,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  effect = this->fields.effect;
  if ( !effect )
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, settingFileName);
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
  int64_t v10; // x1
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB77F0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17405/*"battle_num_slash"*/, method);
    sub_1C13D24(&StringLiteral_17406/*"battle_num_slash_glow"*/, v9);
    byte_4BB77F0 = 1;
  }
  v10 = StringLiteral_17405/*"battle_num_slash"*/;
  this->fields.phaseSpriteNameFormat = (struct System_String_o *)StringLiteral_17405/*"battle_num_slash"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = StringLiteral_17406/*"battle_num_slash_glow"*/;
  this->fields.stepSpriteNameFormat = (struct System_String_o *)StringLiteral_17406/*"battle_num_slash_glow"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.stepSpriteNameFormat, v11, v12, v13, v14, v15, v16, v17);
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
    sub_1C13F80(this, 0LL);
  return x->fields.effectId == this->fields.effectId;
}