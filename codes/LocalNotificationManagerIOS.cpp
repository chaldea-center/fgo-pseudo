void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_49BC737 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_49BC737 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37B4928 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}