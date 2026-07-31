void EventDailyPointRequest___ctor(EventDailyPointRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventDailyPointRequest__beginRequest(EventDailyPointRequest_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_593A204 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19995/*"eventId"*/);
    byte_593A204 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19995/*"eventId"*/, eventId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventDailyPointRequest__getURL(EventDailyPointRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A203 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19976/*"event/dailyPoint"*/);
    byte_593A203 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19976/*"event/dailyPoint"*/, 0);
}


void EventDailyPointRequest__requestCompleted(
        EventDailyPointRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_593A205 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A205 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(83, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}