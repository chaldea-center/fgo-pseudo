void __fastcall WarBoardFinishRequest___ctor(WarBoardFinishRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardFinishRequest__beginRequest(
        WarBoardFinishRequest_o *this,
        int32_t stageId,
        int32_t isResult,
        int32_t winCondId,
        int32_t winCondGroup,
        const MethodInfo *method)
{
  if ( (byte_4A5CB2F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_24700/*"winCondId"*/);
    sub_1B885B0(&StringLiteral_24699/*"winCondGroup"*/);
    sub_1B885B0(&StringLiteral_20812/*"isResult"*/);
    byte_4A5CB2F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20812/*"isResult"*/, isResult, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24700/*"winCondId"*/, winCondId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24699/*"winCondGroup"*/, winCondGroup, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardFinishRequest__getURL(WarBoardFinishRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB2E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24616/*"warBoard/finish"*/);
    byte_4A5CB2E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24616/*"warBoard/finish"*/, 0LL);
}


void __fastcall WarBoardFinishRequest__requestCompleted(
        WarBoardFinishRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4A5CB30 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CB30 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(100, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}