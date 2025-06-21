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
  if ( (byte_4B1E11F & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1E11F = 1;
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
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x1

  if ( (byte_4B1E11E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23437/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1BCAFF8(&StringLiteral_16981/*"befSquareIndex"*/, v18);
    sub_1BCAFF8(&StringLiteral_22492/*"pieceIndex"*/, v19);
    sub_1BCAFF8(&StringLiteral_19732/*"groupId"*/, v20);
    sub_1BCAFF8(&StringLiteral_19384/*"forceId"*/, v21);
    sub_1BCAFF8(&StringLiteral_16575/*"aftSquareIndex"*/, v22);
    sub_1BCAFF8(&StringLiteral_23788/*"targetWallId"*/, v23);
    byte_4B1E11E = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23437/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&groupId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19384/*"forceId"*/, forceId, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19732/*"groupId"*/, groupId, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22492/*"pieceIndex"*/, pieceIndex, v26);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23788/*"targetWallId"*/, targetWallId, v27);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16981/*"befSquareIndex"*/, befSquareIndex, v28);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16575/*"aftSquareIndex"*/, aftSquareIndex, v29);
  if ( !warBoardData )
    sub_1BCB254(v30, v31);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v32);
}


System_String_o *__fastcall WarBoardWallAttackRequest__getURL(
        WarBoardWallAttackRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1E11D & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_24526/*"warBoard/wallAttack"*/, v2);
    byte_4B1E11D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_24526/*"warBoard/wallAttack"*/, 0LL);
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
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_4B1E120 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BCAFF8(&JsonManager_TypeInfo, v6);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v8);
    sub_1BCAFF8(&StringLiteral_24528/*"warBoardData"*/, v9);
    byte_4B1E120 = 1;
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
             (Il2CppObject *)StringLiteral_24528/*"warBoardData"*/,
             (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24528/*"warBoardData"*/,
      v16,
      (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_22015/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}