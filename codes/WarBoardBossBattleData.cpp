void WarBoardBossBattleData___ctor(WarBoardBossBattleData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardBossBattleData___ctor_37825016(
        WarBoardBossBattleData_o *this,
        WarBoardBossBattleData_SaveData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bossBattleData )
    sub_1C32E7C(v5);
  *(_QWORD *)&this->fields.bossIdx = *(_QWORD *)&bossBattleData->fields.bossIdx;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.script, (int32_t)script, v6, v7);
}


void WarBoardBossBattleData_SaveData___ctor(WarBoardBossBattleData_SaveData_o *this, const MethodInfo *method)
{
  WarBoardBossBattleData_SaveData_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.script = 0;
  v2 = (WarBoardBossBattleData_SaveData_o *)((char *)v2 + 24);
  v2[-1].fields.script = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)v2, 0, v3, v4);
}


void WarBoardBossBattleData_SaveData___ctor_37825120(
        WarBoardBossBattleData_SaveData_o *this,
        WarBoardBossBattleData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bossBattleData )
    sub_1C32E7C(v5);
  *(_QWORD *)&this->fields.bossIdx = *(_QWORD *)&bossBattleData->fields.bossIdx;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.script, (int32_t)script, v6, v7);
}