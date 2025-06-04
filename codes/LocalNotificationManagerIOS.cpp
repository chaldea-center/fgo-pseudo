void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4B039B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4B039B2 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38E0260 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}