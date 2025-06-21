void __fastcall BattleTurnLimitUtil___ctor(
        BattleTurnLimitUtil_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.EntityScript = script;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)script, v5, v6);
}


bool __fastcall BattleTurnLimitUtil__ExistLimitTurn(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_45646212(script, method) > 0;
}


int32_t __fastcall BattleTurnLimitUtil__GetLimitActType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4B1F329 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8358/*"LimitAct"*/, method);
    byte_4B1F329 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_8358/*"LimitAct"*/, 0, 0LL);
}


int32_t __fastcall BattleTurnLimitUtil__GetLimitTurn(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetLimitTurn_45646212(this->fields.EntityScript, method);
}


int32_t __fastcall BattleTurnLimitUtil__GetLimitTurn_45646212(
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  if ( (byte_4B1F32E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24007/*"turn"*/, method);
    byte_4B1F32E = 1;
  }
  return EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24007/*"turn"*/, 0, 0LL);
}


System_Int32_array *__fastcall BattleTurnLimitUtil__GetTurnEffectArray(
        BattleTurnLimitUtil_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  return BattleTurnLimitUtil__GetTurnEffectArray_45646388(limitTurn, this->fields.EntityScript, method);
}


System_Int32_array *__fastcall BattleTurnLimitUtil__GetTurnEffectArray_45646388(
        int32_t limitTurn,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1F32C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24008/*"turnEffect"*/, script);
    byte_4B1F32C = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(script, (System_String_o *)StringLiteral_24008/*"turnEffect"*/, 0LL, 0LL);
  return BattleTurnLimitUtil__GetTurnEffectArray_45646672(limitTurn, IntArray, v6);
}


System_Int32_array *__fastcall BattleTurnLimitUtil__GetTurnEffectArray_45646672(
        int32_t limitTurn,
        System_Int32_array *turnArray,
        const MethodInfo *method)
{
  long double inited; // q0
  __int64 v6; // x1
  System_Int32_array *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned __int64 v10; // x8
  il2cpp_array_size_t v11; // w9
  int32_t v12; // w10
  unsigned __int64 v13; // x11
  il2cpp_array_size_t max_length; // w13
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_4B1F32D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_int___, turnArray);
    sub_1BCAFF8(&int___TypeInfo, v6);
    byte_4B1F32D = 1;
  }
  if ( turnArray )
  {
    result = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)limitTurn);
    if ( !result )
      sub_1BCB254(0LL, v8);
    if ( (int)*(_QWORD *)&result->max_length >= 1 )
    {
      v10 = (unsigned int)*(_QWORD *)&result->max_length;
      v11 = 0;
      v12 = 0;
      v13 = 0LL;
      do
      {
        if ( v13 >= v10 )
LABEL_24:
          sub_1BCB25C(result, v8, v9);
        result->m_Items[v13 + 1] = v12;
        max_length = turnArray->max_length;
        if ( (int)v11 < (int)max_length )
        {
          if ( v11 >= max_length )
            goto LABEL_24;
          if ( v13 == turnArray->m_Items[v11 + 1] - 1 )
          {
            ++v12;
            ++v11;
          }
        }
        ++v13;
      }
      while ( v10 != v13 );
    }
  }
  else
  {
    v15 = Method_System_Array_Empty_int___;
    v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v16 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_int___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1B45C(inited);
    return **(System_Int32_array ***)(v18 + 184);
  }
  return result;
}


int32_t __fastcall BattleTurnLimitUtil__GetTurnEffectType(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4B1F32A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24009/*"turnEffectType"*/, method);
    byte_4B1F32A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24009/*"turnEffectType"*/, 0, 0LL);
}


bool __fastcall BattleTurnLimitUtil__IsTurnElapsedEndBattleFlag(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  if ( (byte_4B1F32B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24010/*"turnElapsedEndBattle"*/, method);
    byte_4B1F32B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.EntityScript, (System_String_o *)StringLiteral_24010/*"turnElapsedEndBattle"*/, 0, 0LL) > 0;
}


BattleTurnLimitUtil_o *__fastcall BattleTurnLimitUtil__Make(
        QuestPhaseEntity_o *questPhaseEnt,
        StageEntity_o *stageEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x21
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B1F32F & 1) == 0 )
  {
    sub_1BCAFF8(&BattleQuestPhaseTurnLimitUtil_TypeInfo, stageEnt);
    sub_1BCAFF8(&BattleTurnLimitUtil_TypeInfo, v5);
    sub_1BCAFF8(&BattleWaveTurnLimitUtil_TypeInfo, v6);
    byte_4B1F32F = 1;
  }
  if ( questPhaseEnt )
    script = questPhaseEnt->fields.script;
  else
    script = 0LL;
  if ( BattleTurnLimitUtil__GetLimitTurn_45646212(script, (const MethodInfo *)stageEnt) < 1 )
  {
    if ( stageEnt )
      v11 = stageEnt->fields.script;
    else
      v11 = 0LL;
    if ( BattleTurnLimitUtil__GetLimitTurn_45646212(v11, v8) < 1 )
    {
      v9 = sub_1BCB244(BattleTurnLimitUtil_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0LL);
      *(_QWORD *)(v9 + 16) = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), 0, v13, v14);
    }
    else
    {
      v9 = sub_1BCB244(BattleWaveTurnLimitUtil_TypeInfo);
      BattleWaveTurnLimitUtil___ctor((BattleWaveTurnLimitUtil_o *)v9, stageEnt, v12);
    }
  }
  else
  {
    v9 = sub_1BCB244(BattleQuestPhaseTurnLimitUtil_TypeInfo);
    BattleQuestPhaseTurnLimitUtil___ctor((BattleQuestPhaseTurnLimitUtil_o *)v9, questPhaseEnt, v10);
  }
  return (BattleTurnLimitUtil_o *)v9;
}


int32_t __fastcall BattleTurnLimitUtil__get_TurnMode(BattleTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 0;
}