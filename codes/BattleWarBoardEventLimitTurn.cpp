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

  if ( (byte_4CF111A & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CF111A = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = sub_1C7BB90(int___TypeInfo, 1);
  if ( !v3 )
    sub_1C7BD40(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C7BD48(v3);
  *(_DWORD *)(v3 + 32) = 3;
  this->fields.defTurnEffect = (struct System_Int32_array *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.defTurnEffect, v3, v5, v6, v7, v8, v9, v10);
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
  System_Int32_array *TurnEffectArray_47191768; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array *turnEffect; // x8
  System_Int32_array *TurnEffectArray_47192052; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

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
          TurnEffectArray_47191768 = BattleTurnLimitUtil__GetTurnEffectArray_47191768(
                                       (int32_t)this,
                                       stage->fields.script,
                                       0);
          Data_k__BackingField->fields.turnEffect = TurnEffectArray_47191768;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
            (int32_t)TurnEffectArray_47191768,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          turnEffect = Data_k__BackingField->fields.turnEffect;
          if ( turnEffect )
          {
            if ( !turnEffect->max_length )
            {
              TurnEffectArray_47192052 = BattleTurnLimitUtil__GetTurnEffectArray_47192052(
                                           Data_k__BackingField->fields.limitTurnCount,
                                           v5->fields.defTurnEffect,
                                           0);
              Data_k__BackingField->fields.turnEffect = TurnEffectArray_47192052;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&Data_k__BackingField->fields.turnEffect,
                (int32_t)TurnEffectArray_47192052,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C7BD40(this, battleEvent);
    }
  }
}