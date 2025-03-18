void __fastcall WarBoardBossBattleData___ctor(WarBoardBossBattleData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBossBattleData___ctor_36688516(
        WarBoardBossBattleData_o *this,
        WarBoardBossBattleData_SaveData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_1C3B9C0(v5, v6);
  *(_QWORD *)&this->fields.bossIdx = *(_QWORD *)&bossBattleData->fields.bossIdx;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.script, (int64_t)script, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor(
        WarBoardBossBattleData_SaveData_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  v2 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields._normalFollowerInfo = 0LL;
  v2 = (PartyOrganizationUtility_o *)((char *)v2 + 24);
  *(_QWORD *)&v2[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
  sub_1C3B708(v2, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor_36688620(
        WarBoardBossBattleData_SaveData_o *this,
        WarBoardBossBattleData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_1C3B9C0(v5, v6);
  *(_QWORD *)&this->fields.bossIdx = *(_QWORD *)&bossBattleData->fields.bossIdx;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.script, (int64_t)script, v7, v8, v9, v10, v11, v12);
}