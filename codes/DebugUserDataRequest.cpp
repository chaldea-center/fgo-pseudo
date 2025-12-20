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
  if ( (byte_4D2E3B6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18030/*"chargeStone"*/);
    sub_1C94098(&StringLiteral_23186/*"rarePrism"*/);
    sub_1C94098(&StringLiteral_21617/*"manaPrism"*/);
    sub_1C94098(&StringLiteral_19827/*"freeStone"*/);
    sub_1C94098(&StringLiteral_16884/*"ap"*/);
    sub_1C94098(&StringLiteral_23073/*"qp"*/);
    sub_1C94098(&StringLiteral_19841/*"friendPoint"*/);
    sub_1C94098(&StringLiteral_21573/*"lv"*/);
    byte_4D2E3B6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21573/*"lv"*/, lv, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16884/*"ap"*/, ap, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18030/*"chargeStone"*/, chargeStone, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19827/*"freeStone"*/, freeStone, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23073/*"qp"*/, qp, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19841/*"friendPoint"*/, friendPoint, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21617/*"manaPrism"*/, manaPrism, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23186/*"rarePrism"*/, rarePrism, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugUserDataRequest__getMockData(DebugUserDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E3B5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E3B5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugUserDataRequest__getURL(DebugUserDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E3B4 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_4507/*"ClientDebug/UpdateUserData"*/);
    byte_4D2E3B4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_4507/*"ClientDebug/UpdateUserData"*/, 0);
}


void DebugUserDataRequest__requestCompleted(
        DebugUserDataRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D2E3B7 & 1) == 0 )
  {
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E3B7 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(80, responseList, 0);
  if ( v5 && ResponseData__checkError_45012660(v5, 0) )
    v6 = &StringLiteral_22594/*"ok"*/;
  else
    v6 = &StringLiteral_22424/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}