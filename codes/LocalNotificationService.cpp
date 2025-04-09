void __fastcall LocalNotificationService___ctor(LocalNotificationService_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LocalNotificationService__Cancel(
        LocalNotificationService_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  ;
}


void __fastcall LocalNotificationService__CancelAll(LocalNotificationService_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall LocalNotificationService__Schedule(
        LocalNotificationService_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t interval_seconds,
        const MethodInfo *method)
{
  ;
}


LocalNotificationService_o *__fastcall LocalNotificationService__getNullObject(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BC738 & 1) == 0 )
  {
    sub_1B4CF90(&LocalNotificationService_TypeInfo, v1);
    byte_49BC738 = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v3 = (Il2CppObject *)sub_1B4D1DC(LocalNotificationService_TypeInfo);
    System_Object___ctor(v3, 0LL);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v3;
    sub_1B4CF34((CGThumbnailListItem_o *)LocalNotificationService_TypeInfo->static_fields, (int32_t)v3, v4, v5);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}