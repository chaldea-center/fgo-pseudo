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
    sub_1B71828(0LL, v2);
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
    sub_1B71828(0LL, v4);
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
    sub_1B71828(0LL, v8);
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
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A2125B & 1) == 0 )
  {
    sub_1B715CC(&LocalNotificationServiceAndroid_TypeInfo, v1);
    sub_1B715CC(&NotificationPluginScript_TypeInfo, v2);
    byte_4A2125B = 1;
  }
  result = NotificationPluginScript_TypeInfo->static_fields->_service;
  if ( !result )
  {
    v4 = (LocalNotificationServiceAndroid_o *)sub_1B71818(LocalNotificationServiceAndroid_TypeInfo);
    LocalNotificationServiceAndroid___ctor(v4, v5);
    NotificationPluginScript_TypeInfo->static_fields->_service = (struct LocalNotificationService_o *)v4;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)NotificationPluginScript_TypeInfo->static_fields,
      (int32_t)v4,
      v6,
      v7);
    return NotificationPluginScript_TypeInfo->static_fields->_service;
  }
  return result;
}