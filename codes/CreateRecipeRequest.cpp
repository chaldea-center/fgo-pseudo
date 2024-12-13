// local variable allocation has failed, the output may be wrong!
void __fastcall CreateRecipeRequest__beginRequest(
        CreateRecipeRequest_o *this,
        int32_t recipeId,
        int32_t createNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4B38A4C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_22451/*"num"*/, *(_QWORD *)&recipeId);
    sub_1BD3458(&StringLiteral_23085/*"recipeId"*/, v7);
    byte_4B38A4C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23085/*"recipeId"*/, recipeId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22451/*"num"*/, createNum, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall CreateRecipeRequest__getURL(CreateRecipeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38A4B & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_19338/*"event/createRecipe"*/, v2);
    byte_4B38A4B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_19338/*"event/createRecipe"*/, 0LL);
}


void __fastcall CreateRecipeRequest__requestCompleted(
        CreateRecipeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4B38A4D & 1) == 0 )
  {
    sub_1BD3458(&JsonManager_TypeInfo, responseList);
    sub_1BD3458(&ResponseCommandKind_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v6);
    byte_4B38A4D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(120, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42055668(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22325/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}