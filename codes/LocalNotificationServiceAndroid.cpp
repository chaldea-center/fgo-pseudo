void __fastcall LocalNotificationServiceAndroid___ctor(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_String_o **v20; // x8
  System_String_o *v21; // x19
  LocalNotificationManagerAndroid_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x5

  if ( (byte_42ED090 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6666/*"Fate/Grand Order"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1906/*"All notifications"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_24175/*"全ての通知"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3019/*"CHANNEL_ALL"*/, v17, v18, v19);
    byte_42ED090 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( UnityEngine_Application__get_systemLanguage(0LL) == 22 )
    v20 = (System_String_o **)&StringLiteral_24175/*"全ての通知"*/;
  else
    v20 = (System_String_o **)&StringLiteral_1906/*"All notifications"*/;
  v21 = *v20;
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v22 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v22 )
    sub_B5D69C(0LL, v23);
  LocalNotificationManagerAndroid__SetNotificationChannelParam(
    v22,
    (System_String_o *)StringLiteral_3019/*"CHANNEL_ALL"*/,
    v21,
    v21,
    (System_String_o *)StringLiteral_6666/*"Fate/Grand Order"*/,
    v24);
}


void __fastcall LocalNotificationServiceAndroid__Cancel(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  LocalNotificationManagerAndroid_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42ED092 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v5, v6, v7);
    byte_42ED092 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v8 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  LocalNotificationManagerAndroid__Cancel(v8, key, v10);
}


void __fastcall LocalNotificationServiceAndroid__CancelAll(
        LocalNotificationServiceAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  LocalNotificationManagerAndroid_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42ED093 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v4, v5, v6);
    byte_42ED093 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v7 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  LocalNotificationManagerAndroid__CancelAll(v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LocalNotificationServiceAndroid__Schedule(
        LocalNotificationServiceAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  LocalNotificationManagerAndroid_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42ED091 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__,
      (_DWORD)key,
      (_DWORD)message,
      *(_QWORD *)&intervalSeconds);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v8, v9, v10);
    byte_42ED091 = 1;
  }
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  v11 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  LocalNotificationManagerAndroid__Schedule(v11, key, message, intervalSeconds, v13);
}