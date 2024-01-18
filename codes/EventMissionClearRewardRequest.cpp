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
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  if ( (byte_4188DBC & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&missionId);
    byte_4188DBC = 1;
  }
  v5 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  if ( !v5->max_length )
  {
    v8 = sub_B2C460(v5);
    sub_B2C400(v8, 0LL);
  }
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_27199816(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_27199816(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_4188DBD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20529/*"missionIds"*/, missionIds);
    byte_4188DBD = 1;
  }
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_20529/*"missionIds"*/, &missionIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4188DBB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18477/*"eventMission/receive"*/, v2);
    byte_4188DBB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18477/*"eventMission/receive"*/, 0LL);
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

  if ( (byte_4188DBE & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4188DBE = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(49, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}