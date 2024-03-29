void __fastcall NotificationRegistRequest___ctor(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_421504F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21817/*"registPushKey"*/, key);
    byte_421504F = 1;
  }
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_21817/*"registPushKey"*/, key, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall NotificationRegistRequest__getMockData(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_421504E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_421504E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NotificationRegistRequest__getURL(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_421504D & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21217/*"notification/regist"*/, v2);
    byte_421504D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, method);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_21217/*"notification/regist"*/, 0LL);
}