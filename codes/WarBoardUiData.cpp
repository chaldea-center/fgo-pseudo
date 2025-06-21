void __fastcall WarBoardUiData___ctor(WarBoardUiData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._pieceIndex_k__BackingField, 0, v3, v4);
  this->fields._keys_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, 0, v5, v6);
}


void __fastcall WarBoardUiData___ctor_37371916(
        WarBoardUiData_o *this,
        WarBoardUiData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *pieceIndex; // x1
  struct System_String_array *keys; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1BCB254(v5, v6);
  this->fields._squareIndex_k__BackingField = saveData->fields.squareIndex;
  pieceIndex = saveData->fields.pieceIndex;
  this->fields._pieceIndex_k__BackingField = pieceIndex;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._pieceIndex_k__BackingField, (int32_t)pieceIndex, v7, v8);
  keys = saveData->fields.keys;
  this->fields._keys_k__BackingField = keys;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, (int32_t)keys, v11, v12);
}


void __fastcall WarBoardUiData___ctor_37371996(
        WarBoardUiData_o *this,
        int32_t index,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._squareIndex_k__BackingField = index;
  this->fields._pieceIndex_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._pieceIndex_k__BackingField, 0, v7, v8);
  this->fields._keys_k__BackingField = setKeys;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, (int32_t)setKeys, v9, v10);
}


void __fastcall WarBoardUiData___ctor_37372068(
        WarBoardUiData_o *this,
        System_Int32_array *indexes,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = indexes;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._pieceIndex_k__BackingField, (int32_t)indexes, v7, v8);
  this->fields._keys_k__BackingField = setKeys;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, (int32_t)setKeys, v9, v10);
}


void __fastcall WarBoardUiData__SetKeys(WarBoardUiData_o *this, System_String_array *setKeys, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._keys_k__BackingField = setKeys;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, (int32_t)setKeys, (int32_t)method, v3);
}


System_String_array *__fastcall WarBoardUiData__get_keys(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._keys_k__BackingField;
}


System_Int32_array *__fastcall WarBoardUiData__get_pieceIndex(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._pieceIndex_k__BackingField;
}


int32_t __fastcall WarBoardUiData__get_squareIndex(WarBoardUiData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void __fastcall WarBoardUiData__set_keys(WarBoardUiData_o *this, System_String_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._keys_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._keys_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall WarBoardUiData__set_pieceIndex(
        WarBoardUiData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._pieceIndex_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._pieceIndex_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall WarBoardUiData__set_squareIndex(WarBoardUiData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardUiData_SaveData___ctor(WarBoardUiData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = -1;
  this->fields.pieceIndex = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.pieceIndex, 0, v3, v4);
  this->fields.keys = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.keys, 0, v5, v6);
}


void __fastcall WarBoardUiData_SaveData___ctor_37329052(
        WarBoardUiData_SaveData_o *this,
        WarBoardUiData_o *uiData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *pieceIndex_k__BackingField; // x1
  struct System_String_array *keys_k__BackingField; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uiData )
    sub_1BCB254(v5, v6);
  this->fields.squareIndex = uiData->fields._squareIndex_k__BackingField;
  pieceIndex_k__BackingField = uiData->fields._pieceIndex_k__BackingField;
  this->fields.pieceIndex = pieceIndex_k__BackingField;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.pieceIndex, (int32_t)pieceIndex_k__BackingField, v7, v8);
  keys_k__BackingField = uiData->fields._keys_k__BackingField;
  this->fields.keys = keys_k__BackingField;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.keys, (int32_t)keys_k__BackingField, v11, v12);
}