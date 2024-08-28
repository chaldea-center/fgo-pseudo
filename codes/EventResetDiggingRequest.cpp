// attributes: thunk
void __fastcall EventResetDiggingRequest___ctor(EventResetDiggingRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventResetDiggingRequest__beginRequest(
        EventResetDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4A0A4DF & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_19064/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B686D4(&StringLiteral_16821/*"areaNum"*/, v7);
    byte_4A0A4DF = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19064/*"eventId"*/, eventId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16821/*"areaNum"*/, areaNum, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall EventResetDiggingRequest__getURL(
        EventResetDiggingRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A4DE & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_19054/*"event/resetDigging"*/, v2);
    byte_4A0A4DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_19054/*"event/resetDigging"*/, 0LL);
}


void __fastcall EventResetDiggingRequest__requestCompleted(
        EventResetDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  const MethodInfo *v7; // x2
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4A0A4E0 & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, responseList);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v5);
    byte_4A0A4E0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(115, responseList, 0LL);
  if ( v6 && (v8 = v6, ResponseData__checkError(v6, v6->fields.resCode, v7)) )
  {
    success = (Il2CppObject *)v8->fields.success;
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        0LL,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}