void __fastcall EventMissionClearRewardRequest___ctor(EventMissionClearRewardRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x0

  if ( (byte_42E9B72 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, missionId, (_DWORD)method, v3);
    byte_42E9B72 = 1;
  }
  v6 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  if ( !v6->max_length )
  {
    v9 = sub_B5D6C8(v6);
    sub_B5D668(v9, 0LL);
  }
  v6->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_27159564(this, v6, v8);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_27159564(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E9B73 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20792/*"missionIds"*/, (_DWORD)missionIds, (_DWORD)method, v3);
    byte_42E9B73 = 1;
  }
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_20792/*"missionIds"*/, &missionIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E9B71 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18706/*"eventMission/receive"*/, v4, v5, v6);
    byte_42E9B71 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_18706/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E9B74 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E9B74 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}