void __fastcall EventDiggingRequest___ctor(EventDiggingRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventDiggingRequest__beginRequest(
        EventDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        System_Int32_array *idxX,
        System_Int32_array *idxY,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3

  if ( (byte_42EB1AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18701/*"eventId"*/, eventId, areaNum, idxX);
    sub_B5D5C4(&StringLiteral_19640/*"idxY"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16648/*"areaNum"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19639/*"idxX"*/, v17, v18, v19);
    byte_42EB1AC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18701/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16648/*"areaNum"*/, areaNum, 0LL);
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_19639/*"idxX"*/, &idxX->obj, 0LL);
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_19640/*"idxY"*/, &idxY->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventDiggingRequest__getURL(EventDiggingRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EB1AB & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18685/*"event/digging"*/, v4, v5, v6);
    byte_42EB1AB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_18685/*"event/digging"*/, 0LL);
}


void __fastcall EventDiggingRequest__requestCompleted(
        EventDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  Il2CppObject *success; // x20
  System_String_o *v12; // x1
  RequestBase_o *v13; // x0

  if ( (byte_42EB1AD & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    byte_42EB1AD = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(114, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_29500464(v9, 0LL)) )
  {
    success = (Il2CppObject *)v10->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
    v13 = (RequestBase_o *)this;
  }
  else
  {
    v13 = (RequestBase_o *)this;
    v12 = 0LL;
  }
  RequestBase__completed(v13, v12, 0LL);
}