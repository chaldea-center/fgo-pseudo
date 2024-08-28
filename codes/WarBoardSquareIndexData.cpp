void __fastcall WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareIndexData___ctor_35386420(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_1B71828(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, (int32_t)effectIds, v7, v8);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)script, v11, v12);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, 0, v3, v4);
  this->fields.script = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.script, 0, v5, v6);
}


void __fastcall WarBoardSquareIndexData_SaveData___ctor_35344988(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !squareIndexData )
    sub_1B71828(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.effectIds, (int32_t)effectIds, v7, v8);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)script, v11, v12);
}