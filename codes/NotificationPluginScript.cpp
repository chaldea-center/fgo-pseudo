void NotificationPluginScript___ctor(NotificationPluginScript_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void NotificationPluginScript__ClearAll(const MethodInfo *method)
{
  LocalNotificationService_o *v1; // x0

  v1 = NotificationPluginScript__Setup(method);
  if ( !v1 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(LocalNotificationService_o *, const MethodInfo *))v1->klass->vtable._6_CancelAll.methodPtr)(
    v1,
    v1->klass->vtable._6_CancelAll.method);
}


void NotificationPluginScript__ClearLocalNotification(System_String_o *key, const MethodInfo *method)
{
  LocalNotificationService_o *v3; // x0

  v3 = NotificationPluginScript__Setup((const MethodInfo *)key);
  if ( !v3 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(LocalNotificationService_o *, System_String_o *, const MethodInfo *))v3->klass->vtable._5_Cancel.methodPtr)(
    v3,
    key,
    v3->klass->vtable._5_Cancel.method);
}


// local variable allocation has failed, the output may be wrong!
void NotificationPluginScript__SetLocalNotification(
        int32_t interval,
        System_String_o *message,
        System_String_o *key,
        const MethodInfo *method)
{
  LocalNotificationService_o *v7; // x0

  v7 = NotificationPluginScript__Setup(*(const MethodInfo **)&interval);
  if ( !v7 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(LocalNotificationService_o *, System_String_o *, System_String_o *, _QWORD, const MethodInfo *))v7->klass->vtable._4_Schedule.methodPtr)(
    v7,
    key,
    message,
    (unsigned int)interval,
    v7->klass->vtable._4_Schedule.method);
}


LocalNotificationService_o *NotificationPluginScript__Setup(const MethodInfo *method)
{
  LocalNotificationService_o *result; // x0
  LocalNotificationServiceAndroid_o *v2; // x19
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C393DE & 1) == 0 )
  {
    sub_1C32C20(&LocalNotificationServiceAndroid_TypeInfo);
    sub_1C32C20(&NotificationPluginScript_TypeInfo);
    byte_4C393DE = 1;
  }
  result = NotificationPluginScript_TypeInfo->static_fields->_service;
  if ( !result )
  {
    v2 = (LocalNotificationServiceAndroid_o *)sub_1C32E6C(LocalNotificationServiceAndroid_TypeInfo);
    LocalNotificationServiceAndroid___ctor(v2, v3);
    NotificationPluginScript_TypeInfo->static_fields->_service = (struct LocalNotificationService_o *)v2;
    sub_1C32BC4((CGThumbnailListItem_o *)NotificationPluginScript_TypeInfo->static_fields, (int32_t)v2, v4, v5);
    return NotificationPluginScript_TypeInfo->static_fields->_service;
  }
  return result;
}