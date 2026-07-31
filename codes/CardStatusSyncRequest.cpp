void CardStatusSyncRequest___ctor(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CardStatusSyncRequest__beginRequest(
        CardStatusSyncRequest_o *this,
        System_Int64_array *changeUserSvtIds,
        System_Int64_array *revokeUserSvtIds,
        bool isStorage,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  System_String_o *v13; // x0
  System_String_o *v14; // x0

  if ( (byte_593A1A6 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21950/*"isStorage"*/);
    sub_21FFC50(&StringLiteral_18571/*"changeUserSvtIds"*/);
    sub_21FFC50(&StringLiteral_21905/*"isLock"*/);
    sub_21FFC50(&StringLiteral_21872/*"isChoice"*/);
    sub_21FFC50(&StringLiteral_24265/*"revokeUserSvtIds"*/);
    byte_593A1A6 = 1;
  }
  if ( changeUserSvtIds && changeUserSvtIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeUserSvtIds);
    v13 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_18571/*"changeUserSvtIds"*/, v13, 0);
  }
  if ( revokeUserSvtIds && revokeUserSvtIds->max_length )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, changeUserSvtIds);
    v14 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_24265/*"revokeUserSvtIds"*/, v14, 0);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_15;
LABEL_19:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"isLock"*/, 1, 0);
    if ( !isChoice )
      goto LABEL_17;
    goto LABEL_16;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21950/*"isStorage"*/, 1, 0);
  if ( isLock )
    goto LABEL_19;
LABEL_15:
  if ( isChoice )
LABEL_16:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21872/*"isChoice"*/, 1, 0);
LABEL_17:
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1A5 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1A5 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1A4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18505/*"card/statusSync"*/);
    byte_593A1A4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_18505/*"card/statusSync"*/, 0);
}


void CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1A7 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1A7 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(70, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}