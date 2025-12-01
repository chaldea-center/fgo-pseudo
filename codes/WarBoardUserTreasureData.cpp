void WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserTreasureData_o *WarBoardUserTreasureData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserTreasureData_o *result; // x0
  WarBoardUserTreasureData_c *klass; // x8

  if ( (byte_4CC4F86 & 1) == 0 )
  {
    sub_1C713B0(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16016/*"[{0}]"*/);
    byte_4CC4F86 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16016/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_object_(
                                           v3,
                                           (const MethodInfo_31BADBC *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1C71610(result);
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
  if ( (byte_4CC4F85 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    byte_4CC4F85 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}