void __fastcall WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareIndexData___ctor_28224588(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_B170D4();
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectIds,
    (System_Int32_array **)effectIds,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor(
        WarBoardSquareIndexData_SaveData_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectIds, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.script = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.script, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor_20446248(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_B170D4();
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectIds,
    (System_Int32_array **)effectIds,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}