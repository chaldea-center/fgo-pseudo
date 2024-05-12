void __fastcall NotificationRegistRequest___ctor(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_438BABC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22210/*"registPushKey"*/);
    byte_438BABC = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_22210/*"registPushKey"*/, key, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall NotificationRegistRequest__getMockData(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BABB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BABB = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NotificationRegistRequest__getURL(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438BABA & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_21585/*"notification/regist"*/);
    byte_438BABA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, method);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_21585/*"notification/regist"*/, 0LL);
}