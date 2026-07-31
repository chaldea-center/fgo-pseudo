void ContinueInputRequest___ctor(ContinueInputRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ContinueInputRequest__beginRequest(
        ContinueInputRequest_o *this,
        System_String_o *continueKey,
        System_String_o *continuePass,
        const MethodInfo *method)
{
  if ( (byte_593A1E2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19029/*"continueKey"*/);
    sub_21FFC50(&StringLiteral_19031/*"continuePass"*/);
    byte_593A1E2 = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19029/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19031/*"continuePass"*/, continuePass, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1E1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1E1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1E0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19027/*"continue/input"*/);
    byte_593A1E0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19027/*"continue/input"*/, 0);
}


void ContinueInputRequest__requestCompleted(
        ContinueInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  __int64 v9; // x1
  Il2CppObject *Item; // x20
  System_String_o *v11; // x1

  if ( (byte_593A1E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_25856/*"userGame"*/);
    byte_593A1E3 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(32, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
    if ( !success )
      sub_21FFECC(0, v7);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25856/*"userGame"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
    v11 = JsonManager__toJson(Item, 0, 0, 0);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0);
}