void LocalNotificationServiceAndroid___ctor(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5

  if ( (byte_4D2E2E0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C94098(&StringLiteral_6651/*"Fate/Grand Order"*/);
    sub_1C94098(&StringLiteral_2187/*"All notifications"*/);
    sub_1C94098(&StringLiteral_25715/*"全ての通知"*/);
    sub_1C94098(&StringLiteral_3335/*"CHANNEL_ALL"*/);
    byte_4D2E2E0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_systemLanguage(0) == 22 )
    v3 = (System_String_o **)&StringLiteral_25715/*"全ての通知"*/;
  else
    v3 = (System_String_o **)&StringLiteral_2187/*"All notifications"*/;
  v4 = *v3;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    (LocalNotificationManagerAndroid_o *)Instance,
    (System_String_o *)StringLiteral_3335/*"CHANNEL_ALL"*/,
    v4,
    v4,
    (System_String_o *)StringLiteral_6651/*"Fate/Grand Order"*/,
    v7);
}


void LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2E2E2 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4D2E2E2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  LocalNotificationManagerAndroid__Cancel((LocalNotificationManagerAndroid_o *)Instance, key, v6);
}


void LocalNotificationServiceAndroid__CancelAll(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2E2E3 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4D2E2E3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  LocalNotificationManagerAndroid__CancelAll((LocalNotificationManagerAndroid_o *)Instance, v3);
}


void LocalNotificationServiceAndroid__Schedule(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2E2E1 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4D2E2E1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v9);
  LocalNotificationManagerAndroid__Schedule(
    (LocalNotificationManagerAndroid_o *)Instance,
    key,
    message,
    intervalSeconds,
    v10);
}