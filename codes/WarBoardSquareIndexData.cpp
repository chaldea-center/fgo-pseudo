void WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSquareIndexData___ctor_38632140(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_1C7BD40(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.effectIds, (int32_t)effectIds, v7, v8, v9, v10, v11, v12);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.script, (int32_t)script, v15, v16, v17, v18, v19, v20);
}


void WarBoardSquareIndexData_SaveData___ctor(WarBoardSquareIndexData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.effectIds, 0, v3, v4, v5, v6, v7, v8);
  this->fields.script = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.script, 0, v9, v10, v11, v12, v13, v14);
}


void WarBoardSquareIndexData_SaveData___ctor_38590508(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_1C7BD40(v5, v6);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.effectIds, (int32_t)effectIds, v7, v8, v9, v10, v11, v12);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.script, (int32_t)script, v15, v16, v17, v18, v19, v20);
}