void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC170 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC170 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t Script; // w1

  if ( (byte_49FC16E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, individualityArray);
    sub_1B640C8(&StringLiteral_7320/*"INDIVIDUALITIE"*/, v6);
    byte_49FC16E = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7320/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float v4; // s0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v7; // 0:x0.8

  if ( (byte_49FC155 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_float___ctor__, method);
    sub_1B640C8(&StringLiteral_17037/*"battleCharaAlpha"*/, v3);
    byte_49FC155 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17037/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17037/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


System_String_o *__fastcall BuffEntity__GetBuffStateNoticeName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC169 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17563/*"buffStateNoticeName"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC169 = 1;
  }
  return BuffEntity__getScript_38674652(
           this,
           (System_String_o *)StringLiteral_17563/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC152 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4353/*"CardEffectId"*/, method);
    byte_49FC152 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4353/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC15D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17909/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_49FC15D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17909/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC15E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17910/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_49FC15E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17910/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FC160 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17911/*"ckOpCountIndividuality"*/, method);
    byte_49FC160 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17911/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FC15F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17912/*"ckSelfCountIndividuality"*/, method);
    byte_49FC15F = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17912/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC15B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4850/*"CounterMessage"*/, method);
    byte_49FC15B = 1;
  }
  return BuffEntity__getScript_38674652(this, (System_String_o *)StringLiteral_4850/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC16C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5308/*"DisplayPriority"*/, *(_QWORD *)&defVal);
    byte_49FC16C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5308/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC141 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18848/*"effectText"*/, method);
    byte_49FC141 = 1;
  }
  return BuffEntity__getScript_38674652(this, (System_String_o *)StringLiteral_18848/*"effectText"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC14F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19237/*"extendLowerLimit"*/, method);
    byte_49FC14F = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19237/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC140 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19783/*"guardEffectId"*/, method);
    byte_49FC140 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19783/*"guardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC161 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7321/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_49FC161 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7321/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC162 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7322/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_49FC162 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7322/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC158 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8889/*"MaxBuffRate"*/, method);
    byte_49FC158 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8889/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC142 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21432/*"motionName"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC142 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_38674652(this, (System_String_o *)StringLiteral_21432/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC13F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22476/*"popupEffectId"*/, method);
    byte_49FC13F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22476/*"popupEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC150 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10708/*"ProgressSelfTurn"*/, method);
    byte_49FC150 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10708/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC151 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10710/*"ProgressTurnCond"*/, method);
    byte_49FC151 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10710/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *Script_38674652; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  BuffEntity___c_c *v19; // x8
  System_Func_object__int__o *_9__21_0; // x20
  Il2CppObject *v21; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_49FC136 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v10);
    sub_1B640C8(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v11);
    sub_1B640C8(&BuffEntity___c_TypeInfo, v12);
    byte_49FC136 = 1;
  }
  Script_38674652 = BuffEntity__getScript_38674652(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_38674652, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_38674652 )
    sub_1B64324(IsNullOrEmpty);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_38674652, separator, 0, 0LL);
  v19 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v19 = BuffEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v19->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BuffEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v16, v17);
    System_Func_object__int____ctor(_9__21_0, v21, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC15C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12701/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_49FC15C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12701/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FC159 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_13493/*"TargetIndiv"*/, method);
    byte_49FC159 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13493/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC168 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_14804/*"UnSubStateWhenContinue"*/, method);
    byte_49FC168 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14804/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FC157 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15098/*"UpBuffRateBuffIndiv"*/, method);
    byte_49FC157 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15098/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FC156 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15099/*"UpBuffRateBuffType"*/, method);
    byte_49FC156 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15099/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC153 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17039/*"battleEndNotReduceTurnFlag"*/, method);
    byte_49FC153 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17039/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC16A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4456/*"CkIndvForEachDamage"*/, method);
    byte_49FC16A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4456/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC16B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18482/*"delayRemoveExpiredOnPlayerTurn"*/, method);
    byte_49FC16B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18482/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC163 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5297/*"DisableForciblyAddState"*/, method);
    byte_49FC163 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5297/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC166 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5298/*"DisableMoveStateTurnChange"*/, method);
    byte_49FC166 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5298/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC154 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18595/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_49FC154 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18595/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC167 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6228/*"ExcludeUnSubStateIndiv"*/, method);
    byte_49FC167 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6228/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC15A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7491/*"IncludeIgnoreIndividuality"*/, method);
    byte_49FC15A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7491/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC165 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7536/*"IndvAddBuffPassive"*/, method);
    byte_49FC165 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7536/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_49FC16F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19578/*"fromCommandSpell"*/, skillInfoData);
    sub_1B640C8(&StringLiteral_19579/*"fromMasterEquip"*/, v5);
    byte_49FC16F = 1;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19579/*"fromMasterEquip"*/, method);
  if ( v6 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19578/*"fromCommandSpell"*/, v7);
  if ( !v6 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1B64324(v6);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_49FC16D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24258/*"useFirstTimeInTurn"*/, data);
    byte_49FC16D = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24258/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1B64324(v5);
  return data->fields.playerSkillCount == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffEntity__TryGetConditionParamArray(
        BuffEntity_o *this,
        int32_t condition,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Int32_array *ScriptIntArray; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Enum_o v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h]

  if ( (byte_49FC164 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_49FC164 = 1;
  }
  v13.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = condition;
  v7 = System_Enum__ToString(&v13, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)paramArray, (int32_t)ScriptIntArray, v10, v11);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool __fastcall BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FC146 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21371/*"missText"*/, method);
    byte_49FC146 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21371/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FC133 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FC133 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  BuffEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_49FC143 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_2389/*"AppId"*/, v5);
    byte_49FC143 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2389/*"AppId"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2389/*"AppId"*/,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
      }
      else
      {
        sub_1B645E4(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v10, v11);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getAtkRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC14D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16879/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_49FC14D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16879/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC14B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17873/*"checkIndvType"*/, method);
    byte_49FC14B = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17873/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC144 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5052/*"DamageRelease"*/, method);
    byte_49FC144 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5052/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FC145 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_2860/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_1B640C8(&StringLiteral_11211/*"ReleaseText"*/, v4);
    byte_49FC145 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_38674652(this, (System_String_o *)StringLiteral_11211/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC14E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18460/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_49FC14E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18460/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  BuffEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_49FC13E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_5848/*"EffectId"*/, v5);
    byte_49FC13E = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5848/*"EffectId"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5848/*"EffectId"*/,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
      }
      else
      {
        sub_1B645E4(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v10, v11);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_Int32_array *__fastcall BuffEntity__getEffectList(BuffEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_49FC137 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FC137 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC14A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19785/*"gutsIconId"*/, method);
    byte_49FC14A = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19785/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FC148 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_2835/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_1B640C8(&StringLiteral_19786/*"gutsText"*/, v4);
    byte_49FC148 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_38674652(this, (System_String_o *)StringLiteral_19786/*"gutsText"*/, result, v6);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FC138 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17569/*"bufficon_{0:000}"*/, v3);
    byte_49FC138 = 1;
  }
  iconId = this->fields.iconId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17569/*"bufficon_{0:000}"*/, v4, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC147 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21371/*"missText"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC147 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_38674652(
             this,
             (System_String_o *)StringLiteral_21371/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC14C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22753/*"relationId"*/, method);
    byte_49FC14C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22753/*"relationId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getScript(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_49FC134 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B640C8(&long_TypeInfo, v7);
    byte_49FC134 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1B645E4(script);
  return (unsigned int)BuffEntity__getScript_38674652(v12, v13, v14, v15);
}


System_String_o *__fastcall BuffEntity__getScript_38674652(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_49FC135 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_49FC135 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(script);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                              script,
                              script->klass->vtable._4_unknown.methodPtr);
}


int32_t __fastcall BuffEntity__get_BuffType(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall BuffEntity__getgutsTextColor(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC149 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19787/*"gutsTextColor"*/, method);
    byte_49FC149 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19787/*"gutsTextColor"*/, 1, v2);
  else
    return 1;
}


bool __fastcall BuffEntity__isCheckGroup(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffGroup != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffEntity__isCondition(BuffEntity_o *this, int32_t cond, int32_t *pal, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_49FC139 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_49FC139 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_38675660(this, v7, pal, v8);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_49FC13D & 1) == 0 )
  {
    sub_1B640C8(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FC13D = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = 2;
  v5 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v5,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v6 = this->fields.script;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = 3;
    v7 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
    if ( v6 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v6,
             v7,
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v9 = this->fields.script;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v12 = 4;
      v7 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
      if ( v9 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v9,
                 v7,
                 (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1B64324(v7);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_38675660(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x8
  BuffEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_49FC13A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FC13A = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v13 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
        LOBYTE(script) = 1;
        *pal = v13;
      }
      else
      {
        sub_1B645E4(Item);
        LOBYTE(script) = BuffEntity__isConditions(v14, v15);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool __fastcall BuffEntity__isConditions(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  bool v6; // w8
  bool v7; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  Il2CppObject *v9; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_49FC13B & 1) == 0 )
  {
    sub_1B640C8(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FC13B = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = 0;
  v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v14.monitor = (void *)-1LL;
  v5 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
  v6 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v5,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v7 = 1;
  if ( !v6 )
  {
    v8 = this->fields.script;
    v15 = 1;
    v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v14.monitor = (void *)-1LL;
    v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
    if ( !v8 )
      goto LABEL_16;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v8,
            v9,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v14.monitor = (void *)-1LL;
      v15 = 2;
      v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
      if ( !v10 )
        goto LABEL_16;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v10,
              v9,
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v11 = this->fields.script;
        v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v14.monitor = (void *)-1LL;
        v15 = 3;
        v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
        if ( v11 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v11,
                 v9,
                 (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v13 = this->fields.script;
          v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v14.monitor = (void *)-1LL;
          v15 = 4;
          v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
          if ( v13 )
            return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v13,
                     v9,
                     (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1B64324(v9);
      }
    }
    return 1;
  }
  return v7;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  bool v6; // w8
  bool v7; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  Il2CppObject *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_49FC13C & 1) == 0 )
  {
    sub_1B640C8(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FC13C = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v12 = 0;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v5 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
    v6 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v5,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v7 = 1;
    if ( !v6 )
    {
      v8 = this->fields.script;
      v12 = 1;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v9 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
      if ( !v8 )
        sub_1B64324(v9);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v8,
               v9,
               (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}


bool __fastcall BuffEntity__isEndAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w10

  type = this->fields.type;
  if ( indiv && type == 76 )
    return Individuality__CheckIndividualities(indiv, this->fields.ckSelfIndv, 0LL);
  else
    return indiv == 0LL && type == 76;
}


bool __fastcall BuffEntity__isReflectionAct(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 97;
}


void __fastcall BuffEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC171 & 1) == 0 )
  {
    sub_1B640C8(&BuffEntity___c_TypeInfo, v1);
    byte_49FC171 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BuffEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BuffEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BuffEntity___c___ctor(BuffEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BuffEntity___c___GetScriptIntArray_b__21_0(
        BuffEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}