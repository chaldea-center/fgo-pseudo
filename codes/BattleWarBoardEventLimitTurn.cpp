void __fastcall BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F901B & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F901B = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v4 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v2);
  if ( !v4 )
    sub_B170D4();
  if ( !v4->max_length )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[1] = 3;
  this->fields.defTurnEffect = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defTurnEffect,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleWarBoardEventLimitTurn__InitLimitInfo(
        BattleWarBoardEventLimitTurn_o *this,
        WarBoardBattleEvent_o *battleEvent,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  int LimitBattleTurn; // w0
  struct BattleData_o *Data_k__BackingField; // x22
  int32_t limitAct; // w8
  int32_t turnEffectType; // w9
  System_Int32_array **TurnEffect; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int32_array *v18; // x8
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( !battleEvent )
    goto LABEL_13;
  LimitBattleTurn = WarBoardBattleEvent__get_LimitBattleTurn(battleEvent, 0LL);
  if ( LimitBattleTurn < 1 )
    return;
  Data_k__BackingField = battleEvent->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  limitAct = Data_k__BackingField->fields.limitAct;
  Data_k__BackingField->fields.limitTurnCount = LimitBattleTurn;
  if ( limitAct <= 0 )
    limitAct = this->fields.defLimitAct;
  turnEffectType = Data_k__BackingField->fields.turnEffectType;
  Data_k__BackingField->fields.limitAct = limitAct;
  if ( turnEffectType <= 0 )
    turnEffectType = this->fields.defEffectType;
  Data_k__BackingField->fields.turnEffectType = turnEffectType;
  if ( !stage
    || (TurnEffect = (System_Int32_array **)StageEntity__getTurnEffect(stage, LimitBattleTurn, 0LL),
        Data_k__BackingField->fields.turnEffect = (struct System_Int32_array *)TurnEffect,
        sub_B16F98(
          (BattleServantConfConponent_o *)&Data_k__BackingField->fields.turnEffect,
          TurnEffect,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = Data_k__BackingField->fields.turnEffect) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  if ( !*(_QWORD *)&v18->max_length )
  {
    v19 = (System_Int32_array **)StageEntity__GetTurnEffect(
                                   stage,
                                   Data_k__BackingField->fields.limitTurnCount,
                                   this->fields.defTurnEffect,
                                   0LL);
    Data_k__BackingField->fields.turnEffect = (struct System_Int32_array *)v19;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Data_k__BackingField->fields.turnEffect,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
}