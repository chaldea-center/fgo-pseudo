void __fastcall EventFortificationRequest___ctor(EventFortificationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationRequest__beginRequest(
        EventFortificationRequest_o *this,
        int32_t eventId,
        EnterUserSvtInfo_array *enterUserSvtInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x21

  if ( (byte_40FB680 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_18307, v7);
    sub_B16FFC(&StringLiteral_18403, v8);
    byte_40FB680 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18403, eventId, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_18307, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB67F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18390, v2);
    byte_40FB67F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18390, 0LL);
}


void __fastcall EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1
  RequestBase_o *v10; // x0

  if ( (byte_40FB681 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    byte_40FB681 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(120, responseList, 0LL);
  if ( v6 && (v7 = v6, ResponseData__checkError_30924960(v6, 0LL)) )
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