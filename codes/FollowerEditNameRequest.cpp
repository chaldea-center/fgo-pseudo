void __fastcall FollowerEditNameRequest___ctor(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowerEditNameRequest__beginRequest(
        FollowerEditNameRequest_o *this,
        int64_t supportDeckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  if ( (byte_4389756 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22926/*"supportDeckId"*/);
    sub_B775C4(&StringLiteral_18283/*"deckName"*/);
    byte_4389756 = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_22926/*"supportDeckId"*/, supportDeckId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18283/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowerEditNameRequest__getMockData(
        FollowerEditNameRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389755 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389755 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall FollowerEditNameRequest__getURL(FollowerEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4389754 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19160/*"follower/editName"*/);
    byte_4389754 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19160/*"follower/editName"*/, 0LL);
}


void __fastcall FollowerEditNameRequest__requestCompleted(
        FollowerEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4389757 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_4389757 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(60, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}