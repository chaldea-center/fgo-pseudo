void __fastcall WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserWallData_o *__fastcall WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v7; // x1
  __int64 v8; // x8

  if ( (byte_4BC581E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___, method);
    sub_1C1ABD4(&JsonManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_16288/*"[{0}]"*/, v4);
    byte_4BC581E = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16288/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_object_(
                                       v5,
                                       (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v8 = *(_QWORD *)&result->fields.squareIndex;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
        sub_1C1AE38(result, v7);
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
    sub_1C1AE30(this, 0LL);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  if ( (byte_4BC581D & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, method);
    byte_4BC581D = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}