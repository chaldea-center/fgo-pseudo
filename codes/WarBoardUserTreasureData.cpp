void __fastcall WarBoardUserTreasureData___ctor(WarBoardUserTreasureData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserTreasureData_o *__fastcall WarBoardUserTreasureData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  WarBoardUserTreasureData_o *result; // x0
  __int64 v11; // x1
  WarBoardUserTreasureData_c *klass; // x8

  if ( (byte_4B13FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v6, v7);
    byte_4B13FB9 = 1;
  }
  v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16191/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  result = (WarBoardUserTreasureData_o *)JsonManager__DeserializeArray_object_(
                                           v9,
                                           (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_WarBoardUserTreasureData___);
  if ( result )
  {
    klass = result[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1BCAA44(result, v11);
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
  __int64 v2; // x2

  if ( (byte_4B13FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    byte_4B13FB8 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}