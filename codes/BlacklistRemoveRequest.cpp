void BlacklistRemoveRequest___ctor(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


bool BlacklistRemoveRequest__beginRequest(
        BlacklistRemoveRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_597235D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25279/*"targetUserId"*/);
    byte_597235D = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_25279/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *BlacklistRemoveRequest__getMockData(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  if ( (byte_597235C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597235C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *BlacklistRemoveRequest__getURL(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597235B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18042/*"blacklist/remove"*/);
    byte_597235B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18042/*"blacklist/remove"*/, 0);
}


void BlacklistRemoveRequest__requestCompleted(
        BlacklistRemoveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_597235E & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597235E = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(65, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}