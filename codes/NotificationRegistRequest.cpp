void __fastcall NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A5CA54 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22839/*"registPushKey"*/);
    byte_4A5CA54 = 1;
  }
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22839/*"registPushKey"*/, key, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall NotificationRegistRequest__getMockData(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5CA53 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA53 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NotificationRegistRequest__getURL(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA52 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22151/*"notification/regist"*/);
    byte_4A5CA52 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_22151/*"notification/regist"*/, 0LL);
}