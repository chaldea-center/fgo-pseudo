void __fastcall NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B46564 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23034/*"registPushKey"*/, key);
    byte_4B46564 = 1;
  }
  RequestBase__addField_43151112((RequestBase_o *)this, (System_String_o *)StringLiteral_23034/*"registPushKey"*/, key, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall NotificationRegistRequest__getMockData(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B46563 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B46563 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NotificationRegistRequest__getURL(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46562 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_22330/*"notification/regist"*/, v2);
    byte_4B46562 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_22330/*"notification/regist"*/, 0LL);
}