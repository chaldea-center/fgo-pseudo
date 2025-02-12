void __fastcall TutorialSetRequest___ctor(TutorialSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialSetRequest__beginRequest(TutorialSetRequest_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4BB611E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19761/*"firstVisibleCharacter"*/, *(_QWORD *)&flagId);
    byte_4BB611E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19761/*"firstVisibleCharacter"*/, flagId, 0LL);
  this->fields.FlagId = flagId;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialSetRequest__getMockData(TutorialSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BB611D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB611D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialSetRequest__getURL(TutorialSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB611C & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_24492/*"tripledeskeywrap"*/, v2);
    byte_4BB611C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_24492/*"tripledeskeywrap"*/, 0LL);
}


void __fastcall TutorialSetRequest__requestCompleted(
        TutorialSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4BB611F & 1) == 0 )
  {
    sub_1C13D24(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB611F = 1;
  }
  if ( (byte_4BB60F2 & 1) == 0 )
  {
    sub_1C13D24(&TopHomeRequest_TypeInfo, responseList);
    byte_4BB60F2 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(36, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22595/*"offline"*/;
  else
    v9 = &StringLiteral_22421/*"newAttributes"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}