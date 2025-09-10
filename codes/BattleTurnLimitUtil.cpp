void BattleTurnLimitUtil___ctor(
        BattleTurnLimitUtil_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)script, v5, v6);
}


bool BattleTurnLimitUtil__ExistLimitTurn(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_46347280(script, method) > 0;
}


int32_t BattleTurnLimitUtil__GetLimitActType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C2A1B6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8421/*"LimitAct"*/);
    byte_4C2A1B6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_8421/*"LimitAct"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_46347280(this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetLimitTurnCountStopIndividualityArray(
        BattleTurnLimitUtil_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A1BE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8425/*"LimitTurnCountStopIndividualities"*/);
    byte_4C2A1BE = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.EntityScript, (System_String_o *)StringLiteral_8425/*"LimitTurnCountStopIndividualities"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn_46347280(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4C2A1BB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24201/*"turn"*/);
    byte_4C2A1BB = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24201/*"turn"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetTurnDispType(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4C2A1BC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24202/*"turnDispType"*/);
    byte_4C2A1BC = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24202/*"turnDispType"*/, 1, 0);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray(
        BattleTurnLimitUtil_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnEffectArray_46347564(limitTurn, this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_46347564(
        int32_t limitTurn,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C2A1B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24203/*"turnEffect"*/);
    byte_4C2A1B9 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(script, (System_String_o *)StringLiteral_24203/*"turnEffect"*/, 0, 0);
  return BattleTurnLimitUtil__GetTurnEffectArray_46347848(limitTurn, IntArray, v6);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_46347848(
        int32_t limitTurn,
        System_Int32_array *turnArray,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Int32_array *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 max_length; // x8
  unsigned int v10; // w9
  int32_t v11; // w10
  unsigned __int64 v12; // x11
  unsigned int v13; // w13
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4C2A1BA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&int___TypeInfo);
    byte_4C2A1BA = 1;
  }
  if ( turnArray )
  {
    result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)limitTurn);
    if ( !result )
      sub_1C2D6EC(0, v7);
    if ( (int)result->max_length >= 1 )
    {
      max_length = (unsigned int)result->max_length;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        if ( v12 >= max_length )
LABEL_24:
          sub_1C2D6F4(result, v7, v8);
        result->m_Items[v12] = v11;
        v13 = turnArray->max_length;
        if ( (int)v10 < (int)v13 )
        {
          if ( v10 >= v13 )
            goto LABEL_24;
          if ( v12 == turnArray->m_Items[v10] - 1 )
          {
            ++v11;
            ++v10;
          }
        }
        ++v12;
      }
      while ( max_length != v12 );
    }
  }
  else
  {
    v14 = Method_System_Array_Empty_int___;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C7DBA4(inited);
    return **(System_Int32_array ***)(v17 + 184);
  }
  return result;
}


int32_t BattleTurnLimitUtil__GetTurnEffectType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C2A1B7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24204/*"turnEffectType"*/);
    byte_4C2A1B7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24204/*"turnEffectType"*/, 0, 0);
}


bool BattleTurnLimitUtil__IsDispLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnDispType(this->fields.EntityScript, method) == 1;
}


bool BattleTurnLimitUtil__IsTurnElapsedEndBattleFlag(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4C2A1B8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24205/*"turnElapsedEndBattle"*/);
    byte_4C2A1B8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24205/*"turnElapsedEndBattle"*/, 0, 0) > 0;
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

  if ( (byte_4C2A1BD & 1) == 0 )
  {
    sub_1C2D490(&BattleQuestPhaseTurnLimitUtil_TypeInfo);
    sub_1C2D490(&BattleTurnLimitUtil_TypeInfo);
    sub_1C2D490(&BattleWaveTurnLimitUtil_TypeInfo);
    byte_4C2A1BD = 1;
  }
  if ( questPhaseEnt )
    script = questPhaseEnt->fields.script;
  else
    script = 0;
  if ( BattleTurnLimitUtil__GetLimitTurn_46347280(script, (const MethodInfo *)stageEnt) < 1 )
  {
    if ( stageEnt )
      v9 = stageEnt->fields.script;
    else
      v9 = 0;
    if ( BattleTurnLimitUtil__GetLimitTurn_46347280(v9, v6) < 1 )
    {
      v7 = sub_1C2D6DC(BattleTurnLimitUtil_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      *(_QWORD *)(v7 + 16) = 0;
      sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), 0, v11, v12);
    }
    else
    {
      v7 = sub_1C2D6DC(BattleWaveTurnLimitUtil_TypeInfo);
      BattleWaveTurnLimitUtil___ctor((BattleWaveTurnLimitUtil_o *)v7, stageEnt, v10);
    }
  }
  else
  {
    v7 = sub_1C2D6DC(BattleQuestPhaseTurnLimitUtil_TypeInfo);
    BattleQuestPhaseTurnLimitUtil___ctor((BattleQuestPhaseTurnLimitUtil_o *)v7, questPhaseEnt, v8);
  }
  return (BattleTurnLimitUtil_o *)v7;
}


int32_t BattleTurnLimitUtil__get_TurnMode(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 0;
}