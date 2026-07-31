void WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserWallData_o *WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v7; // x8

  if ( (byte_593618C & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_593618C = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16616/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_object_(
                                       v5,
                                       (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.squareIndex;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_21FFED4(result);
      return (WarBoardUserWallData_o *)result[1].klass;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardUserWallData__SetSaveData(
        WarBoardUserWallData_o *this,
        WarBoardWallData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int breakPoint; // w8

  if ( !saveData )
    sub_21FFECC(this, 0);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593618B & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593618B = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}