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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418CFC4 & 1) == 0 )
  {
    sub_B2C35C(&LocalNotificationService_TypeInfo, v1);
    byte_418CFC4 = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v3 = (Il2CppObject *)sub_B2C42C(LocalNotificationService_TypeInfo);
    System_Object___ctor(v3, 0LL);
    static_fields = (BattleServantConfConponent_o *)LocalNotificationService_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v3;
    sub_B2C2F8(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}