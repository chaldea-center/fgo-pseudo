void BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4E7A223 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A223 = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = sub_1D0F15C(int___TypeInfo, 1);
  if ( !v3 )
    sub_1D0F30C(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1D0F314(v3);
  *(_DWORD *)(v3 + 32) = 3;
  this->fields.defTurnEffect = (struct System_Int32_array *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.defTurnEffect, v3, v5, v6, v7, v8, v9, v10);
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
  System_Int32_array *TurnEffectArray_48100968; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Int32_array *turnEffect; // x8
  System_Int32_array *TurnEffectArray_48101252; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

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
    || (TurnEffectArray_48100968 = BattleTurnLimitUtil__GetTurnEffectArray_48100968(
                                     (int32_t)this,
                                     stage->fields.script,
                                     0),
        Data_k__BackingField->fields.turnEffect = TurnEffectArray_48100968,
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
          (int32_t)TurnEffectArray_48100968,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (turnEffect = Data_k__BackingField->fields.turnEffect) == 0) )
  {
LABEL_15:
    sub_1D0F30C(this, battleEvent);
  }
  if ( !turnEffect->max_length )
  {
    TurnEffectArray_48101252 = BattleTurnLimitUtil__GetTurnEffectArray_48101252(
                                 Data_k__BackingField->fields.limitTurnCount,
                                 v5->fields.defTurnEffect,
                                 0);
    Data_k__BackingField->fields.turnEffect = TurnEffectArray_48101252;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
      (int32_t)TurnEffectArray_48101252,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
}