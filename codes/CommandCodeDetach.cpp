void CommandCodeDetach___ctor(CommandCodeDetach_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CommandCodeDetach__beginRequest(
        CommandCodeDetach_o *this,
        int32_t servantId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C28D74 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23846/*"svtId"*/);
    sub_1C2D490(&StringLiteral_20252/*"idx"*/);
    byte_4C28D74 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23846/*"svtId"*/, servantId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20252/*"idx"*/, idx, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CommandCodeDetach__getURL(CommandCodeDetach_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D73 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18147/*"commandCode/detach"*/);
    byte_4C28D73 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18147/*"commandCode/detach"*/, 0);
}


void CommandCodeDetach__requestCompleted(
        CommandCodeDetach_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C28D75 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D75 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(78, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
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