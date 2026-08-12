// local variable allocation has failed, the output may be wrong!
void ServantCombineRequest__beginRequest(
        ServantCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        int32_t useQp,
        int32_t getExp,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_59724BC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17776/*"baseUserSvtId"*/);
    sub_2213A60(&StringLiteral_20719/*"getExp"*/);
    sub_2213A60(&StringLiteral_25833/*"useQp"*/);
    sub_2213A60(&StringLiteral_22581/*"materialUserSvtIds"*/);
    byte_59724BC = 1;
  }
  RequestBase__addField_51256716(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17776/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&useQp);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_22581/*"materialUserSvtIds"*/, materialSvtIds, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25833/*"useQp"*/, useQp, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20719/*"getExp"*/, getExp, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59724BB & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9518/*"MockSvtCombineResponse"*/);
    byte_59724BB = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9518/*"MockSvtCombineResponse"*/, 0);
}


System_String_o *ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724BA & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18529/*"card/combine"*/);
    byte_59724BA = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18529/*"card/combine"*/, 0);
}


void ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_59724BD & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59724BD = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(25, responseList, 0);
  if ( !v5 || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23336/*"ng"*/;
    goto LABEL_13;
  }
  success = (Il2CppObject *)v7->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_13:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}