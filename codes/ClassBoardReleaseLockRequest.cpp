void __fastcall ClassBoardReleaseLockRequest___ctor(ClassBoardReleaseLockRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ClassBoardReleaseLockRequest__beginRequest(
        ClassBoardReleaseLockRequest_o *this,
        ClassBoardReleaseRequestData_o data,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4B4648D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17992/*"classBoardBaseId"*/, data);
    sub_1BDB878(&StringLiteral_23652/*"squareId"*/, v5);
    byte_4B4648D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17992/*"classBoardBaseId"*/, data.fields.ClassBoardId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23652/*"squareId"*/, data.fields.SquareId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardReleaseLockRequest__getURL(
        ClassBoardReleaseLockRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B4648C & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17990/*"classBoard/releaseLock"*/, v2);
    byte_4B4648C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17990/*"classBoard/releaseLock"*/, 0LL);
}


void __fastcall ClassBoardReleaseLockRequest__requestCompleted(
        ClassBoardReleaseLockRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B4648E & 1) == 0 )
  {
    sub_1BDB878(&JsonManager_TypeInfo, responseList);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B4648E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(123, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_43151432(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}