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
  __int64 v3; // x3
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v5; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B179BB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalNotificationService_TypeInfo, v1, v2);
    byte_4B179BB = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v5 = (Il2CppObject *)sub_1BCAA2C(LocalNotificationService_TypeInfo, v1, v2, v3);
    System_Object___ctor(v5, 0LL);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v5;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)LocalNotificationService_TypeInfo->static_fields,
      (int64_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}