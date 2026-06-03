bool WarBoardWallAttackRequest__backgroundErrorRequest(
        WarBoardWallAttackRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int v3; // w9
  bool v4; // w8
  int v5; // w9

  v3 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  v4 = v3 < 3;
  if ( v3 <= 2 )
    v5 = v3 + 1;
  else
    v5 = 0;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = v5;
  return v4;
}


void WarBoardWallAttackRequest__backgroundErrorRetry(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E79335 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E79335 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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

  if ( (byte_4E79334 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24125/*"stageId"*/);
    sub_1D0F0B4(&StringLiteral_17375/*"befSquareIndex"*/);
    sub_1D0F0B4(&StringLiteral_23154/*"pieceIndex"*/);
    sub_1D0F0B4(&StringLiteral_20279/*"groupId"*/);
    sub_1D0F0B4(&StringLiteral_19920/*"forceId"*/);
    sub_1D0F0B4(&StringLiteral_16955/*"aftSquareIndex"*/);
    sub_1D0F0B4(&StringLiteral_24495/*"targetWallId"*/);
    byte_4E79334 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24125/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&groupId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19920/*"forceId"*/, forceId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20279/*"groupId"*/, groupId, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23154/*"pieceIndex"*/, pieceIndex, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24495/*"targetWallId"*/, targetWallId, v21);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17375/*"befSquareIndex"*/, befSquareIndex, v22);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16955/*"aftSquareIndex"*/, aftSquareIndex, v23);
  if ( !warBoardData )
    sub_1D0F30C(v24, v25);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v26);
}


System_String_o *WarBoardWallAttackRequest__getURL(WarBoardWallAttackRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E79333 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25262/*"warBoard/wallAttack"*/);
    byte_4E79333 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_25262/*"warBoard/wallAttack"*/, 0);
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
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4E79336 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    sub_1D0F0B4(&StringLiteral_25264/*"warBoardData"*/);
    byte_4E79336 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(97, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25264/*"warBoardData"*/,
             (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25264/*"warBoardData"*/,
      v11,
      (const MethodInfo_36015D0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
        StringLiteral_22648/*"ng"*/,
        v14->fields.method);
  }
}