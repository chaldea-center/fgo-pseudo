void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5AAF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5AAF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t Script; // w1

  if ( (byte_4AB5AAA & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Contains_int___, individualityArray);
    sub_1BAB41C(&StringLiteral_7354/*"INDIVIDUALITIE"*/, v6);
    byte_4AB5AAA = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7354/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_2EDD8B4 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4AB5A91 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Nullable_float___ctor__, method);
    sub_1BAB41C(&StringLiteral_17138/*"battleCharaAlpha"*/, v3);
    byte_4AB5A91 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17138/*"battleCharaAlpha"*/, 0LL) )
  {
    v4 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17138/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, v4, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4AB5AA5 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17664/*"buffStateNoticeName"*/, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    byte_4AB5AA5 = 1;
  }
  return BuffEntity__getScript_39382852(
           this,
           (System_String_o *)StringLiteral_17664/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A8E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4373/*"CardEffectId"*/, method);
    byte_4AB5A8E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4373/*"CardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A99 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18008/*"ckIndvCountAbove"*/, *(_QWORD *)&defVal);
    byte_4AB5A99 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18008/*"ckIndvCountAbove"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A9A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18009/*"ckIndvCountBelow"*/, *(_QWORD *)&defVal);
    byte_4AB5A9A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18009/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4AB5A9C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18010/*"ckOpCountIndividuality"*/, method);
    byte_4AB5A9C = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18010/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4AB5A9B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18011/*"ckSelfCountIndividuality"*/, method);
    byte_4AB5A9B = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18011/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AAD & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18021/*"classIconChangeEffectId"*/, method);
    byte_4AB5AAD = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18021/*"classIconChangeEffectId"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A97 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4871/*"CounterMessage"*/, method);
    byte_4AB5A97 = 1;
  }
  return BuffEntity__getScript_39382852(this, (System_String_o *)StringLiteral_4871/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5AA8 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_5334/*"DisplayPriority"*/, *(_QWORD *)&defVal);
    byte_4AB5AA8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5334/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *__fastcall BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A7D & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18950/*"effectText"*/, method);
    byte_4AB5A7D = 1;
  }
  return BuffEntity__getScript_39382852(this, (System_String_o *)StringLiteral_18950/*"effectText"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A8B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19344/*"extendLowerLimit"*/, method);
    byte_4AB5A8B = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19344/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A7C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19892/*"guardEffectId"*/, method);
    byte_4AB5A7C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19892/*"guardEffectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A9D & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7355/*"INDIVIDUALITIE_COUNT_ABOVE"*/, *(_QWORD *)&defVal);
    byte_4AB5A9D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7355/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A9E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7356/*"INDIVIDUALITIE_COUNT_BELOW"*/, *(_QWORD *)&defVal);
    byte_4AB5A9E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7356/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A94 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_8935/*"MaxBuffRate"*/, method);
    byte_4AB5A94 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8935/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4AB5A7E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_21545/*"motionName"*/, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    byte_4AB5A7E = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_39382852(this, (System_String_o *)StringLiteral_21545/*"motionName"*/, 0LL, v2);
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

  if ( (byte_4AB5AAE & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22414/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, *(_QWORD *)&defVal);
    byte_4AB5AAE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22414/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A7B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22605/*"popupEffectId"*/, method);
    byte_4AB5A7B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22605/*"popupEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A8C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10767/*"ProgressSelfTurn"*/, method);
    byte_4AB5A8C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10767/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A8D & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10769/*"ProgressTurnCond"*/, method);
    byte_4AB5A8D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10769/*"ProgressTurnCond"*/, -1, v2);
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
  System_String_o *Script_39382852; // x21
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

  if ( (byte_4AB5A71 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1BAB41C(&System_Func_string__int__TypeInfo, v10);
    sub_1BAB41C(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__, v11);
    sub_1BAB41C(&BuffEntity___c_TypeInfo, v12);
    byte_4AB5A71 = 1;
  }
  Script_39382852 = BuffEntity__getScript_39382852(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_39382852, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_39382852 )
    sub_1BAB678(IsNullOrEmpty, v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_39382852, separator, 0, 0LL);
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
    _9__21_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v20, Method_BuffEntity___c__GetScriptIntArray_b__21_0__, 0LL);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__21_0,
                                                               (const MethodInfo_2EF3A3C *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A98 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12791/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_4AB5A98 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12791/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4AB5A95 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_13593/*"TargetIndiv"*/, method);
    byte_4AB5A95 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13593/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA4 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_14905/*"UnSubStateWhenContinue"*/, method);
    byte_4AB5AA4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14905/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4AB5A93 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15198/*"UpBuffRateBuffIndiv"*/, method);
    byte_4AB5A93 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15198/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4AB5A92 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15199/*"UpBuffRateBuffType"*/, method);
    byte_4AB5A92 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15199/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A8F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17140/*"battleEndNotReduceTurnFlag"*/, method);
    byte_4AB5A8F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17140/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4478/*"CkIndvForEachDamage"*/, method);
    byte_4AB5AA6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4478/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA7 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18583/*"delayRemoveExpiredOnPlayerTurn"*/, method);
    byte_4AB5AA7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18583/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A9F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_5323/*"DisableForciblyAddState"*/, method);
    byte_4AB5A9F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5323/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA2 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_5324/*"DisableMoveStateTurnChange"*/, method);
    byte_4AB5AA2 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5324/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5A90 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18697/*"drawShadowDespiteBattleCharaInvisible"*/, method);
    byte_4AB5A90 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18697/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA3 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6260/*"ExcludeUnSubStateIndiv"*/, method);
    byte_4AB5AA3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6260/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A96 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7529/*"IncludeIgnoreIndividuality"*/, method);
    byte_4AB5A96 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7529/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5AA1 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7574/*"IndvAddBuffPassive"*/, method);
    byte_4AB5AA1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7574/*"IndvAddBuffPassive"*/, 0, v2) == 1;
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

  if ( (byte_4AB5AAB & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19687/*"fromCommandSpell"*/, skillInfoData);
    sub_1BAB41C(&StringLiteral_19688/*"fromMasterEquip"*/, v5);
    byte_4AB5AAB = 1;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19688/*"fromMasterEquip"*/, method);
  if ( v6 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v6 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19687/*"fromCommandSpell"*/, v8);
  if ( !v6 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1BAB678(v6, v7);
  return skillInfoData->fields.type == 2;
}


bool __fastcall BuffEntity__IsMatchSkillCountingCondition(
        BuffEntity_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4AB5AA9 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_24397/*"useFirstTimeInTurn"*/, data);
    byte_4AB5AA9 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24397/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1BAB678(v5, v6);
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

  if ( (byte_4AB5AA0 & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&condition);
    byte_4AB5AA0 = 1;
  }
  v13.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = condition;
  v7 = System_Enum__ToString(&v13, 0LL);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0LL, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)paramArray, (int32_t)ScriptIntArray, v10, v11);
  return *paramArray != 0LL;
}


bool __fastcall BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4AB5AAC & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_9567/*"NotPierceIndividuality"*/, result);
    byte_4AB5AAC = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9567/*"NotPierceIndividuality"*/,
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

  if ( (byte_4AB5A82 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_21484/*"missText"*/, method);
    byte_4AB5A82 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21484/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4AB5A6E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4AB5A6E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4AB5A7F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BAB41C(&long_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_2387/*"AppId"*/, v5);
    byte_4AB5A7F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2387/*"AppId"*/,
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2387/*"AppId"*/,
                                                                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BAB678(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1BAB938(Item);
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

  if ( (byte_4AB5A89 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16981/*"atkPriority"*/, *(_QWORD *)&defVal);
    byte_4AB5A89 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16981/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A87 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17974/*"checkIndvType"*/, method);
    byte_4AB5A87 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17974/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A80 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_5076/*"DamageRelease"*/, method);
    byte_4AB5A80 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5076/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4AB5A81 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_2875/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, v3);
    sub_1BAB41C(&StringLiteral_11274/*"ReleaseText"*/, v4);
    byte_4AB5A81 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2875/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_39382852(this, (System_String_o *)StringLiteral_11274/*"ReleaseText"*/, result, v6);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB5A8A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18561/*"defPriority"*/, *(_QWORD *)&defVal);
    byte_4AB5A8A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18561/*"defPriority"*/, defVal, v3);
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

  if ( (byte_4AB5A7A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BAB41C(&long_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_5877/*"EffectId"*/, v5);
    byte_4AB5A7A = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5877/*"EffectId"*/,
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5877/*"EffectId"*/,
                                                                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BAB678(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1BAB938(Item);
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

  if ( (byte_4AB5A73 & 1) == 0 )
  {
    sub_1BAB41C(&int___TypeInfo, method);
    byte_4AB5A73 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A86 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19894/*"gutsIconId"*/, method);
    byte_4AB5A86 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19894/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4AB5A84 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_2848/*"BATTLE_DEFAULT_GUTS_TEXT"*/, v3);
    sub_1BAB41C(&StringLiteral_19895/*"gutsText"*/, v4);
    byte_4AB5A84 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_39382852(this, (System_String_o *)StringLiteral_19895/*"gutsText"*/, result, v6);
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

  if ( (byte_4AB5A74 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17670/*"bufficon_{0:000}"*/, v6);
    byte_4AB5A74 = 1;
  }
  iconId = this->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17670/*"bufficon_{0:000}"*/, v7, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4AB5A83 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_21484/*"missText"*/, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    byte_4AB5A83 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_39382852(
             this,
             (System_String_o *)StringLiteral_21484/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5A88 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22885/*"relationId"*/, method);
    byte_4AB5A88 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22885/*"relationId"*/, 0, v2);
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
  if ( (byte_4AB5A6F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BAB41C(&long_TypeInfo, v7);
    byte_4AB5A6F = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BAB678(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1BAB938(script);
  return (unsigned int)BuffEntity__getScript_39382852(v13, v14, v15, v16);
}


System_String_o *__fastcall BuffEntity__getScript_39382852(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4AB5A70 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4AB5A70 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BAB678(script, v7);
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

  if ( (byte_4AB5A85 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19896/*"gutsTextColor"*/, method);
    byte_4AB5A85 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19896/*"gutsTextColor"*/, 1, v2);
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

  if ( (byte_4AB5A75 & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_CONDITIONS_TypeInfo, *(_QWORD *)&cond);
    byte_4AB5A75 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0LL);
  return BuffEntity__isCondition_39383948(this, v7, pal, v8);
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

  if ( (byte_4AB5A79 & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4AB5A79 = 1;
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
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
             (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1BAB678(v7, v8);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_39383948(
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

  if ( (byte_4AB5A76 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BAB41C(&long_TypeInfo, v8);
    byte_4AB5A76 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BAB678(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *pal = v14;
      }
      else
      {
        sub_1BAB938(Item);
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

  if ( (byte_4AB5A77 & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4AB5A77 = 1;
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
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
            (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
              (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                     (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
LABEL_16:
        sub_1BAB678(v9, v10);
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

  if ( (byte_4AB5A78 & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_CONDITIONS_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    byte_4AB5A78 = 1;
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
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v7 = 1;
    if ( !v6 )
    {
      v8 = this->fields.script;
      v13 = 1;
      v12.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v12.monitor = (void *)-1LL;
      v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
      if ( !v8 )
        sub_1BAB678(v9, v10);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v8,
               v9,
               (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4AB5A72 & 1) == 0 )
  {
    sub_1BAB41C(&Individuality_TypeInfo, indiv);
    byte_4AB5A72 = 1;
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB5AB0 & 1) == 0 )
  {
    sub_1BAB41C(&BuffEntity___c_TypeInfo, v1);
    byte_4AB5AB0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BuffEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)BuffEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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