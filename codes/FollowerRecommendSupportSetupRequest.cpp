bool __fastcall FollowerRecommendSupportSetupRequest__beginRequest(
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

  if ( (byte_4A5CA23 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_22808/*"recommendDeckData"*/);
    byte_4A5CA23 = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v8 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &updateDeckData->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(v8, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22808/*"recommendDeckData"*/, v9, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
  return 1;
}


System_String_o *__fastcall FollowerRecommendSupportSetupRequest__getURL(
        FollowerRecommendSupportSetupRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA22 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19503/*"follower/setupRecommendSupport"*/);
    byte_4A5CA22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19503/*"follower/setupRecommendSupport"*/, 0LL);
}


void __fastcall FollowerRecommendSupportSetupRequest__requestCompleted(
        FollowerRecommendSupportSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5CA24 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA24 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(133, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}