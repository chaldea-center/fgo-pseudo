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
  __int64 v4; // x20

  if ( (byte_49FEDB4 & 1) == 0 )
  {
    sub_1B640C8(&AiState_TypeInfo, method);
    byte_49FEDB4 = 1;
  }
  v4 = sub_1B64314(AiState_TypeInfo, method, v2);
  *(_DWORD *)(v4 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = groupId;
  *(_DWORD *)(v4 + 20) = groupId;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  return (AiState_o *)v4;
}


AiState_o *__fastcall AiState__MakeAiState_42904600(AiState_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49FEDB5 & 1) == 0 )
  {
    sub_1B640C8(&AiState_TypeInfo, method);
    byte_49FEDB5 = 1;
  }
  v4 = sub_1B64314(AiState_TypeInfo, method, v2);
  *(_DWORD *)(v4 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  AiState__setSaveData((AiState_o *)v4, sv, v5);
  return (AiState_o *)v4;
}


BattleWarBoardInfo_TakeOverAiStateData_o *__fastcall AiState__MakeTakeOverAiState(
        AiState_o *aiState,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleWarBoardInfo_TakeOverAiStateData_o *v4; // x20
  __int64 v5; // x0
  BattleWarBoardInfo_TakeOverAiStateData_o *result; // x0

  if ( (byte_49FEDB6 & 1) == 0 )
  {
    sub_1B640C8(&BattleWarBoardInfo_TakeOverAiStateData_TypeInfo, method);
    byte_49FEDB6 = 1;
  }
  v4 = (BattleWarBoardInfo_TakeOverAiStateData_o *)sub_1B64314(
                                                     BattleWarBoardInfo_TakeOverAiStateData_TypeInfo,
                                                     method,
                                                     v2);
  BattleWarBoardInfo_TakeOverAiStateData___ctor(v4, 0LL);
  if ( !aiState || !v4 )
    sub_1B64324(v5);
  result = v4;
  v4->fields.firstAiGroupId = aiState->fields.firstAiGroupId;
  v4->fields.overwriteAiGroupId = aiState->fields.overwriteAiGroupId;
  v4->fields.currentAiGroupId = aiState->fields.aiGroupId;
  return result;
}


void __fastcall AiState__SetOverwriteAiGroupId(AiState_o *this, AiBaseEntity_o *aiBaseEnt, const MethodInfo *method)
{
  int32_t baseAiId; // [xsp+Ch] [xbp-14h] BYREF

  baseAiId = 0;
  if ( !aiBaseEnt )
    sub_1B64324(this);
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
  __int64 v4; // x20
  __int64 v5; // x0
  AiState_SaveData_o *result; // x0

  if ( (byte_49FEDB3 & 1) == 0 )
  {
    sub_1B640C8(&AiState_SaveData_TypeInfo, method);
    byte_49FEDB3 = 1;
  }
  v4 = sub_1B64314(AiState_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_OWORD *)(v4 + 16) = *(_OWORD *)&this->fields.firstAiGroupId;
  *(_DWORD *)(v4 + 32) = AiAct__getInt(this->fields.beforeActType, 0LL);
  result = (AiState_SaveData_o *)v4;
  *(_DWORD *)(v4 + 36) = this->fields.beforeActId;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)&this->fields.fieldTurn;
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