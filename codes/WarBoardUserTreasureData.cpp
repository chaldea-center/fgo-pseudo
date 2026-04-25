void WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserTreasureData_o *WarBoardUserTreasureData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserTreasureData_o *result; // x0
  WarBoardUserTreasureData_c *klass; // x8

  if ( (byte_4E02517 & 1) == 0 )
  {
    sub_1CE6700(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&StringLiteral_16165/*"[{0}]"*/);
    byte_4E02517 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16165/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_object_(
                                           v3,
                                           (const MethodInfo_3273D28 *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1CE6960(result);
      return (WarBoardUserTreasureData_o *)result[1].monitor;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *WarBoardUserTreasureData__ToJson(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  if ( (byte_4E02516 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    byte_4E02516 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}