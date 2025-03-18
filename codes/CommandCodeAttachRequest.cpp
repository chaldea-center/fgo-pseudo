// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeAttachRequest__beginRequest(
        CommandCodeAttachRequest_o *this,
        int32_t servantId,
        int32_t idx,
        int64_t userCommandCodeId,
        int64_t attachedUserCommandCodeId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4C238A8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24201/*"verticalImageSet"*/, *(_QWORD *)&servantId);
    sub_1C3B764(&StringLiteral_24886/*" ⁰"*/, v11);
    sub_1C3B764(&StringLiteral_20616/*"jingle"*/, v12);
    sub_1C3B764(&StringLiteral_17279/*"btn_txt_trade"*/, v13);
    byte_4C238A8 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24201/*"verticalImageSet"*/,
    servantId,
    (const MethodInfo *)userCommandCodeId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20616/*"jingle"*/, idx, v14);
  RequestBase__addField_42628192((RequestBase_o *)this, (System_String_o *)StringLiteral_24886/*" ⁰"*/, userCommandCodeId, v15);
  RequestBase__addField_42628192(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17279/*"btn_txt_trade"*/,
    attachedUserCommandCodeId,
    v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall CommandCodeAttachRequest__getURL(
        CommandCodeAttachRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C238A7 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18503/*"ef_resistarrow"*/, v2);
    byte_4C238A7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18503/*"ef_resistarrow"*/, 0LL);
}


void __fastcall CommandCodeAttachRequest__requestCompleted(
        CommandCodeAttachRequest_o *this,
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

  if ( (byte_4C238A9 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C238A9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(77, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42712632(v7, 0LL)) )
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22507/*"referrerMapId"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}