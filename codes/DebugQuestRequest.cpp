void DebugQuestRequest___ctor(DebugQuestRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugQuestRequest__beginRequest(DebugQuestRequest_o *this, bool is_enable, const MethodInfo *method)
{
  RequestBase_o *v4; // x19

  v4 = (RequestBase_o *)this;
  if ( (byte_4CF011D & 1) == 0 )
  {
    this = (DebugQuestRequest_o *)sub_1C7BAE8(&StringLiteral_19632/*"flag"*/);
    byte_4CF011D = 1;
  }
  if ( !v4 )
    sub_1C7BD40(this, is_enable);
  RequestBase__addField(v4, (System_String_o *)StringLiteral_19632/*"flag"*/, is_enable, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *DebugQuestRequest__getMockData(DebugQuestRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CF011C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF011C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugQuestRequest__getURL(DebugQuestRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF011B & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4506/*"ClientDebug/QuestThrough"*/);
    byte_4CF011B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_4506/*"ClientDebug/QuestThrough"*/, 0);
}


void DebugQuestRequest__requestCompleted(
        DebugQuestRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CF011E & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF011E = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(42, responseList, 0);
  if ( v5 && ResponseData__checkError_44743216(v5, 0) )
    v6 = &StringLiteral_22590/*"ok"*/;
  else
    v6 = &StringLiteral_22419/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}