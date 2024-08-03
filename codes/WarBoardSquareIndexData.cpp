void __fastcall WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareIndexData___ctor_35283300(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_1B64324(v5);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, (int32_t)effectIds, v6, v7);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)script, v10, v11);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor(
        WarBoardSquareIndexData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, 0, v3, v4);
  this->fields.script = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.script, 0, v5, v6);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor_35241868(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_1B64324(v5);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, (int32_t)effectIds, v6, v7);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)script, v10, v11);
}