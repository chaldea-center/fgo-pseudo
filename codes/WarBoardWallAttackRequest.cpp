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
  if ( (byte_4BB6168 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB6168 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1

  if ( (byte_4BB6167 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23865/*"squareIndexes"*/, *(_QWORD *)&stageId);
    sub_1C13D24(&StringLiteral_17412/*"battle_setup"*/, v18);
    sub_1C13D24(&StringLiteral_22907/*"phaseRewardImageId"*/, v19);
    sub_1C13D24(&StringLiteral_20174/*"graphic.name"*/, v20);
    sub_1C13D24(&StringLiteral_19839/*"fontColorGradient"*/, v21);
    sub_1C13D24(&StringLiteral_16964/*"advPlayAnimator"*/, v22);
    sub_1C13D24(&StringLiteral_24250/*"talkEnd"*/, v23);
    byte_4BB6167 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23865/*"squareIndexes"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19839/*"fontColorGradient"*/, forceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20174/*"graphic.name"*/, groupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22907/*"phaseRewardImageId"*/, pieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24250/*"talkEnd"*/, targetWallId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17412/*"battle_setup"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16964/*"advPlayAnimator"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
    sub_1C13F80(v24, v25);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardWallAttackRequest__getURL(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB6166 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_25022/*"waitObject"*/, v2);
    byte_4BB6166 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_25022/*"waitObject"*/, 0LL);
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

  if ( (byte_4BB6169 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C13D24(&JsonManager_TypeInfo, v6);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v8);
    sub_1C13D24(&StringLiteral_25024/*"wait_tuto"*/, v9);
    byte_4BB6169 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(97, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25024/*"wait_tuto"*/,
             (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25024/*"wait_tuto"*/,
      v15,
      (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22421/*"newAttributes"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}