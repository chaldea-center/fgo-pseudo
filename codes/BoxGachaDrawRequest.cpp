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
  if ( (byte_4D2E349 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22547/*"num"*/);
    sub_1C94098(&StringLiteral_17449/*"boxGachaId"*/);
    byte_4D2E349 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17449/*"boxGachaId"*/, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22547/*"num"*/, num, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BoxGachaDrawRequest__getURL(BoxGachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E348 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17446/*"boxGacha/draw"*/);
    byte_4D2E348 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17446/*"boxGacha/draw"*/, 0);
}


void BoxGachaDrawRequest__requestCompleted(
        BoxGachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D2E34A & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E34A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(47, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}