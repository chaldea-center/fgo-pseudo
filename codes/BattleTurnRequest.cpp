void BattleTurnRequest___ctor(BattleTurnRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleTurnRequest__beginRequest(BattleTurnRequest_o *this, int64_t battleId, const MethodInfo *method)
{
  if ( (byte_4D2E32D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17158/*"battleId"*/);
    byte_4D2E32D = 1;
  }
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_17158/*"battleId"*/, battleId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleTurnRequest__getMockData(BattleTurnRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E32C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E32C = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *BattleTurnRequest__getURL(BattleTurnRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E32B & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17143/*"battle/turn"*/);
    byte_4D2E32B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17143/*"battle/turn"*/, 0);
}


bool BattleTurnRequest__isBackgroundRequest(BattleTurnRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void BattleTurnRequest__requestCompleted(
        BattleTurnRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D2E32E & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E32E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(21, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}