void __fastcall WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareIndexData___ctor_29175512(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
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
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_B5D69C(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectIds,
    (System_Int32_array **)effectIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)script,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor(
        WarBoardSquareIndexData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0LL;
  sub_B5D560(&this->fields.effectIds);
  this->fields.script = 0LL;
  sub_B5D560(&this->fields.script);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor_20366340(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_B5D69C(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  this->fields.effectIds = squareIndexData->fields.effectIds;
  sub_B5D560(&this->fields.effectIds);
  this->fields.script = squareIndexData->fields.script;
  sub_B5D560(&this->fields.script);
}