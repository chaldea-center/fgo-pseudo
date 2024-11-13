void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15F4D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Script; // w1

  if ( (byte_4B15F48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, individualityArray, method);
    sub_1BCA7E0(&StringLiteral_7475/*"INDIVIDUALITIE"*/, v6, v7);
    byte_4B15F48 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7475/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float v6; // s0
  System_Nullable_float__o v8; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v9; // 0:x0.8

  if ( (byte_4B15F2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_17277/*"battleCharaAlpha"*/, v4, v5);
    byte_4B15F2F = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17277/*"battleCharaAlpha"*/, 0LL) )
  {
    v6 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17277/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v9 = (System_Nullable_float__o)&v8;
    v8 = 0LL;
    System_Nullable_float____ctor(v9, v6, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    return v8;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


System_String_o *__fastcall BuffEntity__GetBuffStateNoticeName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B15F43 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17811/*"buffStateNoticeName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B15F43 = 1;
  }
  return BuffEntity__getScript_39714980(
           this,
           (System_String_o *)StringLiteral_17811/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F2C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4442/*"CardEffectId"*/, method, v2);
    byte_4B15F2C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4442/*"CardEffectId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F37 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18160/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal, method);
    byte_4B15F37 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18160/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F38 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18161/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal, method);
    byte_4B15F38 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18161/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4

  if ( (byte_4B15F3A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18162/*"ckOpCountIndividuality"*/, method, v2);
    byte_4B15F3A = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18162/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4

  if ( (byte_4B15F39 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18163/*"ckSelfCountIndividuality"*/, method, v2);
    byte_4B15F39 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18163/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v3);
}


int32_t __fastcall BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F4B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18173/*"classIconChangeEffectId"*/, method, v2);
    byte_4B15F4B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18173/*"classIconChangeEffectId"*/, -1, v3);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F35 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4941/*"CounterMessage"*/, method, v2);
    byte_4B15F35 = 1;
  }
  return BuffEntity__getScript_39714980(this, (System_String_o *)StringLiteral_4941/*"CounterMessage"*/, 0LL, v3);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F46 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5408/*"DisplayPriority"*/, *(_QWORD *)&defVal, method);
    byte_4B15F46 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5408/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F1B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19116/*"effectText"*/, method, v2);
    byte_4B15F1B = 1;
  }
  return BuffEntity__getScript_39714980(this, (System_String_o *)StringLiteral_19116/*"effectText"*/, 0LL, v3);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F29 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19516/*"extendLowerLimit"*/, method, v2);
    byte_4B15F29 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19516/*"extendLowerLimit"*/, 0, v3);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F1A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20070/*"guardEffectId"*/, method, v2);
    byte_4B15F1A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20070/*"guardEffectId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F3B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7476/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal, method);
    byte_4B15F3B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7476/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F3C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7477/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal, method);
    byte_4B15F3C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7477/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F32 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9060/*"MaxBuffRate"*/, method, v2);
    byte_4B15F32 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9060/*"MaxBuffRate"*/, -1, v3);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B15F1C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21746/*"motionName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B15F1C = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_39714980(this, (System_String_o *)StringLiteral_21746/*"motionName"*/, 0LL, v3);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F4C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22618/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, *(_QWORD *)&defVal, method);
    byte_4B15F4C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22618/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F19 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22809/*"popupEffectId"*/, method, v2);
    byte_4B15F19 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22809/*"popupEffectId"*/, 0, v3);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F2A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10895/*"ProgressSelfTurn"*/, method, v2);
    byte_4B15F2A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10895/*"ProgressSelfTurn"*/, -1, v3);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F2B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10897/*"ProgressTurnCond"*/, method, v2);
    byte_4B15F2B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10897/*"ProgressTurnCond"*/, -1, v3);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *Script_39714980; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v19; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  BuffEntity___c_c *v25; // x8
  System_Func_object__int__o *_9__21_0; // x20
  Il2CppObject *v27; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4B15F0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, key, defValues);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v13, v14);
    sub_1BCA7E0(&BuffEntity___c_TypeInfo, v15, v16);
    byte_4B15F0F = 1;
  }
  Script_39714980 = BuffEntity__getScript_39714980(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_39714980, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_39714980 )
    sub_1BCAA3C(IsNullOrEmpty, v19);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_39714980, separator, 0, 0LL);
  v25 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo, v21);
    v25 = BuffEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v25->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, v21);
      v25 = BuffEntity___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v21, v22, v23);
    System_Func_object__int____ctor(_9__21_0, v27, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
      (int64_t)_9__21_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v35,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F36 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12922/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal, method);
    byte_4B15F36 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12922/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4

  if ( (byte_4B15F33 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13726/*"TargetIndiv"*/, method, v2);
    byte_4B15F33 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13726/*"TargetIndiv"*/, 0LL, 0x2Cu, v3);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F42 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15040/*"UnSubStateWhenContinue"*/, method, v2);
    byte_4B15F42 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_15040/*"UnSubStateWhenContinue"*/, 0, v3);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4

  if ( (byte_4B15F31 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15333/*"UpBuffRateBuffIndiv"*/, method, v2);
    byte_4B15F31 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15333/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v3);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4

  if ( (byte_4B15F30 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15334/*"UpBuffRateBuffType"*/, method, v2);
    byte_4B15F30 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15334/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v3);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F2D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17279/*"battleEndNotReduceTurnFlag"*/, method, v2);
    byte_4B15F2D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17279/*"battleEndNotReduceTurnFlag"*/, 0, v3) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F44 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4547/*"CkIndvForEachDamage"*/, method, v2);
    byte_4B15F44 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4547/*"CkIndvForEachDamage"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F45 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18742/*"delayRemoveExpiredOnPlayerTurn"*/, method, v2);
    byte_4B15F45 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18742/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F3D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5397/*"DisableForciblyAddState"*/, method, v2);
    byte_4B15F3D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5397/*"DisableForciblyAddState"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F40 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5398/*"DisableMoveStateTurnChange"*/, method, v2);
    byte_4B15F40 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5398/*"DisableMoveStateTurnChange"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F2E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18862/*"drawShadowDespiteBattleCharaInvisible"*/, method, v2);
    byte_4B15F2E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18862/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F41 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6379/*"ExcludeUnSubStateIndiv"*/, method, v2);
    byte_4B15F41 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6379/*"ExcludeUnSubStateIndiv"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F34 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7650/*"IncludeIgnoreIndividuality"*/, method, v2);
    byte_4B15F34 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7650/*"IncludeIgnoreIndividuality"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F3F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7695/*"IndvAddBuffPassive"*/, method, v2);
    byte_4B15F3F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7695/*"IndvAddBuffPassive"*/, 0, v3) == 1;
}


bool __fastcall BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B15F49 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19859/*"fromCommandSpell"*/, skillInfoData, method);
    sub_1BCA7E0(&StringLiteral_19860/*"fromMasterEquip"*/, v5, v6);
    byte_4B15F49 = 1;
  }
  v7 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19860/*"fromMasterEquip"*/, method);
  if ( v7 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v7 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19859/*"fromCommandSpell"*/, v9);
  if ( !v7 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1BCAA3C(v7, v8);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B15F47 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24609/*"useFirstTimeInTurn"*/, data, method);
    byte_4B15F47 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24609/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1BCAA3C(v5, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Enum_o v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+18h] [xbp-38h]

  if ( (byte_4B15F3E & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition, paramArray);
    byte_4B15F3E = 1;
  }
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v18 = condition;
  v7 = System_Enum__ToString(&v17, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1BCA784((PartyOrganizationUtility_o *)paramArray, (int64_t)ScriptIntArray, v10, v11, v12, v13, v14, v15);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4B15F4A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9694/*"NotPierceIndividuality"*/, result, method);
    byte_4B15F4A = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9694/*"NotPierceIndividuality"*/,
           result,
           0LL);
}


bool __fastcall BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool __fastcall BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B15F20 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21685/*"missText"*/, method, v2);
    byte_4B15F20 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21685/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B15F0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B15F0C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  BuffEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B15F1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_2411/*"AppId"*/, v8, v9);
    byte_4B15F1D = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2411/*"AppId"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2411/*"AppId"*/,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v11);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
      }
      else
      {
        sub_1BCACFC(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v15, v16);
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

  if ( (byte_4B15F27 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17119/*"atkPriority"*/, *(_QWORD *)&defVal, method);
    byte_4B15F27 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17119/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F25 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18126/*"checkIndvType"*/, method, v2);
    byte_4B15F25 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18126/*"checkIndvType"*/, 2 * (this->fields.type == 155), v3);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F1E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5149/*"DamageRelease"*/, method, v2);
    byte_4B15F1E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5149/*"DamageRelease"*/, 0, v3);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B15F1F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2900/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11402/*"ReleaseText"*/, v6, v7);
    byte_4B15F1F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_39714980(this, (System_String_o *)StringLiteral_11402/*"ReleaseText"*/, result, v9);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15F28 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18720/*"defPriority"*/, *(_QWORD *)&defVal, method);
    byte_4B15F28 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18720/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  BuffEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B15F18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5987/*"EffectId"*/, v8, v9);
    byte_4B15F18 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5987/*"EffectId"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5987/*"EffectId"*/,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v11);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
      }
      else
      {
        sub_1BCACFC(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v15, v16);
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

  if ( (byte_4B15F11 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B15F11 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F24 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20072/*"gutsIconId"*/, method, v2);
    byte_4B15F24 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20072/*"gutsIconId"*/, 0, v3);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B15F22 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2873/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20073/*"gutsText"*/, v6, v7);
    byte_4B15F22 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2873/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_39714980(this, (System_String_o *)StringLiteral_20073/*"gutsText"*/, result, v9);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15F12 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17817/*"bufficon_{0:000}"*/, v4, v5);
    byte_4B15F12 = 1;
  }
  iconId = this->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17817/*"bufficon_{0:000}"*/, v6, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B15F21 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21685/*"missText"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B15F21 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_39714980(
             this,
             (System_String_o *)StringLiteral_21685/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v3);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F26 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23092/*"relationId"*/, method, v2);
    byte_4B15F26 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23092/*"relationId"*/, 0, v3);
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
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BuffEntity_o *v14; // x0
  System_String_o *v15; // x1
  System_String_o *v16; // x2
  const MethodInfo *v17; // x3

  v4 = defVal;
  if ( (byte_4B15F0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B15F0D = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v9);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v11, v12);
  sub_1BCACFC(script);
  return (unsigned int)BuffEntity__getScript_39714980(v14, v15, v16, v17);
}


System_String_o *__fastcall BuffEntity__getScript_39714980(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4B15F0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, defVal);
    byte_4B15F0E = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v7);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B15F23 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20074/*"gutsTextColor"*/, method, v2);
    byte_4B15F23 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20074/*"gutsTextColor"*/, 1, v3);
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

  if ( (byte_4B15F13 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond, pal);
    byte_4B15F13 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_39716076(this, v7, pal, v8);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_4B15F17 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_CONDITIONS_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    byte_4B15F17 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v14.monitor = (void *)-1LL;
  v15 = 2;
  v7 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v7,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v8 = this->fields.script;
    v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v14.monitor = (void *)-1LL;
    v15 = 3;
    v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
    if ( v8 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v8,
             v9,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v12 = this->fields.script;
      v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v14.monitor = (void *)-1LL;
      v15 = 4;
      v9 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
      if ( v12 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v12,
                 v9,
                 (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1BCAA3C(v9, v10);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_39716076(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x8
  BuffEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4B15F14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, pal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B15F14 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v12);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
        LOBYTE(script) = 1;
        *pal = v16;
      }
      else
      {
        sub_1BCACFC(Item);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  System_Enum_o v17; // [xsp+8h] [xbp-48h] BYREF
  int v18; // [xsp+18h] [xbp-38h]

  if ( (byte_4B15F15 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_CONDITIONS_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    byte_4B15F15 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v18 = 0;
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v7 = (Il2CppObject *)System_Enum__ToString(&v17, 0LL);
  v8 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v7,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v18 = 1;
    v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v17.monitor = (void *)-1LL;
    v11 = (Il2CppObject *)System_Enum__ToString(&v17, 0LL);
    if ( !v10 )
      goto LABEL_16;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v10,
            v11,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v13 = this->fields.script;
      v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v17.monitor = (void *)-1LL;
      v18 = 2;
      v11 = (Il2CppObject *)System_Enum__ToString(&v17, 0LL);
      if ( !v13 )
        goto LABEL_16;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v13,
              v11,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v14 = this->fields.script;
        v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v17.monitor = (void *)-1LL;
        v18 = 3;
        v11 = (Il2CppObject *)System_Enum__ToString(&v17, 0LL);
        if ( v14 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v14,
                 v11,
                 (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v16 = this->fields.script;
          v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v17.monitor = (void *)-1LL;
          v18 = 4;
          v11 = (Il2CppObject *)System_Enum__ToString(&v17, 0LL);
          if ( v16 )
            return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v16,
                     v11,
                     (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1BCAA3C(v11, v12);
      }
    }
    return 1;
  }
  return v9;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_4B15F16 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_CONDITIONS_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    byte_4B15F16 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v15 = 0;
    v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v14.monitor = (void *)-1LL;
    v7 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
    v8 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v7,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v9 = 1;
    if ( !v8 )
    {
      v10 = this->fields.script;
      v15 = 1;
      v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v14.monitor = (void *)-1LL;
      v11 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v10,
               v11,
               (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}


bool __fastcall BuffEntity__isEndAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w10
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_4B15F10 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, indiv, method);
    byte_4B15F10 = 1;
  }
  type = this->fields.type;
  if ( !indiv || type != 76 )
    return indiv == 0LL && type == 76;
  ckSelfIndv = this->fields.ckSelfIndv;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, indiv);
  return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0LL);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15F4E & 1) == 0 )
  {
    sub_1BCA7E0(&BuffEntity___c_TypeInfo, v1, v2);
    byte_4B15F4E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BuffEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BuffEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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