// local variable allocation has failed, the output may be wrong!
void __fastcall CancelPurchaseByBankRequest__beginRequest(
        CancelPurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4AB755B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17090/*"bankShopId"*/, *(_QWORD *)&shopId);
    byte_4AB755B = 1;
  }
  this->fields.cancelShopId = shopId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17090/*"bankShopId"*/, shopId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall CancelPurchaseByBankRequest__getURL(
        CancelPurchaseByBankRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB755A & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_23301/*"shop/cancelPurchaseByBank"*/, v2);
    byte_4AB755A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_23301/*"shop/cancelPurchaseByBank"*/, 0LL);
}


void __fastcall CancelPurchaseByBankRequest__requestCompleted(
        CancelPurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  ResponseData_o *v9; // x20
  int32_t cancelShopId; // w21
  Il2CppObject *success; // x20
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4AB755C & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&PurchaseBehaviour_TypeInfo, v5);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v7);
    byte_4AB755C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(132, responseList, 0LL);
  if ( v8 && (v9 = v8, ResponseData__checkError_41605928(v8, 0LL)) && v9->fields.success )
  {
    cancelShopId = this->fields.cancelShopId;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(cancelShopId, 0LL);
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v12,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v14->fields.m_target)(
        v14->fields.original_method_info,
        StringLiteral_22090/*"ng"*/,
        *(_QWORD *)&v14->fields.extra_arg);
  }
}