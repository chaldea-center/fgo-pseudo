void GachaHistoryRequest___ctor(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void GachaHistoryRequest__beginRequest(GachaHistoryRequest_o *this, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_593A27E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20623/*"gachaId"*/);
    byte_593A27E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20623/*"gachaId"*/, gachaId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *GachaHistoryRequest__getMockData(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A27D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A27D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *GachaHistoryRequest__getURL(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A27C & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20622/*"gacha/drawHistory"*/);
    byte_593A27C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20622/*"gacha/drawHistory"*/, 0);
}


void GachaHistoryRequest__requestCompleted(
        GachaHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A27F & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A27F = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(70, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}