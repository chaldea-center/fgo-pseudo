void WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserWallData_o *WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v5; // x8

  if ( (byte_4CEC198 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16072/*"[{0}]"*/);
    byte_4CEC198 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16072/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_object_(
                                       v3,
                                       (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.squareIndex;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1C7BD48(result);
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
    sub_1C7BD40(this, 0);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  if ( (byte_4CEC197 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    byte_4CEC197 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}