void NotificationRegistRequest___ctor(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_4C28E2F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22992/*"registPushKey"*/);
    byte_4C28E2F = 1;
  }
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_22992/*"registPushKey"*/, key, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *NotificationRegistRequest__getMockData(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28E2E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28E2E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *NotificationRegistRequest__getURL(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E2D & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22292/*"notification/regist"*/);
    byte_4C28E2D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_22292/*"notification/regist"*/, 0);
}