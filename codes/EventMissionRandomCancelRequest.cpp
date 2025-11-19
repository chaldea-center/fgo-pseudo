void EventMissionRandomCancelRequest___ctor(EventMissionRandomCancelRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventMissionRandomCancelRequest__beginRequest(
        EventMissionRandomCancelRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4CB7E12 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21694/*"missionId"*/);
    byte_4CB7E12 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21694/*"missionId"*/, missionId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventMissionRandomCancelRequest__getURL(
        EventMissionRandomCancelRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E11 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19199/*"eventMission/randomCancel"*/);
    byte_4CB7E11 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19199/*"eventMission/randomCancel"*/, 0);
}


void EventMissionRandomCancelRequest__requestCompleted(
        EventMissionRandomCancelRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CB7E13 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7E13 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(110, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44468912(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22301/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}