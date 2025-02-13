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
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BDDD9B & 1) == 0 )
  {
    sub_1C21E38(&LocalNotificationService_TypeInfo);
    byte_4BDDD9B = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v2 = (Il2CppObject *)sub_1C22084(LocalNotificationService_TypeInfo);
    System_Object___ctor(v2, 0LL);
    LocalNotificationService_TypeInfo->static_fields->nullObject = (struct LocalNotificationService_o *)v2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)LocalNotificationService_TypeInfo->static_fields,
      (int64_t)v2,
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