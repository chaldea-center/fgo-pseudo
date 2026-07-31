// attributes: thunk
void NotificationRegistRequest___ctor(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


void NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_593A287 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24162/*"registPushKey"*/);
    byte_593A287 = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_24162/*"registPushKey"*/, key, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *NotificationRegistRequest__getMockData(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A286 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A286 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *NotificationRegistRequest__getURL(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A285 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23395/*"notification/regist"*/);
    byte_593A285 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_23395/*"notification/regist"*/, 0);
}