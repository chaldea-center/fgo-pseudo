void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189759 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189759 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4189743 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_float___ctor__, method);
    sub_B2C35C(&StringLiteral_16642/*"battleCharaAlpha"*/, v3);
    byte_4189743 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16642/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16642/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4189757 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17109/*"buffStateNoticeName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189757 = 1;
  }
  return BuffEntity__getScript_28343480(
           this,
           (System_String_o *)StringLiteral_17109/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189740 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3880/*"CardEffectId"*/, method);
    byte_4189740 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3880/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418974B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17437/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_418974B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17437/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418974C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17438/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_418974C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17438/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_418974E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17439/*"ckOpCountIndividuality"*/, method);
    byte_418974E = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17439/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_418974D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17440/*"ckSelfCountIndividuality"*/, method);
    byte_418974D = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17440/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189749 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4413/*"CounterMessage"*/, method);
    byte_4189749 = 1;
  }
  return BuffEntity__getScript_28343480(this, (System_String_o *)StringLiteral_4413/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418973D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18637/*"extendLowerLimit"*/, method);
    byte_418973D = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18637/*"extendLowerLimit"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418974F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7271/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_418974F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7271/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4189750 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7272/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_4189750 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7272/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189746 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8994/*"MaxBuffRate"*/, method);
    byte_4189746 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8994/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4189730 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20575/*"motionName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189730 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_28343480(this, (System_String_o *)StringLiteral_20575/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418973E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10800/*"ProgressSelfTurn"*/, method);
    byte_418973E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10800/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418973F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10801/*"ProgressTurnCond"*/, method);
    byte_418973F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10801/*"ProgressTurnCond"*/, -1, v2);
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
  System_String_o *Script_28343480; // x21
  System_Char_array *v17; // x0
  System_Char_array *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  BuffEntity___c_c *v20; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x20
  Il2CppObject *v23; // x21
  struct BuffEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x0

  if ( (byte_4189727 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, key);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v11);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v12);
    sub_B2C35C(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v13);
    sub_B2C35C(&BuffEntity___c_TypeInfo, v14);
    byte_4189727 = 1;
  }
  Script_28343480 = BuffEntity__getScript_28343480(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_28343480, 0LL) )
    return defValues;
  v17 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_17;
  v18 = v17;
  if ( !v17->max_length )
  {
    v32 = sub_B2C460(v17);
    sub_B2C400(v32, 0LL);
  }
  v17->m_Items[2] = separator;
  if ( !Script_28343480 )
LABEL_17:
    sub_B2C434(v17, v18);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_28343480, v17, 0LL);
  v20 = BuffEntity___c_TypeInfo;
  if ( (BYTE3(BuffEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v20 = BuffEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v23,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
    v24 = BuffEntity___c_TypeInfo->static_fields;
    v24->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v31,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418974A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12858/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_418974A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12858/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4189747 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13576/*"TargetIndiv"*/, method);
    byte_4189747 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13576/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189756 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_14782/*"UnSubStateWhenContinue"*/, method);
    byte_4189756 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14782/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4189745 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15054/*"UpBuffRateBuffIndiv"*/, method);
    byte_4189745 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15054/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4189744 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15055/*"UpBuffRateBuffType"*/, method);
    byte_4189744 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15055/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189741 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16644/*"battleEndNotReduceTurnFlag"*/, method);
    byte_4189741 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16644/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189758 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3978/*"CkIndvForEachDamage"*/, method);
    byte_4189758 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3978/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189751 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5312/*"DisableForciblyAddState"*/, method);
    byte_4189751 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5312/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189754 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5313/*"DisableMoveStateTurnChange"*/, method);
    byte_4189754 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5313/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189742 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18050/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_4189742 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18050/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189755 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6230/*"ExcludeUnSubStateIndiv"*/, method);
    byte_4189755 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6230/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189748 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7544/*"IncludeIgnoreIndividuality"*/, method);
    byte_4189748 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7544/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189753 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7590/*"IndvAddBuffPassive"*/, method);
    byte_4189753 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7590/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4189752 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_4189752 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v9, 0LL, 0x2Cu, v10);
  *paramArray = ScriptIntArray;
  sub_B2C2F8(
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

  if ( (byte_4189734 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20518/*"missText"*/, method);
    byte_4189734 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20518/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4189724 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4189724 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4189731 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1990/*"AppId"*/, v5);
    byte_4189731 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_1990/*"AppId"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_1990/*"AppId"*/,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (BuffEntity_o *)sub_B2C728(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v9, v10);
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

  if ( (byte_418973B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16507/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_418973B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16507/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189739 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17402/*"checkIndvType"*/, method);
    byte_4189739 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17402/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189732 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5066/*"DamageRelease"*/, method);
    byte_4189732 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5066/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4189733 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2434/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_B2C35C(&StringLiteral_11388/*"ReleaseText"*/, v4);
    byte_4189733 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2434/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_28343480(this, (System_String_o *)StringLiteral_11388/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418973C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17933/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_418973C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17933/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_418972F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5869/*"EffectId"*/, v5);
    byte_418972F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5869/*"EffectId"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_5869/*"EffectId"*/,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (BuffEntity_o *)sub_B2C728(Item);
        LODWORD(script) = (unsigned int)BuffEntity__GetMotionName(v9, v10);
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

  if ( (byte_4189728 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4189728 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4189738 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19096/*"gutsIconId"*/, method);
    byte_4189738 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19096/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4189736 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2411/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_B2C35C(&StringLiteral_19097/*"gutsText"*/, v4);
    byte_4189736 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2411/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_28343480(this, (System_String_o *)StringLiteral_19097/*"gutsText"*/, result, v6);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189729 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17117/*"bufficon_{0:000}"*/, v3);
    byte_4189729 = 1;
  }
  iconId = this->fields.iconId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17117/*"bufficon_{0:000}"*/, v4, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4189735 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20518/*"missText"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189735 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_28343480(
             this,
             (System_String_o *)StringLiteral_20518/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418973A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21756/*"relationId"*/, method);
    byte_418973A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_21756/*"relationId"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_4189725 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4189725 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (BuffEntity_o *)sub_B2C728(script);
  return (unsigned int)BuffEntity__getScript_28343480(v11, v12, v13, v14);
}


System_String_o *__fastcall BuffEntity__getScript_28343480(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_4189726 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4189726 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v7);
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

  if ( (byte_4189737 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19098/*"gutsTextColor"*/, method);
    byte_4189737 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19098/*"gutsTextColor"*/, 1, v2);
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
  __int64 v7; // x1
  __int64 v8; // x21
  System_String_o *v9; // x22
  const MethodInfo *v10; // x3
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = cond;
  if ( (byte_418972A & 1) == 0 )
  {
    sub_B2C35C(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_418972A = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v12);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  return BuffEntity__isCondition_28344632(this, v9, pal, v10);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x20
  __int64 v10; // x21
  System_Xml_XmlQualifiedName_o *v11; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  __int64 v14; // x20
  System_Xml_XmlQualifiedName_o *v15; // x21
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418972E & 1) == 0 )
  {
    sub_B2C35C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_418972E = 1;
  }
  v17 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v17 = 2;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v17);
  if ( !v5 )
    goto LABEL_15;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v17 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v8,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v9 = this->fields.script;
    v17 = 3;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v17);
    if ( v5 )
    {
      v10 = v5;
      v11 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v10);
      v17 = *(_DWORD *)v5;
      if ( v9 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
               v11,
               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v13 = this->fields.script;
        v17 = 4;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v17);
        if ( v5 )
        {
          v14 = v5;
          v15 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                   v5,
                                                   *(_QWORD *)(*(_QWORD *)v5 + 368LL));
          v5 = j_il2cpp_object_unbox_0(v14);
          v17 = *(_DWORD *)v5;
          if ( v13 )
            return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
                     v15,
                     (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B2C434(v5, v6);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_28344632(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_418972B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418972B = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v12;
      }
      else
      {
        v13 = (BuffEntity_o *)sub_B2C728(Item);
        LOBYTE(script) = BuffEntity__isConditions(v13, v14);
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
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  bool v9; // w8
  bool v10; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x20
  __int64 v12; // x21
  System_Xml_XmlQualifiedName_o *v13; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x20
  __int64 v15; // x21
  System_Xml_XmlQualifiedName_o *v16; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x20
  __int64 v18; // x21
  System_Xml_XmlQualifiedName_o *v19; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x19
  __int64 v22; // x20
  System_Xml_XmlQualifiedName_o *v23; // x21
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418972C & 1) == 0 )
  {
    sub_B2C35C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_418972C = 1;
  }
  v24 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v24 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v24);
  if ( !v5 )
    goto LABEL_21;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v24 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  v9 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v8,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v10 = 1;
  if ( !v9 )
  {
    v11 = this->fields.script;
    v24 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v24);
    if ( v5 )
    {
      v12 = v5;
      v13 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v12);
      v24 = *(_DWORD *)v5;
      if ( v11 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
               v13,
               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v14 = this->fields.script;
        v24 = 2;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v24);
        if ( !v5 )
          goto LABEL_21;
        v15 = v5;
        v16 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                 v5,
                                                 *(_QWORD *)(*(_QWORD *)v5 + 368LL));
        v5 = j_il2cpp_object_unbox_0(v15);
        v24 = *(_DWORD *)v5;
        if ( !v14 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14,
               v16,
               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v17 = this->fields.script;
        v24 = 3;
        v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v24);
        if ( v5 )
        {
          v18 = v5;
          v19 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                   v5,
                                                   *(_QWORD *)(*(_QWORD *)v5 + 368LL));
          v5 = j_il2cpp_object_unbox_0(v18);
          v24 = *(_DWORD *)v5;
          if ( v17 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
                   v19,
                   (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v21 = this->fields.script;
            v24 = 4;
            v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v24);
            if ( v5 )
            {
              v22 = v5;
              v23 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                       v5,
                                                       *(_QWORD *)(*(_QWORD *)v5 + 368LL));
              v5 = j_il2cpp_object_unbox_0(v22);
              v24 = *(_DWORD *)v5;
              if ( v21 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
                         v23,
                         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(v5, v6);
  }
  return v10;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x22
  bool v9; // w8
  bool v10; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x19
  __int64 v12; // x20
  System_Xml_XmlQualifiedName_o *v13; // x21
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418972D & 1) == 0 )
  {
    sub_B2C35C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_418972D = 1;
  }
  v15 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v15);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  v9 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v8,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v10 = 1;
  if ( !v9 )
  {
    v11 = this->fields.script;
    v15 = 1;
    v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v15);
    if ( v5 )
    {
      v12 = v5;
      v13 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                               v5,
                                               *(_QWORD *)(*(_QWORD *)v5 + 368LL));
      v5 = j_il2cpp_object_unbox_0(v12);
      v15 = *(_DWORD *)v5;
      if ( v11 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
                 v13,
                 (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B2C434(v5, v6);
  }
  return v10;
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
  struct BuffEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4184EAC & 1) == 0 )
  {
    sub_B2C35C(&BuffEntity___c_TypeInfo, v1);
    byte_4184EAC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BuffEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BuffEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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