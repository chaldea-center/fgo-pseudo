void __fastcall BattleWarBoardEventLimitTurn___ctor(BattleWarBoardEventLimitTurn_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDEBE6 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDEBE6 = 1;
  }
  *(_QWORD *)&this->fields.defLimitAct = 0x200000001LL;
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  if ( !v3->max_length )
    sub_1C2209C(v3, v3);
  v3->m_Items[1] = 3;
  this->fields.defTurnEffect = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.defTurnEffect, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Int32_array *v19; // x8
  System_Int32_array *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

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
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&Data_k__BackingField->fields.turnEffect,
            (int64_t)TurnEffect,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18);
          v19 = Data_k__BackingField->fields.turnEffect;
          if ( v19 )
          {
            if ( !*(_QWORD *)&v19->max_length )
            {
              v20 = StageEntity__GetTurnEffect(
                      stage,
                      Data_k__BackingField->fields.limitTurnCount,
                      this->fields.defTurnEffect,
                      0LL);
              Data_k__BackingField->fields.turnEffect = v20;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&Data_k__BackingField->fields.turnEffect,
                (int64_t)v20,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C22094(this, battleEvent);
    }
  }
}