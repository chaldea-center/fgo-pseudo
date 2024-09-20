void __fastcall LocalNotificationManagerIOS___ctor(LocalNotificationManagerIOS_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C8FC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
    byte_4A5C8FC = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_LocalNotificationManagerIOS___ctor__);
}