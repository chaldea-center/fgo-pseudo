bool __fastcall FollowerRecommendSupportSetupRequest__beginRequest(
        FollowerRecommendSupportSetupRequest_o *this,
        RecommendSupportData_RecommendDeckData_array *updateDeckData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MiniMessagePack_MiniMessagePacker_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4A003B7 & 1) == 0 )
  {
    sub_1B64A00(&System_Convert_TypeInfo, updateDeckData);
    sub_1B64A00(&MiniMessagePack_MiniMessagePacker_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_22717/*"recommendDeckData"*/, v6);
    byte_4A003B7 = 1;
  }
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64C4C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B64C5C(v8, v9);
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v7, &updateDeckData->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v11 = System_Convert__ToBase64String(v10, 0LL);
  RequestBase__addField_40856580((RequestBase_o *)this, (System_String_o *)StringLiteral_22717/*"recommendDeckData"*/, v11, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
  return 1;
}


System_String_o *__fastcall FollowerRecommendSupportSetupRequest__getURL(
        FollowerRecommendSupportSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A003B6 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_19428/*"follower/setupRecommendSupport"*/, v2);
    byte_4A003B6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_19428/*"follower/setupRecommendSupport"*/, 0LL);
}


void __fastcall FollowerRecommendSupportSetupRequest__requestCompleted(
        FollowerRecommendSupportSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A003B8 & 1) == 0 )
  {
    sub_1B64A00(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A003B8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(133, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22140/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21971/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}