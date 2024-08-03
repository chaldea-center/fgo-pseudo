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
  __int64 v2; // x2
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FDAAD & 1) == 0 )
  {
    sub_1B640C8(&LocalNotificationService_TypeInfo, v1);
    byte_49FDAAD = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v4 = (Il2CppObject *)sub_1B64314(LocalNotificationService_TypeInfo, v1, v2);
    System_Object___ctor(v4, 0LL);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v4;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)LocalNotificationService_TypeInfo->static_fields,
      (int32_t)v4,
      v5,
      v6);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}