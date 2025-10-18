void WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSquareIndexData___ctor_38166008(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_1C372B4(v5);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectIds, (int32_t)effectIds, v6, v7);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.script, (int32_t)script, v10, v11);
}


void WarBoardSquareIndexData_SaveData___ctor(WarBoardSquareIndexData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectIds, 0, v3, v4);
  this->fields.script = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.script, 0, v5, v6);
}


void WarBoardSquareIndexData_SaveData___ctor_38124380(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_1C372B4(v5);
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  effectIds = squareIndexData->fields.effectIds;
  this->fields.effectIds = effectIds;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectIds, (int32_t)effectIds, v6, v7);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.script, (int32_t)script, v10, v11);
}