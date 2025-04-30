void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4A4FDD5 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method);
    byte_4A4FDD5 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3839B98 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}