void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4B683D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4B683D5 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38292E0 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}