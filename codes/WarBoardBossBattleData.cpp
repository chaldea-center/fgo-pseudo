void __fastcall WarBoardBossBattleData___ctor(WarBoardBossBattleData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBossBattleData___ctor_22580592(
        WarBoardBossBattleData_o *this,
        WarBoardBossBattleData_SaveData_o *bossBattleData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_B170D4();
  this->fields.bossIdx = bossBattleData->fields.bossIdx;
  this->fields.disp = bossBattleData->fields.disp;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor(
        WarBoardBossBattleData_SaveData_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  v2 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields._closeBtnObject = 0LL;
  v2 = (BattleServantConfConponent_o *)((char *)v2 + 24);
  *(_QWORD *)&v2[-1].fields.isOpenAfter = 0LL;
  sub_B16F98(v2, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardBossBattleData_SaveData___ctor_20726172(
        WarBoardBossBattleData_SaveData_o *this,
        WarBoardBossBattleData_o *bossBattleData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bossBattleData )
    sub_B170D4();
  this->fields.bossIdx = bossBattleData->fields.bossIdx;
  this->fields.disp = bossBattleData->fields.disp;
  script = bossBattleData->fields.script;
  this->fields.script = script;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}