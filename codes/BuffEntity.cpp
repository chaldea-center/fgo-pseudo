void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4424 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_int___ctor__, method);
    byte_4BB4424 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3236140 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t Script; // w1

  if ( (byte_4BB441F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, individualityArray);
    sub_1C13D24(&StringLiteral_7514/*"IMGUIContainer"*/, v6);
    byte_4BB441F = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7514/*"IMGUIContainer"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4BB4406 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Nullable_float___ctor__, method);
    sub_1C13D24(&StringLiteral_17366/*"battle/interruption"*/, v3);
    byte_4BB4406 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17366/*"battle/interruption"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17366/*"battle/interruption"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4BB441A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17903/*"btn_txt_stock_02"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB441A = 1;
  }
  return BuffEntity__getScript_40148308(
           this,
           (System_String_o *)StringLiteral_17903/*"btn_txt_stock_02"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4403 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_4456/*"CardDragDumpEnd"*/, method);
    byte_4BB4403 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4456/*"CardDragDumpEnd"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB440E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18254/*"chr(Clone)"*/, *(_QWORD *)&defVal);
    byte_4BB440E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18254/*"chr(Clone)"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB440F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18255/*"chrnode_"*/, *(_QWORD *)&defVal);
    byte_4BB440F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18255/*"chrnode_"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BB4411 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18256/*"chronology_button"*/, method);
    byte_4BB4411 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18256/*"chronology_button"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BB4410 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18257/*"chronology_line"*/, method);
    byte_4BB4410 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18257/*"chronology_line"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4422 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18267/*"cjkKO"*/, method);
    byte_4BB4422 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18267/*"cjkKO"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB440C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_4955/*"Count not parse the whole type name"*/, method);
    byte_4BB440C = 1;
  }
  return BuffEntity__getScript_40148308(this, (System_String_o *)StringLiteral_4955/*"Count not parse the whole type name"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB441D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5432/*"DispChangeUI"*/, *(_QWORD *)&defVal);
    byte_4BB441D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5432/*"DispChangeUI"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43F2 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19218/*"effectBgmId"*/, method);
    byte_4BB43F2 = 1;
  }
  return BuffEntity__getScript_40148308(this, (System_String_o *)StringLiteral_19218/*"effectBgmId"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4400 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19619/*"exchangeSvtCoinGivenNum"*/, method);
    byte_4BB4400 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19619/*"exchangeSvtCoinGivenNum"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43F1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20182/*"greek8"*/, method);
    byte_4BB43F1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20182/*"greek8"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB4412 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7515/*"IMPOSSIBLE_LIMITUP_COLOR"*/, *(_QWORD *)&defVal);
    byte_4BB4412 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7515/*"IMPOSSIBLE_LIMITUP_COLOR"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB4413 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7516/*"INCREMENT_SVTLEVEL"*/, *(_QWORD *)&defVal);
    byte_4BB4413 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7516/*"INCREMENT_SVTLEVEL"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4409 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9105/*"Max"*/, method);
    byte_4BB4409 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9105/*"Max"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB43F3 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21868/*"mode attribute is required"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB43F3 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_40148308(this, (System_String_o *)StringLiteral_21868/*"mode attribute is required"*/, 0LL, v2);
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

  if ( (byte_4BB4423 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22748/*"overWriteTDName"*/, *(_QWORD *)&defVal);
    byte_4BB4423 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22748/*"overWriteTDName"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43F0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22940/*"playCoreApiMissing"*/, method);
    byte_4BB43F0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22940/*"playCoreApiMissing"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4401 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10950/*"ProcessMessageInDomain"*/, method);
    byte_4BB4401 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10950/*"ProcessMessageInDomain"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4402 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10952/*"ProcessPurchase: PASS. Product: '{0}'"*/, method);
    byte_4BB4402 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10952/*"ProcessPurchase: PASS. Product: '{0}'"*/, -1, v2);
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
  System_String_o *Script_40148308; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  BuffEntity___c_c *v18; // x8
  System_Func_object__int__o *_9__21_0; // x20
  Il2CppObject *v20; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4BB43E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1C13D24(&System_Func_string__int__TypeInfo, v10);
    sub_1C13D24(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v11);
    sub_1C13D24(&BuffEntity___c_TypeInfo, v12);
    byte_4BB43E6 = 1;
  }
  Script_40148308 = BuffEntity__getScript_40148308(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_40148308, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_40148308 )
    sub_1C13F80(IsNullOrEmpty, v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_40148308, separator, 0, 0LL);
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
    _9__21_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v20, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
      (int64_t)_9__21_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB440D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_12992/*"Short read"*/, *(_QWORD *)&defVal);
    byte_4BB440D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12992/*"Short read"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BB440A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13796/*"Tamil (India)"*/, method);
    byte_4BB440A = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13796/*"Tamil (India)"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4419 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15113/*"UTF-16BE"*/, method);
    byte_4BB4419 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_15113/*"UTF-16BE"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BB4408 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15409/*"Unsupported dropPosition value"*/, method);
    byte_4BB4408 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15409/*"Unsupported dropPosition value"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BB4407 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15410/*"Unsupported encoding '{0}': {1}"*/, method);
    byte_4BB4407 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15410/*"Unsupported encoding '{0}': {1}"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4404 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17368/*"battle/result"*/, method);
    byte_4BB4404 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17368/*"battle/result"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB441B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_4561/*"Circular reference in self-nested table '{0}'."*/, method);
    byte_4BB441B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4561/*"Circular reference in self-nested table '{0}'."*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB441C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18839/*"defaultValue"*/, method);
    byte_4BB441C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18839/*"defaultValue"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4414 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5421/*"Directory {0} is not empty"*/, method);
    byte_4BB4414 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5421/*"Directory {0} is not empty"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4417 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5422/*"Dirty"*/, method);
    byte_4BB4417 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5422/*"Dirty"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4405 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18962/*"do "*/, method);
    byte_4BB4405 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18962/*"do "*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4418 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6413/*"ExchangeSvtCoinShop"*/, method);
    byte_4BB4418 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6413/*"ExchangeSvtCoinShop"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB440B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7689/*"InactiveBorder"*/, method);
    byte_4BB440B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7689/*"InactiveBorder"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4416 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7734/*"Individuality"*/, method);
    byte_4BB4416 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7734/*"Individuality"*/, 0, v2) == 1;
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

  if ( (byte_4BB4420 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19962/*"friendOfferList"*/, skillInfoData);
    sub_1C13D24(&StringLiteral_19963/*"friendPoint"*/, v5);
    byte_4BB4420 = 1;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19963/*"friendPoint"*/, method);
  if ( v6 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19962/*"friendOfferList"*/, v8);
  if ( !v6 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1C13F80(v6, v7);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BB441E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24752/*"url attribute is required in client element when it contains activated entries"*/, data);
    byte_4BB441E = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24752/*"url attribute is required in client element when it contains activated entries"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1C13F80(v5, v6);
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

  if ( (byte_4BB4415 & 1) == 0 )
  {
    sub_1C13D24(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_4BB4415 = 1;
  }
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v18 = condition;
  v7 = System_Enum__ToString(&v17, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)paramArray, (int64_t)ScriptIntArray, v10, v11, v12, v13, v14, v15);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4BB4421 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9742/*"Not same device"*/, result);
    byte_4BB4421 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9742/*"Not same device"*/,
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

  if ( (byte_4BB43F7 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21807/*"min-height"*/, method);
    byte_4BB43F7 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21807/*"min-height"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BB43E3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4BB43E3 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4BB43F4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C13D24(&long_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_2420/*"AppDomain data '{0}' contains an invalid value or object for specifying a default matching timeout for System.Text.RegularExpressions.Regex."*/, v5);
    byte_4BB43F4 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2420/*"AppDomain data '{0}' contains an invalid value or object for specifying a default matching timeout for System.Text.RegularExpressions.Regex."*/,
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2420/*"AppDomain data '{0}' contains an invalid value or object for specifying a default matching timeout for System.Text.RegularExpressions.Regex."*/,
                                                                                (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C13F80(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1C14240(Item);
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

  if ( (byte_4BB43FE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17206/*"assemblyString cannot have zero length"*/, *(_QWORD *)&defVal);
    byte_4BB43FE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17206/*"assemblyString cannot have zero length"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43FC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18220/*"chargeStoneNum"*/, method);
    byte_4BB43FC = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18220/*"chargeStoneNum"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43F5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5170/*"DTD is prohibited in this XML document."*/, method);
    byte_4BB43F5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5170/*"DTD is prohibited in this XML document."*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4BB43F6 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_2909/*"BATTLE_DO_NOT_ACT_COMMAND"*/, v3);
    sub_1C13D24(&StringLiteral_11460/*"Regular"*/, v4);
    byte_4BB43F6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2909/*"BATTLE_DO_NOT_ACT_COMMAND"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_40148308(this, (System_String_o *)StringLiteral_11460/*"Regular"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB43FF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18817/*"decimals"*/, *(_QWORD *)&defVal);
    byte_4BB43FF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18817/*"decimals"*/, defVal, v3);
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

  if ( (byte_4BB43EF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C13D24(&long_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_6017/*"EffectAttackMasterPiece"*/, v5);
    byte_4BB43EF = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_6017/*"EffectAttackMasterPiece"*/,
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_6017/*"EffectAttackMasterPiece"*/,
                                                                                (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C13F80(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1C14240(Item);
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

  if ( (byte_4BB43E8 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    byte_4BB43E8 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43FB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20184/*"greenyellow"*/, method);
    byte_4BB43FB = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20184/*"greenyellow"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4BB43F9 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_2882/*"BATTLE_CONTINUE_USE_SPELL"*/, v3);
    sub_1C13D24(&StringLiteral_20185/*"grey"*/, v4);
    byte_4BB43F9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_40148308(this, (System_String_o *)StringLiteral_20185/*"grey"*/, result, v6);
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

  if ( (byte_4BB43E9 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&StringLiteral_17909/*"btn_txt_synthesis_reselect"*/, v6);
    byte_4BB43E9 = 1;
  }
  iconId = this->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17909/*"btn_txt_synthesis_reselect"*/, v7, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB43F8 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21807/*"min-height"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB43F8 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_40148308(
             this,
             (System_String_o *)StringLiteral_21807/*"min-height"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB43FD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23224/*"referer"*/, method);
    byte_4BB43FD = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23224/*"referer"*/, 0, v2);
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
  if ( (byte_4BB43E4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C13D24(&long_TypeInfo, v7);
    byte_4BB43E4 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1C14240(script);
  return (unsigned int)BuffEntity__getScript_40148308(v13, v14, v15, v16);
}


System_String_o *__fastcall BuffEntity__getScript_40148308(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4BB43E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4BB43E5 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(script, v7);
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

  if ( (byte_4BB43FA & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20186/*"grid_pos"*/, method);
    byte_4BB43FA = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20186/*"grid_pos"*/, 1, v2);
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

  if ( (byte_4BB43EA & 1) == 0 )
  {
    sub_1C13D24(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_4BB43EA = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_40149404(this, v7, pal, v8);
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

  if ( (byte_4BB43EE & 1) == 0 )
  {
    sub_1C13D24(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4BB43EE = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
             (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C13F80(v7, v8);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_40149404(
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

  if ( (byte_4BB43EB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C13D24(&long_TypeInfo, v8);
    byte_4BB43EB = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C13F80(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *pal = v14;
      }
      else
      {
        sub_1C14240(Item);
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

  if ( (byte_4BB43EC & 1) == 0 )
  {
    sub_1C13D24(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4BB43EC = 1;
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
         (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
            (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
              (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                     (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1C13F80(v9, v10);
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

  if ( (byte_4BB43ED & 1) == 0 )
  {
    sub_1C13D24(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4BB43ED = 1;
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
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v7 = 1;
    if ( !v6 )
    {
      v8 = this->fields.script;
      v13 = 1;
      v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v12.monitor = (void *)-1LL;
      v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
      if ( !v8 )
        sub_1C13F80(v9, v10);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v8,
               v9,
               (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_4BB43E7 & 1) == 0 )
  {
    sub_1C13D24(&Individuality_TypeInfo, indiv);
    byte_4BB43E7 = 1;
  }
  type = this->fields.type;
  if ( !indiv || type != 76 )
    return indiv == 0LL && type == 76;
  ckSelfIndv = this->fields.ckSelfIndv;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0LL);
}


bool __fastcall BuffEntity__isReflectionAct(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 97;
}


void __fastcall BuffEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4425 & 1) == 0 )
  {
    sub_1C13D24(&BuffEntity___c_TypeInfo, v1);
    byte_4BB4425 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BuffEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v2;
  sub_1C13CC8((PartyOrganizationUtility_o *)BuffEntity___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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