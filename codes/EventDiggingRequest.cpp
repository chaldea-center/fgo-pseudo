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

  if ( (byte_4A002AA & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19062/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B64A00(&StringLiteral_20139/*"idxY"*/, v11);
    sub_1B64A00(&StringLiteral_16821/*"areaNum"*/, v12);
    sub_1B64A00(&StringLiteral_20138/*"idxX"*/, v13);
    byte_4A002AA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19062/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16821/*"areaNum"*/, areaNum, 0LL);
  RequestBase__addField_40854420((RequestBase_o *)this, (System_String_o *)StringLiteral_20138/*"idxX"*/, &idxX->obj, 0LL);
  RequestBase__addField_40854420((RequestBase_o *)this, (System_String_o *)StringLiteral_20139/*"idxY"*/, &idxY->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventDiggingRequest__getURL(EventDiggingRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A002A9 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_19044/*"event/digging"*/, v2);
    byte_4A002A9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_19044/*"event/digging"*/, 0LL);
}


void __fastcall EventDiggingRequest__requestCompleted(
        EventDiggingRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  bool v8; // w0
  System_String_o *v9; // x1
  Il2CppObject *success; // x20

  if ( (byte_4A002AB & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, responseList);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v5);
    byte_4A002AB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(114, responseList, 0LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = ResponseData__checkError_40851660(v6, 0LL);
    v9 = 0LL;
    if ( v8 )
    {
      success = (Il2CppObject *)v7->fields.success;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v9 = JsonManager__toJson(success, 0, 0, 0LL);
    }
  }
  else
  {
    v9 = 0LL;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}