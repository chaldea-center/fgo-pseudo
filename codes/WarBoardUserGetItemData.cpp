void WarBoardUserGetItemData___ctor(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserGetItemData_o *WarBoardUserGetItemData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x19
  WarBoardUserGetItemData_o *result; // x0
  __int64 v7; // x8

  if ( (byte_596E2DB & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_16648/*"[{0}]"*/);
    byte_596E2DB = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16648/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_object_(
                                          v5,
                                          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_2213CE4(result);
      return *(WarBoardUserGetItemData_o **)&result->fields.isUse;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardUserGetItemData__SetSaveData(
        WarBoardUserGetItemData_o *this,
        WarBoardItemData_SaveData_o *saveData,
        const MethodInfo *method)
{
  bool isUse; // w8
  int32_t pieceIndex; // w9
  int32_t squareIndex; // w8

  if ( !saveData )
    sub_2213CDC(this, 0);
  isUse = saveData->fields.isUse;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&saveData->fields.forceId;
  pieceIndex = saveData->fields.pieceIndex;
  this->fields.isUse = isUse;
  squareIndex = saveData->fields.squareIndex;
  this->fields.pieceIndex = pieceIndex;
  this->fields.squareIndex = squareIndex;
}


System_String_o *WarBoardUserGetItemData__ToJson(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E2DA & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    byte_596E2DA = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}