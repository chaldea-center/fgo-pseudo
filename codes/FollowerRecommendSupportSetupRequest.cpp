bool __fastcall FollowerRecommendSupportSetupRequest__beginRequest(
        FollowerRecommendSupportSetupRequest_o *this,
        RecommendSupportData_RecommendDeckData_array *updateDeckData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MiniMessagePack_MiniMessagePacker_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_Byte_array *v14; // x20
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4B17AE4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, updateDeckData, method);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_23052/*"recommendDeckData"*/, v8, v9);
    byte_4B17AE4 = 1;
  }
  v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 updateDeckData,
                                                 method,
                                                 v3);
  MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v14 = MiniMessagePack_MiniMessagePacker__PackClass(v10, &updateDeckData->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
  v15 = System_Convert__ToBase64String(v14, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23052/*"recommendDeckData"*/, v15, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
  return 1;
}


System_String_o *__fastcall FollowerRecommendSupportSetupRequest__getURL(
        FollowerRecommendSupportSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AE3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19705/*"follower/setupRecommendSupport"*/, v3, v4);
    byte_4B17AE3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19705/*"follower/setupRecommendSupport"*/, 0LL);
}


void __fastcall FollowerRecommendSupportSetupRequest__requestCompleted(
        FollowerRecommendSupportSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17AE5 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17AE5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(133, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}