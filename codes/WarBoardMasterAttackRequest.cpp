bool WarBoardMasterAttackRequest__backgroundErrorRequest(
        WarBoardMasterAttackRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int32_t retryCount; // w9
  bool v4; // w8
  int32_t v5; // w9

  retryCount = this->fields.retryCount;
  v4 = retryCount < 3;
  if ( retryCount <= 2 )
    v5 = retryCount + 1;
  else
    v5 = 0;
  this->fields.retryCount = v5;
  return v4;
}


void WarBoardMasterAttackRequest__backgroundErrorRetry(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E52E & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2E52E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardMasterAttackRequest__beginRequest(
        WarBoardMasterAttackRequest_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        int32_t targetForceId,
        int32_t targetGroupId,
        int32_t targetPieceIndex,
        int32_t befSquareIndex,
        int32_t aftSquareIndex,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_4D2E52D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23877/*"stageId"*/);
    sub_1C94098(&StringLiteral_24233/*"targetGroupId"*/);
    sub_1C94098(&StringLiteral_24236/*"targetPieceIndex"*/);
    sub_1C94098(&StringLiteral_17203/*"befSquareIndex"*/);
    sub_1C94098(&StringLiteral_24232/*"targetForceId"*/);
    sub_1C94098(&StringLiteral_22917/*"pieceIndex"*/);
    sub_1C94098(&StringLiteral_20076/*"groupId"*/);
    sub_1C94098(&StringLiteral_19718/*"forceId"*/);
    sub_1C94098(&StringLiteral_16788/*"aftSquareIndex"*/);
    byte_4D2E52D = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23877/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&groupId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19718/*"forceId"*/, forceId, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20076/*"groupId"*/, groupId, v21);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22917/*"pieceIndex"*/, pieceIndex, v22);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24232/*"targetForceId"*/, targetForceId, v23);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24233/*"targetGroupId"*/, targetGroupId, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24236/*"targetPieceIndex"*/, targetPieceIndex, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17203/*"befSquareIndex"*/, befSquareIndex, v26);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16788/*"aftSquareIndex"*/, aftSquareIndex, v27);
  if ( !warBoardData )
    sub_1C942F0(v28, v29);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v30);
}


System_String_o *WarBoardMasterAttackRequest__getURL(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E52C & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_24988/*"warBoard/masterAttack"*/);
    byte_4D2E52C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_24988/*"warBoard/masterAttack"*/, 0);
}


bool WarBoardMasterAttackRequest__isBackgroundRequest(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardMasterAttackRequest__requestCompleted(
        WarBoardMasterAttackRequest_o *this,
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
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4D2E52F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    sub_1C94098(&StringLiteral_24997/*"warBoardData"*/);
    byte_4D2E52F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(96, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24997/*"warBoardData"*/,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24997/*"warBoardData"*/,
      v11,
      (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v12,
        CallBack->fields.method);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v14->fields.invoke_impl)(
        v14->fields.method_code,
        StringLiteral_22424/*"ng"*/,
        v14->fields.method);
  }
}