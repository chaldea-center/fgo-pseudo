void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4C23808 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4C23808 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38C8C4C *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}