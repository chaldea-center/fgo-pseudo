void __fastcall EventMissionClearRewardRequest___ctor(EventMissionClearRewardRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventMissionClearRewardRequest__beginRequest(
        EventMissionClearRewardRequest_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  if ( (byte_42B11A8 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B11A8 = 1;
  }
  v5 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  if ( !v5->max_length )
  {
    v8 = sub_B52A88(v5);
    sub_B52A28(v8, 0LL);
  }
  v5->m_Items[1] = missionId;
  EventMissionClearRewardRequest__beginRequest_26962216(this, v5, v7);
}


void __fastcall EventMissionClearRewardRequest__beginRequest_26962216(
        EventMissionClearRewardRequest_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  if ( (byte_42B11A9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20687/*"missionIds"*/);
    byte_42B11A9 = 1;
  }
  RequestBase__addField_32021028((RequestBase_o *)this, (System_String_o *)StringLiteral_20687/*"missionIds"*/, &missionIds->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionClearRewardRequest__getURL(
        EventMissionClearRewardRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B11A7 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_18611/*"eventMission/receive"*/);
    byte_42B11A7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_18611/*"eventMission/receive"*/, 0LL);
}


void __fastcall EventMissionClearRewardRequest__requestCompleted(
        EventMissionClearRewardRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42B11AA & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B11AA = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(50, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}