void __fastcall ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A71775 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_23895/*"targetUserIds"*/, targetUserIds);
    byte_4A71775 = 1;
  }
  RequestBase__addField_41190224((RequestBase_o *)this, (System_String_o *)StringLiteral_23895/*"targetUserIds"*/, &targetUserIds->obj, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


void __fastcall ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A71776 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_19669/*"friendCode"*/, friendCode);
    byte_4A71776 = 1;
  }
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_19669/*"friendCode"*/, friendCode, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A71774 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_22649/*"profile/top"*/, v2);
    byte_4A71774 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_22649/*"profile/top"*/, 0LL);
}


void __fastcall ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A71777 & 1) == 0 )
  {
    sub_1B90010(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B90010(&StringLiteral_22258/*"ok"*/, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A71777 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(18, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22258/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22088/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}