void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A317 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4A0A317 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36F7BB4 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}