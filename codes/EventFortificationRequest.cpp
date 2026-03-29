void EventFortificationRequest___ctor(EventFortificationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventFortificationRequest__beginRequest(
        EventFortificationRequest_o *this,
        int32_t eventId,
        EnterUserSvtInfo_array *enterUserSvtInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x21

  if ( (byte_4D2ABB7 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19237/*"enterUserSvtInfo"*/);
    sub_1C93AD4(&StringLiteral_19339/*"eventId"*/);
    byte_4D2ABB7 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19339/*"eventId"*/, eventId, 0);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_19237/*"enterUserSvtInfo"*/, v7, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventFortificationRequest__getURL(EventFortificationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2ABB6 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19324/*"event/fortification"*/);
    byte_4D2ABB6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_19324/*"event/fortification"*/, 0);
}


void EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  System_String_o *v8; // x1
  Il2CppObject *success; // x20

  if ( (byte_4D2ABB8 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    byte_4D2ABB8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(121, responseList, 0);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_44908744(v5, 0);
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