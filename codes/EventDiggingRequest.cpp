// local variable allocation has failed, the output may be wrong!
void __fastcall EventDiggingRequest__beginRequest(
        EventDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        System_Int32_array *idxX,
        System_Int32_array *idxY,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4B684BA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19387/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1BE4ACC(&StringLiteral_20498/*"idxY"*/, v11);
    sub_1BE4ACC(&StringLiteral_17100/*"areaNum"*/, v12);
    sub_1BE4ACC(&StringLiteral_20497/*"idxX"*/, v13);
    byte_4B684BA = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19387/*"eventId"*/,
    eventId,
    (const MethodInfo *)idxX);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17100/*"areaNum"*/, areaNum, v14);
  RequestBase__addField_42112900((RequestBase_o *)this, (System_String_o *)StringLiteral_20497/*"idxX"*/, &idxX->obj, v15);
  RequestBase__addField_42112900((RequestBase_o *)this, (System_String_o *)StringLiteral_20498/*"idxY"*/, &idxY->obj, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall EventDiggingRequest__getURL(EventDiggingRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B684B9 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19369/*"event/digging"*/, v2);
    byte_4B684B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_19369/*"event/digging"*/, 0LL);
}


void __fastcall EventDiggingRequest__requestCompleted(
        EventDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4B684BB & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    byte_4B684BB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(114, responseList, 0LL);
  if ( v6 && (v7 = v6, ResponseData__checkError_42194996(v6, 0LL)) )
  {
    success = (Il2CppObject *)v7->fields.success;
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        0LL,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}