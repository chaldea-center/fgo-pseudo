void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4B46404 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4B46404 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39167A0 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}