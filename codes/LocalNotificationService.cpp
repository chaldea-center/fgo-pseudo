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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43564AE & 1) == 0 )
  {
    sub_B70694(&LocalNotificationService_TypeInfo);
    byte_43564AE = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v2 = (Il2CppObject *)sub_B70764(LocalNotificationService_TypeInfo);
    System_Object___ctor(v2, 0LL);
    static_fields = (BattleServantConfConponent_o *)LocalNotificationService_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v2;
    sub_B70630(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}