void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B179BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__, method, v2);
    byte_4B179BA = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}