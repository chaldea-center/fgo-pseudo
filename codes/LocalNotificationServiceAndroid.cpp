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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4A0A319 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Application_TypeInfo, method);
    sub_1B686D4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v3);
    sub_1B686D4(&StringLiteral_6582/*"Fate/Grand Order"*/, v4);
    sub_1B686D4(&StringLiteral_2276/*"All notifications"*/, v5);
    sub_1B686D4(&StringLiteral_25261/*"全ての通知"*/, v6);
    sub_1B686D4(&StringLiteral_3419/*"CHANNEL_ALL"*/, v7);
    byte_4A0A319 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_systemLanguage(0LL) == 22 )
    v8 = (System_String_o **)&StringLiteral_25261/*"全ての通知"*/;
  else
    v8 = (System_String_o **)&StringLiteral_2276/*"All notifications"*/;
  v9 = *v8;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v11);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    (LocalNotificationManagerAndroid_o *)Instance,
    (System_String_o *)StringLiteral_3419/*"CHANNEL_ALL"*/,
    v9,
    v9,
    (System_String_o *)StringLiteral_6582/*"Fate/Grand Order"*/,
    v12);
}


void __fastcall LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A0A31B & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key);
    byte_4A0A31B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v5);
  LocalNotificationManagerAndroid__Cancel((LocalNotificationManagerAndroid_o *)Instance, key, v6);
}


void __fastcall LocalNotificationServiceAndroid__CancelAll(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A0A31C & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, method);
    byte_4A0A31C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v3);
  LocalNotificationManagerAndroid__CancelAll((LocalNotificationManagerAndroid_o *)Instance, v3);
}


void __fastcall LocalNotificationServiceAndroid__Schedule(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4A0A31A & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key);
    byte_4A0A31A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v9);
  LocalNotificationManagerAndroid__Schedule(
    (LocalNotificationManagerAndroid_o *)Instance,
    key,
    message,
    intervalSeconds,
    v10);
}