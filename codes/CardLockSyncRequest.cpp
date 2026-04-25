void CardLockSyncRequest___ctor(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CardLockSyncRequest__beginRequest(
        CardLockSyncRequest_o *this,
        System_Int64_array *lockUserSvtIds,
        System_Int64_array *unlockUserSvtIds,
        bool isStorage,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  System_String_o *v10; // x0

  if ( (byte_4E064A3 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&StringLiteral_21277/*"isStorage"*/);
    sub_1CE6700(&StringLiteral_21665/*"lockUserSvtIds"*/);
    sub_1CE6700(&StringLiteral_24820/*"unlockUserSvtIds"*/);
    byte_4E064A3 = 1;
  }
  if ( lockUserSvtIds && lockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(&lockUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_21665/*"lockUserSvtIds"*/, v9, 0);
  }
  if ( unlockUserSvtIds && unlockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(&unlockUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_24820/*"unlockUserSvtIds"*/, v10, 0);
  }
  if ( isStorage )
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21277/*"isStorage"*/, 1, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardLockSyncRequest__getMockData(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E064A2 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E064A2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardLockSyncRequest__getURL(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E064A1 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_17953/*"card/lockSync"*/);
    byte_4E064A1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_17953/*"card/lockSync"*/, 0);
}


void CardLockSyncRequest__requestCompleted(
        CardLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4E064A4 & 1) == 0 )
  {
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22728/*"ok"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E064A4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(56, responseList, 0);
  if ( v5 && ResponseData__checkError_45365352(v5, 0) )
    v6 = &StringLiteral_22728/*"ok"*/;
  else
    v6 = &StringLiteral_22555/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}