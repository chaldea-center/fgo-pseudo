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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4218D20 & 1) == 0 )
  {
    sub_B0D8A4(&LocalNotificationService_TypeInfo, v1);
    byte_4218D20 = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v4 = (Il2CppObject *)sub_B0D974(LocalNotificationService_TypeInfo, v1, v2);
    System_Object___ctor(v4, 0LL);
    static_fields = (BattleServantConfConponent_o *)LocalNotificationService_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v4;
    sub_B0D840(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}