void WarBoardUiData___ctor(WarBoardUiData_o *this, const MethodInfo *method)
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
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._pieceIndex_k__BackingField, 0, v3, v4, v5, v6, v7, v8);
  this->fields._keys_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField, 0, v9, v10, v11, v12, v13, v14);
}


void WarBoardUiData___ctor_45043488(
        WarBoardUiData_o *this,
        WarBoardUiData_SaveData_o *saveData,
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
  struct System_Int32_array *pieceIndex; // x1
  struct System_String_array *keys; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_21FFECC(v5, v6);
  pieceIndex = saveData->fields.pieceIndex;
  this->fields._squareIndex_k__BackingField = saveData->fields.squareIndex;
  this->fields._pieceIndex_k__BackingField = pieceIndex;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._pieceIndex_k__BackingField,
    (int32_t)pieceIndex,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  keys = saveData->fields.keys;
  this->fields._keys_k__BackingField = keys;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField,
    (int32_t)keys,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void WarBoardUiData___ctor_45043568(
        WarBoardUiData_o *this,
        int32_t index,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._squareIndex_k__BackingField = index;
  this->fields._pieceIndex_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._pieceIndex_k__BackingField,
    0,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields._keys_k__BackingField = setKeys;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField,
    (int32_t)setKeys,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void WarBoardUiData___ctor_45043640(
        WarBoardUiData_o *this,
        System_Int32_array *indexes,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = indexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._pieceIndex_k__BackingField,
    (int32_t)indexes,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields._keys_k__BackingField = setKeys;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField,
    (int32_t)setKeys,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void WarBoardUiData__SetKeys(WarBoardUiData_o *this, System_String_array *setKeys, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._keys_k__BackingField = setKeys;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField,
    (int32_t)setKeys,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_array *WarBoardUiData__get_keys(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._keys_k__BackingField;
}


System_Int32_array *WarBoardUiData__get_pieceIndex(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._pieceIndex_k__BackingField;
}


int32_t WarBoardUiData__get_squareIndex(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void WarBoardUiData__set_keys(WarBoardUiData_o *this, System_String_array *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._keys_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._keys_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardUiData__set_pieceIndex(WarBoardUiData_o *this, System_Int32_array *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._pieceIndex_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._pieceIndex_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardUiData__set_squareIndex(WarBoardUiData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void WarBoardUiData_SaveData___ctor(WarBoardUiData_SaveData_o *this, const MethodInfo *method)
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
  this->fields.squareIndex = -1;
  this->fields.pieceIndex = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pieceIndex, 0, v3, v4, v5, v6, v7, v8);
  this->fields.keys = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.keys, 0, v9, v10, v11, v12, v13, v14);
}


void WarBoardUiData_SaveData___ctor_45001372(
        WarBoardUiData_SaveData_o *this,
        WarBoardUiData_o *uiData,
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
  struct System_Int32_array *pieceIndex_k__BackingField; // x1
  struct System_String_array *keys_k__BackingField; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uiData )
    sub_21FFECC(v5, v6);
  pieceIndex_k__BackingField = uiData->fields._pieceIndex_k__BackingField;
  this->fields.squareIndex = uiData->fields._squareIndex_k__BackingField;
  this->fields.pieceIndex = pieceIndex_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceIndex,
    (int32_t)pieceIndex_k__BackingField,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  keys_k__BackingField = uiData->fields._keys_k__BackingField;
  this->fields.keys = keys_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.keys,
    (int32_t)keys_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}