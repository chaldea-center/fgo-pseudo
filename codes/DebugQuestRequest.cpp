void DebugQuestRequest___ctor(DebugQuestRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugQuestRequest__beginRequest(DebugQuestRequest_o *this, bool is_enable, const MethodInfo *method)
{
  RequestBase_o *v4; // x19

  v4 = (RequestBase_o *)this;
  if ( (byte_593A1EE & 1) == 0 )
  {
    this = (DebugQuestRequest_o *)sub_21FFC50(&StringLiteral_20349/*"flag"*/);
    byte_593A1EE = 1;
  }
  if ( !v4 )
    sub_21FFECC(this, is_enable);
  RequestBase__addField(v4, (System_String_o *)StringLiteral_20349/*"flag"*/, is_enable, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *DebugQuestRequest__getMockData(DebugQuestRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1ED & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1ED = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugQuestRequest__getURL(DebugQuestRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1EC & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4667/*"ClientDebug/QuestThrough"*/);
    byte_593A1EC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_4667/*"ClientDebug/QuestThrough"*/, 0);
}


void DebugQuestRequest__requestCompleted(
        DebugQuestRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_593A1EF & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1EF = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v5);
  v6 = ResponseCommandKind__SearchData(42, responseList, 0);
  if ( v6 && ResponseData__checkError_51190916(v6, 0) )
    v7 = &StringLiteral_23468/*"ok"*/;
  else
    v7 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}