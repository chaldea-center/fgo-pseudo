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
  if ( (byte_4A5CB4B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CB4B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


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
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4A5CB4A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_17151/*"befSquareIndex"*/);
    sub_1B885B0(&StringLiteral_22533/*"pieceIndex"*/);
    sub_1B885B0(&StringLiteral_19854/*"groupId"*/);
    sub_1B885B0(&StringLiteral_19534/*"forceId"*/);
    sub_1B885B0(&StringLiteral_16708/*"aftSquareIndex"*/);
    sub_1B885B0(&StringLiteral_23859/*"targetWallId"*/);
    byte_4A5CB4A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19534/*"forceId"*/, forceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19854/*"groupId"*/, groupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22533/*"pieceIndex"*/, pieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23859/*"targetWallId"*/, targetWallId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17151/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16708/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
    sub_1B8880C(v18, v19);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardWallAttackRequest__getURL(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB49 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24624/*"warBoard/wallAttack"*/);
    byte_4A5CB49 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24624/*"warBoard/wallAttack"*/, 0LL);
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
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4A5CB4C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB4C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(97, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
      v9,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}