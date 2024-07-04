void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_48E3E06 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_48E3E06 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_35FC108 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}