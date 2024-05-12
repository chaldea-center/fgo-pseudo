void __fastcall EventFortificationRequest___ctor(EventFortificationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventFortificationRequest__beginRequest(
        EventFortificationRequest_o *this,
        int32_t eventId,
        EnterUserSvtInfo_array *enterUserSvtInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x21

  if ( (byte_438CBCF & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&StringLiteral_18743/*"enterUserSvtInfo"*/);
    sub_B775C4(&StringLiteral_18839/*"eventId"*/);
    byte_438CBCF = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18839/*"eventId"*/, eventId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18743/*"enterUserSvtInfo"*/, v7, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CBCE & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18826/*"event/fortification"*/);
    byte_438CBCE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18826/*"event/fortification"*/, 0LL);
}


void __fastcall EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1
  RequestBase_o *v9; // x0

  if ( (byte_438CBD0 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    byte_438CBD0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(121, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    v9 = (RequestBase_o *)this;
  }
  else
  {
    v9 = (RequestBase_o *)this;
    v8 = 0LL;
  }
  RequestBase__completed(v9, v8, 0LL);
}