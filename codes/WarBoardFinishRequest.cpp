void __fastcall WarBoardFinishRequest___ctor(WarBoardFinishRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardFinishRequest__beginRequest(
        WarBoardFinishRequest_o *this,
        int32_t stageId,
        int32_t isResult,
        int32_t winCondId,
        int32_t winCondGroup,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4A71846 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_23514/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1B90010(&StringLiteral_24739/*"winCondId"*/, v11);
    sub_1B90010(&StringLiteral_24738/*"winCondGroup"*/, v12);
    sub_1B90010(&StringLiteral_20841/*"isResult"*/, v13);
    byte_4A71846 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23514/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20841/*"isResult"*/, isResult, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24739/*"winCondId"*/, winCondId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24738/*"winCondGroup"*/, winCondGroup, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardFinishRequest__getURL(WarBoardFinishRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A71845 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_24655/*"warBoard/finish"*/, v2);
    byte_4A71845 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_24655/*"warBoard/finish"*/, 0LL);
}


void __fastcall WarBoardFinishRequest__requestCompleted(
        WarBoardFinishRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4A71847 & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, responseList);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A71847 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(100, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_41180636(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22088/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}