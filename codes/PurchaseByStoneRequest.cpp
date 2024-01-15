void __fastcall PurchaseByStoneRequest___ctor(PurchaseByStoneRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByStoneRequest__beginRequest(
        PurchaseByStoneRequest_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_40FA05B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21083/*"num"*/, *(_QWORD *)&id);
    sub_B16FFC(&StringLiteral_19307/*"id"*/, v7);
    byte_40FA05B = 1;
  }
  this->fields.id = id;
  this->fields.num = num;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19307/*"id"*/, id, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21083/*"num"*/, num, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByStoneRequest__getURL(PurchaseByStoneRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA05A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22015/*"shop/purchaseByStone"*/, v2);
    byte_40FA05A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22015/*"shop/purchaseByStone"*/, 0LL);
}


void __fastcall PurchaseByStoneRequest__requestCompleted(
        PurchaseByStoneRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40FA05C & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40FA05C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(10, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}