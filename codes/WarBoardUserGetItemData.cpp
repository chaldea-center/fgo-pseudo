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

  if ( (byte_5936181 & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_5936181 = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16616/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_object_(
                                          v5,
                                          (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_21FFED4(result);
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
    sub_21FFECC(this, 0);
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

  if ( (byte_5936180 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_5936180 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}