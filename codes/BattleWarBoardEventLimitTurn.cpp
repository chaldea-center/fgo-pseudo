void BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB8DB4 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB8DB4 = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v3 )
    sub_1C6BC60(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C6BC68(v3);
  *(_DWORD *)(v3 + 32) = 3;
  this->fields.defTurnEffect = (struct System_Int32_array *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defTurnEffect, v3, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleWarBoardEventLimitTurn__InitLimitInfo(
        BattleWarBoardEventLimitTurn_o *this,
        WarBoardBattleEvent_o *battleEvent,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  BattleWarBoardEventLimitTurn_o *v5; // x19
  struct BattleData_o *Data_k__BackingField; // x21
  int limitAct; // w9
  int32_t *v8; // x9
  int32_t *v9; // x9
  System_Int32_array *TurnEffectArray_46887104; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int32_array *turnEffect; // x8
  System_Int32_array *TurnEffectArray_46887388; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( !battleEvent )
    goto LABEL_16;
  WarBoardBattleInfo_k__BackingField = battleEvent->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
  {
    v5 = this;
    this = (BattleWarBoardEventLimitTurn_o *)(unsigned int)WarBoardBattleInfo_k__BackingField->fields.battleTurn;
    if ( (int)this >= 1 )
    {
      Data_k__BackingField = battleEvent->fields._Data_k__BackingField;
      if ( Data_k__BackingField )
      {
        limitAct = Data_k__BackingField->fields.limitAct;
        Data_k__BackingField->fields.limitTurnCount = (int)this;
        v8 = limitAct >= 1 ? &Data_k__BackingField->fields.limitAct : (int32_t *)&v5->fields;
        Data_k__BackingField->fields.limitAct = *v8;
        v9 = Data_k__BackingField->fields.turnEffectType >= 1
           ? &Data_k__BackingField->fields.turnEffectType
           : &v5->fields.defEffectType;
        Data_k__BackingField->fields.turnEffectType = *v9;
        if ( stage )
        {
          TurnEffectArray_46887104 = BattleTurnLimitUtil__GetTurnEffectArray_46887104(
                                       (int32_t)this,
                                       stage->fields.script,
                                       0);
          Data_k__BackingField->fields.turnEffect = TurnEffectArray_46887104;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect,
            (int32_t)TurnEffectArray_46887104,
            v11,
            v12);
          turnEffect = Data_k__BackingField->fields.turnEffect;
          if ( turnEffect )
          {
            if ( !turnEffect->max_length )
            {
              TurnEffectArray_46887388 = BattleTurnLimitUtil__GetTurnEffectArray_46887388(
                                           Data_k__BackingField->fields.limitTurnCount,
                                           v5->fields.defTurnEffect,
                                           0);
              Data_k__BackingField->fields.turnEffect = TurnEffectArray_46887388;
              sub_1C6B9AC(
                (CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect,
                (int32_t)TurnEffectArray_46887388,
                v15,
                v16);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C6BC60(this, battleEvent);
    }
  }
}