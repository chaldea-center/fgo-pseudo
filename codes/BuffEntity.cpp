void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA613 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA613 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float v8; // s0
  System_Nullable_float__o v10; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_float__o v11; // 0:x0.8

  if ( (byte_42EA5FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16845/*"battleCharaAlpha"*/, v5, v6, v7);
    byte_42EA5FC = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16845/*"battleCharaAlpha"*/, 0LL) )
  {
    v8 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16845/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v11 = (System_Nullable_float__o)&v10;
    v10 = 0LL;
    System_Nullable_float____ctor(v11, v8, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    return v10;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


System_String_o *__fastcall BuffEntity__GetBuffStateNoticeName(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA610 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17319/*"buffStateNoticeName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA610 = 1;
  }
  return BuffEntity__getScript_28558956(
           this,
           (System_String_o *)StringLiteral_17319/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3946/*"CardEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EA5F9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3946/*"CardEffectId"*/, 0, v3);
}


int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA604 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17656/*"ckIndvCountAbove"*/, defVal, (_DWORD)method, v3);
    byte_42EA604 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17656/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA605 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17657/*"ckIndvCountBelow"*/, defVal, (_DWORD)method, v3);
    byte_42EA605 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17657/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4

  if ( (byte_42EA607 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17658/*"ckOpCountIndividuality"*/, (_DWORD)method, v2, v3);
    byte_42EA607 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17658/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v4);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4

  if ( (byte_42EA606 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17659/*"ckSelfCountIndividuality"*/, (_DWORD)method, v2, v3);
    byte_42EA606 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17659/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v4);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA602 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4484/*"CounterMessage"*/, (_DWORD)method, v2, v3);
    byte_42EA602 = 1;
  }
  return BuffEntity__getScript_28558956(this, (System_String_o *)StringLiteral_4484/*"CounterMessage"*/, 0LL, v3);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18870/*"extendLowerLimit"*/, (_DWORD)method, v2, v3);
    byte_42EA5F6 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18870/*"extendLowerLimit"*/, 0, v3);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA608 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7353/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, (_DWORD)method, v3);
    byte_42EA608 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7353/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA609 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7354/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, (_DWORD)method, v3);
    byte_42EA609 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7354/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5FF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9088/*"MaxBuffRate"*/, (_DWORD)method, v2, v3);
    byte_42EA5FF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9088/*"MaxBuffRate"*/, -1, v3);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA5E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20838/*"motionName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA5E9 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_28558956(this, (System_String_o *)StringLiteral_20838/*"motionName"*/, 0LL, v3);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10929/*"ProgressSelfTurn"*/, (_DWORD)method, v2, v3);
    byte_42EA5F7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10929/*"ProgressSelfTurn"*/, -1, v3);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10931/*"ProgressTurnCond"*/, (_DWORD)method, v2, v3);
    byte_42EA5F8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10931/*"ProgressTurnCond"*/, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o *Script_28558956; // x21
  System_Char_array *v29; // x0
  System_Char_array *v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  BuffEntity___c_c *v32; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x20
  Il2CppObject *v35; // x21
  struct BuffEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x0

  if ( (byte_42EA5E0 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)key, (_DWORD)defValues, separator);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v21, v22, v23);
    sub_B5D5C4(&BuffEntity___c_TypeInfo, v24, v25, v26);
    byte_42EA5E0 = 1;
  }
  Script_28558956 = BuffEntity__getScript_28558956(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_28558956, 0LL) )
    return defValues;
  v29 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v29 )
    goto LABEL_17;
  v30 = v29;
  if ( !v29->max_length )
  {
    v44 = sub_B5D6C8(v29);
    sub_B5D668(v44, 0LL);
  }
  v29->m_Items[2] = separator;
  if ( !Script_28558956 )
LABEL_17:
    sub_B5D69C(v29, v30);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_28558956, v29, 0LL);
  v32 = BuffEntity___c_TypeInfo;
  if ( (BYTE3(BuffEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v32 = BuffEntity___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v35,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
    v36 = BuffEntity___c_TypeInfo->static_fields;
    v36->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v36->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v43,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA603 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/, defVal, (_DWORD)method, v3);
    byte_42EA603 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4

  if ( (byte_42EA600 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13732/*"TargetIndiv"*/, (_DWORD)method, v2, v3);
    byte_42EA600 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13732/*"TargetIndiv"*/, 0LL, 0x2Cu, v4);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA60F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_14940/*"UnSubStateWhenContinue"*/, (_DWORD)method, v2, v3);
    byte_42EA60F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14940/*"UnSubStateWhenContinue"*/, 0, v3);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4

  if ( (byte_42EA5FE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15212/*"UpBuffRateBuffIndiv"*/, (_DWORD)method, v2, v3);
    byte_42EA5FE = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15212/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v4);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4

  if ( (byte_42EA5FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15213/*"UpBuffRateBuffType"*/, (_DWORD)method, v2, v3);
    byte_42EA5FD = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15213/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v4);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5FA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16847/*"battleEndNotReduceTurnFlag"*/, (_DWORD)method, v2, v3);
    byte_42EA5FA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16847/*"battleEndNotReduceTurnFlag"*/, 0, v3) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA611 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4045/*"CkIndvForEachDamage"*/, (_DWORD)method, v2, v3);
    byte_42EA611 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4045/*"CkIndvForEachDamage"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA612 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18176/*"delayRemoveExpiredOnPlayerTurn"*/, (_DWORD)method, v2, v3);
    byte_42EA612 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18176/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA60A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5388/*"DisableForciblyAddState"*/, (_DWORD)method, v2, v3);
    byte_42EA60A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5388/*"DisableForciblyAddState"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA60D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5389/*"DisableMoveStateTurnChange"*/, (_DWORD)method, v2, v3);
    byte_42EA60D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5389/*"DisableMoveStateTurnChange"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA5FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18277/*"drawShadowDespiteBattleCharaInvisible"*/, (_DWORD)method, v2, v3);
    byte_42EA5FB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18277/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA60E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6309/*"ExcludeUnSubStateIndiv"*/, (_DWORD)method, v2, v3);
    byte_42EA60E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6309/*"ExcludeUnSubStateIndiv"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA601 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7628/*"IncludeIgnoreIndividuality"*/, (_DWORD)method, v2, v3);
    byte_42EA601 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7628/*"IncludeIgnoreIndividuality"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA60C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7674/*"IndvAddBuffPassive"*/, (_DWORD)method, v2, v3);
    byte_42EA60C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7674/*"IndvAddBuffPassive"*/, 0, v3) == 1;
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
  if ( (byte_42EA60B & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_CONDITIONS_TypeInfo, condition, (_DWORD)paramArray, method);
    byte_42EA60B = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v9, 0LL, 0x2Cu, v10);
  *paramArray = ScriptIntArray;
  sub_B5D560(
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
  __int64 v3; // x3

  if ( (byte_42EA5ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20781/*"missText"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EA5ED = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20781/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42EA5DD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EA5DD = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42EA5EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2017/*"AppId"*/, v11, v12, v13);
    byte_42EA5EA = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2017/*"AppId"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_2017/*"AppId"*/,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v15);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v17 = (BuffEntity_o *)sub_B5D990(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v17, v18);
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

  if ( (byte_42EA5F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16706/*"atkPriority"*/, defVal, (_DWORD)method, v3);
    byte_42EA5F4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16706/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17620/*"checkIndvType"*/, (_DWORD)method, v2, v3);
    byte_42EA5F2 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17620/*"checkIndvType"*/, 2 * (this->fields.type == 155), v3);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5140/*"DamageRelease"*/, (_DWORD)method, v2, v3);
    byte_42EA5EB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5140/*"DamageRelease"*/, 0, v3);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0
  const MethodInfo *v12; // x3

  if ( (byte_42EA5EC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2475/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11521/*"ReleaseText"*/, v8, v9, v10);
    byte_42EA5EC = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2475/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_28558956(this, (System_String_o *)StringLiteral_11521/*"ReleaseText"*/, result, v12);
  return result;
}


int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18155/*"defPriority"*/, defVal, (_DWORD)method, v3);
    byte_42EA5F5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18155/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42EA5E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5948/*"EffectId"*/, v11, v12, v13);
    byte_42EA5E8 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5948/*"EffectId"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_5948/*"EffectId"*/,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v15);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v17 = (BuffEntity_o *)sub_B5D990(Item);
        LODWORD(script) = (unsigned int)BuffEntity__GetMotionName(v17, v18);
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
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *result; // x0

  if ( (byte_42EA5E1 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA5E1 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19336/*"gutsIconId"*/, (_DWORD)method, v2, v3);
    byte_42EA5F1 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19336/*"gutsIconId"*/, 0, v3);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0
  const MethodInfo *v12; // x3

  if ( (byte_42EA5EF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2450/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19337/*"gutsText"*/, v8, v9, v10);
    byte_42EA5EF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2450/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_28558956(this, (System_String_o *)StringLiteral_19337/*"gutsText"*/, result, v12);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA5E2 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17327/*"bufficon_{0:000}"*/, v5, v6, v7);
    byte_42EA5E2 = 1;
  }
  iconId = this->fields.iconId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17327/*"bufficon_{0:000}"*/, v8, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA5EE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20781/*"missText"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA5EE = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_28558956(
             this,
             (System_String_o *)StringLiteral_20781/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v3);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22050/*"relationId"*/, (_DWORD)method, v2, v3);
    byte_42EA5F3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22050/*"relationId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getScript(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_42EA5DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42EA5DE = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v10);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v13 = (BuffEntity_o *)sub_B5D990(script);
  return (unsigned int)BuffEntity__getScript_28558956(v13, v14, v15, v16);
}


System_String_o *__fastcall BuffEntity__getScript_28558956(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_42EA5DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    byte_42EA5DF = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v7);
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
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA5F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19338/*"gutsTextColor"*/, (_DWORD)method, v2, v3);
    byte_42EA5F0 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19338/*"gutsTextColor"*/, 1, v3);
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
  if ( (byte_42EA5E3 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_CONDITIONS_TypeInfo, cond, (_DWORD)pal, method);
    byte_42EA5E3 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v12);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  return BuffEntity__isCondition_28560108(this, v9, pal, v10);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x20
  __int64 v14; // x21
  System_Xml_XmlQualifiedName_o *v15; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x19
  __int64 v18; // x20
  System_Xml_XmlQualifiedName_o *v19; // x21
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA5E7 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_CONDITIONS_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    byte_42EA5E7 = 1;
  }
  v21 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v21 = 2;
  v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v21);
  if ( !v9 )
    goto LABEL_15;
  v11 = v9;
  v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                           v9,
                                           *(_QWORD *)(*(_QWORD *)v9 + 368LL));
  v21 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v12,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v13 = this->fields.script;
    v21 = 3;
    v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v21);
    if ( v9 )
    {
      v14 = v9;
      v15 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                               v9,
                                               *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v9 = j_il2cpp_object_unbox_0(v14);
      v21 = *(_DWORD *)v9;
      if ( v13 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
               v15,
               (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v17 = this->fields.script;
        v21 = 4;
        v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v21);
        if ( v9 )
        {
          v18 = v9;
          v19 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                   v9,
                                                   *(_QWORD *)(*(_QWORD *)v9 + 368LL));
          v9 = j_il2cpp_object_unbox_0(v18);
          v21 = *(_DWORD *)v9;
          if ( v17 )
            return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
                     v19,
                     (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B5D69C(v9, v10);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_28560108(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v16; // x8
  BuffEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42EA5E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)pal,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42EA5E4 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v14);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v16;
      }
      else
      {
        v17 = (BuffEntity_o *)sub_B5D990(Item);
        LOBYTE(script) = BuffEntity__isConditions(v17, v18);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x22
  bool v13; // w8
  bool v14; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x20
  __int64 v16; // x21
  System_Xml_XmlQualifiedName_o *v17; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x20
  __int64 v19; // x21
  System_Xml_XmlQualifiedName_o *v20; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x20
  __int64 v22; // x21
  System_Xml_XmlQualifiedName_o *v23; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x19
  __int64 v26; // x20
  System_Xml_XmlQualifiedName_o *v27; // x21
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA5E5 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_CONDITIONS_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    byte_42EA5E5 = 1;
  }
  v28 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v28 = 0;
  v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28);
  if ( !v9 )
    goto LABEL_21;
  v11 = v9;
  v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                           v9,
                                           *(_QWORD *)(*(_QWORD *)v9 + 368LL));
  v28 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
  v13 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v12,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v14 = 1;
  if ( !v13 )
  {
    v15 = this->fields.script;
    v28 = 1;
    v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28);
    if ( v9 )
    {
      v16 = v9;
      v17 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                               v9,
                                               *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v9 = j_il2cpp_object_unbox_0(v16);
      v28 = *(_DWORD *)v9;
      if ( v15 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
               v17,
               (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v18 = this->fields.script;
        v28 = 2;
        v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28);
        if ( !v9 )
          goto LABEL_21;
        v19 = v9;
        v20 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                 v9,
                                                 *(_QWORD *)(*(_QWORD *)v9 + 368LL));
        v9 = j_il2cpp_object_unbox_0(v19);
        v28 = *(_DWORD *)v9;
        if ( !v18 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
               v20,
               (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v21 = this->fields.script;
        v28 = 3;
        v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28);
        if ( v9 )
        {
          v22 = v9;
          v23 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                   v9,
                                                   *(_QWORD *)(*(_QWORD *)v9 + 368LL));
          v9 = j_il2cpp_object_unbox_0(v22);
          v28 = *(_DWORD *)v9;
          if ( v21 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
                   v23,
                   (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v25 = this->fields.script;
            v28 = 4;
            v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v28);
            if ( v9 )
            {
              v26 = v9;
              v27 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                       v9,
                                                       *(_QWORD *)(*(_QWORD *)v9 + 368LL));
              v9 = j_il2cpp_object_unbox_0(v26);
              v28 = *(_DWORD *)v9;
              if ( v25 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v25,
                         v27,
                         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(v9, v10);
  }
  return v14;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x22
  bool v13; // w8
  bool v14; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x19
  __int64 v16; // x20
  System_Xml_XmlQualifiedName_o *v17; // x21
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA5E6 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_CONDITIONS_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    byte_42EA5E6 = 1;
  }
  v19 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v19 = 0;
  v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19);
  if ( !v9 )
    goto LABEL_11;
  v11 = v9;
  v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                           v9,
                                           *(_QWORD *)(*(_QWORD *)v9 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
  v13 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v12,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v14 = 1;
  if ( !v13 )
  {
    v15 = this->fields.script;
    v19 = 1;
    v9 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19);
    if ( v9 )
    {
      v16 = v9;
      v17 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                               v9,
                                               *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v9 = j_il2cpp_object_unbox_0(v16);
      v19 = *(_DWORD *)v9;
      if ( v15 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
                 v17,
                 (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B5D69C(v9, v10);
  }
  return v14;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BuffEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E34 & 1) == 0 )
  {
    sub_B5D5C4(&BuffEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5E34 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BuffEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BuffEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffEntity___c_o *)v4;
  sub_B5D560(static_fields);
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