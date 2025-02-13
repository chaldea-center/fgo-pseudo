void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC289 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC289 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w1

  if ( (byte_4BDC284 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&StringLiteral_7527/*"INDIVIDUALITIE"*/);
    byte_4BDC284 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7527/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t __fastcall BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o __fastcall BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  float v3; // s0
  System_Nullable_float__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v6; // 0:x0.8

  if ( (byte_4BDC26B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&StringLiteral_17393/*"battleCharaAlpha"*/);
    byte_4BDC26B = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17393/*"battleCharaAlpha"*/, 0LL) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17393/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v6 = (System_Nullable_float__o)&v5;
    v5 = 0LL;
    System_Nullable_float____ctor(v6, v3, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4BDC27F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17930/*"buffStateNoticeName"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC27F = 1;
  }
  return BuffEntity__getScript_40249444(
           this,
           (System_String_o *)StringLiteral_17930/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC268 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4468/*"CardEffectId"*/);
    byte_4BDC268 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4468/*"CardEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC273 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18282/*"ckIndvCountAbove"*/);
    byte_4BDC273 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18282/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC274 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18283/*"ckIndvCountBelow"*/);
    byte_4BDC274 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18283/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BDC276 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18284/*"ckOpCountIndividuality"*/);
    byte_4BDC276 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18284/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BDC275 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18285/*"ckSelfCountIndividuality"*/);
    byte_4BDC275 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18285/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC287 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18295/*"classIconChangeEffectId"*/);
    byte_4BDC287 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18295/*"classIconChangeEffectId"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC271 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4968/*"CounterMessage"*/);
    byte_4BDC271 = 1;
  }
  return BuffEntity__getScript_40249444(this, (System_String_o *)StringLiteral_4968/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC282 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5446/*"DisplayPriority"*/);
    byte_4BDC282 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5446/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC257 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19247/*"effectText"*/);
    byte_4BDC257 = 1;
  }
  return BuffEntity__getScript_40249444(this, (System_String_o *)StringLiteral_19247/*"effectText"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC265 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19648/*"extendLowerLimit"*/);
    byte_4BDC265 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19648/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC256 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20211/*"guardEffectId"*/);
    byte_4BDC256 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20211/*"guardEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC277 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7528/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    byte_4BDC277 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7528/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC278 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7529/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4BDC278 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7529/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC26E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9121/*"MaxBuffRate"*/);
    byte_4BDC26E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9121/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC258 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21900/*"motionName"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC258 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_40249444(this, (System_String_o *)StringLiteral_21900/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC288 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22785/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/);
    byte_4BDC288 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22785/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC255 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22978/*"popupEffectId"*/);
    byte_4BDC255 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22978/*"popupEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC266 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10969/*"ProgressSelfTurn"*/);
    byte_4BDC266 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10969/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC267 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10971/*"ProgressTurnCond"*/);
    byte_4BDC267 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10971/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_40249444; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffEntity___c_c *v14; // x8
  System_Func_object__int__o *_9__21_0; // x20
  Il2CppObject *v16; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4BDC24B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_string__int__TypeInfo);
    sub_1C21E38(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__);
    sub_1C21E38(&BuffEntity___c_TypeInfo);
    byte_4BDC24B = 1;
  }
  Script_40249444 = BuffEntity__getScript_40249444(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_40249444, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_40249444 )
    sub_1C22094(IsNullOrEmpty, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_40249444, separator, 0, 0LL);
  v14 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v14 = BuffEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v14->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BuffEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v16, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
      (int64_t)_9__21_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC272 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4BDC272 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BDC26F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13819/*"TargetIndiv"*/);
    byte_4BDC26F = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13819/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC27E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15136/*"UnSubStateWhenContinue"*/);
    byte_4BDC27E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_15136/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BDC26D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15432/*"UpBuffRateBuffIndiv"*/);
    byte_4BDC26D = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15432/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4BDC26C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15433/*"UpBuffRateBuffType"*/);
    byte_4BDC26C = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15433/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC269 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17395/*"battleEndNotReduceTurnFlag"*/);
    byte_4BDC269 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17395/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC280 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4573/*"CkIndvForEachDamage"*/);
    byte_4BDC280 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4573/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC281 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18868/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_4BDC281 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18868/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC279 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5435/*"DisableForciblyAddState"*/);
    byte_4BDC279 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5435/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC27C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5436/*"DisableMoveStateTurnChange"*/);
    byte_4BDC27C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5436/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC26A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18991/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_4BDC26A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18991/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC27D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6426/*"ExcludeUnSubStateIndiv"*/);
    byte_4BDC27D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6426/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC270 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7702/*"IncludeIgnoreIndividuality"*/);
    byte_4BDC270 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7702/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC27B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7747/*"IndvAddBuffPassive"*/);
    byte_4BDC27B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7747/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BDC285 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19991/*"fromCommandSpell"*/);
    sub_1C21E38(&StringLiteral_19992/*"fromMasterEquip"*/);
    byte_4BDC285 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19992/*"fromMasterEquip"*/, method);
  if ( v5 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19991/*"fromCommandSpell"*/, v7);
  if ( !v5 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1C22094(v5, v6);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDC283 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24792/*"useFirstTimeInTurn"*/);
    byte_4BDC283 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24792/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1C22094(v5, v6);
  return data->fields.playerSkillCount == 1;
}


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

  if ( (byte_4BDC27A & 1) == 0 )
  {
    sub_1C21E38(&BuffList_CONDITIONS_TypeInfo);
    byte_4BDC27A = 1;
  }
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v18 = condition;
  v7 = System_Enum__ToString(&v17, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)paramArray, (int64_t)ScriptIntArray, v10, v11, v12, v13, v14, v15);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4BDC286 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9758/*"NotPierceIndividuality"*/);
    byte_4BDC286 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9758/*"NotPierceIndividuality"*/,
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

  if ( (byte_4BDC25C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21839/*"missText"*/);
    byte_4BDC25C = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21839/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BDC248 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDC248 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4BDC259 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&StringLiteral_2430/*"AppId"*/);
    byte_4BDC259 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2430/*"AppId"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2430/*"AppId"*/,
                                                                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C22094(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C22354(Item);
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


int32_t __fastcall BuffEntity__getAtkRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC263 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17233/*"atkPriority"*/);
    byte_4BDC263 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17233/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC261 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18248/*"checkIndvType"*/);
    byte_4BDC261 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18248/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC25A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5184/*"DamageRelease"*/);
    byte_4BDC25A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5184/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4BDC25B & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2919/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_1C21E38(&StringLiteral_11481/*"ReleaseText"*/);
    byte_4BDC25B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_40249444(this, (System_String_o *)StringLiteral_11481/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDC264 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18846/*"defPriority"*/);
    byte_4BDC264 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18846/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4BDC254 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&StringLiteral_6031/*"EffectId"*/);
    byte_4BDC254 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_6031/*"EffectId"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_6031/*"EffectId"*/,
                                                                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C22094(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C22354(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v8, v9);
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

  if ( (byte_4BDC24D & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDC24D = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC260 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20213/*"gutsIconId"*/);
    byte_4BDC260 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20213/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4BDC25E & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2892/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_1C21E38(&StringLiteral_20214/*"gutsText"*/);
    byte_4BDC25E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2892/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_40249444(this, (System_String_o *)StringLiteral_20214/*"gutsText"*/, result, v4);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDC24E & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_17936/*"bufficon_{0:000}"*/);
    byte_4BDC24E = 1;
  }
  iconId = this->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17936/*"bufficon_{0:000}"*/, v6, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC25D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21839/*"missText"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC25D = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_40249444(
             this,
             (System_String_o *)StringLiteral_21839/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC262 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23264/*"relationId"*/);
    byte_4BDC262 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23264/*"relationId"*/, 0, v2);
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
  if ( (byte_4BDC249 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDC249 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C22094(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C22354(script);
  return (unsigned int)BuffEntity__getScript_40249444(v12, v13, v14, v15);
}


System_String_o *__fastcall BuffEntity__getScript_40249444(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4BDC24A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4BDC24A = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C22094(script, v7);
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

  if ( (byte_4BDC25F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20215/*"gutsTextColor"*/);
    byte_4BDC25F = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20215/*"gutsTextColor"*/, 1, v2);
  else
    return 1;
}


bool __fastcall BuffEntity__isCheckGroup(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffGroup != 0;
}


bool __fastcall BuffEntity__isCondition(BuffEntity_o *this, int32_t cond, int32_t *pal, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC24F & 1) == 0 )
  {
    sub_1C21E38(&BuffList_CONDITIONS_TypeInfo);
    byte_4BDC24F = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_40250540(this, v7, pal, v8);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC253 & 1) == 0 )
  {
    sub_1C21E38(&BuffList_CONDITIONS_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDC253 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = 2;
  v4 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v4,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v5 = this->fields.script;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = 3;
    v6 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
    if ( v5 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v5,
             v6,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v9 = this->fields.script;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v12 = 4;
      v6 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
      if ( v9 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v9,
                 v6,
                 (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C22094(v6, v7);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_40250540(
        BuffEntity_o *this,
        System_String_o *key,
        int32_t *pal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4BDC250 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDC250 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C22094(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *pal = v12;
      }
      else
      {
        sub_1C22354(Item);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  bool v5; // w8
  bool v6; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC251 & 1) == 0 )
  {
    sub_1C21E38(&BuffList_CONDITIONS_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDC251 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = 0;
  v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v14.monitor = (void *)-1LL;
  v4 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
  v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v4,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v6 = 1;
  if ( !v5 )
  {
    v7 = this->fields.script;
    v15 = 1;
    v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v14.monitor = (void *)-1LL;
    v8 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
    if ( !v7 )
      goto LABEL_16;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v7,
            v8,
            (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v14.monitor = (void *)-1LL;
      v15 = 2;
      v8 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
      if ( !v10 )
        goto LABEL_16;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v10,
              v8,
              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v11 = this->fields.script;
        v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v14.monitor = (void *)-1LL;
        v15 = 3;
        v8 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
        if ( v11 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v11,
                 v8,
                 (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v13 = this->fields.script;
          v14.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v14.monitor = (void *)-1LL;
          v15 = 4;
          v8 = (Il2CppObject *)System_Enum__ToString(&v14, 0LL);
          if ( v13 )
            return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v13,
                     v8,
                     (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1C22094(v8, v9);
      }
    }
    return 1;
  }
  return v6;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  bool v5; // w8
  bool v6; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC252 & 1) == 0 )
  {
    sub_1C21E38(&BuffList_CONDITIONS_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDC252 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v12 = 0;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v4 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
    v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v4,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v6 = 1;
    if ( !v5 )
    {
      v7 = this->fields.script;
      v12 = 1;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
      if ( !v7 )
        sub_1C22094(v8, v9);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v8,
               (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}


bool __fastcall BuffEntity__isEndAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w10
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_4BDC24C & 1) == 0 )
  {
    sub_1C21E38(&Individuality_TypeInfo);
    byte_4BDC24C = 1;
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC28A & 1) == 0 )
  {
    sub_1C21E38(&BuffEntity___c_TypeInfo);
    byte_4BDC28A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)BuffEntity___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
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