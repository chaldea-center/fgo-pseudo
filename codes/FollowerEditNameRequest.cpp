void __fastcall FollowerEditNameRequest__beginRequest(
        FollowerEditNameRequest_o *this,
        int64_t supportDeckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4AB7605 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23727/*"supportDeckId"*/, supportDeckId);
    sub_1BAB41C(&StringLiteral_18552/*"deckName"*/, v7);
    byte_4AB7605 = 1;
  }
  RequestBase__addField_41522804((RequestBase_o *)this, (System_String_o *)StringLiteral_23727/*"supportDeckId"*/, supportDeckId, method);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_18552/*"deckName"*/, deckName, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall FollowerEditNameRequest__getMockData(
        FollowerEditNameRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB7604 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB7604 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerEditNameRequest__getURL(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB7603 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_19529/*"follower/editName"*/, v2);
    byte_4AB7603 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_19529/*"follower/editName"*/, 0LL);
}


void __fastcall FollowerEditNameRequest__requestCompleted(
        FollowerEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4AB7606 & 1) == 0 )
  {
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB7606 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(60, responseList, 0LL);
  if ( v7 && ResponseData__checkError_41605928(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22261/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22090/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}