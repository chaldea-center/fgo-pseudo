// local variable allocation has failed, the output may be wrong!
void __fastcall CancelPurchaseByBankRequest__beginRequest(
        CancelPurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B17A23 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17228/*"bankShopId"*/, *(_QWORD *)&shopId, method);
    byte_4B17A23 = 1;
  }
  this->fields.cancelShopId = shopId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17228/*"bankShopId"*/, shopId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall CancelPurchaseByBankRequest__getURL(
        CancelPurchaseByBankRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A22 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23510/*"shop/cancelPurchaseByBank"*/, v3, v4);
    byte_4B17A22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23510/*"shop/cancelPurchaseByBank"*/, 0LL);
}


void __fastcall CancelPurchaseByBankRequest__requestCompleted(
        CancelPurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ResponseData_o *v11; // x0
  ResponseData_o *v12; // x20
  __int64 v13; // x1
  int32_t cancelShopId; // w21
  __int64 v15; // x1
  Il2CppObject *success; // x20
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_4B17A24 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v5, v6);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    byte_4B17A24 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v11 = ResponseCommandKind__SearchData(132, responseList, 0LL);
  if ( v11 && (v12 = v11, ResponseData__checkError_41952396(v11, 0LL)) && v12->fields.success )
  {
    cancelShopId = this->fields.cancelShopId;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v13);
    PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(cancelShopId, 0LL);
    success = (Il2CppObject *)v12->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v15);
    v17 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}