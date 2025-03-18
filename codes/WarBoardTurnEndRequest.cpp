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
  if ( (byte_4C23A5D & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C23A5D = 1;
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

  if ( (byte_4C23A5E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23970/*"updateDamageGauge"*/, *(_QWORD *)&stageId);
    byte_4C23A5E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23970/*"updateDamageGauge"*/, stageId, 0LL);
  if ( !warBoardData )
    sub_1C3B9C0(v7, v8);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardTurnEndRequest__getURL(WarBoardTurnEndRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A5C & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_25133, v2);
    byte_4C23A5C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_25133, 0LL);
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
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4C23A5F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C3B764(&JsonManager_TypeInfo, v6);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v8);
    sub_1C3B764(&StringLiteral_25136, v9);
    byte_4C23A5F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(95, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25136,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25136,
      v15,
      (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}