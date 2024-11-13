System_String_o *__fastcall ExternalPaymentReflectRequest__getURL(
        ExternalPaymentReflectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AC4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19522/*"externalPayment/reflect"*/, v3, v4);
    byte_4B17AC4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19522/*"externalPayment/reflect"*/, 0LL);
}


void __fastcall ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ExternalPaymentReflectRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  v4 = this;
  if ( (byte_4B17AC5 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    this = (ExternalPaymentReflectRequest_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    byte_4B17AC5 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v7 = responseList->m_Items[0];
  if ( !v7 )
LABEL_15:
    sub_1BCAA3C(this, responseList);
  if ( ResponseData__checkError_41952396(v7, 0LL) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v12 = (__int64)v10;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_13:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v12,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v12 = StringLiteral_22292/*"ng"*/;
      goto LABEL_13;
    }
  }
}