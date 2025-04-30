void __fastcall GachaHistoryRequest___ctor(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaHistoryRequest__beginRequest(
        GachaHistoryRequest_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  if ( (byte_4A4FF2C & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19479/*"gachaId"*/, *(_QWORD *)&gachaId);
    byte_4A4FF2C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19479/*"gachaId"*/, gachaId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaHistoryRequest__getMockData(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4FF2B & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v2);
    byte_4A4FF2B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall GachaHistoryRequest__getURL(GachaHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FF2A & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19478/*"gacha/drawHistory"*/, v2);
    byte_4A4FF2A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_19478/*"gacha/drawHistory"*/, 0LL);
}


void __fastcall GachaHistoryRequest__requestCompleted(
        GachaHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A4FF2D & 1) == 0 )
  {
    sub_1B863B8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FF2D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(70, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42282948(v7, 0LL) )
    v8 = &StringLiteral_22061/*"ok"*/;
  else
    v8 = &StringLiteral_21893/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}