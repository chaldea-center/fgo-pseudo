void __fastcall WarBoardUserGetItemData___ctor(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserGetItemData_o *__fastcall WarBoardUserGetItemData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserGetItemData_o *result; // x0
  __int64 v5; // x8
  __int64 v6; // x0

  if ( (byte_438BDE8 & 1) == 0 )
  {
    sub_B775C4(&Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&StringLiteral_16119/*"[{0}]"*/);
    byte_438BDE8 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16119/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserGetItemData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                          v3,
                                          (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_WarBoardUserGetItemData___);
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.pieceIndex;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
      {
        v6 = sub_B776C8(result);
        sub_B77668(v6, 0LL);
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
    sub_B7769C(this, 0LL);
  this->fields.isUse = saveData->fields.isUse;
  this->fields.forceId = saveData->fields.forceId;
  this->fields.groupId = saveData->fields.groupId;
  this->fields.pieceIndex = saveData->fields.pieceIndex;
  this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserGetItemData__ToJson(WarBoardUserGetItemData_o *this, const MethodInfo *method)
{
  if ( (byte_438BDE7 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    byte_438BDE7 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}