void __fastcall BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00A3E & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    byte_4A00A3E = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B64ACC(0LL, v4);
  if ( !v3->max_length )
    sub_1B64AD4(v3, v3);
  v3->m_Items[1] = 3;
  this->fields.defTurnEffect = v3;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.defTurnEffect, (int32_t)v3, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleWarBoardEventLimitTurn__InitLimitInfo(
        BattleWarBoardEventLimitTurn_o *this,
        WarBoardBattleEvent_o *battleEvent,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x21
  BattleWarBoardEventLimitTurn_o *v5; // x20
  struct BattleData_o *Data_k__BackingField; // x22
  int limitAct; // w9
  BattleWarBoardEventLimitTurn_Fields *v9; // x9
  int32_t *v10; // x9
  System_Int32_array *TurnEffect; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Int32_array *v14; // x8
  System_Int32_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( !battleEvent )
    goto LABEL_15;
  v4 = battleEvent;
  v5 = this;
  this = (BattleWarBoardEventLimitTurn_o *)WarBoardBattleEvent__get_LimitBattleTurn(battleEvent, 0LL);
  if ( (int)this < 1 )
    return;
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_15;
  limitAct = Data_k__BackingField->fields.limitAct;
  battleEvent = (WarBoardBattleEvent_o *)(unsigned int)this;
  Data_k__BackingField->fields.limitTurnCount = (int)this;
  v9 = limitAct >= 1 ? (BattleWarBoardEventLimitTurn_Fields *)&Data_k__BackingField->fields.limitAct : &v5->fields;
  Data_k__BackingField->fields.limitAct = v9->defLimitAct;
  v10 = Data_k__BackingField->fields.turnEffectType >= 1
      ? &Data_k__BackingField->fields.turnEffectType
      : &v5->fields.defEffectType;
  Data_k__BackingField->fields.turnEffectType = *v10;
  if ( !stage
    || (TurnEffect = StageEntity__getTurnEffect(stage, (int32_t)this, 0LL),
        Data_k__BackingField->fields.turnEffect = TurnEffect,
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&Data_k__BackingField->fields.turnEffect,
          (int32_t)TurnEffect,
          v12,
          v13),
        (v14 = Data_k__BackingField->fields.turnEffect) == 0LL) )
  {
LABEL_15:
    sub_1B64ACC(this, battleEvent);
  }
  if ( !*(_QWORD *)&v14->max_length )
  {
    v15 = StageEntity__GetTurnEffect(stage, Data_k__BackingField->fields.limitTurnCount, v5->fields.defTurnEffect, 0LL);
    Data_k__BackingField->fields.turnEffect = v15;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&Data_k__BackingField->fields.turnEffect, (int32_t)v15, v16, v17);
  }
}