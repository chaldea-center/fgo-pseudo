void EventResetDiggingRequest___ctor(EventResetDiggingRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventResetDiggingRequest__beginRequest(
        EventResetDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        const MethodInfo *method)
{
  if ( (byte_4D2E3E5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19290/*"eventId"*/);
    sub_1C94098(&StringLiteral_16947/*"areaNum"*/);
    byte_4D2E3E5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19290/*"eventId"*/, eventId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16947/*"areaNum"*/, areaNum, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventResetDiggingRequest__getURL(EventResetDiggingRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E3E4 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_19280/*"event/resetDigging"*/);
    byte_4D2E3E4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_19280/*"event/resetDigging"*/, 0);
}


void EventResetDiggingRequest__requestCompleted(
        EventResetDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  System_String_o *v8; // x1
  Il2CppObject *success; // x20

  if ( (byte_4D2E3E6 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    byte_4D2E3E6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(115, responseList, 0);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_45012660(v5, 0);
    v8 = 0;
    if ( v7 )
    {
      success = (Il2CppObject *)v6->fields.success;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v8 = JsonManager__toJson(success, 0, 0, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}