void BattleTurnLimitUtil___ctor(
        BattleTurnLimitUtil_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)script, v5, v6);
}


bool BattleTurnLimitUtil__ExistLimitTurn(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_46488844(script, method) > 0;
}


int32_t BattleTurnLimitUtil__GetLimitActType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A8C9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8427/*"LimitAct"*/);
    byte_4C3A8C9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_8427/*"LimitAct"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_46488844(this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetLimitTurnCountStopIndividualityArray(
        BattleTurnLimitUtil_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3A8D1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8431/*"LimitTurnCountStopIndividualities"*/);
    byte_4C3A8D1 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.EntityScript, (System_String_o *)StringLiteral_8431/*"LimitTurnCountStopIndividualities"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn_46488844(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4C3A8CE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24219/*"turn"*/);
    byte_4C3A8CE = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24219/*"turn"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetTurnDispType(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4C3A8CF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24220/*"turnDispType"*/);
    byte_4C3A8CF = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24220/*"turnDispType"*/, 1, 0);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray(
        BattleTurnLimitUtil_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnEffectArray_46489128(limitTurn, this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_46489128(
        int32_t limitTurn,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C3A8CC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24221/*"turnEffect"*/);
    byte_4C3A8CC = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(script, (System_String_o *)StringLiteral_24221/*"turnEffect"*/, 0, 0);
  return BattleTurnLimitUtil__GetTurnEffectArray_46489412(limitTurn, IntArray, v6);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_46489412(
        int32_t limitTurn,
        System_Int32_array *turnArray,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Int32_array *result; // x0
  unsigned __int64 max_length; // x8
  unsigned int v8; // w9
  int32_t v9; // w10
  unsigned __int64 v10; // x11
  unsigned int v11; // w13
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4C3A8CD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&int___TypeInfo);
    byte_4C3A8CD = 1;
  }
  if ( turnArray )
  {
    result = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, (unsigned int)limitTurn);
    if ( !result )
      sub_1C32E7C(0);
    if ( (int)result->max_length >= 1 )
    {
      max_length = (unsigned int)result->max_length;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do
      {
        if ( v10 >= max_length )
LABEL_24:
          sub_1C32E84(result);
        result->m_Items[v10] = v9;
        v11 = turnArray->max_length;
        if ( (int)v8 < (int)v11 )
        {
          if ( v8 >= v11 )
            goto LABEL_24;
          if ( v10 == turnArray->m_Items[v8] - 1 )
          {
            ++v9;
            ++v8;
          }
        }
        ++v10;
      }
      while ( max_length != v10 );
    }
  }
  else
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C83334(inited);
    return **(System_Int32_array ***)(v15 + 184);
  }
  return result;
}


int32_t BattleTurnLimitUtil__GetTurnEffectType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A8CA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24222/*"turnEffectType"*/);
    byte_4C3A8CA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24222/*"turnEffectType"*/, 0, 0);
}


bool BattleTurnLimitUtil__IsDispLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnDispType(this->fields.EntityScript, method) == 1;
}


bool BattleTurnLimitUtil__IsTurnElapsedEndBattleFlag(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A8CB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24223/*"turnElapsedEndBattle"*/);
    byte_4C3A8CB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24223/*"turnElapsedEndBattle"*/, 0, 0) > 0;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3A8D0 & 1) == 0 )
  {
    sub_1C32C20(&BattleQuestPhaseTurnLimitUtil_TypeInfo);
    sub_1C32C20(&BattleTurnLimitUtil_TypeInfo);
    sub_1C32C20(&BattleWaveTurnLimitUtil_TypeInfo);
    byte_4C3A8D0 = 1;
  }
  if ( questPhaseEnt )
    script = questPhaseEnt->fields.script;
  else
    script = 0;
  if ( BattleTurnLimitUtil__GetLimitTurn_46488844(script, (const MethodInfo *)stageEnt) < 1 )
  {
    if ( stageEnt )
      v9 = stageEnt->fields.script;
    else
      v9 = 0;
    if ( BattleTurnLimitUtil__GetLimitTurn_46488844(v9, v6) < 1 )
    {
      v7 = sub_1C32E6C(BattleTurnLimitUtil_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      *(_QWORD *)(v7 + 16) = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), 0, v11, v12);
    }
    else
    {
      v7 = sub_1C32E6C(BattleWaveTurnLimitUtil_TypeInfo);
      BattleWaveTurnLimitUtil___ctor((BattleWaveTurnLimitUtil_o *)v7, stageEnt, v10);
    }
  }
  else
  {
    v7 = sub_1C32E6C(BattleQuestPhaseTurnLimitUtil_TypeInfo);
    BattleQuestPhaseTurnLimitUtil___ctor((BattleQuestPhaseTurnLimitUtil_o *)v7, questPhaseEnt, v8);
  }
  return (BattleTurnLimitUtil_o *)v7;
}


int32_t BattleTurnLimitUtil__get_TurnMode(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 0;
}