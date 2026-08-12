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

  if ( (byte_59723F4 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_59723F4 = 1;
  }
  v5 = sub_2213B20(int___TypeInfo, 1);
  if ( !v5 )
    sub_2213CDC(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_2213CE4(v5);
  *(_DWORD *)(v5 + 32) = missionId;
  EventMissionClearRewardRequest__beginRequest_51238248(this, (System_Int32_array *)v5, v7);
}


void EventMissionClearRewardRequest__beginRequest_51238248(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_59723F5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22711/*"missionIds"*/);
    byte_59723F5 = 1;
  }
  RequestBase__addField_51259092((RequestBase_o *)this, (System_String_o *)StringLiteral_22711/*"missionIds"*/, &missionIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723F3 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20042/*"eventMission/receive"*/);
    byte_59723F3 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20042/*"eventMission/receive"*/, 0);
}


void EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_59723F6 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723F6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(50, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51257228(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}