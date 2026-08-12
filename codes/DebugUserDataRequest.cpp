void DebugUserDataRequest___ctor(DebugUserDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DebugUserDataRequest__beginRequest(
        DebugUserDataRequest_o *this,
        int32_t lv,
        int32_t ap,
        int32_t chargeStone,
        int32_t freeStone,
        int32_t qp,
        int32_t friendPoint,
        int32_t manaPrism,
        int32_t rarePrism,
        const MethodInfo *method)
{
  if ( (byte_59723D3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18728/*"chargeStone"*/);
    sub_2213A60(&StringLiteral_24156/*"rarePrism"*/);
    sub_2213A60(&StringLiteral_22500/*"manaPrism"*/);
    sub_2213A60(&StringLiteral_20595/*"freeStone"*/);
    sub_2213A60(&StringLiteral_17516/*"ap"*/);
    sub_2213A60(&StringLiteral_24038/*"qp"*/);
    sub_2213A60(&StringLiteral_20610/*"friendPoint"*/);
    sub_2213A60(&StringLiteral_22451/*"lv"*/);
    byte_59723D3 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22451/*"lv"*/, lv, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17516/*"ap"*/, ap, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18728/*"chargeStone"*/, chargeStone, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20595/*"freeStone"*/, freeStone, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24038/*"qp"*/, qp, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20610/*"friendPoint"*/, friendPoint, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22500/*"manaPrism"*/, manaPrism, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24156/*"rarePrism"*/, rarePrism, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugUserDataRequest__getMockData(DebugUserDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59723D2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723D2 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugUserDataRequest__getURL(DebugUserDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723D1 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_4677/*"ClientDebug/UpdateUserData"*/);
    byte_59723D1 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_4677/*"ClientDebug/UpdateUserData"*/, 0);
}


void DebugUserDataRequest__requestCompleted(
        DebugUserDataRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_59723D4 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723D4 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v5);
  v6 = ResponseCommandKind__SearchData(80, responseList, 0);
  if ( v6 && ResponseData__checkError_51257228(v6, 0) )
    v7 = &StringLiteral_23515/*"ok"*/;
  else
    v7 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}