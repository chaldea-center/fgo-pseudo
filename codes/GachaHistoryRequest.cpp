void __fastcall GachaHistoryRequest___ctor(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall GachaHistoryRequest__beginRequest(
        GachaHistoryRequest_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  if ( (byte_438F163 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19331/*"gachaId"*/);
    byte_438F163 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19331/*"gachaId"*/, gachaId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaHistoryRequest__getMockData(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438F162 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438F162 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall GachaHistoryRequest__getURL(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438F161 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19330/*"gacha/drawHistory"*/);
    byte_438F161 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19330/*"gacha/drawHistory"*/, 0LL);
}


void __fastcall GachaHistoryRequest__requestCompleted(
        GachaHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438F164 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438F164 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}