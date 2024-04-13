void __fastcall BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0

  if ( (byte_42E7DEB & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7DEB = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v5 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  if ( !v5->max_length )
  {
    v13 = sub_B5D6C8(v5);
    sub_B5D668(v13, 0LL);
  }
  v5->m_Items[1] = 3;
  this->fields.defTurnEffect = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defTurnEffect,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  int limitAct; // w8
  int turnEffectType; // w9
  System_Int32_array **TurnEffect; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array *v17; // x8
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( !battleEvent )
    goto LABEL_13;
  v4 = battleEvent;
  v5 = this;
  this = (BattleWarBoardEventLimitTurn_o *)WarBoardBattleEvent__get_LimitBattleTurn(battleEvent, 0LL);
  if ( (int)this < 1 )
    return;
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  limitAct = Data_k__BackingField->fields.limitAct;
  battleEvent = (WarBoardBattleEvent_o *)(unsigned int)this;
  Data_k__BackingField->fields.limitTurnCount = (int)this;
  if ( limitAct <= 0 )
    limitAct = v5->fields.defLimitAct;
  turnEffectType = Data_k__BackingField->fields.turnEffectType;
  Data_k__BackingField->fields.limitAct = limitAct;
  if ( turnEffectType <= 0 )
    turnEffectType = v5->fields.defEffectType;
  Data_k__BackingField->fields.turnEffectType = turnEffectType;
  if ( !stage
    || (TurnEffect = (System_Int32_array **)StageEntity__getTurnEffect(stage, (int32_t)this, 0LL),
        Data_k__BackingField->fields.turnEffect = (struct System_Int32_array *)TurnEffect,
        sub_B5D560(
          (BattleServantConfConponent_o *)&Data_k__BackingField->fields.turnEffect,
          TurnEffect,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (v17 = Data_k__BackingField->fields.turnEffect) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(this, battleEvent);
  }
  if ( !*(_QWORD *)&v17->max_length )
  {
    v18 = (System_Int32_array **)StageEntity__GetTurnEffect(
                                   stage,
                                   Data_k__BackingField->fields.limitTurnCount,
                                   v5->fields.defTurnEffect,
                                   0LL);
    Data_k__BackingField->fields.turnEffect = (struct System_Int32_array *)v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&Data_k__BackingField->fields.turnEffect,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}