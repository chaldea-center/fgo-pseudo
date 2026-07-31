void LocalNotificationServiceAndroid___ctor(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t systemLanguage; // w0
  __int64 v5; // x20
  int32_t v6; // w19
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  System_String_o *v11; // x2

  if ( (byte_593A11D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_21FFC50(&StringLiteral_6916/*"Fate/Grand Order"*/);
    sub_21FFC50(&StringLiteral_2294/*"All notifications"*/);
    sub_21FFC50(&StringLiteral_26810/*"全ての通知"*/);
    sub_21FFC50(&StringLiteral_3464/*"CHANNEL_ALL"*/);
    byte_593A11D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
  systemLanguage = UnityEngine_Application__get_systemLanguage(0);
  v5 = StringLiteral_26810/*"全ての通知"*/;
  v6 = systemLanguage;
  v7 = StringLiteral_2294/*"All notifications"*/;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
  if ( v6 == 22 )
    v11 = (System_String_o *)v5;
  else
    v11 = (System_String_o *)v7;
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    (LocalNotificationManagerAndroid_o *)Instance,
    (System_String_o *)StringLiteral_3464/*"CHANNEL_ALL"*/,
    v11,
    v11,
    (System_String_o *)StringLiteral_6916/*"Fate/Grand Order"*/,
    v10);
}


void LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_593A11F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_593A11F = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  LocalNotificationManagerAndroid__Cancel((LocalNotificationManagerAndroid_o *)Instance, key, v6);
}


void LocalNotificationServiceAndroid__CancelAll(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_593A120 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_593A120 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
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

  if ( (byte_593A11E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_593A11E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
  LocalNotificationManagerAndroid__Schedule(
    (LocalNotificationManagerAndroid_o *)Instance,
    key,
    message,
    intervalSeconds,
    v10);
}