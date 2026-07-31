void BattleTurnLimitUtil___ctor(
        BattleTurnLimitUtil_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)script, v5, v6, v7, v8, v9, v10);
}


bool BattleTurnLimitUtil__ExistLimitTurn(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_53560496(script, method) > 0;
}


int32_t BattleTurnLimitUtil__GetLimitActType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_593B688 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8777/*"LimitAct"*/);
    byte_593B688 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_8777/*"LimitAct"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_53560496(this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetLimitTurnCountStopIndividualityArray(
        BattleTurnLimitUtil_o *this,
        const MethodInfo *method)
{
  if ( (byte_593B690 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8781/*"LimitTurnCountStopIndividualities"*/);
    byte_593B690 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.EntityScript, (System_String_o *)StringLiteral_8781/*"LimitTurnCountStopIndividualities"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn_53560496(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_593B68D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25485/*"turn"*/);
    byte_593B68D = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_25485/*"turn"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetTurnDispType(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_593B68E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25487/*"turnDispType"*/);
    byte_593B68E = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_25487/*"turnDispType"*/, 1, 0);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray(
        BattleTurnLimitUtil_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnEffectArray_53560780(limitTurn, this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_53560780(
        int32_t limitTurn,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x1
  const MethodInfo *v6; // x2

  if ( (byte_593B68B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25488/*"turnEffect"*/);
    byte_593B68B = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(script, (System_String_o *)StringLiteral_25488/*"turnEffect"*/, 0, 0);
  return BattleTurnLimitUtil__GetTurnEffectArray_53561064(limitTurn, IntArray, v6);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_53561064(
        int32_t limitTurn,
        System_Int32_array *turnArray,
        const MethodInfo *method)
{
  long double v3; // q0
  System_Int32_array *result; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x12
  __int64 v9; // x11
  unsigned int v10; // w8
  int32_t v11; // w9
  __int64 v12; // x10
  __int64 v13; // x12
  unsigned int v14; // w13
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_593B68C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&int___TypeInfo);
    byte_593B68C = 1;
  }
  if ( turnArray )
  {
    result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)limitTurn);
    if ( !result )
      sub_21FFECC(0, v7);
    max_length = result->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = (unsigned int)max_length & ~((int)max_length >> 31);
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = (unsigned int)result->max_length;
      do
      {
        if ( v13 == v12 )
LABEL_24:
          sub_21FFED4(result);
        v14 = turnArray->max_length;
        result->m_Items[v12] = v11;
        if ( (int)v10 < (int)v14 )
        {
          if ( v10 >= v14 )
            goto LABEL_24;
          if ( v12 == turnArray->m_Items[v10] - 1 )
          {
            ++v11;
            ++v10;
          }
        }
        ++v12;
      }
      while ( v9 != v12 );
    }
  }
  else
  {
    v15 = Method_System_Array_Empty_int___;
    v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v16 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v17 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v17, turnArray);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_2237AF8(v3);
    return **(System_Int32_array ***)(v18 + 184);
  }
  return result;
}


int32_t BattleTurnLimitUtil__GetTurnEffectType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_593B689 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25489/*"turnEffectType"*/);
    byte_593B689 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_25489/*"turnEffectType"*/, 0, 0);
}


bool BattleTurnLimitUtil__IsDispLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnDispType(this->fields.EntityScript, method) == 1;
}


bool BattleTurnLimitUtil__IsTurnElapsedEndBattleFlag(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_593B68A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25490/*"turnElapsedEndBattle"*/);
    byte_593B68A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_25490/*"turnElapsedEndBattle"*/, 0, 0) > 0;
}


BattleTurnLimitUtil_o *BattleTurnLimitUtil__Make(
        QuestPhaseEntity_o *questPhaseEnt,
        StageEntity_o *stageEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x21
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  const MethodInfo *v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593B68F & 1) == 0 )
  {
    sub_21FFC50(&BattleQuestPhaseTurnLimitUtil_TypeInfo);
    sub_21FFC50(&BattleTurnLimitUtil_TypeInfo);
    sub_21FFC50(&BattleWaveTurnLimitUtil_TypeInfo);
    byte_593B68F = 1;
  }
  if ( questPhaseEnt )
    script = questPhaseEnt->fields.script;
  else
    script = 0;
  if ( BattleTurnLimitUtil__GetLimitTurn_53560496(script, (const MethodInfo *)stageEnt) < 1 )
  {
    if ( stageEnt )
      v9 = stageEnt->fields.script;
    else
      v9 = 0;
    if ( BattleTurnLimitUtil__GetLimitTurn_53560496(v9, v6) < 1 )
    {
      v7 = sub_21FFEBC(BattleTurnLimitUtil_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      *(_QWORD *)(v7 + 16) = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), 0, v11, v12, v13, v14, v15, v16);
    }
    else
    {
      v7 = sub_21FFEBC(BattleWaveTurnLimitUtil_TypeInfo);
      BattleWaveTurnLimitUtil___ctor((BattleWaveTurnLimitUtil_o *)v7, stageEnt, v10);
    }
  }
  else
  {
    v7 = sub_21FFEBC(BattleQuestPhaseTurnLimitUtil_TypeInfo);
    BattleQuestPhaseTurnLimitUtil___ctor((BattleQuestPhaseTurnLimitUtil_o *)v7, questPhaseEnt, v8);
  }
  return (BattleTurnLimitUtil_o *)v7;
}


int32_t BattleTurnLimitUtil__get_TurnMode(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 0;
}