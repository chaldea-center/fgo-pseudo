// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BB5FFF & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, *(_QWORD *)&missionId);
    byte_4BB5FFF = 1;
  }
  v5 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1C13F80(0LL, v6);
  if ( !v5->max_length )
    sub_1C13F88(v5, v5);
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_42356148(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_42356148(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BB6000 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21819/*"minutes"*/, missionIds);
    byte_4BB6000 = 1;
  }
  RequestBase__addField_42312048((RequestBase_o *)this, (System_String_o *)StringLiteral_21819/*"minutes"*/, &missionIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5FFE & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_19436/*"event/scanPanelMap"*/, v2);
    byte_4BB5FFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_19436/*"event/scanPanelMap"*/, 0LL);
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
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BB6001 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, responseList);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB6001 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42394144(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22421/*"newAttributes"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}