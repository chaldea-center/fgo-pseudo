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
    sub_B52A5C(0LL, v2);
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
    sub_B52A5C(0LL, v4);
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
    sub_B52A5C(0LL, v8);
  ((void (__fastcall *)(LocalNotificationService_o *, System_String_o *, System_String_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._4_Schedule.method)(
    v7,
    key,
    message,
    (unsigned int)interval,
    v7->klass->vtable._5_Cancel.methodPtr);
}


LocalNotificationService_o *__fastcall NotificationPluginScript__Setup(const MethodInfo *method)
{
  LocalNotificationService_o *result; // x0
  LocalNotificationServiceAndroid_o *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B06B3 & 1) == 0 )
  {
    sub_B52984(&LocalNotificationServiceAndroid_TypeInfo);
    sub_B52984(&NotificationPluginScript_TypeInfo);
    byte_42B06B3 = 1;
  }
  result = NotificationPluginScript_TypeInfo->static_fields->_service;
  if ( !result )
  {
    v2 = (LocalNotificationServiceAndroid_o *)sub_B52A54(LocalNotificationServiceAndroid_TypeInfo);
    LocalNotificationServiceAndroid___ctor(v2, 0LL);
    static_fields = (BattleServantConfConponent_o *)NotificationPluginScript_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v2;
    sub_B52920(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
    return NotificationPluginScript_TypeInfo->static_fields->_service;
  }
  return result;
}