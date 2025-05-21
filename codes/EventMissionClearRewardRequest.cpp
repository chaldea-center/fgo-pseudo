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

  if ( (byte_4B464F6 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&missionId);
    byte_4B464F6 = 1;
  }
  v5 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1BDBAD4(0LL, v6);
  if ( !v5->max_length )
    sub_1BDBADC(v5, v5, v7);
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_43138128(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_43138128(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_4B464F7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21627/*"missionIds"*/, missionIds);
    byte_4B464F7 = 1;
  }
  RequestBase__addField_43155368((RequestBase_o *)this, (System_String_o *)StringLiteral_21627/*"missionIds"*/, &missionIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B464F5 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_19157/*"eventMission/receive"*/, v2);
    byte_4B464F5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_19157/*"eventMission/receive"*/, 0LL);
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

  if ( (byte_4B464F8 & 1) == 0 )
  {
    sub_1BDB878(&JsonManager_TypeInfo, responseList);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B464F8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_43151432(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}