void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDD9A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
    byte_4BDDD9A = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_388D570 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}