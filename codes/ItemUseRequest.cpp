void __fastcall ItemUseRequest___ctor(ItemUseRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemUseRequest__beginRequest(
        ItemUseRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_4213E97 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21240/*"num"*/, *(_QWORD *)&itemId);
    sub_B0D8A4(&StringLiteral_18529/*"eventId"*/, v9);
    sub_B0D8A4(&StringLiteral_23057/*"useItemId"*/, v10);
    byte_4213E97 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18529/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23057/*"useItemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21240/*"num"*/, num, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ItemUseRequest__getURL(ItemUseRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4213E96 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_20076/*"item/use"*/, v2);
    byte_4213E96 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_20076/*"item/use"*/, 0LL);
}


void __fastcall ItemUseRequest__requestCompleted(
        ItemUseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4213E98 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, responseList);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_4213E98 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_30403444(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !success )
      return;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, v9);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}