void __fastcall BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1831 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1831 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_42B181A & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&StringLiteral_16757/*"battleCharaAlpha"*/);
    byte_42B181A = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16757/*"battleCharaAlpha"*/, 0LL) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16757/*"battleCharaAlpha"*/, 0, 0LL)
       / 1000.0;
    v6 = (System_Nullable_float__o)&v5;
    v5 = 0LL;
    System_Nullable_float____ctor(v6, v3, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_42B182E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17228/*"buffStateNoticeName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B182E = 1;
  }
  return BuffEntity__getScript_27767184(
           this,
           (System_String_o *)StringLiteral_17228/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1817 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3913/*"CardEffectId"*/);
    byte_42B1817 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_3913/*"CardEffectId"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1822 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17562/*"ckIndvCountAbove"*/);
    byte_42B1822 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17562/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1823 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17563/*"ckIndvCountBelow"*/);
    byte_42B1823 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17563/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42B1825 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17564/*"ckOpCountIndividuality"*/);
    byte_42B1825 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17564/*"ckOpCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42B1824 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17565/*"ckSelfCountIndividuality"*/);
    byte_42B1824 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17565/*"ckSelfCountIndividuality"*/, 0LL, 0x2Cu, v2);
}


System_String_o *__fastcall BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1820 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4451/*"CounterMessage"*/);
    byte_42B1820 = 1;
  }
  return BuffEntity__getScript_27767184(this, (System_String_o *)StringLiteral_4451/*"CounterMessage"*/, 0LL, v2);
}


int32_t __fastcall BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1814 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18775/*"extendLowerLimit"*/);
    byte_42B1814 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_18775/*"extendLowerLimit"*/, 0, v2);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountAbove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1826 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7317/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    byte_42B1826 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7317/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetIndividualitieCountBelow(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1827 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7318/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_42B1827 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7318/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B181D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9050/*"MaxBuffRate"*/);
    byte_42B181D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9050/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *__fastcall BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1807 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20733/*"motionName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1807 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27767184(this, (System_String_o *)StringLiteral_20733/*"motionName"*/, 0LL, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1815 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10883/*"ProgressSelfTurn"*/);
    byte_42B1815 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10883/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t __fastcall BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1816 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10885/*"ProgressTurnCond"*/);
    byte_42B1816 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10885/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_27767184; // x21
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

  if ( (byte_42B17FE & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_string__int___ctor__);
    sub_B52984(&System_Func_string__int__TypeInfo);
    sub_B52984(&Method_BuffEntity___c__GetScriptIntArray_b__21_0__);
    sub_B52984(&BuffEntity___c_TypeInfo);
    byte_42B17FE = 1;
  }
  Script_27767184 = BuffEntity__getScript_27767184(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_27767184, 0LL) )
    return defValues;
  v11 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_17;
  v12 = v11;
  if ( !v11->max_length )
  {
    v26 = sub_B52A88(v11);
    sub_B52A28(v26, 0LL);
  }
  v11->m_Items[2] = separator;
  if ( !Script_27767184 )
LABEL_17:
    sub_B52A5C(v11, v12);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_27767184, v11, 0LL);
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
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v17,
      Method_BuffEntity___c__GetScriptIntArray_b__21_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_string__int___ctor__);
    v18 = BuffEntity___c_TypeInfo->static_fields;
    v18->__9__21_0 = (struct System_Func_string__int__o *)_9__21_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BuffEntity__GetShowStateWarBoardEnemyEquip(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1821 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12955/*"ShowStateWarBoardEnemyEquip"*/);
    byte_42B1821 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12955/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


System_Int32_array *__fastcall BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42B181E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13673/*"TargetIndiv"*/);
    byte_42B181E = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13673/*"TargetIndiv"*/, 0LL, 0x2Cu, v2);
}


int32_t __fastcall BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B182D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_14881/*"UnSubStateWhenContinue"*/);
    byte_42B182D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14881/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42B181C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15153/*"UpBuffRateBuffIndiv"*/);
    byte_42B181C = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15153/*"UpBuffRateBuffIndiv"*/, 0LL, 0x2Cu, v2);
}


System_Int32_array *__fastcall BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_42B181B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15154/*"UpBuffRateBuffType"*/);
    byte_42B181B = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15154/*"UpBuffRateBuffType"*/, 0LL, 0x2Cu, v2);
}


bool __fastcall BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1818 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16759/*"battleEndNotReduceTurnFlag"*/);
    byte_42B1818 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16759/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool __fastcall BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B182F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4012/*"CkIndvForEachDamage"*/);
    byte_42B182F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4012/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1830 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18082/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_42B1830 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18082/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1828 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5353/*"DisableForciblyAddState"*/);
    byte_42B1828 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5353/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B182B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5354/*"DisableMoveStateTurnChange"*/);
    byte_42B182B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5354/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1819 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18183/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_42B1819 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18183/*"drawShadowDespiteBattleCharaInvisible"*/, 0LL);
}


bool __fastcall BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B182C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6273/*"ExcludeUnSubStateIndiv"*/);
    byte_42B182C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6273/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B181F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7591/*"IncludeIgnoreIndividuality"*/);
    byte_42B181F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7591/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool __fastcall BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B182A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7637/*"IndvAddBuffPassive"*/);
    byte_42B182A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7637/*"IndvAddBuffPassive"*/, 0, v2) == 1;
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
  if ( (byte_42B1829 & 1) == 0 )
  {
    sub_B52984(&BuffList_CONDITIONS_TypeInfo);
    byte_42B1829 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v19);
  if ( !v6 )
    sub_B52A5C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v9, 0LL, 0x2Cu, v10);
  *paramArray = ScriptIntArray;
  sub_B52920(
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

  if ( (byte_42B180B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20676/*"missText"*/);
    byte_42B180B = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20676/*"missText"*/, v2);
}


bool __fastcall BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42B17FB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B17FB = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42B1808 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&StringLiteral_2012/*"AppId"*/);
    byte_42B1808 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2012/*"AppId"*/,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_2012/*"AppId"*/,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v6 = (BuffEntity_o *)sub_B52D50(Item);
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

  if ( (byte_42B1812 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16620/*"atkPriority"*/);
    byte_42B1812 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16620/*"atkPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1810 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17526/*"checkIndvType"*/);
    byte_42B1810 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17526/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t __fastcall BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1809 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5106/*"DamageRelease"*/);
    byte_42B1809 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5106/*"DamageRelease"*/, 0, v2);
}


System_String_o *__fastcall BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_42B180A & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2466/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_B52984(&StringLiteral_11475/*"ReleaseText"*/);
    byte_42B180A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27767184(this, (System_String_o *)StringLiteral_11475/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t __fastcall BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42B1813 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18061/*"defPriority"*/);
    byte_42B1813 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18061/*"defPriority"*/, defVal, v3);
}


int32_t __fastcall BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BuffEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42B1806 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&StringLiteral_5912/*"EffectId"*/);
    byte_42B1806 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_5912/*"EffectId"*/,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_5912/*"EffectId"*/,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v6 = (BuffEntity_o *)sub_B52D50(Item);
        LODWORD(script) = (unsigned int)BuffEntity__GetMotionName(v6, v7);
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

  if ( (byte_42B17FF & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B17FF = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B180F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19239/*"gutsIconId"*/);
    byte_42B180F = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19239/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *__fastcall BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_42B180D & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2442/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_B52984(&StringLiteral_19240/*"gutsText"*/);
    byte_42B180D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2442/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0LL);
  if ( this->fields.script )
    return BuffEntity__getScript_27767184(this, (System_String_o *)StringLiteral_19240/*"gutsText"*/, result, v4);
  return result;
}


System_String_o *__fastcall BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B1800 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_17236/*"bufficon_{0:000}"*/);
    byte_42B1800 = 1;
  }
  iconId = this->fields.iconId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  return System_String__Format((System_String_o *)StringLiteral_17236/*"bufficon_{0:000}"*/, v3, 0LL);
}


System_Int32_array *__fastcall BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *__fastcall BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B180C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20676/*"missText"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B180C = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_27767184(
             this,
             (System_String_o *)StringLiteral_20676/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1811 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21937/*"relationId"*/);
    byte_42B1811 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_21937/*"relationId"*/, 0, v2);
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
  if ( (byte_42B17FC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B17FC = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v10 = (BuffEntity_o *)sub_B52D50(script);
  return (unsigned int)BuffEntity__getScript_27767184(v10, v11, v12, v13);
}


System_String_o *__fastcall BuffEntity__getScript_27767184(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_42B17FD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_42B17FD = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(script, v7);
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

  if ( (byte_42B180E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19241/*"gutsTextColor"*/);
    byte_42B180E = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19241/*"gutsTextColor"*/, 1, v2);
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
  if ( (byte_42B1801 & 1) == 0 )
  {
    sub_B52984(&BuffList_CONDITIONS_TypeInfo);
    byte_42B1801 = 1;
  }
  v6 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v12);
  if ( !v6 )
    sub_B52A5C(0LL, v7);
  v8 = v6;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  return BuffEntity__isCondition_27768336(this, v9, pal, v10);
}


bool __fastcall BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  __int64 v9; // x21
  System_Xml_XmlQualifiedName_o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  __int64 v13; // x20
  System_Xml_XmlQualifiedName_o *v14; // x21
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B1805 & 1) == 0 )
  {
    sub_B52984(&BuffList_CONDITIONS_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B1805 = 1;
  }
  v16 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v16 = 2;
  v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
  if ( !v4 )
    goto LABEL_15;
  v6 = v4;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                          v4,
                                          *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          v7,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v8 = this->fields.script;
    v16 = 3;
    v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
    if ( v4 )
    {
      v9 = v4;
      v10 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                               v4,
                                               *(_QWORD *)(*(_QWORD *)v4 + 368LL));
      v4 = j_il2cpp_object_unbox_0(v9);
      v16 = *(_DWORD *)v4;
      if ( v8 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
               v10,
               (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v12 = this->fields.script;
        v16 = 4;
        v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v16);
        if ( v4 )
        {
          v13 = v4;
          v14 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                                   v4,
                                                   *(_QWORD *)(*(_QWORD *)v4 + 368LL));
          v4 = j_il2cpp_object_unbox_0(v13);
          v16 = *(_DWORD *)v4;
          if ( v12 )
            return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
                     v14,
                     (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        }
      }
    }
LABEL_15:
    sub_B52A5C(v4, v5);
  }
  return 1;
}


bool __fastcall BuffEntity__isCondition_27768336(
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

  if ( (byte_42B1802 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B1802 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v10 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *pal = v10;
      }
      else
      {
        v11 = (BuffEntity_o *)sub_B52D50(Item);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v4; // x0
  __int64 v5; // x1
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

  if ( (byte_42B1803 & 1) == 0 )
  {
    sub_B52984(&BuffList_CONDITIONS_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B1803 = 1;
  }
  v23 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v23 = 0;
  v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
  if ( !v4 )
    goto LABEL_21;
  v6 = v4;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                          v4,
                                          *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v23 = 1;
    v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
    if ( v4 )
    {
      v11 = v4;
      v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                               v4,
                                               *(_QWORD *)(*(_QWORD *)v4 + 368LL));
      v4 = j_il2cpp_object_unbox_0(v11);
      v23 = *(_DWORD *)v4;
      if ( v10 )
      {
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
               v12,
               (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v13 = this->fields.script;
        v23 = 2;
        v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
        if ( !v4 )
          goto LABEL_21;
        v14 = v4;
        v15 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                                 v4,
                                                 *(_QWORD *)(*(_QWORD *)v4 + 368LL));
        v4 = j_il2cpp_object_unbox_0(v14);
        v23 = *(_DWORD *)v4;
        if ( !v13 )
          goto LABEL_21;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
               v15,
               (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          return 1;
        }
        v16 = this->fields.script;
        v23 = 3;
        v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
        if ( v4 )
        {
          v17 = v4;
          v18 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                                   v4,
                                                   *(_QWORD *)(*(_QWORD *)v4 + 368LL));
          v4 = j_il2cpp_object_unbox_0(v17);
          v23 = *(_DWORD *)v4;
          if ( v16 )
          {
            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
                   v18,
                   (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              return 1;
            }
            v20 = this->fields.script;
            v23 = 4;
            v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v23);
            if ( v4 )
            {
              v21 = v4;
              v22 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                                       v4,
                                                       *(_QWORD *)(*(_QWORD *)v4 + 368LL));
              v4 = j_il2cpp_object_unbox_0(v21);
              v23 = *(_DWORD *)v4;
              if ( v20 )
                return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
                         v22,
                         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            }
          }
        }
      }
    }
LABEL_21:
    sub_B52A5C(v4, v5);
  }
  return v9;
}


bool __fastcall BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  System_Xml_XmlQualifiedName_o *v7; // x22
  bool v8; // w8
  bool v9; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  __int64 v11; // x20
  System_Xml_XmlQualifiedName_o *v12; // x21
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B1804 & 1) == 0 )
  {
    sub_B52984(&BuffList_CONDITIONS_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B1804 = 1;
  }
  v14 = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v14 = 0;
  v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v14);
  if ( !v4 )
    goto LABEL_11;
  v6 = v4;
  v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                          v4,
                                          *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         v7,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v9 = 1;
  if ( !v8 )
  {
    v10 = this->fields.script;
    v14 = 1;
    v4 = j_il2cpp_value_box_0(BuffList_CONDITIONS_TypeInfo, &v14);
    if ( v4 )
    {
      v11 = v4;
      v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                               v4,
                                               *(_QWORD *)(*(_QWORD *)v4 + 368LL));
      v4 = j_il2cpp_object_unbox_0(v11);
      v14 = *(_DWORD *)v4;
      if ( v10 )
        return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                 v12,
                 (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
LABEL_11:
    sub_B52A5C(v4, v5);
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
  Il2CppObject *v1; // x19
  struct BuffEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42AD67D & 1) == 0 )
  {
    sub_B52984(&BuffEntity___c_TypeInfo);
    byte_42AD67D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BuffEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_B52920(static_fields);
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