void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BDDE8B & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDDE8B = 1;
  }
  v5 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1C22094(0LL, v6);
  if ( !v5->max_length )
    sub_1C2209C(v5, v5);
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_42467412(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_42467412(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BDDE8C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21851/*"missionIds"*/);
    byte_4BDDE8C = 1;
  }
  RequestBase__addField_42423236((RequestBase_o *)this, (System_String_o *)StringLiteral_21851/*"missionIds"*/, &missionIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE8A & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19465/*"eventMission/receive"*/);
    byte_4BDDE8A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_19465/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDE8D & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE8D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}