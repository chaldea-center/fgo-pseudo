void LocalNotificationService___ctor(LocalNotificationService_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LocalNotificationService__Cancel(LocalNotificationService_o *this, System_String_o *key, const MethodInfo *method)
{
  ;
}


void LocalNotificationService__CancelAll(LocalNotificationService_o *this, const MethodInfo *method)
{
  ;
}


void LocalNotificationService__Schedule(
        LocalNotificationService_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t interval_seconds,
        const MethodInfo *method)
{
  ;
}


LocalNotificationService_o *LocalNotificationService__getNullObject(const MethodInfo *method)
{
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  if ( (byte_4CC8E41 & 1) == 0 )
  {
    sub_1C713B0(&LocalNotificationService_TypeInfo);
    byte_4CC8E41 = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v2 = (Il2CppObject *)sub_1C715FC(LocalNotificationService_TypeInfo);
    System_Object___ctor(v2, 0);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v2;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)LocalNotificationService_TypeInfo->static_fields,
      (int32_t)v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}