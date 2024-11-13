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
    sub_1BCAA3C(0LL, v2);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  LocalNotificationService_o *result; // x0
  LocalNotificationServiceAndroid_o *v7; // x19
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B179C0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalNotificationServiceAndroid_TypeInfo, v1, v2);
    sub_1BCA7E0(&NotificationPluginScript_TypeInfo, v4, v5);
    byte_4B179C0 = 1;
  }
  result = NotificationPluginScript_TypeInfo->static_fields->_service;
  if ( !result )
  {
    v7 = (LocalNotificationServiceAndroid_o *)sub_1BCAA2C(LocalNotificationServiceAndroid_TypeInfo, v1, v2, v3);
    LocalNotificationServiceAndroid___ctor(v7, v8);
    NotificationPluginScript_TypeInfo->static_fields->_service = (struct LocalNotificationService_o *)v7;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)NotificationPluginScript_TypeInfo->static_fields,
      (int64_t)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    return NotificationPluginScript_TypeInfo->static_fields->_service;
  }
  return result;
}