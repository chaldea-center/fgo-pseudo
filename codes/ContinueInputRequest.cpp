void __fastcall ContinueInputRequest___ctor(ContinueInputRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ContinueInputRequest__beginRequest(
        ContinueInputRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B464C4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18254/*"continueKey"*/, continueKey);
    sub_1BDB878(&StringLiteral_18256/*"continuePass"*/, v7);
    byte_4B464C4 = 1;
  }
  RequestBase__addField_43151112((RequestBase_o *)this, (System_String_o *)StringLiteral_18254/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_43151112((RequestBase_o *)this, (System_String_o *)StringLiteral_18256/*"continuePass"*/, continuePass, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4B464C3 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B464C3 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B464C2 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_18252/*"continue/input"*/, v2);
    byte_4B464C2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_18252/*"continue/input"*/, 0LL);
}


void __fastcall ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *Item; // x20
  System_String_o *v14; // x1

  if ( (byte_4B464C5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BDB878(&JsonManager_TypeInfo, v5);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v7);
    sub_1BDB878(&StringLiteral_24611/*"userGame"*/, v8);
    byte_4B464C5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v9 = ResponseCommandKind__SearchData(32, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_43151432(v9, 0LL)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.success;
    if ( !success )
      sub_1BDBAD4(0LL, v11);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24611/*"userGame"*/,
             (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__toJson(Item, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}