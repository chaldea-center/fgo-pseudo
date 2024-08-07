void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE888 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE888 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t Script; // w1

  if ( (byte_49FE886 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, individualityArray);
    sub_1B64A00(&StringLiteral_7321/*"INDIVIDUALITIE"*/, v6);
    byte_49FE886 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7321/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_49FE86D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Nullable_float___ctor__, method);
    sub_1B64A00(&StringLiteral_17040/*"battleCharaAlpha"*/, v3);
    byte_49FE86D = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17040/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17040/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_35D28A0 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_49FE881 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17566/*"buffStateNoticeName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FE881 = 1;
  }
  return BuffEntity__getScript_38679368(
           this,
           (System_String_o *)StringLiteral_17566/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE86A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_4354/*"CardEffectId"*/, method);
    byte_49FE86A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4354/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE875 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17912/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_49FE875 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17912/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE876 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17913/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_49FE876 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17913/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FE878 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17914/*"ckOpCountIndividuality"*/, method);
    byte_49FE878 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17914/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FE877 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17915/*"ckSelfCountIndividuality"*/, method);
    byte_49FE877 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17915/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE873 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_4851/*"CounterMessage"*/, method);
    byte_49FE873 = 1;
  }
  return BuffEntity__getScript_38679368(this, (System_String_o *)StringLiteral_4851/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE884 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_5309/*"DisplayPriority"*/, *(_QWORD *)&defVal);
    byte_49FE884 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5309/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE859 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18851/*"effectText"*/, method);
    byte_49FE859 = 1;
  }
  return BuffEntity__getScript_38679368(this, (System_String_o *)StringLiteral_18851/*"effectText"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE867 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19240/*"extendLowerLimit"*/, method);
    byte_49FE867 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19240/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE858 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19786/*"guardEffectId"*/, method);
    byte_49FE858 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19786/*"guardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE879 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7322/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_49FE879 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7322/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE87A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7323/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_49FE87A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7323/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE870 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_8892/*"MaxBuffRate"*/, method);
    byte_49FE870 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8892/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FE85A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_21435/*"motionName"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FE85A = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_38679368(this, (System_String_o *)StringLiteral_21435/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE857 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22479/*"popupEffectId"*/, method);
    byte_49FE857 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22479/*"popupEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE868 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_10710/*"ProgressSelfTurn"*/, method);
    byte_49FE868 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10710/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE869 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_10712/*"ProgressTurnCond"*/, method);
    byte_49FE869 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10712/*"ProgressTurnCond"*/, -1, v2);
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
  System_String_o *Script_38679368; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  BuffEntity___c_c *v18; // x8
  System_Func_object__int__o *_9__21_0; // x20
  Il2CppObject *v20; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_49FE84E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B64A00(&System_Func_string__int__TypeInfo, v10);
    sub_1B64A00(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v11);
    sub_1B64A00(&BuffEntity___c_TypeInfo, v12);
    byte_49FE84E = 1;
  }
  Script_38679368 = BuffEntity__getScript_38679368(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_38679368, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_38679368 )
    sub_1B64C5C(IsNullOrEmpty, v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_38679368, separator, 0, 0LL);
  v18 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v18 = BuffEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v18->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BuffEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v20, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE874 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_12706/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_49FE874 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12706/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FE871 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_13498/*"TargetIndiv"*/, method);
    byte_49FE871 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13498/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE880 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_14809/*"UnSubStateWhenContinue"*/, method);
    byte_49FE880 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14809/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FE86F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15101/*"UpBuffRateBuffIndiv"*/, method);
    byte_49FE86F = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15101/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_49FE86E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15102/*"UpBuffRateBuffType"*/, method);
    byte_49FE86E = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15102/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE86B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17042/*"battleEndNotReduceTurnFlag"*/, method);
    byte_49FE86B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17042/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE882 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_4457/*"CkIndvForEachDamage"*/, method);
    byte_49FE882 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4457/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE883 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18485/*"delayRemoveExpiredOnPlayerTurn"*/, method);
    byte_49FE883 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18485/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE87B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_5298/*"DisableForciblyAddState"*/, method);
    byte_49FE87B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5298/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE87E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_5299/*"DisableMoveStateTurnChange"*/, method);
    byte_49FE87E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5299/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE86C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18598/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_49FE86C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18598/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE87F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_6229/*"ExcludeUnSubStateIndiv"*/, method);
    byte_49FE87F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6229/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE872 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7493/*"IncludeIgnoreIndividuality"*/, method);
    byte_49FE872 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7493/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE87D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7538/*"IndvAddBuffPassive"*/, method);
    byte_49FE87D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7538/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49FE887 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19581/*"fromCommandSpell"*/, skillInfoData);
    sub_1B64A00(&StringLiteral_19582/*"fromMasterEquip"*/, v5);
    byte_49FE887 = 1;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19582/*"fromMasterEquip"*/, method);
  if ( v6 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19581/*"fromCommandSpell"*/, v8);
  if ( !v6 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1B64C5C(v6, v7);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_49FE885 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_24262/*"useFirstTimeInTurn"*/, data);
    byte_49FE885 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24262/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1B64C5C(v5, v6);
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

  if ( (byte_49FE87C & 1) == 0 )
  {
    sub_1B64A00(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_49FE87C = 1;
  }
  v13.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = condition;
  v7 = System_Enum__ToString(&v13, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)paramArray, (int32_t)ScriptIntArray, v10, v11);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool __fastcall BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE85E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_21374/*"missText"*/, method);
    byte_49FE85E = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21374/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FE84B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FE84B = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FE85B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_2389/*"AppId"*/, v5);
    byte_49FE85B = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2389/*"AppId"*/,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2389/*"AppId"*/,
                                                                                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64C5C(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B64F1C(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v11, v12);
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

  if ( (byte_49FE865 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16882/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_49FE865 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16882/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE863 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17876/*"checkIndvType"*/, method);
    byte_49FE863 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17876/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE85C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_5053/*"DamageRelease"*/, method);
    byte_49FE85C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5053/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FE85D & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_2860/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_1B64A00(&StringLiteral_11215/*"ReleaseText"*/, v4);
    byte_49FE85D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_38679368(this, (System_String_o *)StringLiteral_11215/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FE866 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18463/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_49FE866 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18463/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FE856 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_5849/*"EffectId"*/, v5);
    byte_49FE856 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5849/*"EffectId"*/,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5849/*"EffectId"*/,
                                                                                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64C5C(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B64F1C(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v11, v12);
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

  if ( (byte_49FE84F & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    byte_49FE84F = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE862 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19788/*"gutsIconId"*/, method);
    byte_49FE862 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19788/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FE860 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_2835/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_1B64A00(&StringLiteral_19789/*"gutsText"*/, v4);
    byte_49FE860 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_38679368(this, (System_String_o *)StringLiteral_19789/*"gutsText"*/, result, v6);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FE850 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17572/*"bufficon_{0:000}"*/, v6);
    byte_49FE850 = 1;
  }
  iconId = this->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17572/*"bufficon_{0:000}"*/, v7, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FE85F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_21374/*"missText"*/, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FE85F = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_38679368(
             this,
             (System_String_o *)StringLiteral_21374/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE864 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22756/*"relationId"*/, method);
    byte_49FE864 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22756/*"relationId"*/, 0, v2);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BuffEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_49FE84C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B64A00(&long_TypeInfo, v7);
    byte_49FE84C = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B64F1C(script);
  return (unsigned int)BuffEntity__getScript_38679368(v13, v14, v15, v16);
}


System_String_o *__fastcall BuffEntity__getScript_38679368(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_49FE84D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_49FE84D = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(script, v7);
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

  if ( (byte_49FE861 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19790/*"gutsTextColor"*/, method);
    byte_49FE861 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19790/*"gutsTextColor"*/, 1, v2);
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

  if ( (byte_49FE851 & 1) == 0 )
  {
    sub_1B64A00(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_49FE851 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_38680376(this, v7, pal, v8);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int v13; // [xsp+18h] [xbp-38h]

  if ( (byte_49FE855 & 1) == 0 )
  {
    sub_1B64A00(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FE855 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = 2;
  v5 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v5,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v6 = this->fields.script;
    v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v12.monitor = (void *)-1LL;
    v13 = 3;
    v7 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
    if ( v6 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v6,
             v7,
             (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v10 = this->fields.script;
      v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v12.monitor = (void *)-1LL;
      v13 = 4;
      v7 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
      if ( v10 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 v7,
                 (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1B64C5C(v7, v8);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_38680376(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x8
  BuffEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_49FE852 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64A00(&long_TypeInfo, v8);
    byte_49FE852 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64C5C(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *pal = v14;
      }
      else
      {
        sub_1B64F1C(Item);
        LOBYTE(script) = BuffEntity__isConditions(v15, v16);
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
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  System_Enum_o v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+18h] [xbp-38h]

  if ( (byte_49FE853 & 1) == 0 )
  {
    sub_1B64A00(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FE853 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v16 = 0;
  v15.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v15.monitor = (void *)-1LL;
  v5 = (Il2CppObject *)System_Enum__ToString(&v15, 0LL);
  v6 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v5,
         (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v7 = 1;
  if ( !v6 )
  {
    v8 = this->fields.script;
    v16 = 1;
    v15.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v15.monitor = (void *)-1LL;
    v9 = (Il2CppObject *)System_Enum__ToString(&v15, 0LL);
    if ( !v8 )
      goto LABEL_16;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v8,
            v9,
            (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v11 = this->fields.script;
      v15.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v15.monitor = (void *)-1LL;
      v16 = 2;
      v9 = (Il2CppObject *)System_Enum__ToString(&v15, 0LL);
      if ( !v11 )
        goto LABEL_16;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v11,
              v9,
              (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v12 = this->fields.script;
        v15.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v15.monitor = (void *)-1LL;
        v16 = 3;
        v9 = (Il2CppObject *)System_Enum__ToString(&v15, 0LL);
        if ( v12 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v12,
                 v9,
                 (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v14 = this->fields.script;
          v15.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v15.monitor = (void *)-1LL;
          v16 = 4;
          v9 = (Il2CppObject *)System_Enum__ToString(&v15, 0LL);
          if ( v14 )
            return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v14,
                     v9,
                     (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1B64C5C(v9, v10);
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
  __int64 v10; // x1
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int v13; // [xsp+18h] [xbp-38h]

  if ( (byte_49FE854 & 1) == 0 )
  {
    sub_1B64A00(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_49FE854 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v13 = 0;
    v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v12.monitor = (void *)-1LL;
    v5 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
    v6 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v5,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v7 = 1;
    if ( !v6 )
    {
      v8 = this->fields.script;
      v13 = 1;
      v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v12.monitor = (void *)-1LL;
      v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
      if ( !v8 )
        sub_1B64C5C(v9, v10);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v8,
               v9,
               (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE889 & 1) == 0 )
  {
    sub_1B64A00(&BuffEntity___c_TypeInfo, v1);
    byte_49FE889 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(BuffEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)BuffEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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