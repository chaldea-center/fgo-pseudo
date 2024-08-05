void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBA7 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_49FFBA7 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EE830 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}