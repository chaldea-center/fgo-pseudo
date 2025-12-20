bool FollowerRecommendSupportSetupRequest__beginRequest(
        FollowerRecommendSupportSetupRequest_o *this,
        RecommendSupportData_RecommendDeckData_array *updateDeckData,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4D2E413 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C94098(&StringLiteral_23209/*"recommendDeckData"*/);
    byte_4D2E413 = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C942E4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v8 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &updateDeckData->obj, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(v8, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_23209/*"recommendDeckData"*/, v9, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
  return 1;
}


System_String_o *FollowerRecommendSupportSetupRequest__getURL(
        FollowerRecommendSupportSetupRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E412 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_19686/*"follower/setupRecommendSupport"*/);
    byte_4D2E412 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_19686/*"follower/setupRecommendSupport"*/, 0);
}


void FollowerRecommendSupportSetupRequest__requestCompleted(
        FollowerRecommendSupportSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4D2E414 & 1) == 0 )
  {
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E414 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(133, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22594/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22424/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}