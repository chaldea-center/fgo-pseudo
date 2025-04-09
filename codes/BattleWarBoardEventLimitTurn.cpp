void __fastcall BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BD5C2 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    byte_49BD5C2 = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B4D1EC(0LL, v4);
  if ( !v3->max_length )
    sub_1B4D1F4(v3, v3);
  v3->m_Items[1] = 3;
  this->fields.defTurnEffect = v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.defTurnEffect, (int32_t)v3, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleWarBoardEventLimitTurn__InitLimitInfo(
        BattleWarBoardEventLimitTurn_o *this,
        WarBoardBattleEvent_o *battleEvent,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x9
  WarBoardBattleEvent_o *v5; // x8
  struct BattleData_o *Data_k__BackingField; // x22
  int limitAct; // w9
  BattleWarBoardEventLimitTurn_Fields *v10; // x9
  int32_t *v11; // x9
  System_Int32_array *TurnEffect; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Int32_array *v15; // x8
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( !battleEvent )
    goto LABEL_16;
  WarBoardBattleInfo_k__BackingField = battleEvent->fields._WarBoardBattleInfo_k__BackingField;
  v5 = battleEvent;
  if ( WarBoardBattleInfo_k__BackingField )
  {
    battleEvent = (WarBoardBattleEvent_o *)(unsigned int)WarBoardBattleInfo_k__BackingField->fields.battleTurn;
    if ( (int)battleEvent >= 1 )
    {
      Data_k__BackingField = v5->fields._Data_k__BackingField;
      if ( Data_k__BackingField )
      {
        limitAct = Data_k__BackingField->fields.limitAct;
        Data_k__BackingField->fields.limitTurnCount = (int)battleEvent;
        v10 = limitAct >= 1
            ? (BattleWarBoardEventLimitTurn_Fields *)&Data_k__BackingField->fields.limitAct
            : &this->fields;
        Data_k__BackingField->fields.limitAct = v10->defLimitAct;
        v11 = Data_k__BackingField->fields.turnEffectType >= 1
            ? &Data_k__BackingField->fields.turnEffectType
            : &this->fields.defEffectType;
        Data_k__BackingField->fields.turnEffectType = *v11;
        if ( stage )
        {
          TurnEffect = StageEntity__getTurnEffect(stage, (int32_t)battleEvent, 0LL);
          Data_k__BackingField->fields.turnEffect = TurnEffect;
          sub_1B4CF34((CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect, (int32_t)TurnEffect, v13, v14);
          v15 = Data_k__BackingField->fields.turnEffect;
          if ( v15 )
          {
            if ( !*(_QWORD *)&v15->max_length )
            {
              v16 = StageEntity__GetTurnEffect(
                      stage,
                      Data_k__BackingField->fields.limitTurnCount,
                      this->fields.defTurnEffect,
                      0LL);
              Data_k__BackingField->fields.turnEffect = v16;
              sub_1B4CF34((CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect, (int32_t)v16, v17, v18);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1B4D1EC(this, battleEvent);
    }
  }
}