void __fastcall LocalNotificationServiceAndroid___ctor(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o **v8; // x8
  System_String_o *v9; // x19
  LocalNotificationManagerAndroid_o *v10; // x0
  const MethodInfo *v11; // x5

  if ( (byte_4218D21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_6604/*"Fate/Grand Order"*/, v4);
    sub_B0D8A4(&StringLiteral_1887/*"All notifications"*/, v5);
    sub_B0D8A4(&StringLiteral_23937/*"全ての通知"*/, v6);
    sub_B0D8A4(&StringLiteral_2972/*"CHANNEL_ALL"*/, v7);
    byte_4218D21 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( UnityEngine_Application__get_systemLanguage(0LL) == 22 )
    v8 = (System_String_o **)&StringLiteral_23937/*"全ての通知"*/;
  else
    v8 = (System_String_o **)&StringLiteral_1887/*"All notifications"*/;
  v9 = *v8;
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v10 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v10 )
    sub_B0D97C(0LL);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    v10,
    (System_String_o *)StringLiteral_2972/*"CHANNEL_ALL"*/,
    v9,
    v9,
    (System_String_o *)StringLiteral_6604/*"Fate/Grand Order"*/,
    v11);
}


void __fastcall LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v4; // x1
  LocalNotificationManagerAndroid_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4218D23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v4);
    byte_4218D23 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v5 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v5 )
    sub_B0D97C(0LL);
  LocalNotificationManagerAndroid__Cancel(v5, key, v6);
}


void __fastcall LocalNotificationServiceAndroid__CancelAll(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  LocalNotificationManagerAndroid_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4218D24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v2);
    byte_4218D24 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v3 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  LocalNotificationManagerAndroid__CancelAll(v3, v4);
}


void __fastcall LocalNotificationServiceAndroid__Schedule(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  __int64 v8; // x1
  LocalNotificationManagerAndroid_o *v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4218D22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v8);
    byte_4218D22 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v9 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v9 )
    sub_B0D97C(0LL);
  LocalNotificationManagerAndroid__Schedule(v9, key, message, intervalSeconds, v10);
}