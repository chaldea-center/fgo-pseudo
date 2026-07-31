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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  if ( (byte_593A11C & 1) == 0 )
  {
    sub_21FFC50(&LocalNotificationService_TypeInfo);
    byte_593A11C = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v2 = (Il2CppObject *)sub_21FFEBC(LocalNotificationService_TypeInfo);
    System_Object___ctor(v2, 0);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)LocalNotificationService_TypeInfo->static_fields,
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