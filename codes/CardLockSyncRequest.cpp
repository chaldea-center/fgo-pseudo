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

  if ( (byte_4D3245A & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_21208/*"isStorage"*/);
    sub_1C93AD4(&StringLiteral_21594/*"lockUserSvtIds"*/);
    sub_1C93AD4(&StringLiteral_24732/*"unlockUserSvtIds"*/);
    byte_4D3245A = 1;
  }
  if ( lockUserSvtIds && lockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(&lockUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_21594/*"lockUserSvtIds"*/, v9, 0);
  }
  if ( unlockUserSvtIds && unlockUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(&unlockUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_24732/*"unlockUserSvtIds"*/, v10, 0);
  }
  if ( isStorage )
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21208/*"isStorage"*/, 1, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardLockSyncRequest__getMockData(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D32459 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32459 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardLockSyncRequest__getURL(CardLockSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32458 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17897/*"card/lockSync"*/);
    byte_4D32458 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17897/*"card/lockSync"*/, 0);
}


void CardLockSyncRequest__requestCompleted(
        CardLockSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D3245B & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D3245B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(56, responseList, 0);
  if ( v5 && ResponseData__checkError_44908744(v5, 0) )
    v6 = &StringLiteral_22655/*"ok"*/;
  else
    v6 = &StringLiteral_22483/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}