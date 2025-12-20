void BattleResetRequest___ctor(BattleResetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleResetRequest__beginRequest(BattleResetRequest_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4D2E30C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23086/*"questId"*/);
    byte_4D2E30C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23086/*"questId"*/, questId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleResetRequest__getURL(BattleResetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E30B & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17135/*"battle/reset"*/);
    byte_4D2E30B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17135/*"battle/reset"*/, 0);
}


void BattleResetRequest__requestCompleted(
        BattleResetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D2E30D & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E30D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(113, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
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