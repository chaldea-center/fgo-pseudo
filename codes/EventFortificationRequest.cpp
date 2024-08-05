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

  if ( (byte_4A02242 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&StringLiteral_18961/*"enterUserSvtInfo"*/, v7);
    sub_1B64870(&StringLiteral_19061/*"eventId"*/, v8);
    byte_4A02242 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19061/*"eventId"*/, eventId, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_18961/*"enterUserSvtInfo"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A02241 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_19046/*"event/fortification"*/, v2);
    byte_4A02241 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_19046/*"event/fortification"*/, 0LL);
}


void __fastcall EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  bool v8; // w0
  System_String_o *v9; // x1
  Il2CppObject *success; // x20

  if ( (byte_4A02243 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, responseList);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v5);
    byte_4A02243 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(121, responseList, 0LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = ResponseData__checkError_40851148(v6, 0LL);
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