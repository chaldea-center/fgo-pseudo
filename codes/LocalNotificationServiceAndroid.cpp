void LocalNotificationServiceAndroid___ctor(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4C449D4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C37058(&StringLiteral_6644/*"Fate/Grand Order"*/);
    sub_1C37058(&StringLiteral_2189/*"All notifications"*/);
    sub_1C37058(&StringLiteral_25462/*"全ての通知"*/);
    sub_1C37058(&StringLiteral_3332/*"CHANNEL_ALL"*/);
    byte_4C449D4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_systemLanguage(0) == 22 )
    v3 = (System_String_o **)&StringLiteral_25462/*"全ての通知"*/;
  else
    v3 = (System_String_o **)&StringLiteral_2189/*"All notifications"*/;
  v4 = *v3;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    (LocalNotificationManagerAndroid_o *)Instance,
    (System_String_o *)StringLiteral_3332/*"CHANNEL_ALL"*/,
    v4,
    v4,
    (System_String_o *)StringLiteral_6644/*"Fate/Grand Order"*/,
    v6);
}


void LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C449D6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4C449D6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  LocalNotificationManagerAndroid__Cancel((LocalNotificationManagerAndroid_o *)Instance, key, v5);
}


void LocalNotificationServiceAndroid__CancelAll(LocalNotificationServiceAndroid_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C449D7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4C449D7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  const MethodInfo *v9; // x4

  if ( (byte_4C449D5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    byte_4C449D5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  LocalNotificationManagerAndroid__Schedule(
    (LocalNotificationManagerAndroid_o *)Instance,
    key,
    message,
    intervalSeconds,
    v9);
}