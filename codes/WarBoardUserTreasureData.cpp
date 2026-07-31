void WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserTreasureData_o *WarBoardUserTreasureData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x19
  WarBoardUserTreasureData_o *result; // x0
  WarBoardUserTreasureData_c *klass; // x8

  if ( (byte_593618A & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_593618A = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16616/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_object_(
                                           v5,
                                           (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_21FFED4(result);
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
  __int64 v2; // x2

  if ( (byte_5936189 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_5936189 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}