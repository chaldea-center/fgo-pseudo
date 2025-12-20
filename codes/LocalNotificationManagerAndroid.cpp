void LocalNotificationManagerAndroid___ctor(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E2DD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
    byte_4D2E2DD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3517510 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._noticeIdTable, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3ABAB5C *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_4D2E2DB & 1) == 0 )
  {
    sub_1C94098(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4D2E2DB = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_3517E44 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_3519370 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_1C942F0(noticeIdTable, key);
  }
}


void LocalNotificationManagerAndroid__CancelAll(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_4D2E2DC & 1) == 0 )
  {
    sub_1C94098(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4D2E2DC = 1;
  }
  if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_1C942F0(0, v3);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_351804C *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v6; // x20
  unsigned __int64 v7; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20

  if ( (byte_4D2E2D9 & 1) == 0 )
  {
    sub_1C94098(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4D2E2D9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0) )
  {
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0);
    if ( !NotificationChannels )
      sub_1C942F0(0, v4);
    max_length = NotificationChannels->max_length;
    v6 = NotificationChannels;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1C942F8(NotificationChannels);
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(max_length) = v6->max_length;
        if ( (__int64)++v7 >= (int)max_length )
          return;
      }
      ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(ChannelId_k__BackingField, 0);
      this->fields._RegisteredChannel_k__BackingField = 0;
    }
  }
}


void LocalNotificationManagerAndroid__RegisterNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_o v3; // [xsp+0h] [xbp-E0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v4; // [xsp+40h] [xbp-A0h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v5; // [xsp+80h] [xbp-60h] BYREF

  if ( (byte_4D2E2D8 & 1) == 0 )
  {
    sub_1C94098(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4D2E2D8 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0)
    && !System_String__IsNullOrEmpty(this->fields._ChannelDescription_k__BackingField, 0)
    && !System_String__IsNullOrEmpty(this->fields._ChannelName_k__BackingField, 0)
    && !this->fields._RegisteredChannel_k__BackingField )
  {
    Unity_Notifications_Android_AndroidNotificationChannel___ctor(
      &v5,
      this->fields._ChannelId_k__BackingField,
      this->fields._ChannelName_k__BackingField,
      this->fields._ChannelDescription_k__BackingField,
      3,
      0);
    v5.fields._EnableVibration_k__BackingField = 0;
    *(_WORD *)&v5.fields._CanShowBadge_k__BackingField = 257;
    v4 = v5;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    v3 = v4;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&v3, 0);
    this->fields._RegisteredChannel_k__BackingField = 1;
  }
}


void LocalNotificationManagerAndroid__Schedule(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  System_DateTime_o v10; // x0
  System_DateTime_o v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  Unity_Notifications_Android_AndroidNotification_o v27; // [xsp+0h] [xbp-2D0h] BYREF
  _BYTE dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v29; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v30; // [xsp+198h] [xbp-138h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B0h] [xbp-120h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E2DA & 1) == 0 )
  {
    sub_1C94098(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C94098(&Method_System_Nullable_Color___ctor__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_22525/*"notification_icon"*/);
    byte_4D2E2DA = 1;
  }
  memset(&s, 0, sizeof(s));
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v9);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    dateData = System_DateTime__get_Now(0).fields._dateData;
    v10.fields._dateData = (uint64_t)&dateData;
    v11.fields._dateData = System_DateTime__AddSeconds(v10, (double)intervalSeconds, 0).fields._dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      &s,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v11,
      0);
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_22525/*"notification_icon"*/;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&s.fields._SmallIcon_k__BackingField,
      StringLiteral_22525/*"notification_icon"*/,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    s.fields._LargeIcon_k__BackingField = string_TypeInfo->static_fields->Empty;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&s.fields._LargeIcon_k__BackingField,
      (int32_t)s.fields._LargeIcon_k__BackingField,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v33.fields.r = 0.6196;
    v33.fields.a = 1.0;
    v33.fields.g = 0.6196;
    v33.fields.b = 0.6196;
    memset(&v30, 0, sizeof(v30));
    System_Nullable_Color____ctor(&v30, v33, (const MethodInfo_3990928 *)Method_System_Nullable_Color___ctor__);
    v29 = v30;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v29, 0);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    memcpy(&v27, dest, sizeof(v27));
    v25 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v27, ChannelId_k__BackingField, 0);
    if ( !this->fields._noticeIdTable )
      sub_1C942F0(v25, v26);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v25,
      (const MethodInfo_3517EB0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
}


void LocalNotificationManagerAndroid__SetNotificationChannelParam(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *channelId,
        System_String_o *channelName,
        System_String_o *channelDescription,
        System_String_o *notificationTitle,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  this->fields._ChannelId_k__BackingField = channelId;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)channelId,
    (int32_t)channelName,
    (int32_t)channelDescription,
    notificationTitle,
    (int32_t)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)notificationTitle,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


System_String_o *LocalNotificationManagerAndroid__get_ChannelDescription(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelDescription_k__BackingField;
}


System_String_o *LocalNotificationManagerAndroid__get_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelId_k__BackingField;
}


System_String_o *LocalNotificationManagerAndroid__get_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelName_k__BackingField;
}


System_String_o *LocalNotificationManagerAndroid__get_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._NotificationTitle_k__BackingField;
}


bool LocalNotificationManagerAndroid__get_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._RegisteredChannel_k__BackingField;
}


void LocalNotificationManagerAndroid__set_ChannelDescription(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ChannelDescription_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LocalNotificationManagerAndroid__set_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ChannelId_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ChannelName_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LocalNotificationManagerAndroid__set_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._NotificationTitle_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LocalNotificationManagerAndroid__set_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RegisteredChannel_k__BackingField = value;
}