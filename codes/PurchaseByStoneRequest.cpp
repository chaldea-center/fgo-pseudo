// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByStoneRequest__beginRequest(
        PurchaseByStoneRequest_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4B1E03C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22137/*"num"*/, *(_QWORD *)&id);
    sub_1BCAFF8(&StringLiteral_20073/*"id"*/, v7);
    byte_4B1E03C = 1;
  }
  this->fields.id = id;
  this->fields.num = num;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20073/*"id"*/, id, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22137/*"num"*/, num, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall PurchaseByStoneRequest__getURL(PurchaseByStoneRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1E03B & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_23232/*"shop/purchaseByStone"*/, v2);
    byte_4B1E03B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_23232/*"shop/purchaseByStone"*/, 0LL);
}


void __fastcall PurchaseByStoneRequest__requestCompleted(
        PurchaseByStoneRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4B1E03D & 1) == 0 )
  {
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1E03D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(10, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22181/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22015/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}