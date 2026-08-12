void BoxGachaDrawRequest___ctor(BoxGachaDrawRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BoxGachaDrawRequest__beginRequest(
        BoxGachaDrawRequest_o *this,
        int32_t gachaId,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_5972363 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23468/*"num"*/);
    sub_2213A60(&StringLiteral_18123/*"boxGachaId"*/);
    byte_5972363 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18123/*"boxGachaId"*/, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23468/*"num"*/, num, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BoxGachaDrawRequest__getURL(BoxGachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972362 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18120/*"boxGacha/draw"*/);
    byte_5972362 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18120/*"boxGacha/draw"*/, 0);
}


void BoxGachaDrawRequest__requestCompleted(
        BoxGachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_5972364 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972364 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(47, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51257228(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}