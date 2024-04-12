void __fastcall LocalNotificationServiceAndroid___ctor(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x19
  LocalNotificationManagerAndroid_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5

  if ( (byte_42B47DD & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    sub_B52984(&StringLiteral_6630/*"Fate/Grand Order"*/);
    sub_B52984(&StringLiteral_1901/*"All notifications"*/);
    sub_B52984(&StringLiteral_24057/*"全ての通知"*/);
    sub_B52984(&StringLiteral_2992/*"CHANNEL_ALL"*/);
    byte_42B47DD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( UnityEngine_Application__get_systemLanguage(0LL) == 22 )
    v3 = (System_String_o **)&StringLiteral_24057/*"全ての通知"*/;
  else
    v3 = (System_String_o **)&StringLiteral_1901/*"All notifications"*/;
  v4 = *v3;
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v5 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    v5,
    (System_String_o *)StringLiteral_2992/*"CHANNEL_ALL"*/,
    v4,
    v4,
    (System_String_o *)StringLiteral_6630/*"Fate/Grand Order"*/,
    v7);
}


void __fastcall LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  LocalNotificationManagerAndroid_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42B47DF & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    byte_42B47DF = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v4 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  LocalNotificationManagerAndroid__Cancel(v4, key, v6);
}


void __fastcall LocalNotificationServiceAndroid__CancelAll(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  LocalNotificationManagerAndroid_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42B47E0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    byte_42B47E0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v2 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v2 )
    sub_B52A5C(0LL, v3);
  LocalNotificationManagerAndroid__CancelAll(v2, v3);
}


void __fastcall LocalNotificationServiceAndroid__Schedule(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  LocalNotificationManagerAndroid_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_42B47DE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    byte_42B47DE = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v8 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v8 )
    sub_B52A5C(0LL, v9);
  LocalNotificationManagerAndroid__Schedule(v8, key, message, intervalSeconds, v10);
}