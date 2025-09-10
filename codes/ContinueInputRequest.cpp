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
  if ( (byte_4C28D90 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18244/*"continueKey"*/);
    sub_1C2D490(&StringLiteral_18246/*"continuePass"*/);
    byte_4C28D90 = 1;
  }
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_18244/*"continueKey"*/, continueKey, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_18246/*"continuePass"*/, continuePass, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ContinueInputRequest__getMockData(ContinueInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D8F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D8F = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ContinueInputRequest__getURL(ContinueInputRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D8E & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18242/*"continue/input"*/);
    byte_4C28D8E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18242/*"continue/input"*/, 0);
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
  Il2CppObject *Item; // x20
  System_String_o *v10; // x1

  if ( (byte_4C28D91 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_24528/*"userGame"*/);
    byte_4C28D91 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(32, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
    if ( !success )
      sub_1C2D6EC(0, v7);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24528/*"userGame"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(Item, 0, 0, 0);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0);
}