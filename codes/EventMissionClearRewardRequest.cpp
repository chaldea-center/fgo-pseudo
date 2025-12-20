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

  if ( (byte_4D2E3D4 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2E3D4 = 1;
  }
  v5 = sub_1C94140(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C942F0(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v5);
  *(_DWORD *)(v5 + 32) = missionId;
  EventMissionClearRewardRequest__beginRequest_45006836(this, (System_Int32_array *)v5, v7);
}


void EventMissionClearRewardRequest__beginRequest_45006836(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_4D2E3D5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21815/*"missionIds"*/);
    byte_4D2E3D5 = 1;
  }
  RequestBase__addField_45014472((RequestBase_o *)this, (System_String_o *)StringLiteral_21815/*"missionIds"*/, &missionIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E3D3 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_19295/*"eventMission/receive"*/);
    byte_4D2E3D3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_19295/*"eventMission/receive"*/, 0);
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

  if ( (byte_4D2E3D6 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E3D6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(50, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}