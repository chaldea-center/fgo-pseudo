void FollowdRemoveRequest___ctor(FollowdRemoveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FollowdRemoveRequest__beginRequest(FollowdRemoveRequest_o *this, int64_t followId, const MethodInfo *method)
{
  if ( (byte_4E06564 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_19791/*"followId"*/);
    byte_4E06564 = 1;
  }
  RequestBase__addField_45375920((RequestBase_o *)this, (System_String_o *)StringLiteral_19791/*"followId"*/, followId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FollowdRemoveRequest__getURL(FollowdRemoveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E06563 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19790/*"follow/remove"*/);
    byte_4E06563 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19790/*"follow/remove"*/, 0);
}


void FollowdRemoveRequest__requestCompleted(
        FollowdRemoveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4E06565 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06565 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(82, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45365352(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22555/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}