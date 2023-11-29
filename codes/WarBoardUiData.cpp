void __fastcall WarBoardUiData___ctor(WarBoardUiData_o *this, const MethodInfo *method)
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
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._pieceIndex_k__BackingField, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields._keys_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._keys_k__BackingField, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardUiData___ctor_26378148(
        WarBoardUiData_o *this,
        WarBoardUiData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *pieceIndex; // x1
  struct System_String_array *keys; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B170D4();
  this->fields._squareIndex_k__BackingField = saveData->fields.squareIndex;
  pieceIndex = saveData->fields.pieceIndex;
  this->fields._pieceIndex_k__BackingField = pieceIndex;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._pieceIndex_k__BackingField,
    (System_Int32_array **)pieceIndex,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  keys = saveData->fields.keys;
  this->fields._keys_k__BackingField = keys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._keys_k__BackingField,
    (System_Int32_array **)keys,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall WarBoardUiData___ctor_26378232(
        WarBoardUiData_o *this,
        int32_t index,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._squareIndex_k__BackingField = index;
  this->fields._pieceIndex_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._pieceIndex_k__BackingField, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields._keys_k__BackingField = setKeys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._keys_k__BackingField,
    (System_Int32_array **)setKeys,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall WarBoardUiData___ctor_26378316(
        WarBoardUiData_o *this,
        System_Int32_array *indexes,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._squareIndex_k__BackingField = -1;
  this->fields._pieceIndex_k__BackingField = indexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._pieceIndex_k__BackingField,
    (System_Int32_array **)indexes,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields._keys_k__BackingField = setKeys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._keys_k__BackingField,
    (System_Int32_array **)setKeys,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall WarBoardUiData__SetKeys(WarBoardUiData_o *this, System_String_array *setKeys, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._keys_k__BackingField = setKeys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._keys_k__BackingField,
    (System_Int32_array **)setKeys,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._keys_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._keys_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardUiData__set_pieceIndex(
        WarBoardUiData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._pieceIndex_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._pieceIndex_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardUiData__set_squareIndex(WarBoardUiData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardUiData_SaveData___ctor(WarBoardUiData_SaveData_o *this, const MethodInfo *method)
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
  this->fields.squareIndex = -1;
  this->fields.pieceIndex = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.pieceIndex, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.keys = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.keys, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardUiData_SaveData___ctor_20451276(
        WarBoardUiData_SaveData_o *this,
        WarBoardUiData_o *uiData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *pieceIndex_k__BackingField; // x1
  struct System_String_array *keys_k__BackingField; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uiData )
    sub_B170D4();
  this->fields.squareIndex = uiData->fields._squareIndex_k__BackingField;
  pieceIndex_k__BackingField = uiData->fields._pieceIndex_k__BackingField;
  this->fields.pieceIndex = pieceIndex_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pieceIndex,
    (System_Int32_array **)pieceIndex_k__BackingField,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  keys_k__BackingField = uiData->fields._keys_k__BackingField;
  this->fields.keys = keys_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.keys,
    (System_Int32_array **)keys_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}