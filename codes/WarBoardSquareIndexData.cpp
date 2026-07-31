void WarBoardSquareIndexData___ctor(WarBoardSquareIndexData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSquareIndexData___ctor_45042296(
        WarBoardSquareIndexData_o *this,
        WarBoardSquareIndexData_SaveData_o *squareIndexData,
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
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_21FFECC(v5, v6);
  effectIds = squareIndexData->fields.effectIds;
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  this->fields.effectIds = effectIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectIds,
    (int32_t)effectIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, (int32_t)script, v15, v16, v17, v18, v19, v20);
}


void WarBoardSquareIndexData_SaveData___ctor(WarBoardSquareIndexData_SaveData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareIndex = 0;
  this->fields.effectIds = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effectIds, 0, v3, v4, v5, v6, v7, v8);
  this->fields.script = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, 0, v9, v10, v11, v12, v13, v14);
}


void WarBoardSquareIndexData_SaveData___ctor_45001452(
        WarBoardSquareIndexData_SaveData_o *this,
        WarBoardSquareIndexData_o *squareIndexData,
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
  struct System_Int32_array *effectIds; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !squareIndexData )
    sub_21FFECC(v5, v6);
  effectIds = squareIndexData->fields.effectIds;
  this->fields.squareIndex = squareIndexData->fields.squareIndex;
  this->fields.effectIds = effectIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectIds,
    (int32_t)effectIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  script = squareIndexData->fields.script;
  this->fields.script = script;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.script, (int32_t)script, v15, v16, v17, v18, v19, v20);
}