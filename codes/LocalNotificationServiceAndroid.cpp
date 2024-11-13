void __fastcall LocalNotificationServiceAndroid___ctor(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  System_String_o **v15; // x8
  System_String_o *v16; // x19
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5

  if ( (byte_4B179BC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_6728/*"Fate/Grand Order"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_2301/*"All notifications"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_25600/*"全ての通知"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3469/*"CHANNEL_ALL"*/, v12, v13);
    byte_4B179BC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v14);
  if ( UnityEngine_Application__get_systemLanguage(0LL) == 22 )
    v15 = (System_String_o **)&StringLiteral_25600/*"全ての通知"*/;
  else
    v15 = (System_String_o **)&StringLiteral_2301/*"All notifications"*/;
  v16 = *v15;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    (LocalNotificationManagerAndroid_o *)Instance,
    (System_String_o *)StringLiteral_3469/*"CHANNEL_ALL"*/,
    v16,
    v16,
    (System_String_o *)StringLiteral_6728/*"Fate/Grand Order"*/,
    v19);
}


void __fastcall LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B179BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key, method);
    byte_4B179BE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  LocalNotificationManagerAndroid__Cancel((LocalNotificationManagerAndroid_o *)Instance, key, v6);
}


void __fastcall LocalNotificationServiceAndroid__CancelAll(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B179BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, method, v2);
    byte_4B179BF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  LocalNotificationManagerAndroid__CancelAll((LocalNotificationManagerAndroid_o *)Instance, v4);
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

  if ( (byte_4B179BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, key, message);
    byte_4B179BD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  LocalNotificationManagerAndroid__Schedule(
    (LocalNotificationManagerAndroid_o *)Instance,
    key,
    message,
    intervalSeconds,
    v10);
}