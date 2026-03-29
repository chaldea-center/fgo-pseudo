void DebugQuestRequest___ctor(DebugQuestRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugQuestRequest__beginRequest(DebugQuestRequest_o *this, bool is_enable, const MethodInfo *method)
{
  RequestBase_o *v4; // x19

  v4 = (RequestBase_o *)this;
  if ( (byte_4D324AA & 1) == 0 )
  {
    this = (DebugQuestRequest_o *)sub_1C93AD4(&StringLiteral_19685/*"flag"*/);
    byte_4D324AA = 1;
  }
  if ( !v4 )
    sub_1C93D2C(this, is_enable);
  RequestBase__addField(v4, (System_String_o *)StringLiteral_19685/*"flag"*/, is_enable, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *DebugQuestRequest__getMockData(DebugQuestRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D324A9 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D324A9 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugQuestRequest__getURL(DebugQuestRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D324A8 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_4522/*"ClientDebug/QuestThrough"*/);
    byte_4D324A8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_4522/*"ClientDebug/QuestThrough"*/, 0);
}


void DebugQuestRequest__requestCompleted(
        DebugQuestRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D324AB & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D324AB = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(42, responseList, 0);
  if ( v5 && ResponseData__checkError_44908744(v5, 0) )
    v6 = &StringLiteral_22655/*"ok"*/;
  else
    v6 = &StringLiteral_22483/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}