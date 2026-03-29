void BattleTurnLimitUtil___ctor(
        BattleTurnLimitUtil_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)script, v5, v6, v7, v8, v9, v10);
}


bool BattleTurnLimitUtil__ExistLimitTurn(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_47384900(script, method) > 0;
}


int32_t BattleTurnLimitUtil__GetLimitActType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4D339BC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8477/*"LimitAct"*/);
    byte_4D339BC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_8477/*"LimitAct"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_47384900(this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetLimitTurnCountStopIndividualityArray(
        BattleTurnLimitUtil_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D339C4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8481/*"LimitTurnCountStopIndividualities"*/);
    byte_4D339C4 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.EntityScript, (System_String_o *)StringLiteral_8481/*"LimitTurnCountStopIndividualities"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetLimitTurn_47384900(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4D339C1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24530/*"turn"*/);
    byte_4D339C1 = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24530/*"turn"*/, 0, 0);
}


int32_t BattleTurnLimitUtil__GetTurnDispType(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4D339C2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24531/*"turnDispType"*/);
    byte_4D339C2 = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24531/*"turnDispType"*/, 1, 0);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray(
        BattleTurnLimitUtil_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnEffectArray_47385184(limitTurn, this->fields.EntityScript, method);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_47385184(
        int32_t limitTurn,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D339BF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24532/*"turnEffect"*/);
    byte_4D339BF = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(script, (System_String_o *)StringLiteral_24532/*"turnEffect"*/, 0, 0);
  return BattleTurnLimitUtil__GetTurnEffectArray_47385468(limitTurn, IntArray, v6);
}


System_Int32_array *BattleTurnLimitUtil__GetTurnEffectArray_47385468(
        int32_t limitTurn,
        System_Int32_array *turnArray,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Int32_array *result; // x0
  __int64 v7; // x1
  unsigned __int64 max_length; // x8
  unsigned int v9; // w9
  int32_t v10; // w10
  unsigned __int64 v11; // x11
  unsigned int v12; // w13
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4D339C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D339C0 = 1;
  }
  if ( turnArray )
  {
    result = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)limitTurn);
    if ( !result )
      sub_1C93D2C(0, v7);
    if ( (int)result->max_length >= 1 )
    {
      max_length = (unsigned int)result->max_length;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
LABEL_24:
          sub_1C93D34(result);
        result->m_Items[v11] = v10;
        v12 = turnArray->max_length;
        if ( (int)v9 < (int)v12 )
        {
          if ( v9 >= v12 )
            goto LABEL_24;
          if ( v11 == turnArray->m_Items[v9] - 1 )
          {
            ++v10;
            ++v9;
          }
        }
        ++v11;
      }
      while ( max_length != v11 );
    }
  }
  else
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C69B68(inited);
    return **(System_Int32_array ***)(v16 + 184);
  }
  return result;
}


int32_t BattleTurnLimitUtil__GetTurnEffectType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4D339BD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24533/*"turnEffectType"*/);
    byte_4D339BD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24533/*"turnEffectType"*/, 0, 0);
}


bool BattleTurnLimitUtil__IsDispLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnDispType(this->fields.EntityScript, method) == 1;
}


bool BattleTurnLimitUtil__IsTurnElapsedEndBattleFlag(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4D339BE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24534/*"turnElapsedEndBattle"*/);
    byte_4D339BE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24534/*"turnElapsedEndBattle"*/, 0, 0) > 0;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D339C3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleQuestPhaseTurnLimitUtil_TypeInfo);
    sub_1C93AD4(&BattleTurnLimitUtil_TypeInfo);
    sub_1C93AD4(&BattleWaveTurnLimitUtil_TypeInfo);
    byte_4D339C3 = 1;
  }
  if ( questPhaseEnt )
    script = questPhaseEnt->fields.script;
  else
    script = 0;
  if ( BattleTurnLimitUtil__GetLimitTurn_47384900(script, (const MethodInfo *)stageEnt) < 1 )
  {
    if ( stageEnt )
      v9 = stageEnt->fields.script;
    else
      v9 = 0;
    if ( BattleTurnLimitUtil__GetLimitTurn_47384900(v9, v6) < 1 )
    {
      v7 = sub_1C93D20(BattleTurnLimitUtil_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      *(_QWORD *)(v7 + 16) = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), 0, v11, v12, v13, v14, v15, v16);
    }
    else
    {
      v7 = sub_1C93D20(BattleWaveTurnLimitUtil_TypeInfo);
      BattleWaveTurnLimitUtil___ctor((BattleWaveTurnLimitUtil_o *)v7, stageEnt, v10);
    }
  }
  else
  {
    v7 = sub_1C93D20(BattleQuestPhaseTurnLimitUtil_TypeInfo);
    BattleQuestPhaseTurnLimitUtil___ctor((BattleQuestPhaseTurnLimitUtil_o *)v7, questPhaseEnt, v8);
  }
  return (BattleTurnLimitUtil_o *)v7;
}


int32_t BattleTurnLimitUtil__get_TurnMode(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 0;
}