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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42ED08F & 1) == 0 )
  {
    sub_B5D5C4(&LocalNotificationService_TypeInfo, v1, v2, v3);
    byte_42ED08F = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v5 = (Il2CppObject *)sub_B5D694(LocalNotificationService_TypeInfo);
    System_Object___ctor(v5, 0LL);
    static_fields = (BattleServantConfConponent_o *)LocalNotificationService_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v5;
    sub_B5D560(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}