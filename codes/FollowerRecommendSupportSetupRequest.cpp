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

  if ( (byte_4CF0182 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23204/*"recommendDeckData"*/);
    byte_4CF0182 = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C7BD34(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  v8 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &updateDeckData->obj, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(v8, 0);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_23204/*"recommendDeckData"*/, v9, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
  return 1;
}


System_String_o *FollowerRecommendSupportSetupRequest__getURL(
        FollowerRecommendSupportSetupRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0181 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19681/*"follower/setupRecommendSupport"*/);
    byte_4CF0181 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_19681/*"follower/setupRecommendSupport"*/, 0);
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

  if ( (byte_4CF0183 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0183 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(133, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}