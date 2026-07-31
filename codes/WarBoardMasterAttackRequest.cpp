bool WarBoardMasterAttackRequest__backgroundErrorRequest(
        WarBoardMasterAttackRequest_o *this,
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


void WarBoardMasterAttackRequest__backgroundErrorRetry(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A371 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A371 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x1

  if ( (byte_593A370 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_25225/*"targetGroupId"*/);
    sub_21FFC50(&StringLiteral_25228/*"targetPieceIndex"*/);
    sub_21FFC50(&StringLiteral_17817/*"befSquareIndex"*/);
    sub_21FFC50(&StringLiteral_25224/*"targetForceId"*/);
    sub_21FFC50(&StringLiteral_23819/*"pieceIndex"*/);
    sub_21FFC50(&StringLiteral_20812/*"groupId"*/);
    sub_21FFC50(&StringLiteral_20443/*"forceId"*/);
    sub_21FFC50(&StringLiteral_17372/*"aftSquareIndex"*/);
    byte_593A370 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24856/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&groupId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20443/*"forceId"*/, forceId, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20812/*"groupId"*/, groupId, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23819/*"pieceIndex"*/, pieceIndex, v21);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25224/*"targetForceId"*/, targetForceId, v22);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25225/*"targetGroupId"*/, targetGroupId, v23);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25228/*"targetPieceIndex"*/, targetPieceIndex, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17817/*"befSquareIndex"*/, befSquareIndex, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17372/*"aftSquareIndex"*/, aftSquareIndex, v26);
  if ( !warBoardData )
    sub_21FFECC(v27, v28);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v29);
}


System_String_o *WarBoardMasterAttackRequest__getURL(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A36F & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26058/*"warBoard/masterAttack"*/);
    byte_593A36F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26058/*"warBoard/masterAttack"*/, 0);
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
  __int64 v12; // x1
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v15; // x1

  if ( (byte_593A372 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_26067/*"warBoardData"*/);
    byte_593A372 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(96, responseList, 0);
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