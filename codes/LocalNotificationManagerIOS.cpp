void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4B38986 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4B38986 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37FE160 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}