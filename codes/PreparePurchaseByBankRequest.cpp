// local variable allocation has failed, the output may be wrong!
void __fastcall PreparePurchaseByBankRequest__beginRequest(
        PreparePurchaseByBankRequest_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4A003F2 & 1) == 0 )
  {
    sub_1B64A00(&PurchaseBehaviour_TypeInfo, *(_QWORD *)&shopId);
    sub_1B64A00(&StringLiteral_16992/*"bankShopId"*/, v5);
    byte_4A003F2 = 1;
  }
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(shopId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16992/*"bankShopId"*/, shopId, v6);
  RequestBase__beginRequest((RequestBase_o *)this, v7);
}


System_String_o *__fastcall PreparePurchaseByBankRequest__getURL(
        PreparePurchaseByBankRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A003F1 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_23174/*"shop/preparePurchaseByBank"*/, v2);
    byte_4A003F1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_23174/*"shop/preparePurchaseByBank"*/, 0LL);
}


void __fastcall PreparePurchaseByBankRequest__requestCompleted(
        PreparePurchaseByBankRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4A003F3 & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, responseList);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A003F3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(131, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21971/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}