void NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CC8FA3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23125/*"registPushKey"*/);
    byte_4CC8FA3 = 1;
  }
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_23125/*"registPushKey"*/, key, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *NotificationRegistRequest__getMockData(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8FA2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FA2 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *NotificationRegistRequest__getURL(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8FA1 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_22413/*"notification/regist"*/);
    byte_4CC8FA1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_22413/*"notification/regist"*/, 0);
}