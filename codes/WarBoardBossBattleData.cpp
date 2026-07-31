void WarBoardBossBattleData___ctor(WarBoardBossBattleData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardBossBattleData___ctor_44799032(
        WarBoardBossBattleData_o *this,
        WarBoardBossBattleData_SaveData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  __int64 v14; // d0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bossBattleData )
    sub_21FFECC(v5, v6);
  script = bossBattleData->fields.script;
  v14 = *(_QWORD *)&bossBattleData->fields.bossIdx;
  this->fields.script = script;
  *(_QWORD *)&this->fields.bossIdx = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, (int32_t)script, v7, v8, v9, v10, v11, v12);
}


void WarBoardBossBattleData_SaveData___ctor(WarBoardBossBattleData_SaveData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.script = 0;
  *(_QWORD *)&this->fields.bossIdx = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, 0, v3, v4, v5, v6, v7, v8);
}


void WarBoardBossBattleData_SaveData___ctor_44799136(
        WarBoardBossBattleData_SaveData_o *this,
        WarBoardBossBattleData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  __int64 v14; // d0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bossBattleData )
    sub_21FFECC(v5, v6);
  script = bossBattleData->fields.script;
  v14 = *(_QWORD *)&bossBattleData->fields.bossIdx;
  this->fields.script = script;
  *(_QWORD *)&this->fields.bossIdx = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, (int32_t)script, v7, v8, v9, v10, v11, v12);
}