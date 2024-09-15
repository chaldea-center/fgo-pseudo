// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A2F7B6 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, *(_QWORD *)&missionId);
    byte_4A2F7B6 = 1;
  }
  v5 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B7641C(0LL, v6);
  if ( !v5->max_length )
    sub_1B76424(v5, v5);
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_40993748(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_40993748(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A2F7B7 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21458/*"missionIds"*/, missionIds);
    byte_4A2F7B7 = 1;
  }
  RequestBase__addField_40950188((RequestBase_o *)this, (System_String_o *)StringLiteral_21458/*"missionIds"*/, &missionIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F7B5 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_19131/*"eventMission/receive"*/, v2);
    byte_4A2F7B5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_19131/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4A2F7B8 & 1) == 0 )
  {
    sub_1B761C0(&JsonManager_TypeInfo, responseList);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F7B8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_22046/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}