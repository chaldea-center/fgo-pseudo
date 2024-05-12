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
  if ( (byte_438CCF7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18035/*"continueKey"*/);
    sub_B775C4(&StringLiteral_18037/*"continuePass"*/);
    byte_438CCF7 = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18035/*"continueKey"*/, continueKey, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18037/*"continuePass"*/, continuePass, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438CCF6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CCF6 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CCF5 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18033/*"continue/input"*/);
    byte_438CCF5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18033/*"continue/input"*/, 0LL);
}


void __fastcall ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x0
  Il2CppObject *Item; // x20
  System_String_o *v10; // x1

  if ( (byte_438CCF8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_23518/*"userGame"*/);
    byte_438CCF8 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(32, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success;
    if ( !success )
      sub_B7769C(0LL, v7);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23518/*"userGame"*/,
                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(Item, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}