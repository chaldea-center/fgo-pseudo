void ItemUseRequest___ctor(ItemUseRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ItemUseRequest__beginRequest(
        ItemUseRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4C28E2A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22318/*"num"*/);
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    sub_1C2D490(&StringLiteral_24459/*"useItemId"*/);
    byte_4C28E2A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19133/*"eventId"*/, eventId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24459/*"useItemId"*/, itemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22318/*"num"*/, num, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ItemUseRequest__getURL(ItemUseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E29 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_21006/*"item/use"*/);
    byte_4C28E29 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_21006/*"item/use"*/, 0);
}


void ItemUseRequest__requestCompleted(
        ItemUseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C28E2B & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28E2B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(44, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !success )
      return;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}