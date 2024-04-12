void __fastcall WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserTreasureData_o *__fastcall WarBoardUserTreasureData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserTreasureData_o *result; // x0
  WarBoardUserTreasureData_c *klass; // x8
  __int64 v6; // x0

  if ( (byte_42B0BE2 & 1) == 0 )
  {
    sub_B52984(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_15933/*"[{0}]"*/);
    byte_42B0BE2 = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15933/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v3,
                                           (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
      {
        v6 = sub_B52A88(result);
        sub_B52A28(v6, 0LL);
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
  if ( (byte_42B0BE1 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    byte_42B0BE1 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}