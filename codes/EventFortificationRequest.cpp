void EventFortificationRequest___ctor(EventFortificationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationRequest__beginRequest(
        EventFortificationRequest_o *this,
        int32_t eventId,
        EnterUserSvtInfo_array *enterUserSvtInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x21

  if ( (byte_5932582 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19892/*"enterUserSvtInfo"*/);
    sub_21FFC50(&StringLiteral_19995/*"eventId"*/);
    byte_5932582 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&eventId, enterUserSvtInfo);
  v7 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19995/*"eventId"*/, eventId, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19892/*"enterUserSvtInfo"*/, v7, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventFortificationRequest__getURL(EventFortificationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_5932581 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19980/*"event/fortification"*/);
    byte_5932581 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19980/*"event/fortification"*/, 0);
}


void EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  __int64 v8; // x2
  System_String_o *v9; // x1
  Il2CppObject *success; // x20

  if ( (byte_5932583 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    byte_5932583 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList, method);
  v5 = ResponseCommandKind__SearchData(121, responseList, 0);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_51190916(v5, 0);
    v9 = 0;
    if ( v7 )
    {
      success = (Il2CppObject *)v6->fields.success;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, 0, v8);
      v9 = JsonManager__toJson(success, 0, 0, 0);
    }
  }
  else
  {
    v9 = 0;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}