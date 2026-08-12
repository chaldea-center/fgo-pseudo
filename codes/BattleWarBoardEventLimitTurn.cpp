void BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973476 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973476 = 1;
  }
  v3 = int___TypeInfo;
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v4 = sub_2213B20(v3, 1);
  if ( !v4 )
    sub_2213CDC(0, v5);
  if ( !*(_DWORD *)(v4 + 24) )
    sub_2213CE4(v4);
  *(_DWORD *)(v4 + 32) = 3;
  this->fields.defTurnEffect = (struct System_Int32_array *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defTurnEffect, v4, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleWarBoardEventLimitTurn__InitLimitInfo(
        BattleWarBoardEventLimitTurn_o *this,
        WarBoardBattleEvent_o *battleEvent,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *v5; // x19
  struct BattleData_o *Data_k__BackingField; // x21
  int limitAct; // w9
  int32_t *v9; // x9
  int32_t *v10; // x9
  System_Int32_array *TurnEffectArray_53652876; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Int32_array *turnEffect; // x8
  System_Int32_array *TurnEffectArray_53653160; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( !battleEvent )
    goto LABEL_15;
  v5 = this;
  this = (BattleWarBoardEventLimitTurn_o *)WarBoardBattleEvent__get_LimitBattleTurn(battleEvent, 0);
  if ( (int)this < 1 )
    return;
  Data_k__BackingField = battleEvent->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_15;
  limitAct = Data_k__BackingField->fields.limitAct;
  Data_k__BackingField->fields.limitTurnCount = (int)this;
  v9 = limitAct >= 1 ? &Data_k__BackingField->fields.limitAct : (int32_t *)&v5->fields;
  Data_k__BackingField->fields.limitAct = *v9;
  v10 = Data_k__BackingField->fields.turnEffectType >= 1
      ? &Data_k__BackingField->fields.turnEffectType
      : &v5->fields.defEffectType;
  Data_k__BackingField->fields.turnEffectType = *v10;
  if ( !stage
    || (TurnEffectArray_53652876 = BattleTurnLimitUtil__GetTurnEffectArray_53652876(
                                     (int32_t)this,
                                     stage->fields.script,
                                     0),
        Data_k__BackingField->fields.turnEffect = TurnEffectArray_53652876,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
          (int32_t)TurnEffectArray_53652876,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (turnEffect = Data_k__BackingField->fields.turnEffect) == 0) )
  {
LABEL_15:
    sub_2213CDC(this, battleEvent);
  }
  if ( !turnEffect->max_length )
  {
    TurnEffectArray_53653160 = BattleTurnLimitUtil__GetTurnEffectArray_53653160(
                                 Data_k__BackingField->fields.limitTurnCount,
                                 v5->fields.defTurnEffect,
                                 0);
    Data_k__BackingField->fields.turnEffect = TurnEffectArray_53653160;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
      (int32_t)TurnEffectArray_53653160,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
}