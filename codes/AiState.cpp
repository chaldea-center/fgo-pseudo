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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4185A8D & 1) == 0 )
  {
    sub_B2C35C(&AiState_TypeInfo, method);
    byte_4185A8D = 1;
  }
  v3 = sub_B2C42C(AiState_TypeInfo);
  *(_DWORD *)(v3 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_DWORD *)(v3 + 16) = groupId;
  *(_DWORD *)(v3 + 20) = groupId;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  return (AiState_o *)v3;
}


AiState_o *__fastcall AiState__MakeAiState_21183844(AiState_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4185A8E & 1) == 0 )
  {
    sub_B2C35C(&AiState_TypeInfo, method);
    byte_4185A8E = 1;
  }
  v3 = sub_B2C42C(AiState_TypeInfo);
  *(_DWORD *)(v3 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  if ( sv )
  {
    *(_DWORD *)(v3 + 16) = sv->fields.firstAiGroupId;
    *(_DWORD *)(v3 + 20) = sv->fields.aiGroupId;
    *(_DWORD *)(v3 + 24) = sv->fields.baseTurn;
    *(_DWORD *)(v3 + 28) = sv->fields.actCount;
    *(_DWORD *)(v3 + 40) = sv->fields.beforeActType;
    *(_DWORD *)(v3 + 44) = sv->fields.beforeActId;
    *(_DWORD *)(v3 + 32) = sv->fields.fieldTurn;
    *(_DWORD *)(v3 + 36) = sv->fields.overwriteAiGroupId;
  }
  return (AiState_o *)v3;
}


BattleWarBoardInfo_TakeOverAiStateData_o *__fastcall AiState__MakeTakeOverAiState(
        AiState_o *aiState,
        const MethodInfo *method)
{
  BattleWarBoardInfo_TakeOverAiStateData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleWarBoardInfo_TakeOverAiStateData_o *result; // x0

  if ( (byte_4185A8F & 1) == 0 )
  {
    sub_B2C35C(&BattleWarBoardInfo_TakeOverAiStateData_TypeInfo, method);
    byte_4185A8F = 1;
  }
  v3 = (BattleWarBoardInfo_TakeOverAiStateData_o *)sub_B2C42C(BattleWarBoardInfo_TakeOverAiStateData_TypeInfo);
  BattleWarBoardInfo_TakeOverAiStateData___ctor(v3, 0LL);
  if ( !aiState || !v3 )
    sub_B2C434(v4, v5);
  result = v3;
  v3->fields.firstAiGroupId = aiState->fields.firstAiGroupId;
  v3->fields.overwriteAiGroupId = aiState->fields.overwriteAiGroupId;
  v3->fields.currentAiGroupId = aiState->fields.aiGroupId;
  return result;
}


void __fastcall AiState__SetOverwriteAiGroupId(AiState_o *this, AiBaseEntity_o *aiBaseEnt, const MethodInfo *method)
{
  int32_t baseAiId; // [xsp+Ch] [xbp-4h] BYREF

  baseAiId = 0;
  if ( !aiBaseEnt )
    sub_B2C434(this, 0LL);
  if ( AiBaseEntity__TryGetOverwriteBaseAiId(aiBaseEnt, &baseAiId, method) )
    this->fields.overwriteAiGroupId = baseAiId;
}


void __fastcall AiState__SetTakeOver(
        AiState_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_o *takeOver,
        const MethodInfo *method)
{
  int overwriteAiGroupId; // w8
  int currentAiGroupId; // w8

  if ( takeOver )
  {
    overwriteAiGroupId = takeOver->fields.overwriteAiGroupId;
    this->fields.overwriteAiGroupId = overwriteAiGroupId;
    if ( overwriteAiGroupId >= 1 )
    {
LABEL_3:
      this->fields.aiGroupId = overwriteAiGroupId;
      return;
    }
    currentAiGroupId = takeOver->fields.currentAiGroupId;
    this->fields.aiGroupId = currentAiGroupId;
    if ( currentAiGroupId <= 0 )
    {
      overwriteAiGroupId = this->fields.firstAiGroupId;
      goto LABEL_3;
    }
  }
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
  AiState_SaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  AiState_SaveData_o *result; // x0

  if ( (byte_4185A8C & 1) == 0 )
  {
    sub_B2C35C(&AiState_SaveData_TypeInfo, method);
    byte_4185A8C = 1;
  }
  v3 = (AiState_SaveData_o *)sub_B2C42C(AiState_SaveData_TypeInfo);
  AiState_SaveData___ctor(v3, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  result = v3;
  v3->fields.firstAiGroupId = this->fields.firstAiGroupId;
  v3->fields.aiGroupId = this->fields.aiGroupId;
  v3->fields.baseTurn = this->fields.baseTurn;
  v3->fields.actCount = this->fields.actCount;
  v3->fields.beforeActType = this->fields.beforeActType;
  v3->fields.beforeActId = this->fields.beforeActId;
  v3->fields.fieldTurn = this->fields.fieldTurn;
  v3->fields.overwriteAiGroupId = this->fields.overwriteAiGroupId;
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
    this->fields.firstAiGroupId = sv->fields.firstAiGroupId;
    this->fields.aiGroupId = sv->fields.aiGroupId;
    this->fields.baseTurn = sv->fields.baseTurn;
    this->fields.actCount = sv->fields.actCount;
    this->fields.beforeActType = sv->fields.beforeActType;
    this->fields.beforeActId = sv->fields.beforeActId;
    this->fields.fieldTurn = sv->fields.fieldTurn;
    this->fields.overwriteAiGroupId = sv->fields.overwriteAiGroupId;
  }
}


void __fastcall AiState_SaveData___ctor(AiState_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}