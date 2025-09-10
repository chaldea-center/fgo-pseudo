void BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_4C29D16 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C29D16 = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = sub_1C2D538(int___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 32) = 3;
  this->fields.defTurnEffect = (struct System_Int32_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defTurnEffect, v3, v5, v6);
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
  System_Int32_array *TurnEffectArray_46347564; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int32_array *turnEffect; // x8
  System_Int32_array *TurnEffectArray_46347848; // x0
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
          TurnEffectArray_46347564 = BattleTurnLimitUtil__GetTurnEffectArray_46347564(
                                       (int32_t)this,
                                       stage->fields.script,
                                       0);
          Data_k__BackingField->fields.turnEffect = TurnEffectArray_46347564;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect,
            (int32_t)TurnEffectArray_46347564,
            v11,
            v12);
          turnEffect = Data_k__BackingField->fields.turnEffect;
          if ( turnEffect )
          {
            if ( !turnEffect->max_length )
            {
              TurnEffectArray_46347848 = BattleTurnLimitUtil__GetTurnEffectArray_46347848(
                                           Data_k__BackingField->fields.limitTurnCount,
                                           v5->fields.defTurnEffect,
                                           0);
              Data_k__BackingField->fields.turnEffect = TurnEffectArray_46347848;
              sub_1C2D434(
                (CGThumbnailListItem_o *)&Data_k__BackingField->fields.turnEffect,
                (int32_t)TurnEffectArray_46347848,
                v15,
                v16);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C2D6EC(this, battleEvent);
    }
  }
}