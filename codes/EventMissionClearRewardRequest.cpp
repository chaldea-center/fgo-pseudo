void __fastcall EventMissionClearRewardRequest___ctor(EventMissionClearRewardRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40F88AE & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&missionId);
    byte_40F88AE = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, method);
  if ( !v5 )
    sub_B170D4();
  if ( !v5->max_length )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_22521012(this, v5, v6);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_22521012(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_40F88AF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20446/*"missionIds"*/, missionIds);
    byte_40F88AF = 1;
  }
  RequestBase__addField_30957272((RequestBase_o *)this, (System_String_o *)StringLiteral_20446/*"missionIds"*/, &missionIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F88AD & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18408/*"eventMission/receive"*/, v2);
    byte_40F88AD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18408/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_40F88B0 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40F88B0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(49, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}