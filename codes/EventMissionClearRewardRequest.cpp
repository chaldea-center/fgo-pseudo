void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5C9EA & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C9EA = 1;
  }
  v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  if ( !v5->max_length )
    sub_1B88814(v5, v5);
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_41179572(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_41179572(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A5C9EB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21465/*"missionIds"*/);
    byte_4A5C9EB = 1;
  }
  RequestBase__addField_41136012((RequestBase_o *)this, (System_String_o *)StringLiteral_21465/*"missionIds"*/, &missionIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9E9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19137/*"eventMission/receive"*/);
    byte_4A5C9E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19137/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5C9EC & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9EC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}