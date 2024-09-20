System_String_o *__fastcall ExternalPaymentReflectRequest__getURL(
        ExternalPaymentReflectRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA03 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19320/*"externalPayment/reflect"*/);
    byte_4A5CA03 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19320/*"externalPayment/reflect"*/, 0LL);
}


void __fastcall ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ExternalPaymentReflectRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  Il2CppObject *success; // x20
  System_String_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v9; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  v4 = this;
  if ( (byte_4A5CA04 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    this = (ExternalPaymentReflectRequest_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA04 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_15:
    sub_1B8880C(this, responseList);
  if ( ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method) )
  {
    success = (Il2CppObject *)v5->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v9 = (__int64)v7;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_13:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v9,
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
      v9 = StringLiteral_22055/*"ng"*/;
      goto LABEL_13;
    }
  }
}