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

  if ( (byte_4C28D54 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20947/*"isStorage"*/);
    sub_1C2D490(&StringLiteral_17812/*"changeUserSvtIds"*/);
    sub_1C2D490(&StringLiteral_20916/*"isLock"*/);
    sub_1C2D490(&StringLiteral_20894/*"isChoice"*/);
    sub_1C2D490(&StringLiteral_23083/*"revokeUserSvtIds"*/);
    byte_4C28D54 = 1;
  }
  if ( changeUserSvtIds && changeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(&changeUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_17812/*"changeUserSvtIds"*/, v13, 0);
  }
  if ( revokeUserSvtIds && revokeUserSvtIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__toJson(&revokeUserSvtIds->obj, 0, 0, 0);
    RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_23083/*"revokeUserSvtIds"*/, v14, 0);
  }
  if ( !isStorage )
  {
    if ( !isLock )
      goto LABEL_15;
LABEL_19:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20916/*"isLock"*/, 1, 0);
    if ( !isChoice )
      goto LABEL_17;
    goto LABEL_16;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20947/*"isStorage"*/, 1, 0);
  if ( isLock )
    goto LABEL_19;
LABEL_15:
  if ( isChoice )
LABEL_16:
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20894/*"isChoice"*/, 1, 0);
LABEL_17:
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardStatusSyncRequest__getMockData(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D53 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D53 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardStatusSyncRequest__getURL(CardStatusSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D52 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17749/*"card/statusSync"*/);
    byte_4C28D52 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17749/*"card/statusSync"*/, 0);
}


void CardStatusSyncRequest__requestCompleted(
        CardStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D55 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D55 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(70, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}