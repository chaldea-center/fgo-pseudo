void __fastcall WarBoardWallAttackRequest___ctor(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardWallAttackRequest__backgroundErrorRequest(
        WarBoardWallAttackRequest_o *this,
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


void __fastcall WarBoardWallAttackRequest__backgroundErrorRetry(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17C10 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17C10 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallAttackRequest__beginRequest(
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x0
  __int64 v31; // x1

  if ( (byte_4B17C0F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, *(_QWORD *)&stageId, *(_QWORD *)&forceId);
    sub_1BCA7E0(&StringLiteral_17323/*"befSquareIndex"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22775/*"pieceIndex"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_20062/*"groupId"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_19736/*"forceId"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_16877/*"aftSquareIndex"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_24108/*"targetWallId"*/, v28, v29);
    byte_4B17C0F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19736/*"forceId"*/, forceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20062/*"groupId"*/, groupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22775/*"pieceIndex"*/, pieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24108/*"targetWallId"*/, targetWallId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17323/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16877/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
    sub_1BCAA3C(v30, v31);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardWallAttackRequest__getURL(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17C0E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24878/*"warBoard/wallAttack"*/, v3, v4);
    byte_4B17C0E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24878/*"warBoard/wallAttack"*/, 0LL);
}


bool __fastcall WarBoardWallAttackRequest__isBackgroundRequest(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardWallAttackRequest__requestCompleted(
        WarBoardWallAttackRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  const MethodInfo *v16; // x2
  ResponseData_o *v17; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1

  if ( (byte_4B17C11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24880/*"warBoardData"*/, v13, v14);
    byte_4B17C11 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(97, responseList, 0LL);
  if ( v15
    && (v17 = v15, ResponseData__checkError(v15, v15->fields.resCode, v16))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v20 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
      v20,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    v22 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}