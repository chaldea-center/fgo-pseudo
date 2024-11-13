void __fastcall AiState___ctor(AiState_o *this, const MethodInfo *method)
{
  this->fields.beforeActId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiState__Initialize(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.firstAiGroupId = groupId;
  this->fields.aiGroupId = groupId;
  *(_QWORD *)&this->fields.baseTurn = 0LL;
  *(_QWORD *)&this->fields.fieldTurn = 0LL;
}


AiState_o *__fastcall AiState__MakeAiState(int32_t groupId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B18D49 & 1) == 0 )
  {
    sub_1BCA7E0(&AiState_TypeInfo, method, v2);
    byte_4B18D49 = 1;
  }
  v5 = sub_1BCAA2C(AiState_TypeInfo, method, v2, v3);
  *(_DWORD *)(v5 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = groupId;
  *(_DWORD *)(v5 + 20) = groupId;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  return (AiState_o *)v5;
}


AiState_o *__fastcall AiState__MakeAiState_44127920(AiState_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B18D4A & 1) == 0 )
  {
    sub_1BCA7E0(&AiState_TypeInfo, method, v2);
    byte_4B18D4A = 1;
  }
  v5 = sub_1BCAA2C(AiState_TypeInfo, method, v2, v3);
  *(_DWORD *)(v5 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  AiState__setSaveData((AiState_o *)v5, sv, v6);
  return (AiState_o *)v5;
}


BattleWarBoardInfo_TakeOverAiStateData_o *__fastcall AiState__MakeTakeOverAiState(
        AiState_o *aiState,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleWarBoardInfo_TakeOverAiStateData_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  BattleWarBoardInfo_TakeOverAiStateData_o *result; // x0

  if ( (byte_4B18D4B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWarBoardInfo_TakeOverAiStateData_TypeInfo, method, v2);
    byte_4B18D4B = 1;
  }
  v5 = (BattleWarBoardInfo_TakeOverAiStateData_o *)sub_1BCAA2C(
                                                     BattleWarBoardInfo_TakeOverAiStateData_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  BattleWarBoardInfo_TakeOverAiStateData___ctor(v5, 0LL);
  if ( !aiState || !v5 )
    sub_1BCAA3C(v6, v7);
  result = v5;
  v5->fields.firstAiGroupId = aiState->fields.firstAiGroupId;
  v5->fields.overwriteAiGroupId = aiState->fields.overwriteAiGroupId;
  v5->fields.currentAiGroupId = aiState->fields.aiGroupId;
  return result;
}


void __fastcall AiState__SetOverwriteAiGroupId(AiState_o *this, AiBaseEntity_o *aiBaseEnt, const MethodInfo *method)
{
  int32_t baseAiId; // [xsp+Ch] [xbp-14h] BYREF

  baseAiId = 0;
  if ( !aiBaseEnt )
    sub_1BCAA3C(this, 0LL);
  if ( AiBaseEntity__TryGetOverwriteBaseAiId(aiBaseEnt, &baseAiId, 0LL) )
    this->fields.overwriteAiGroupId = baseAiId;
}


void __fastcall AiState__SetTakeOver(
        AiState_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_o *takeOver,
        const MethodInfo *method)
{
  int overwriteAiGroupId; // w8
  int32_t *p_currentAiGroupId; // x8
  int32_t v5; // w8

  if ( takeOver )
  {
    overwriteAiGroupId = takeOver->fields.overwriteAiGroupId;
    this->fields.overwriteAiGroupId = overwriteAiGroupId;
    if ( overwriteAiGroupId <= 0 )
      p_currentAiGroupId = &takeOver->fields.currentAiGroupId;
    else
      p_currentAiGroupId = &this->fields.overwriteAiGroupId;
    v5 = *p_currentAiGroupId;
    this->fields.aiGroupId = v5;
    if ( v5 <= 0 )
      this->fields.aiGroupId = this->fields.firstAiGroupId;
  }
}


void __fastcall AiState__UpdateAiGroupId(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.firstAiGroupId = groupId;
  this->fields.aiGroupId = groupId;
}


void __fastcall AiState__changeThinking(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.aiGroupId = groupId;
  this->fields.actCount = 0;
}


void __fastcall AiState__fieldTurnProgressing(AiState_o *this, const MethodInfo *method)
{
  ++this->fields.fieldTurn;
}


int32_t __fastcall AiState__getBeforeAiActType(AiState_o *this, const MethodInfo *method)
{
  return this->fields.beforeActType;
}


AiState_SaveData_o *__fastcall AiState__getSaveData(AiState_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AiState_SaveData_o *result; // x0

  if ( (byte_4B18D48 & 1) == 0 )
  {
    sub_1BCA7E0(&AiState_SaveData_TypeInfo, method, v2);
    byte_4B18D48 = 1;
  }
  v5 = sub_1BCAA2C(AiState_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&this->fields.firstAiGroupId;
  *(_DWORD *)(v5 + 32) = AiAct__getInt(this->fields.beforeActType, 0LL);
  result = (AiState_SaveData_o *)v5;
  *(_DWORD *)(v5 + 36) = this->fields.beforeActId;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)&this->fields.fieldTurn;
  return result;
}


bool __fastcall AiState__get_ExistAiGroup(AiState_o *this, const MethodInfo *method)
{
  return this->fields.aiGroupId > 0;
}


void __fastcall AiState__setBeforeAction(AiState_o *this, int32_t type, int32_t actId, const MethodInfo *method)
{
  this->fields.beforeActType = type;
  this->fields.beforeActId = actId;
}


void __fastcall AiState__setSaveData(AiState_o *this, AiState_SaveData_o *sv, const MethodInfo *method)
{
  if ( sv )
  {
    *(_OWORD *)&this->fields.firstAiGroupId = *(_OWORD *)&sv->fields.firstAiGroupId;
    this->fields.beforeActType = AiAct__getType(sv->fields.beforeActType, 0LL);
    this->fields.beforeActId = sv->fields.beforeActId;
    *(_QWORD *)&this->fields.fieldTurn = *(_QWORD *)&sv->fields.fieldTurn;
  }
}


void __fastcall AiState_SaveData___ctor(AiState_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}