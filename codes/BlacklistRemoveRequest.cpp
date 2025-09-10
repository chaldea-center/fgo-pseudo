void BlacklistRemoveRequest___ctor(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


bool BlacklistRemoveRequest__beginRequest(
        BlacklistRemoveRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4C28D31 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23980/*"targetUserId"*/);
    byte_4C28D31 = 1;
  }
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_23980/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *BlacklistRemoveRequest__getMockData(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D30 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D30 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *BlacklistRemoveRequest__getURL(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D2F & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17296/*"blacklist/remove"*/);
    byte_4C28D2F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17296/*"blacklist/remove"*/, 0);
}


void BlacklistRemoveRequest__requestCompleted(
        BlacklistRemoveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D32 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D32 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(65, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}