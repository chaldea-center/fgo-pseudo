void WarBoardResumeRequest__beginRequest(
        WarBoardResumeRequest_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  int32_t id; // w0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_5972554 & 1) == 0 )
  {
    this = (WarBoardResumeRequest_o *)sub_2213A60(&StringLiteral_24904/*"stageId"*/);
    byte_5972554 = 1;
  }
  if ( !warBoardData )
    sub_2213CDC(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0);
  RequestBase__addField(v4, (System_String_o *)StringLiteral_24904/*"stageId"*/, id, v6);
  WarBoardData__SetRequest(warBoardData, v4, 0);
  RequestBase__beginRequest(v4, v7);
}


System_String_o *WarBoardResumeRequest__getURL(WarBoardResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972553 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26110/*"warBoard/resume"*/);
    byte_5972553 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_26110/*"warBoard/resume"*/, 0);
}


void WarBoardResumeRequest__requestCompleted(
        WarBoardResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v15; // x1

  if ( (byte_5972555 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_26117/*"warBoardData"*/);
    byte_5972555 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(101, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v15 = StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_26117/*"warBoardData"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    success,
    (Il2CppObject *)StringLiteral_26117/*"warBoardData"*/,
    v11,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
  v13 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v15 = (__int64)v13;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v15,
      CallBack->fields.method);
  }
}