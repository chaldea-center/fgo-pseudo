void AiState___ctor(AiState_o *this, const MethodInfo *method)
{
  this->fields.beforeActId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AiState__Initialize(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.firstAiGroupId = groupId;
  this->fields.aiGroupId = groupId;
  *(_QWORD *)&this->fields.baseTurn = 0;
  *(_QWORD *)&this->fields.fieldTurn = 0;
}


AiState_o *AiState__MakeAiState(int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x20
  AiState_o *result; // x0

  if ( (byte_593B709 & 1) == 0 )
  {
    sub_21FFC50(&AiState_TypeInfo);
    byte_593B709 = 1;
  }
  v3 = sub_21FFEBC(AiState_TypeInfo);
  *(_DWORD *)(v3 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = groupId;
  *(_DWORD *)(v3 + 20) = groupId;
  result = (AiState_o *)v3;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  return result;
}


AiState_o *AiState__MakeAiState_53616992(AiState_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593B70A & 1) == 0 )
  {
    sub_21FFC50(&AiState_TypeInfo);
    byte_593B70A = 1;
  }
  v3 = sub_21FFEBC(AiState_TypeInfo);
  *(_DWORD *)(v3 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  AiState__setSaveData((AiState_o *)v3, sv, v4);
  return (AiState_o *)v3;
}


BattleWarBoardInfo_TakeOverAiStateData_o *AiState__MakeTakeOverAiState(AiState_o *aiState, const MethodInfo *method)
{
  BattleWarBoardInfo_TakeOverAiStateData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t aiGroupId; // w10
  int32_t overwriteAiGroupId; // w9
  BattleWarBoardInfo_TakeOverAiStateData_o *result; // x0

  if ( (byte_593B70B & 1) == 0 )
  {
    sub_21FFC50(&BattleWarBoardInfo_TakeOverAiStateData_TypeInfo);
    byte_593B70B = 1;
  }
  v3 = (BattleWarBoardInfo_TakeOverAiStateData_o *)sub_21FFEBC(BattleWarBoardInfo_TakeOverAiStateData_TypeInfo);
  BattleWarBoardInfo_TakeOverAiStateData___ctor(v3, 0);
  if ( !aiState || !v3 )
    sub_21FFECC(v4, v5);
  aiGroupId = aiState->fields.aiGroupId;
  overwriteAiGroupId = aiState->fields.overwriteAiGroupId;
  result = v3;
  v3->fields.firstAiGroupId = aiState->fields.firstAiGroupId;
  v3->fields.overwriteAiGroupId = overwriteAiGroupId;
  v3->fields.currentAiGroupId = aiGroupId;
  return result;
}


void AiState__SetOverwriteAiGroupId(AiState_o *this, AiBaseEntity_o *aiBaseEnt, const MethodInfo *method)
{
  int32_t baseAiId; // [xsp+Ch] [xbp-14h] BYREF

  baseAiId = 0;
  if ( !aiBaseEnt )
    sub_21FFECC(this, 0);
  if ( AiBaseEntity__TryGetOverwriteBaseAiId(aiBaseEnt, &baseAiId, 0) )
    this->fields.overwriteAiGroupId = baseAiId;
}


void AiState__SetTakeOver(
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


void AiState__UpdateAiGroupId(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.firstAiGroupId = groupId;
  this->fields.aiGroupId = groupId;
}


void AiState__changeThinking(AiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.aiGroupId = groupId;
  this->fields.actCount = 0;
}


void AiState__fieldTurnProgressing(AiState_o *this, const MethodInfo *method)
{
  ++this->fields.fieldTurn;
}


int32_t AiState__getBeforeAiActType(AiState_o *this, const MethodInfo *method)
{
  return this->fields.beforeActType;
}


AiState_SaveData_o *AiState__getSaveData(AiState_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t Int; // w0
  int32_t beforeActId; // w8
  AiState_SaveData_o *result; // x0

  if ( (byte_593B708 & 1) == 0 )
  {
    sub_21FFC50(&AiState_SaveData_TypeInfo);
    byte_593B708 = 1;
  }
  v3 = sub_21FFEBC(AiState_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.firstAiGroupId;
  Int = AiAct__getInt(this->fields.beforeActType, 0);
  beforeActId = this->fields.beforeActId;
  *(_DWORD *)(v3 + 32) = Int;
  *(_DWORD *)(v3 + 36) = beforeActId;
  result = (AiState_SaveData_o *)v3;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&this->fields.fieldTurn;
  return result;
}


bool AiState__get_ExistAiGroup(AiState_o *this, const MethodInfo *method)
{
  return this->fields.aiGroupId > 0;
}


void AiState__setBeforeAction(AiState_o *this, int32_t type, int32_t actId, const MethodInfo *method)
{
  this->fields.beforeActType = type;
  this->fields.beforeActId = actId;
}


void AiState__setSaveData(AiState_o *this, AiState_SaveData_o *sv, const MethodInfo *method)
{
  int32_t Type; // w0
  int32_t beforeActId; // w8

  if ( sv )
  {
    *(_OWORD *)&this->fields.firstAiGroupId = *(_OWORD *)&sv->fields.firstAiGroupId;
    Type = AiAct__getType(sv->fields.beforeActType, 0);
    beforeActId = sv->fields.beforeActId;
    this->fields.beforeActType = Type;
    this->fields.beforeActId = beforeActId;
    *(_QWORD *)&this->fields.fieldTurn = *(_QWORD *)&sv->fields.fieldTurn;
  }
}


void AiState_SaveData___ctor(AiState_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}