void __fastcall WarBoardTurnEndRequest___ctor(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardTurnEndRequest__backgroundErrorRequest(
        WarBoardTurnEndRequest_o *this,
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


void __fastcall WarBoardTurnEndRequest__backgroundErrorRetry(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A7185D & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    byte_4A7185D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTurnEndRequest__beginRequest(
        WarBoardTurnEndRequest_o *this,
        int32_t stageId,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A7185E & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_23514/*"stageId"*/, *(_QWORD *)&stageId);
    byte_4A7185E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23514/*"stageId"*/, stageId, 0LL);
  if ( !warBoardData )
    sub_1B9026C(v7, v8);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardTurnEndRequest__getURL(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A7185C & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_24662/*"warBoard/turnEnd"*/, v2);
    byte_4A7185C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_24662/*"warBoard/turnEnd"*/, 0LL);
}


bool __fastcall WarBoardTurnEndRequest__isBackgroundRequest(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardTurnEndRequest__requestCompleted(
        WarBoardTurnEndRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4A7185F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B90010(&JsonManager_TypeInfo, v6);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v7);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v8);
    sub_1B90010(&StringLiteral_24665/*"warBoardData"*/, v9);
    byte_4A7185F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(95, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_41180636(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24665/*"warBoardData"*/,
             (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24665/*"warBoardData"*/,
      v14,
      (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_22088/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}