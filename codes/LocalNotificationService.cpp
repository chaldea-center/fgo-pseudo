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
  __int64 v4; // x4
  LocalNotificationService_o *nullObject; // x8
  Il2CppObject *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8D7C & 1) == 0 )
  {
    sub_B16FFC(&LocalNotificationService_TypeInfo, v1);
    byte_40F8D7C = 1;
  }
  nullObject = LocalNotificationService_TypeInfo->static_fields->nullObject;
  if ( !nullObject )
  {
    v6 = (Il2CppObject *)sub_B170CC(LocalNotificationService_TypeInfo, v1, v2, v3, v4);
    System_Object___ctor(v6, 0LL);
    static_fields = (BattleServantConfConponent_o *)LocalNotificationService_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v6;
    sub_B16F98(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
    return LocalNotificationService_TypeInfo->static_fields->nullObject;
  }
  return nullObject;
}