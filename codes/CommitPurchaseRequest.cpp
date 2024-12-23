void __fastcall CommitPurchaseRequest__beginRequest(
        CommitPurchaseRequest_o *this,
        System_String_o *purchaseToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B68489 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22978/*"purchaseToken"*/, purchaseToken);
    byte_4B68489 = 1;
  }
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_22978/*"purchaseToken"*/, purchaseToken, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall CommitPurchaseRequest__getURL(CommitPurchaseRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68488 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_23594/*"shop/CommitPurchase"*/, v2);
    byte_4B68488 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_23594/*"shop/CommitPurchase"*/, 0LL);
}


void __fastcall CommitPurchaseRequest__requestCompleted(
        CommitPurchaseRequest_o *this,
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

  if ( (byte_4B6848A & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B6848A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(9, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42194996(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
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
        StringLiteral_22370/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}