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
  WarBoardUserTreasureData_c *klass; // x8
  __int64 v8; // x0

  if ( (byte_41888F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___, method);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v4);
    byte_41888F2 = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15827/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v5,
                                           (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
      {
        v8 = sub_B2C460(result);
        sub_B2C400(v8, 0LL);
      }
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
  if ( (byte_41888F1 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    byte_41888F1 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}