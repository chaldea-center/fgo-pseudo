void __fastcall WarBoardUserWallData___ctor(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserWallData_o *__fastcall WarBoardUserWallData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserWallData_o *result; // x0
  __int64 v5; // x1
  __int64 v6; // x8

  if ( (byte_4A58F8A & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16024/*"[{0}]"*/);
    byte_4A58F8A = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16024/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserWallData_o *)JsonManager__DeserializeArray_object_(
                                       v3,
                                       (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_WarBoardUserWallData___);
  if ( result )
  {
    v6 = *(_QWORD *)&result->fields.squareIndex;
    if ( v6 )
    {
      if ( !(_DWORD)v6 )
        sub_1B88814(result, v5);
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
    sub_1B8880C(this, 0LL);
  breakPoint = saveData->fields.breakPoint;
  this->fields.defeatPoint = breakPoint;
  if ( breakPoint >= 1 )
    this->fields.squareIndex = saveData->fields.squareIndex;
}


System_String_o *__fastcall WarBoardUserWallData__ToJson(WarBoardUserWallData_o *this, const MethodInfo *method)
{
  if ( (byte_4A58F89 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A58F89 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}