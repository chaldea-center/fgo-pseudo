void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4AB74F2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4AB74F2 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_378A744 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}