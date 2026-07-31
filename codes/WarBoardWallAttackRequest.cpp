bool WarBoardWallAttackRequest__backgroundErrorRequest(
        WarBoardWallAttackRequest_o *this,
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


void WarBoardWallAttackRequest__backgroundErrorRetry(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A389 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A389 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallAttackRequest__beginRequest(
        WarBoardWallAttackRequest_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        int32_t targetWallId,
        int32_t befSquareIndex,
        int32_t aftSquareIndex,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_593A388 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_17817/*"befSquareIndex"*/);
    sub_21FFC50(&StringLiteral_23819/*"pieceIndex"*/);
    sub_21FFC50(&StringLiteral_20812/*"groupId"*/);
    sub_21FFC50(&StringLiteral_20443/*"forceId"*/);
    sub_21FFC50(&StringLiteral_17372/*"aftSquareIndex"*/);
    sub_21FFC50(&StringLiteral_25233/*"targetWallId"*/);
    byte_593A388 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24856/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&groupId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20443/*"forceId"*/, forceId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20812/*"groupId"*/, groupId, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23819/*"pieceIndex"*/, pieceIndex, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25233/*"targetWallId"*/, targetWallId, v21);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17817/*"befSquareIndex"*/, befSquareIndex, v22);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17372/*"aftSquareIndex"*/, aftSquareIndex, v23);
  if ( !warBoardData )
    sub_21FFECC(v24, v25);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v26);
}


System_String_o *WarBoardWallAttackRequest__getURL(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A387 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26065/*"warBoard/wallAttack"*/);
    byte_593A387 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26065/*"warBoard/wallAttack"*/, 0);
}


bool WarBoardWallAttackRequest__isBackgroundRequest(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardWallAttackRequest__requestCompleted(
        WarBoardWallAttackRequest_o *this,
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

  if ( (byte_593A38A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_26067/*"warBoardData"*/);
    byte_593A38A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(97, responseList, 0);
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