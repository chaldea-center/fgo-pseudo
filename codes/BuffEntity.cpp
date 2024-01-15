void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB4E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB4E8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_40FB4D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, method);
    sub_B16FFC(&StringLiteral_16578/*"battleCharaAlpha"*/, v3);
    byte_40FB4D3 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16578/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16578/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_40FB4E7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17043/*"buffStateNoticeName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB4E7 = 1;
  }
  return BuffEntity__getScript_27589352(
           this,
           (System_String_o *)StringLiteral_17043/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4D0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3866/*"CardEffectId"*/, method);
    byte_40FB4D0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3866/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4DB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17371/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_40FB4DB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17371/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4DC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17372/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_40FB4DC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17372/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_40FB4DE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17373/*"ckOpCountIndividuality"*/, method);
    byte_40FB4DE = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17373/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_40FB4DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17374/*"ckSelfCountIndividuality"*/, method);
    byte_40FB4DD = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17374/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4D9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4395/*"CounterMessage"*/, method);
    byte_40FB4D9 = 1;
  }
  return BuffEntity__getScript_27589352(this, (System_String_o *)StringLiteral_4395/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4CD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18567/*"extendLowerLimit"*/, method);
    byte_40FB4CD = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18567/*"extendLowerLimit"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7243/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_40FB4DF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7243/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4E0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7244/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_40FB4E0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7244/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8964/*"MaxBuffRate"*/, method);
    byte_40FB4D6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8964/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FB4C0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20490/*"motionName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB4C0 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27589352(this, (System_String_o *)StringLiteral_20490/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10764/*"ProgressSelfTurn"*/, method);
    byte_40FB4CE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10764/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4CF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10765/*"ProgressTurnCond"*/, method);
    byte_40FB4CF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10765/*"ProgressTurnCond"*/, -1, v2);
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
  System_String_o *Script_27589352; // x21
  __int64 v16; // x2
  System_Char_array *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  BuffEntity___c_c *v25; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x20
  Il2CppObject *v28; // x21
  struct BuffEntity___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_40FB4B7 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, key);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v11);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v12);
    sub_B16FFC(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v13);
    sub_B16FFC(&BuffEntity___c_TypeInfo, v14);
    byte_40FB4B7 = 1;
  }
  Script_27589352 = BuffEntity__getScript_27589352(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_27589352, 0LL) )
    return defValues;
  v18 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v16);
  if ( !v18 )
    goto LABEL_17;
  if ( !v18->max_length )
  {
    sub_B17100(v18, v18, v19);
    sub_B170A0();
  }
  v18->m_Items[2] = separator;
  if ( !Script_27589352 )
LABEL_17:
    sub_B170D4();
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_27589352, v18, 0LL);
  v25 = BuffEntity___c_TypeInfo;
  if ( (BYTE3(BuffEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v25 = BuffEntity___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_string__int__TypeInfo,
                                                                                 v20,
                                                                                 v21,
                                                                                 v22,
                                                                                 v23);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v28,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
    v29 = BuffEntity___c_TypeInfo->static_fields;
    v29->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v36,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4DA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12802/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_40FB4DA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12802/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_40FB4D7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13520/*"TargetIndiv"*/, method);
    byte_40FB4D7 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13520/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4E6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14722/*"UnSubStateWhenContinue"*/, method);
    byte_40FB4E6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14722/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_40FB4D5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14994/*"UpBuffRateBuffIndiv"*/, method);
    byte_40FB4D5 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_14994/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_40FB4D4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14995/*"UpBuffRateBuffType"*/, method);
    byte_40FB4D4 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_14995/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4D1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16580/*"battleEndNotReduceTurnFlag"*/, method);
    byte_40FB4D1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16580/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4E1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5293/*"DisableForciblyAddState"*/, method);
    byte_40FB4E1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5293/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4E4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5294/*"DisableMoveStateTurnChange"*/, method);
    byte_40FB4E4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5294/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB4D2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17982/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_40FB4D2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17982/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6212/*"ExcludeUnSubStateIndiv"*/, method);
    byte_40FB4E5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6212/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4D8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7516/*"IncludeIgnoreIndividuality"*/, method);
    byte_40FB4D8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7516/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7562/*"IndvAddBuffPassive"*/, method);
    byte_40FB4E3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7562/*"IndvAddBuffPassive"*/, 0, v2) == 1;
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
  if ( (byte_40FB4E2 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_40FB4E2 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v18);
  if ( !v6 )
    sub_B170D4();
  v7 = v6;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v8, 0LL, 0x2Cu, v9);
  *paramArray = ScriptIntArray;
  sub_B16F98(
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

  if ( (byte_40FB4C4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20435/*"missText"*/, method);
    byte_40FB4C4 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20435/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FB4B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FB4B4 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BuffEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FB4C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1984/*"AppId"*/, v5);
    byte_40FB4C1 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_1984/*"AppId"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = this->fields.script;
      if ( !v7
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                     (System_Type_o *)StringLiteral_1984/*"AppId"*/,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (BuffEntity_o *)sub_B173C8(Item);
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

  if ( (byte_40FB4CB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16443/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_40FB4CB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16443/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4C9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17336/*"checkIndvType"*/, method);
    byte_40FB4C9 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17336/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5051/*"DamageRelease"*/, method);
    byte_40FB4C2 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5051/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40FB4C3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2425/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_B16FFC(&StringLiteral_11352/*"ReleaseText"*/, v4);
    byte_40FB4C3 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2425/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27589352(this, (System_String_o *)StringLiteral_11352/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4CC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17865/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_40FB4CC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17865/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BuffEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FB4BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5852/*"EffectId"*/, v5);
    byte_40FB4BF = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5852/*"EffectId"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = this->fields.script;
      if ( !v7
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                     (System_Type_o *)StringLiteral_5852/*"EffectId"*/,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (BuffEntity_o *)sub_B173C8(Item);
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
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_40FB4B8 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FB4B8 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4C8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19023/*"gutsIconId"*/, method);
    byte_40FB4C8 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19023/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40FB4C6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2401/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_B16FFC(&StringLiteral_19024/*"gutsText"*/, v4);
    byte_40FB4C6 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2401/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27589352(this, (System_String_o *)StringLiteral_19024/*"gutsText"*/, result, v6);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB4B9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17051/*"bufficon_{0:000}"*/, v3);
    byte_40FB4B9 = 1;
  }
  iconId = this->fields.iconId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17051/*"bufficon_{0:000}"*/, v4, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FB4C5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20435/*"missText"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB4C5 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27589352(
             this,
             (System_String_o *)StringLiteral_20435/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4CA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21664/*"relationId"*/, method);
    byte_40FB4CA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_21664/*"relationId"*/, 0, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BuffEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_40FB4B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FB4B5 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (BuffEntity_o *)sub_B173C8(Item);
  return (unsigned int)BuffEntity__getScript_27589352(v11, v12, v13, v14);
}


System_String_o *__fastcall BuffEntity__getScript_27589352(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40FB4B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_40FB4B6 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  return (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                              Item,
                              Item->klass->vtable[4].methodPtr);
}


int32_t __fastcall BuffEntity__get_BuffType(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall BuffEntity__getgutsTextColor(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB4C7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19025/*"gutsTextColor"*/, method);
    byte_40FB4C7 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19025/*"gutsTextColor"*/, 1, v2);
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
  if ( (byte_40FB4BA & 1) == 0 )
  {
    sub_B16FFC(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_40FB4BA = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v11);
  if ( !v6 )
    sub_B170D4();
  v7 = v6;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
  return BuffEntity__isCondition_27590504(this, v8, pal, v9);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x21
  System_Xml_XmlQualifiedName_o *v11; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x20
  System_Xml_XmlQualifiedName_o *v16; // x21
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB4BE & 1) == 0 )
  {
    sub_B16FFC(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_40FB4BE = 1;
  }
  v18 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v18 = 2;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v18);
  if ( !v5 )
    goto LABEL_15;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v7,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v8 = this->fields.script;
    v18 = 3;
    v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v18);
    if ( v9 )
    {
      v10 = v9;
      v11 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                               v9,
                                               *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
      if ( v8 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
               v11,
               (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v13 = this->fields.script;
        v18 = 4;
        v14 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v18);
        if ( v14 )
        {
          v15 = v14;
          v16 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 360LL))(
                                                   v14,
                                                   *(_QWORD *)(*(_QWORD *)v14 + 368LL));
          v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v15);
          if ( v13 )
            return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
                     v16,
                     (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_27590504(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40FB4BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40FB4BB = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      if ( !v10
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                     (System_Type_o *)key,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v12;
      }
      else
      {
        v13 = (BuffEntity_o *)sub_B173C8(Item);
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
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x21
  System_Xml_XmlQualifiedName_o *v13; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x21
  System_Xml_XmlQualifiedName_o *v17; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x21
  System_Xml_XmlQualifiedName_o *v21; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x20
  System_Xml_XmlQualifiedName_o *v26; // x21
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB4BC & 1) == 0 )
  {
    sub_B16FFC(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_40FB4BC = 1;
  }
  v27 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v27 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v27);
  if ( !v5 )
    goto LABEL_21;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v27 = 1;
    v11 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v27);
    if ( v11 )
    {
      v12 = v11;
      v13 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                                               v11,
                                               *(_QWORD *)(*(_QWORD *)v11 + 368LL));
      v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
      if ( v10 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
               v13,
               (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v14 = this->fields.script;
        v27 = 2;
        v15 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v27);
        if ( !v15 )
          goto LABEL_21;
        v16 = v15;
        v17 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 360LL))(
                                                 v15,
                                                 *(_QWORD *)(*(_QWORD *)v15 + 368LL));
        v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v16);
        if ( !v14 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14,
               v17,
               (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v18 = this->fields.script;
        v27 = 3;
        v19 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v27);
        if ( v19 )
        {
          v20 = v19;
          v21 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 360LL))(
                                                   v19,
                                                   *(_QWORD *)(*(_QWORD *)v19 + 368LL));
          v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v20);
          if ( v18 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
                   v21,
                   (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v23 = this->fields.script;
            v27 = 4;
            v24 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v27);
            if ( v24 )
            {
              v25 = v24;
              v26 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 360LL))(
                                                       v24,
                                                       *(_QWORD *)(*(_QWORD *)v24 + 368LL));
              v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v25);
              if ( v23 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
                         v26,
                         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
  __int64 v11; // x0
  __int64 v12; // x20
  System_Xml_XmlQualifiedName_o *v13; // x21
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB4BD & 1) == 0 )
  {
    sub_B16FFC(&BuffList_CONDITIONS_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_40FB4BD = 1;
  }
  v15 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = 0;
  v5 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v15);
  if ( !v5 )
    goto LABEL_11;
  v6 = v5;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                          v5,
                                          *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v15 = 1;
    v11 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v15);
    if ( v11 )
    {
      v12 = v11;
      v13 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                                               v11,
                                               *(_QWORD *)(*(_QWORD *)v11 + 368LL));
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
      if ( v10 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                 v13,
                 (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70A4 & 1) == 0 )
  {
    sub_B16FFC(&BuffEntity___c_TypeInfo, v1);
    byte_40F70A4 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BuffEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BuffEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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