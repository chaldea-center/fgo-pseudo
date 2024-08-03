void __fastcall WarBoardUserGetItemData___ctor(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserGetItemData_o *__fastcall WarBoardUserGetItemData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  WarBoardUserGetItemData_o *result; // x0
  __int64 v7; // x1
  __int64 v8; // x8

  if ( (byte_49FA267 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___, method);
    sub_1B640C8(&JsonManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v4);
    byte_49FA267 = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15956/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_object_(
                                          v5,
                                          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v8 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
        sub_1B6432C(result, v7);
      return *(WarBoardUserGetItemData_o **)&result->fields.isUse;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall WarBoardUserGetItemData__SetSaveData(
        WarBoardUserGetItemData_o *this,
        WarBoardItemData_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B64324(this);
  this->fields.isUse = saveData->fields.isUse;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&saveData->fields.forceId;
  this->fields.pieceIndex = saveData->fields.pieceIndex;
  this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserGetItemData__ToJson(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  if ( (byte_49FA266 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, method);
    byte_49FA266 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}