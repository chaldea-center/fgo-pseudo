void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4353F39 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4353F39 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  float v3; // s0
  System_Nullable_float__o v5; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o v6; // 0:x0.8

  if ( (byte_4353F21 & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&StringLiteral_16889/*"battleCharaAlpha"*/);
    byte_4353F21 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16889/*"battleCharaAlpha"*/, 0LL) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16889/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v6 = (System_Nullable_float__o)&v5;
    v5 = 0LL;
    System_Nullable_float____ctor(v6, v3, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
    return v5;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


System_String_o *__fastcall BuffEntity__GetBuffStateNoticeName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F35 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17366/*"buffStateNoticeName"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353F35 = 1;
  }
  return BuffEntity__getScript_29115000(
           this,
           (System_String_o *)StringLiteral_17366/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F1E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3955/*"CardEffectId"*/);
    byte_4353F1E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3955/*"CardEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F29 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17703/*"ckIndvCountAbove"*/);
    byte_4353F29 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17703/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F2A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17704/*"ckIndvCountBelow"*/);
    byte_4353F2A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17704/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4353F2C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17705/*"ckOpCountIndividuality"*/);
    byte_4353F2C = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17705/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4353F2B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17706/*"ckSelfCountIndividuality"*/);
    byte_4353F2B = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17706/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F27 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4493/*"CounterMessage"*/);
    byte_4353F27 = 1;
  }
  return BuffEntity__getScript_29115000(this, (System_String_o *)StringLiteral_4493/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F38 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5417/*"DisplayPriority"*/);
    byte_4353F38 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5417/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F0D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18552/*"effectText"*/);
    byte_4353F0D = 1;
  }
  return BuffEntity__getScript_29115000(this, (System_String_o *)StringLiteral_18552/*"effectText"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F1B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18920/*"extendLowerLimit"*/);
    byte_4353F1B = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18920/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F0C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19392/*"guardEffectId"*/);
    byte_4353F0C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19392/*"guardEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F2D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7368/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    byte_4353F2D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7368/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F2E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7369/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4353F2E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7369/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F24 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9103/*"MaxBuffRate"*/);
    byte_4353F24 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9103/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F0E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_20898/*"motionName"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353F0E = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_29115000(this, (System_String_o *)StringLiteral_20898/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F0B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21860/*"popupEffectId"*/);
    byte_4353F0B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_21860/*"popupEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F1C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10950/*"ProgressSelfTurn"*/);
    byte_4353F1C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10950/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F1D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10952/*"ProgressTurnCond"*/);
    byte_4353F1D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10952/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_29115000; // x21
  System_Char_array *v11; // x0
  System_Char_array *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffEntity___c_c *v14; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x20
  Il2CppObject *v17; // x21
  struct BuffEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x0

  if ( (byte_4353F02 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__);
    sub_B70694(&BuffEntity___c_TypeInfo);
    byte_4353F02 = 1;
  }
  Script_29115000 = BuffEntity__getScript_29115000(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_29115000, 0LL) )
    return defValues;
  v11 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_17;
  v12 = v11;
  if ( !v11->max_length )
  {
    v26 = sub_B70798(v11);
    sub_B70738(v26, 0LL);
  }
  v11->m_Items[2] = separator;
  if ( !Script_29115000 )
LABEL_17:
    sub_B7076C(v11, v12);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_29115000, v11, 0LL);
  v14 = BuffEntity___c_TypeInfo;
  if ( (BYTE3(BuffEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v14 = BuffEntity___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v17,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
    v18 = BuffEntity___c_TypeInfo->static_fields;
    v18->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F28 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13037/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4353F28 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_13037/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4353F25 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13760/*"TargetIndiv"*/);
    byte_4353F25 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13760/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F34 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_14968/*"UnSubStateWhenContinue"*/);
    byte_4353F34 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14968/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4353F23 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15241/*"UpBuffRateBuffIndiv"*/);
    byte_4353F23 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15241/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4353F22 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15242/*"UpBuffRateBuffType"*/);
    byte_4353F22 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15242/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F1F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16891/*"battleEndNotReduceTurnFlag"*/);
    byte_4353F1F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16891/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F36 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4054/*"CkIndvForEachDamage"*/);
    byte_4353F36 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4054/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F37 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18223/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_4353F37 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18223/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F2F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5398/*"DisableForciblyAddState"*/);
    byte_4353F2F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5398/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F32 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5399/*"DisableMoveStateTurnChange"*/);
    byte_4353F32 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5399/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4353F20 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18324/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_4353F20 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18324/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F33 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6322/*"ExcludeUnSubStateIndiv"*/);
    byte_4353F33 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6322/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F26 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7643/*"IncludeIgnoreIndividuality"*/);
    byte_4353F26 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7643/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F31 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7689/*"IndvAddBuffPassive"*/);
    byte_4353F31 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7689/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__TryGetConditionParamArray(
        BuffEntity_o *this,
        int32_t condition,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  System_String_o *v9; // x22
  const MethodInfo *v10; // x4
  System_Int32_array *ScriptIntArray; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = condition;
  if ( (byte_4353F30 & 1) == 0 )
  {
    sub_B70694(&BuffList_CONDITIONS_TypeInfo);
    byte_4353F30 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19, paramArray);
  if ( !v6 )
    sub_B7076C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v9, 0LL, 0x2Cu, v10);
  *paramArray = ScriptIntArray;
  sub_B70630(
    (BattleServantConfConponent_o *)paramArray,
    (System_Int32_array **)ScriptIntArray,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool __fastcall BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4353F12 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_20841/*"missText"*/);
    byte_4353F12 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20841/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4353EFF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4353EFF = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4353F0F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_2022/*"AppId"*/);
    byte_4353F0F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2022/*"AppId"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_2022/*"AppId"*/,
                                                                                       (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7076C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        sub_B70A60(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v6, v7);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall BuffEntity__getAtkRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F19 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16750/*"atkPriority"*/);
    byte_4353F19 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16750/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F17 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17667/*"checkIndvType"*/);
    byte_4353F17 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17667/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F10 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5150/*"DamageRelease"*/);
    byte_4353F10 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5150/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4353F11 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2482/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_B70694(&StringLiteral_11542/*"ReleaseText"*/);
    byte_4353F11 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2482/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_29115000(this, (System_String_o *)StringLiteral_11542/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353F1A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18202/*"defPriority"*/);
    byte_4353F1A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18202/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4353F0A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_5961/*"EffectId"*/);
    byte_4353F0A = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5961/*"EffectId"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_5961/*"EffectId"*/,
                                                                                       (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7076C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        sub_B70A60(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v6, v7);
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

  if ( (byte_4353F03 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_4353F03 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F16 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19394/*"gutsIconId"*/);
    byte_4353F16 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19394/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4353F14 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2457/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_B70694(&StringLiteral_19395/*"gutsText"*/);
    byte_4353F14 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2457/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_29115000(this, (System_String_o *)StringLiteral_19395/*"gutsText"*/, result, v4);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353F04 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_17374/*"bufficon_{0:000}"*/);
    byte_4353F04 = 1;
  }
  iconId = this->fields.iconId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2);
  return System_String__Format((System_String_o *)StringLiteral_17374/*"bufficon_{0:000}"*/, v4, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F13 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_20841/*"missText"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353F13 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_29115000(
             this,
             (System_String_o *)StringLiteral_20841/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353F18 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_22118/*"relationId"*/);
    byte_4353F18 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22118/*"relationId"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x2
  const MethodInfo *v13; // x3

  v4 = defVal;
  if ( (byte_4353F00 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_4353F00 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7076C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B70A60(script);
  return (unsigned int)BuffEntity__getScript_29115000(v10, v11, v12, v13);
}


System_String_o *__fastcall BuffEntity__getScript_29115000(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_4353F01 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4353F01 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7076C(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
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

  if ( (byte_4353F15 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19396/*"gutsTextColor"*/);
    byte_4353F15 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19396/*"gutsTextColor"*/, 1, v2);
  else
    return 1;
}


bool __fastcall BuffEntity__isCheckGroup(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffGroup != 0;
}


bool __fastcall BuffEntity__isCondition(BuffEntity_o *this, int32_t cond, int32_t *pal, const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  System_String_o *v9; // x22
  const MethodInfo *v10; // x3
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = cond;
  if ( (byte_4353F05 & 1) == 0 )
  {
    sub_B70694(&BuffList_CONDITIONS_TypeInfo);
    byte_4353F05 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v12, pal);
  if ( !v6 )
    sub_B7076C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  return BuffEntity__isCondition_29116152(this, v9, pal, v10);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x22
  __int64 v13; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x19
  __int64 v16; // x20
  System_Xml_XmlQualifiedName_o *v17; // x21
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4353F09 & 1) == 0 )
  {
    sub_B70694(&BuffList_CONDITIONS_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4353F09 = 1;
  }
  v19 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v19 = 2;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19, v2);
  if ( !v5 )
    goto LABEL_15;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v8,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v10 = this->fields.script;
    v19 = 3;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19, v9);
    if ( v5 )
    {
      v11 = v5;
      v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v11);
      v19 = *(_DWORD *)v5;
      if ( v10 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
               v12,
               (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v15 = this->fields.script;
        v19 = 4;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19, v13);
        if ( v5 )
        {
          v16 = v5;
          v17 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                   v5,
                                                   *(_QWORD *)(*(_QWORD *)v5 + 368LL));
          v5 = j_il2cpp_object_unbox_0(v16);
          v19 = *(_DWORD *)v5;
          if ( v15 )
            return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
                     v17,
                     (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B7076C(v5, v6);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_29116152(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v10; // x8
  BuffEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4353F06 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_4353F06 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7076C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v10 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v10;
      }
      else
      {
        sub_B70A60(Item);
        LOBYTE(script) = BuffEntity__isConditions(v11, v12);
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
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  __int64 v9; // x2
  bool v10; // w8
  bool v11; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x20
  __int64 v13; // x21
  System_Xml_XmlQualifiedName_o *v14; // x22
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x20
  __int64 v17; // x21
  System_Xml_XmlQualifiedName_o *v18; // x22
  __int64 v19; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x20
  __int64 v21; // x21
  System_Xml_XmlQualifiedName_o *v22; // x22
  __int64 v23; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x19
  __int64 v26; // x20
  System_Xml_XmlQualifiedName_o *v27; // x21
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4353F07 & 1) == 0 )
  {
    sub_B70694(&BuffList_CONDITIONS_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4353F07 = 1;
  }
  v28 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v28 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28, v2);
  if ( !v5 )
    goto LABEL_21;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v28 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v8,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v11 = 1;
  if ( !v10 )
  {
    v12 = this->fields.script;
    v28 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28, v9);
    if ( v5 )
    {
      v13 = v5;
      v14 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v13);
      v28 = *(_DWORD *)v5;
      if ( v12 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
               v14,
               (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v16 = this->fields.script;
        v28 = 2;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28, v15);
        if ( !v5 )
          goto LABEL_21;
        v17 = v5;
        v18 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                 v5,
                                                 *(_QWORD *)(*(_QWORD *)v5 + 368LL));
        v5 = j_il2cpp_object_unbox_0(v17);
        v28 = *(_DWORD *)v5;
        if ( !v16 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
               v18,
               (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v20 = this->fields.script;
        v28 = 3;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28, v19);
        if ( v5 )
        {
          v21 = v5;
          v22 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                   v5,
                                                   *(_QWORD *)(*(_QWORD *)v5 + 368LL));
          v5 = j_il2cpp_object_unbox_0(v21);
          v28 = *(_DWORD *)v5;
          if ( v20 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
                   v22,
                   (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v25 = this->fields.script;
            v28 = 4;
            v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28, v23);
            if ( v5 )
            {
              v26 = v5;
              v27 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                       v5,
                                                       *(_QWORD *)(*(_QWORD *)v5 + 368LL));
              v5 = j_il2cpp_object_unbox_0(v26);
              v28 = *(_DWORD *)v5;
              if ( v25 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v25,
                         v27,
                         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(v5, v6);
  }
  return v11;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  __int64 v9; // x2
  bool v10; // w8
  bool v11; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  __int64 v13; // x20
  System_Xml_XmlQualifiedName_o *v14; // x21
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4353F08 & 1) == 0 )
  {
    sub_B70694(&BuffList_CONDITIONS_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4353F08 = 1;
  }
  v16 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v16 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16, v2);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v8,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v11 = 1;
  if ( !v10 )
  {
    v12 = this->fields.script;
    v16 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16, v9);
    if ( v5 )
    {
      v13 = v5;
      v14 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v13);
      v16 = *(_DWORD *)v5;
      if ( v12 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
                 v14,
                 (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B7076C(v5, v6);
  }
  return v11;
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
  Il2CppObject *v1; // x19
  struct BuffEntity___c_StaticFields *static_fields; // x0

  if ( (byte_434ED4F & 1) == 0 )
  {
    sub_B70694(&BuffEntity___c_TypeInfo);
    byte_434ED4F = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BuffEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_B70630(static_fields);
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