void __fastcall WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserTreasureData_o *__fastcall WarBoardUserTreasureData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  WarBoardUserTreasureData_o *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  WarBoardUserTreasureData_c *klass; // x8

  if ( (byte_4B1A13B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___, method);
    sub_1BCAFF8(&JsonManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_15881/*"[{0}]"*/, v4);
    byte_4B1A13B = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15881/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_object_(
                                           v5,
                                           (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1BCB25C(result, v7, v8);
      return (WarBoardUserTreasureData_o *)result[1].monitor;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall WarBoardUserTreasureData__ToJson(
        WarBoardUserTreasureData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1A13A & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, method);
    byte_4B1A13A = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}