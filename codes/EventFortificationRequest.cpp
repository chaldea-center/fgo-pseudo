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

  if ( (byte_4C26039 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&StringLiteral_19407/*"getFieldID"*/, v7);
    sub_1C3B764(&StringLiteral_19507/*"graphic.shader"*/, v8);
    byte_4C26039 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19507/*"graphic.shader"*/, eventId, 0LL);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_19407/*"getFieldID"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C26038 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_19492/*"goldenrod"*/, v2);
    byte_4C26038 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_19492/*"goldenrod"*/, 0LL);
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

  if ( (byte_4C2603A & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    byte_4C2603A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(121, responseList, 0LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = ResponseData__checkError_42712632(v6, 0LL);
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