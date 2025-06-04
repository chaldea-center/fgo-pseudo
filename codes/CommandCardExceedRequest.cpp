void __fastcall CommandCardExceedRequest___ctor(CommandCardExceedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCardExceedRequest__beginRequest(
        CommandCardExceedRequest_o *this,
        int64_t userId,
        int64_t userServantId,
        int32_t index,
        System_Collections_Generic_Dictionary_int__int__o *useItems,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_4B03A51 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_24348/*"userSvtId"*/, userId);
    sub_1BC3008(&StringLiteral_24245/*"useItems"*/, v10);
    sub_1BC3008(&StringLiteral_20072/*"idx"*/, v11);
    byte_4B03A51 = 1;
  }
  RequestBase__addField_43183652((RequestBase_o *)this, (System_String_o *)StringLiteral_24348/*"userSvtId"*/, userServantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20072/*"idx"*/, index, 0LL);
  RequestBase__addField_43193604(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24245/*"useItems"*/,
    (Il2CppObject *)useItems,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCardExceedRequest__getURL(
        CommandCardExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A50 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17591/*"card/commandCardExceed"*/, v2);
    byte_4B03A50 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_17591/*"card/commandCardExceed"*/, 0LL);
}


void __fastcall CommandCardExceedRequest__requestCompleted(
        CommandCardExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B03A52 & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A52 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(84, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_43184840(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21997/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}