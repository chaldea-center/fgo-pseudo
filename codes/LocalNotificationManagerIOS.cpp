void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4A71610 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4A71610 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_374D558 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}