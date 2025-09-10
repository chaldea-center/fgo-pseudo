void EventDiggingRequest___ctor(EventDiggingRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventDiggingRequest__beginRequest(
        EventDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        System_Int32_array *idxX,
        System_Int32_array *idxY,
        const MethodInfo *method)
{
  if ( (byte_4C28DB6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    sub_1C2D490(&StringLiteral_20254/*"idxY"*/);
    sub_1C2D490(&StringLiteral_16864/*"areaNum"*/);
    sub_1C2D490(&StringLiteral_20253/*"idxX"*/);
    byte_4C28DB6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19133/*"eventId"*/, eventId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16864/*"areaNum"*/, areaNum, 0);
  RequestBase__addField_44009168((RequestBase_o *)this, (System_String_o *)StringLiteral_20253/*"idxX"*/, &idxX->obj, 0);
  RequestBase__addField_44009168((RequestBase_o *)this, (System_String_o *)StringLiteral_20254/*"idxY"*/, &idxY->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventDiggingRequest__getURL(EventDiggingRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DB5 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19115/*"event/digging"*/);
    byte_4C28DB5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19115/*"event/digging"*/, 0);
}


void EventDiggingRequest__requestCompleted(
        EventDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  System_String_o *v8; // x1
  Il2CppObject *success; // x20

  if ( (byte_4C28DB7 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    byte_4C28DB7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(114, responseList, 0);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_44004292(v5, 0);
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