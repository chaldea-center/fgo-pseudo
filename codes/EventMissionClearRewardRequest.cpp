void EventMissionClearRewardRequest___ctor(EventMissionClearRewardRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C28DC2 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C28DC2 = 1;
  }
  v5 = sub_1C2D538(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C2D6F4(v5, v5, v7);
  *(_DWORD *)(v5 + 32) = missionId;
  EventMissionClearRewardRequest__beginRequest_43975204(this, (System_Int32_array *)v5, v7);
}


void EventMissionClearRewardRequest__beginRequest_43975204(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_4C28DC3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21592/*"missionIds"*/);
    byte_4C28DC3 = 1;
  }
  RequestBase__addField_44009168((RequestBase_o *)this, (System_String_o *)StringLiteral_21592/*"missionIds"*/, &missionIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DC1 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19138/*"eventMission/receive"*/);
    byte_4C28DC1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19138/*"eventMission/receive"*/, 0);
}


void EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C28DC4 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28DC4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(50, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}