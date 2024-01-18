void __fastcall NotificationPluginScript___ctor(NotificationPluginScript_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NotificationPluginScript__ClearAll(const MethodInfo *method)
{
  LocalNotificationService_o *v1; // x0
  __int64 v2; // x1

  v1 = NotificationPluginScript__Setup(method);
  if ( !v1 )
    sub_B2C434(0LL, v2);
  ((void (__fastcall *)(LocalNotificationService_o *, void *))v1->klass->vtable._6_CancelAll.method)(
    v1,
    v1->klass[1]._1.image);
}


void __fastcall NotificationPluginScript__ClearLocalNotification(System_String_o *key, const MethodInfo *method)
{
  LocalNotificationService_o *v3; // x0
  __int64 v4; // x1

  v3 = NotificationPluginScript__Setup((const MethodInfo *)key);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  ((void (__fastcall *)(LocalNotificationService_o *, System_String_o *, Il2CppMethodPointer))v3->klass->vtable._5_Cancel.method)(
    v3,
    key,
    v3->klass->vtable._6_CancelAll.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationPluginScript__SetLocalNotification(
        int32_t interval,
        System_String_o *message,
        System_String_o *key,
        const MethodInfo *method)
{
  LocalNotificationService_o *v7; // x0
  __int64 v8; // x1

  v7 = NotificationPluginScript__Setup(*(const MethodInfo **)&interval);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  ((void (__fastcall *)(LocalNotificationService_o *, System_String_o *, System_String_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._4_Schedule.method)(
    v7,
    key,
    message,
    (unsigned int)interval,
    v7->klass->vtable._5_Cancel.methodPtr);
}


LocalNotificationService_o *__fastcall NotificationPluginScript__Setup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  LocalNotificationService_o *result; // x0
  LocalNotificationServiceAndroid_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188449 & 1) == 0 )
  {
    sub_B2C35C(&LocalNotificationServiceAndroid_TypeInfo, v1);
    sub_B2C35C(&NotificationPluginScript_TypeInfo, v2);
    byte_4188449 = 1;
  }
  result = NotificationPluginScript_TypeInfo->static_fields->_service;
  if ( !result )
  {
    v4 = (LocalNotificationServiceAndroid_o *)sub_B2C42C(LocalNotificationServiceAndroid_TypeInfo);
    LocalNotificationServiceAndroid___ctor(v4, 0LL);
    static_fields = (BattleServantConfConponent_o *)NotificationPluginScript_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v4;
    sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
    return NotificationPluginScript_TypeInfo->static_fields->_service;
  }
  return result;
}