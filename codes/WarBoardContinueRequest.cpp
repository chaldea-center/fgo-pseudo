void WarBoardContinueRequest__beginRequest(
        WarBoardContinueRequest_o *this,
        int32_t stageId,
        int32_t consumeType,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1

  if ( (byte_593A369 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_19001/*"consumeType"*/);
    byte_593A369 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24856/*"stageId"*/,
    stageId,
    (const MethodInfo *)warBoardData);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19001/*"consumeType"*/, consumeType, v9);
  if ( !warBoardData )
    sub_21FFECC(v10, v11);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__addBaseField((RequestBase_o *)this, v12);
  RequestBase__WriteParameter((RequestBase_o *)this, v13);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *WarBoardContinueRequest__getParameterFileName(
        WarBoardContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_593A36B & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593A36B = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(41, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *WarBoardContinueRequest__getURL(WarBoardContinueRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A368 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26056/*"warBoard/continue"*/);
    byte_593A368 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26056/*"warBoard/continue"*/, 0);
}


void WarBoardContinueRequest__requestCompleted(
        WarBoardContinueRequest_o *this,
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

  if ( (byte_593A36A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_26067/*"warBoardData"*/);
    byte_593A36A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(102, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v15 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_26067/*"warBoardData"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    success,
    (Il2CppObject *)StringLiteral_26067/*"warBoardData"*/,
    v11,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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