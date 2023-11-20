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
  __int64 v4; // x4
  __int64 v6; // x20

  if ( (byte_40F7EEF & 1) == 0 )
  {
    sub_B16FFC(&AiState_TypeInfo, method);
    byte_40F7EEF = 1;
  }
  v6 = sub_B170CC(AiState_TypeInfo, method, v2, v3, v4);
  *(_DWORD *)(v6 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_DWORD *)(v6 + 16) = groupId;
  *(_DWORD *)(v6 + 20) = groupId;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  return (AiState_o *)v6;
}


AiState_o *__fastcall AiState__MakeAiState_21189992(AiState_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20

  if ( (byte_40F7EF0 & 1) == 0 )
  {
    sub_B16FFC(&AiState_TypeInfo, method);
    byte_40F7EF0 = 1;
  }
  v6 = sub_B170CC(AiState_TypeInfo, method, v2, v3, v4);
  *(_DWORD *)(v6 + 44) = -1;
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  if ( sv )
  {
    *(_DWORD *)(v6 + 16) = sv->fields.firstAiGroupId;
    *(_DWORD *)(v6 + 20) = sv->fields.aiGroupId;
    *(_DWORD *)(v6 + 24) = sv->fields.baseTurn;
    *(_DWORD *)(v6 + 28) = sv->fields.actCount;
    *(_DWORD *)(v6 + 40) = sv->fields.beforeActType;
    *(_DWORD *)(v6 + 44) = sv->fields.beforeActId;
    *(_DWORD *)(v6 + 32) = sv->fields.fieldTurn;
    *(_DWORD *)(v6 + 36) = sv->fields.overwriteAiGroupId;
  }
  return (AiState_o *)v6;
}


BattleWarBoardInfo_TakeOverAiStateData_o *__fastcall AiState__MakeTakeOverAiState(
        AiState_o *aiState,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleWarBoardInfo_TakeOverAiStateData_o *v6; // x20
  BattleWarBoardInfo_TakeOverAiStateData_o *result; // x0

  if ( (byte_40F7EF1 & 1) == 0 )
  {
    sub_B16FFC(&BattleWarBoardInfo_TakeOverAiStateData_TypeInfo, method);
    byte_40F7EF1 = 1;
  }
  v6 = (BattleWarBoardInfo_TakeOverAiStateData_o *)sub_B170CC(
                                                     BattleWarBoardInfo_TakeOverAiStateData_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  BattleWarBoardInfo_TakeOverAiStateData___ctor(v6, 0LL);
  if ( !aiState || !v6 )
    sub_B170D4();
  result = v6;
  v6->fields.firstAiGroupId = aiState->fields.firstAiGroupId;
  v6->fields.overwriteAiGroupId = aiState->fields.overwriteAiGroupId;
  v6->fields.currentAiGroupId = aiState->fields.aiGroupId;
  return result;
}


void __fastcall AiState__SetOverwriteAiGroupId(AiState_o *this, AiBaseEntity_o *aiBaseEnt, const MethodInfo *method)
{
  int32_t baseAiId; // [xsp+Ch] [xbp-4h] BYREF

  baseAiId = 0;
  if ( !aiBaseEnt )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AiState_SaveData_o *v6; // x20
  AiState_SaveData_o *result; // x0

  if ( (byte_40F7EEE & 1) == 0 )
  {
    sub_B16FFC(&AiState_SaveData_TypeInfo, method);
    byte_40F7EEE = 1;
  }
  v6 = (AiState_SaveData_o *)sub_B170CC(AiState_SaveData_TypeInfo, method, v2, v3, v4);
  AiState_SaveData___ctor(v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  result = v6;
  v6->fields.firstAiGroupId = this->fields.firstAiGroupId;
  v6->fields.aiGroupId = this->fields.aiGroupId;
  v6->fields.baseTurn = this->fields.baseTurn;
  v6->fields.actCount = this->fields.actCount;
  v6->fields.beforeActType = this->fields.beforeActType;
  v6->fields.beforeActId = this->fields.beforeActId;
  v6->fields.fieldTurn = this->fields.fieldTurn;
  v6->fields.overwriteAiGroupId = this->fields.overwriteAiGroupId;
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