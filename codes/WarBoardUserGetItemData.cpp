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
  __int64 v7; // x8
  __int64 v8; // x0

  if ( (byte_41888E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___, method);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v4);
    byte_41888E9 = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15827/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                          v5,
                                          (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
      {
        v8 = sub_B2C460(result);
        sub_B2C400(v8, 0LL);
      }
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
    sub_B2C434(this, 0LL);
  this->fields.isUse = saveData->fields.isUse;
  this->fields.forceId = saveData->fields.forceId;
  this->fields.groupId = saveData->fields.groupId;
  this->fields.pieceIndex = saveData->fields.pieceIndex;
  this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserGetItemData__ToJson(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  if ( (byte_41888E8 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    byte_41888E8 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}