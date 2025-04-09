void __fastcall WarBoardMasterAttackRequest___ctor(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardMasterAttackRequest__backgroundErrorRequest(
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


void __fastcall WarBoardMasterAttackRequest__backgroundErrorRetry(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BC979 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49BC979 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMasterAttackRequest__beginRequest(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1

  if ( (byte_49BC978 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23204/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1B4CF90(&StringLiteral_23569/*"targetGroupId"*/, v20);
    sub_1B4CF90(&StringLiteral_23572/*"targetPieceIndex"*/, v21);
    sub_1B4CF90(&StringLiteral_16835/*"befSquareIndex"*/, v22);
    sub_1B4CF90(&StringLiteral_23568/*"targetForceId"*/, v23);
    sub_1B4CF90(&StringLiteral_22253/*"pieceIndex"*/, v24);
    sub_1B4CF90(&StringLiteral_19557/*"groupId"*/, v25);
    sub_1B4CF90(&StringLiteral_19232/*"forceId"*/, v26);
    sub_1B4CF90(&StringLiteral_16400/*"aftSquareIndex"*/, v27);
    byte_49BC978 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23204/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19232/*"forceId"*/, forceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19557/*"groupId"*/, groupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22253/*"pieceIndex"*/, pieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23568/*"targetForceId"*/, targetForceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23569/*"targetGroupId"*/, targetGroupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23572/*"targetPieceIndex"*/, targetPieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16835/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16400/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
    sub_1B4D1EC(v28, v29);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardMasterAttackRequest__getURL(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC977 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_24330/*"warBoard/masterAttack"*/, v2);
    byte_49BC977 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_24330/*"warBoard/masterAttack"*/, 0LL);
}


bool __fastcall WarBoardMasterAttackRequest__isBackgroundRequest(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardMasterAttackRequest__requestCompleted(
        WarBoardMasterAttackRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_49BC97A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B4CF90(&JsonManager_TypeInfo, v6);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v8);
    sub_1B4CF90(&StringLiteral_24339/*"warBoardData"*/, v9);
    byte_49BC97A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(96, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
             (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
      v15,
      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_21779/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}