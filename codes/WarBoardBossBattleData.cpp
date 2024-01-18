void __fastcall WarBoardBossBattleData___ctor(WarBoardBossBattleData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBossBattleData___ctor_22488388(
        WarBoardBossBattleData_o *this,
        WarBoardBossBattleData_SaveData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_B2C434(v5, v6);
  this->fields.bossIdx = bossBattleData->fields.bossIdx;
  this->fields.disp = bossBattleData->fields.disp;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor(
        WarBoardBossBattleData_SaveData_o *this,
        const MethodInfo *method)
{
  WarBoardBossBattleData_SaveData_o *v2; // x19

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.script = 0LL;
  v2 = (WarBoardBossBattleData_SaveData_o *)((char *)v2 + 24);
  v2[-1].fields.script = 0LL;
  sub_B2C2F8(v2, 0LL);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor_20840436(
        WarBoardBossBattleData_SaveData_o *this,
        WarBoardBossBattleData_o *bossBattleData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_B2C434(v5, v6);
  this->fields.bossIdx = bossBattleData->fields.bossIdx;
  this->fields.disp = bossBattleData->fields.disp;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_B2C2F8(&this->fields.script, script);
}