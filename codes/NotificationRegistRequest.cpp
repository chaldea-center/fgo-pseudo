void __fastcall NotificationRegistRequest___ctor(NotificationRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall NotificationRegistRequest__beginRequest(
        NotificationRegistRequest_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  if ( (byte_40F937C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21655/*"registPushKey"*/, key);
    byte_40F937C = 1;
  }
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_21655/*"registPushKey"*/, key, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall NotificationRegistRequest__getMockData(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F937B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F937B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NotificationRegistRequest__getURL(
        NotificationRegistRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F937A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21060/*"notification/regist"*/, v2);
    byte_40F937A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, method);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_21060/*"notification/regist"*/, 0LL);
}