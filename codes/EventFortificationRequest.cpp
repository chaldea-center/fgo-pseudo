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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21

  if ( (byte_4B1A11B & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, *(_QWORD *)&eventId, enterUserSvtInfo);
    sub_1BCA7E0(&StringLiteral_19229/*"enterUserSvtInfo"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v9, v10);
    byte_4B1A11B = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&eventId);
  v11 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19329/*"eventId"*/, eventId, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_19229/*"enterUserSvtInfo"*/, v11, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1A11A & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19314/*"event/fortification"*/, v3, v4);
    byte_4B1A11A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19314/*"event/fortification"*/, 0LL);
}


void __fastcall EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  bool v9; // w0
  System_String_o *v10; // x1
  Il2CppObject *success; // x20

  if ( (byte_4B1A11C & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    byte_4B1A11C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v7 = ResponseCommandKind__SearchData(121, responseList, 0LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = ResponseData__checkError_41952396(v7, 0LL);
    v10 = 0LL;
    if ( v9 )
    {
      success = (Il2CppObject *)v8->fields.success;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, 0LL);
      v10 = JsonManager__toJson(success, 0, 0, 0LL);
    }
  }
  else
  {
    v10 = 0LL;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}