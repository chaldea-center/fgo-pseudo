void __fastcall WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserWallData_o *__fastcall WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v13; // x8
  __int64 v14; // x0

  if ( (byte_42E9350 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v8, v9, v10);
    byte_42E9350 = 1;
  }
  v11 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16018/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                       v11,
                                       (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v13 = *(_QWORD *)&result->fields.squareIndex;
    if ( v13 )
    {
      if ( !(_DWORD)v13 )
      {
        v14 = sub_B5D6C8(result);
        sub_B5D668(v14, 0LL);
      }
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
    sub_B5D69C(this, 0LL);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E934F & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E934F = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}