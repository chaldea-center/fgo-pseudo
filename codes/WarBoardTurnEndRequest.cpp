bool WarBoardTurnEndRequest__backgroundErrorRequest(
        WarBoardTurnEndRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int v3; // w9
  bool result; // w0
  int v6; // w9

  v3 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  result = v3 < 3;
  if ( v3 < 3 )
    v6 = v3 + 1;
  else
    v6 = 0;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = v6;
  return result;
}


void WarBoardTurnEndRequest__backgroundErrorRetry(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  if ( (byte_5972561 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972561 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


void WarBoardTurnEndRequest__beginRequest(
        WarBoardTurnEndRequest_o *this,
        int32_t stageId,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_5972562 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24904/*"stageId"*/);
    byte_5972562 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24904/*"stageId"*/, stageId, method);
  if ( !warBoardData )
    sub_2213CDC(v7, v8);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *WarBoardTurnEndRequest__getURL(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972560 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26114/*"warBoard/turnEnd"*/);
    byte_5972560 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_26114/*"warBoard/turnEnd"*/, 0);
}


bool WarBoardTurnEndRequest__isBackgroundRequest(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardTurnEndRequest__requestCompleted(
        WarBoardTurnEndRequest_o *this,
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

  if ( (byte_5972563 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_26117/*"warBoardData"*/);
    byte_5972563 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(95, responseList, 0);
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