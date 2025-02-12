void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5F0E & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4BB5F0E = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_386A8A0 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}