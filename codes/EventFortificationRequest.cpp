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

  if ( (byte_4A5EF2C & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19032/*"enterUserSvtInfo"*/);
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    byte_4A5EF2C = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(&enterUserSvtInfo->obj, 0, 0, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19132/*"eventId"*/, eventId, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_19032/*"enterUserSvtInfo"*/, v7, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventFortificationRequest__getURL(
        EventFortificationRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5EF2B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19117/*"event/fortification"*/);
    byte_4A5EF2B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19117/*"event/fortification"*/, 0LL);
}


void __fastcall EventFortificationRequest__requestCompleted(
        EventFortificationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  System_String_o *v8; // x1
  Il2CppObject *success; // x20

  if ( (byte_4A5EF2D & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    byte_4A5EF2D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(121, responseList, 0LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_41126424(v5, 0LL);
    v8 = 0LL;
    if ( v7 )
    {
      success = (Il2CppObject *)v6->fields.success;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v8 = JsonManager__toJson(success, 0, 0, 0LL);
    }
  }
  else
  {
    v8 = 0LL;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}