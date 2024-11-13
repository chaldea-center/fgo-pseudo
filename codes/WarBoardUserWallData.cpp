void __fastcall WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserWallData_o *__fastcall WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v11; // x1
  __int64 v12; // x8

  if ( (byte_4B13FBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v6, v7);
    byte_4B13FBB = 1;
  }
  v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16191/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_object_(
                                       v9,
                                       (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v12 = *(_QWORD *)&result->fields.squareIndex;
    if ( v12 )
    {
      if ( !(_DWORD)v12 )
        sub_1BCAA44(result, v11);
      return (WarBoardUserWallData_o *)result[1].klass;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall WarBoardUserWallData__SetSaveData(
        WarBoardUserWallData_o *this,
        WarBoardWallData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int breakPoint; // w8

  if ( !saveData )
    sub_1BCAA3C(this, 0LL);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13FBA & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    byte_4B13FBA = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}