void WarBoardUserGetItemData___ctor(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserGetItemData_o *WarBoardUserGetItemData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserGetItemData_o *result; // x0
  __int64 v5; // x8

  if ( (byte_4CB3E65 & 1) == 0 )
  {
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_16009/*"[{0}]"*/);
    byte_4CB3E65 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16009/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_object_(
                                          v3,
                                          (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1C6BC68(result);
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
  if ( !saveData )
    sub_1C6BC60(this, 0);
  this->fields.isUse = saveData->fields.isUse;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&saveData->fields.forceId;
  this->fields.pieceIndex = saveData->fields.pieceIndex;
  this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *WarBoardUserGetItemData__ToJson(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  if ( (byte_4CB3E64 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    byte_4CB3E64 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}