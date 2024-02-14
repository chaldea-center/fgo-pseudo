void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42163C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_42163C8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float v4; // s0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o v7; // 0:x0.8

  if ( (byte_42163B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, method);
    sub_B0D8A4(&StringLiteral_16691/*"battleCharaAlpha"*/, v3);
    byte_42163B2 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16691/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16691/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_42163C6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17161/*"buffStateNoticeName"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42163C6 = 1;
  }
  return BuffEntity__getScript_27632508(
           this,
           (System_String_o *)StringLiteral_17161/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163AF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3893/*"CardEffectId"*/, method);
    byte_42163AF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3893/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163BA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17493/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_42163BA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17493/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163BB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17494/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_42163BB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17494/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42163BD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17495/*"ckOpCountIndividuality"*/, method);
    byte_42163BD = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17495/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42163BC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17496/*"ckSelfCountIndividuality"*/, method);
    byte_42163BC = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17496/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163B8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4428/*"CounterMessage"*/, method);
    byte_42163B8 = 1;
  }
  return BuffEntity__getScript_27632508(this, (System_String_o *)StringLiteral_4428/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163AC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18695/*"extendLowerLimit"*/, method);
    byte_42163AC = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18695/*"extendLowerLimit"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163BE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7291/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_42163BE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7291/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163BF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7292/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_42163BF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7292/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163B5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9017/*"MaxBuffRate"*/, method);
    byte_42163B5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9017/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_421639F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20638/*"motionName"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421639F = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27632508(this, (System_String_o *)StringLiteral_20638/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163AD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10825/*"ProgressSelfTurn"*/, method);
    byte_42163AD = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10825/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163AE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10827/*"ProgressTurnCond"*/, method);
    byte_42163AE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10827/*"ProgressTurnCond"*/, -1, v2);
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
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *Script_27632508; // x21
  System_Char_array *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  BuffEntity___c_c *v21; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x20
  Il2CppObject *v24; // x21
  struct BuffEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x0

  if ( (byte_4216396 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, key);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v11);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v12);
    sub_B0D8A4(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v13);
    sub_B0D8A4(&BuffEntity___c_TypeInfo, v14);
    byte_4216396 = 1;
  }
  Script_27632508 = BuffEntity__getScript_27632508(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_27632508, 0LL) )
    return defValues;
  v17 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
  {
    v33 = sub_B0D9A8(v17);
    sub_B0D948(v33, 0LL);
  }
  v17->m_Items[2] = separator;
  if ( !Script_27632508 )
LABEL_17:
    sub_B0D97C(v17);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_27632508, v17, 0LL);
  v21 = BuffEntity___c_TypeInfo;
  if ( (BYTE3(BuffEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v21 = BuffEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_string__int__TypeInfo,
                                                                                 v18,
                                                                                 v19);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v24,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
    v25 = BuffEntity___c_TypeInfo->static_fields;
    v25->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v32,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163B9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12902/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_42163B9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12902/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42163B6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13620/*"TargetIndiv"*/, method);
    byte_42163B6 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13620/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_14828/*"UnSubStateWhenContinue"*/, method);
    byte_42163C5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14828/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42163B4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15100/*"UpBuffRateBuffIndiv"*/, method);
    byte_42163B4 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15100/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42163B3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15101/*"UpBuffRateBuffType"*/, method);
    byte_42163B3 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15101/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163B0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16693/*"battleEndNotReduceTurnFlag"*/, method);
    byte_42163B0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16693/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3991/*"CkIndvForEachDamage"*/, method);
    byte_42163C7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3991/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5328/*"DisableForciblyAddState"*/, method);
    byte_42163C0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5328/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5329/*"DisableMoveStateTurnChange"*/, method);
    byte_42163C3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5329/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42163B1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18106/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_42163B1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18106/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6247/*"ExcludeUnSubStateIndiv"*/, method);
    byte_42163C4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6247/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163B7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7565/*"IncludeIgnoreIndividuality"*/, method);
    byte_42163B7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7565/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163C2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7611/*"IndvAddBuffPassive"*/, method);
    byte_42163C2 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7611/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffEntity__TryGetConditionParamArray(
        BuffEntity_o *this,
        int32_t condition,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x21
  System_String_o *v8; // x22
  const MethodInfo *v9; // x4
  System_Int32_array *ScriptIntArray; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = condition;
  if ( (byte_42163C1 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_42163C1 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v18);
  if ( !v6 )
    sub_B0D97C(0LL);
  v7 = v6;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v8, 0LL, 0x2Cu, v9);
  *paramArray = ScriptIntArray;
  sub_B0D840(
    (BattleServantConfConponent_o *)paramArray,
    (System_Int32_array **)ScriptIntArray,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool __fastcall BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42163A3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20581/*"missText"*/, method);
    byte_42163A3 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20581/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4216393 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4216393 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42163A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1998/*"AppId"*/, v5);
    byte_42163A0 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_1998/*"AppId"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_1998/*"AppId"*/,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v8 = (BuffEntity_o *)sub_B0DC70(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v8, v9);
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

  if ( (byte_42163AA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16556/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_42163AA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16556/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163A8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17457/*"checkIndvType"*/, method);
    byte_42163A8 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17457/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163A1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5082/*"DamageRelease"*/, method);
    byte_42163A1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5082/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42163A2 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2445/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_B0D8A4(&StringLiteral_11415/*"ReleaseText"*/, v4);
    byte_42163A2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2445/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27632508(this, (System_String_o *)StringLiteral_11415/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42163AB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17989/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_42163AB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17989/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_421639E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_5886/*"EffectId"*/, v5);
    byte_421639E = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5886/*"EffectId"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_5886/*"EffectId"*/,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v8 = (BuffEntity_o *)sub_B0DC70(Item);
        LODWORD(script) = (unsigned int)BuffEntity__GetMotionName(v8, v9);
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

  if ( (byte_4216397 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4216397 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163A7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19154/*"gutsIconId"*/, method);
    byte_42163A7 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19154/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42163A5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2421/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_B0D8A4(&StringLiteral_19155/*"gutsText"*/, v4);
    byte_42163A5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2421/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27632508(this, (System_String_o *)StringLiteral_19155/*"gutsText"*/, result, v6);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216398 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17169/*"bufficon_{0:000}"*/, v3);
    byte_4216398 = 1;
  }
  iconId = this->fields.iconId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17169/*"bufficon_{0:000}"*/, v4, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_42163A4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20581/*"missText"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42163A4 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27632508(
             this,
             (System_String_o *)StringLiteral_20581/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42163A9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21826/*"relationId"*/, method);
    byte_42163A9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_21826/*"relationId"*/, 0, v2);
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
  if ( (byte_4216394 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_4216394 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v10 = (BuffEntity_o *)sub_B0DC70(script);
  return (unsigned int)BuffEntity__getScript_27632508(v10, v11, v12, v13);
}


System_String_o *__fastcall BuffEntity__getScript_27632508(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_4216395 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4216395 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(script);
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

  if ( (byte_42163A6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19156/*"gutsTextColor"*/, method);
    byte_42163A6 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19156/*"gutsTextColor"*/, 1, v2);
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
  __int64 v6; // x0
  __int64 v7; // x21
  System_String_o *v8; // x22
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = cond;
  if ( (byte_4216399 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_4216399 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v11);
  if ( !v6 )
    sub_B0D97C(0LL);
  v7 = v6;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  return BuffEntity__isCondition_27633660(this, v8, pal, v9);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  __int64 v9; // x21
  System_Xml_XmlQualifiedName_o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  __int64 v13; // x20
  System_Xml_XmlQualifiedName_o *v14; // x21
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421639D & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_421639D = 1;
  }
  v16 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v16 = 2;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
  if ( !v5 )
    goto LABEL_15;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v7,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v8 = this->fields.script;
    v16 = 3;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
    if ( v5 )
    {
      v9 = v5;
      v10 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v9);
      v16 = *(_DWORD *)v5;
      if ( v8 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
               v10,
               (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v12 = this->fields.script;
        v16 = 4;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
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
                     (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B0D97C(v5);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_27633660(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v11; // x8
  BuffEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_421639A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_421639A = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v11;
      }
      else
      {
        v12 = (BuffEntity_o *)sub_B0DC70(Item);
        LOBYTE(script) = BuffEntity__isConditions(v12, v13);
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
  __int64 v5; // x0
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x20
  __int64 v14; // x21
  System_Xml_XmlQualifiedName_o *v15; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x20
  __int64 v17; // x21
  System_Xml_XmlQualifiedName_o *v18; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x19
  __int64 v21; // x20
  System_Xml_XmlQualifiedName_o *v22; // x21
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421639B & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_421639B = 1;
  }
  v23 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v23 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
  if ( !v5 )
    goto LABEL_21;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v23 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
    if ( v5 )
    {
      v11 = v5;
      v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v11);
      v23 = *(_DWORD *)v5;
      if ( v10 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
               v12,
               (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v13 = this->fields.script;
        v23 = 2;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
        if ( !v5 )
          goto LABEL_21;
        v14 = v5;
        v15 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                 v5,
                                                 *(_QWORD *)(*(_QWORD *)v5 + 368LL));
        v5 = j_il2cpp_object_unbox_0(v14);
        v23 = *(_DWORD *)v5;
        if ( !v13 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
               v15,
               (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v16 = this->fields.script;
        v23 = 3;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
        if ( v5 )
        {
          v17 = v5;
          v18 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                   v5,
                                                   *(_QWORD *)(*(_QWORD *)v5 + 368LL));
          v5 = j_il2cpp_object_unbox_0(v17);
          v23 = *(_DWORD *)v5;
          if ( v16 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
                   v18,
                   (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v20 = this->fields.script;
            v23 = 4;
            v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
            if ( v5 )
            {
              v21 = v5;
              v22 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                       v5,
                                                       *(_QWORD *)(*(_QWORD *)v5 + 368LL));
              v5 = j_il2cpp_object_unbox_0(v21);
              v23 = *(_DWORD *)v5;
              if ( v20 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
                         v22,
                         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(v5);
  }
  return v9;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  __int64 v11; // x20
  System_Xml_XmlQualifiedName_o *v12; // x21
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421639C & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_421639C = 1;
  }
  v14 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v14 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v14);
  if ( !v5 )
    goto LABEL_11;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v14 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v14);
    if ( v5 )
    {
      v11 = v5;
      v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v11);
      v14 = *(_DWORD *)v5;
      if ( v10 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                 v12,
                 (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B0D97C(v5);
  }
  return v9;
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
  struct BuffEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4211DDB & 1) == 0 )
  {
    sub_B0D8A4(&BuffEntity___c_TypeInfo, v1);
    byte_4211DDB = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BuffEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BuffEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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