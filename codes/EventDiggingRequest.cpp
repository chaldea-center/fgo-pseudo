void __fastcall EventDiggingRequest___ctor(EventDiggingRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventDiggingRequest__beginRequest(
        EventDiggingRequest_o *this,
        int32_t eventId,
        int32_t areaNum,
        System_Int32_array *idxX,
        System_Int32_array *idxY,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_418A36A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_19395/*"idxY"*/, v11);
    sub_B2C35C(&StringLiteral_16450/*"areaNum"*/, v12);
    sub_B2C35C(&StringLiteral_19394/*"idxX"*/, v13);
    byte_418A36A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18472/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16450/*"areaNum"*/, areaNum, 0LL);
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_19394/*"idxX"*/, &idxX->obj, 0LL);
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_19395/*"idxY"*/, &idxY->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventDiggingRequest__getURL(EventDiggingRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A369 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18456/*"event/digging"*/, v2);
    byte_418A369 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18456/*"event/digging"*/, 0LL);
}


void __fastcall EventDiggingRequest__requestCompleted(
        EventDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1
  RequestBase_o *v10; // x0

  if ( (byte_418A36B & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    byte_418A36B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(113, responseList, 0LL);
  if ( v6 && (v7 = v6, ResponseData__checkError_31019724(v6, 0LL)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    v10 = (RequestBase_o *)this;
  }
  else
  {
    v10 = (RequestBase_o *)this;
    v9 = 0LL;
  }
  RequestBase__completed(v10, v9, 0LL);
}