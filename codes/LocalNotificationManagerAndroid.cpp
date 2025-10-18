void LocalNotificationManagerAndroid___ctor(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C449D1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
    byte_4C449D1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._noticeIdTable, (int32_t)v3, v4, v5);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39ED754 *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_4C449CF & 1) == 0 )
  {
    sub_1C37058(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4C449CF = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_345BDAC *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_1C372B4(noticeIdTable);
  }
}


void LocalNotificationManagerAndroid__CancelAll(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_4C449D0 & 1) == 0 )
  {
    sub_1C37058(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4C449D0 = 1;
  }
  if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_345AA88 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  il2cpp_array_size_t max_length; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v5; // x20
  unsigned __int64 v6; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20

  if ( (byte_4C449CD & 1) == 0 )
  {
    sub_1C37058(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4C449CD = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0) )
  {
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0);
    if ( !NotificationChannels )
      sub_1C372B4(0);
    max_length = NotificationChannels->max_length;
    v5 = NotificationChannels;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C372BC(NotificationChannels);
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(max_length) = v5->max_length;
        if ( (__int64)++v6 >= (int)max_length )
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

  if ( (byte_4C449CC & 1) == 0 )
  {
    sub_1C37058(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4C449CC = 1;
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v17; // x0
  Unity_Notifications_Android_AndroidNotification_o v18; // [xsp+0h] [xbp-2D0h] BYREF
  _BYTE dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v20; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v21; // [xsp+198h] [xbp-138h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B0h] [xbp-120h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C449CE & 1) == 0 )
  {
    sub_1C37058(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C37058(&Method_System_Nullable_Color___ctor__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_22316/*"notification_icon"*/);
    byte_4C449CE = 1;
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
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_22316/*"notification_icon"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&s.fields._SmallIcon_k__BackingField, StringLiteral_22316/*"notification_icon"*/, v12, v13);
    s.fields._LargeIcon_k__BackingField = string_TypeInfo->static_fields->Empty;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&s.fields._LargeIcon_k__BackingField,
      (int32_t)s.fields._LargeIcon_k__BackingField,
      v14,
      v15);
    v24.fields.r = 0.6196;
    v24.fields.a = 1.0;
    v24.fields.g = 0.6196;
    v24.fields.b = 0.6196;
    memset(&v21, 0, sizeof(v21));
    System_Nullable_Color____ctor(&v21, v24, (const MethodInfo_38C5CE0 *)Method_System_Nullable_Color___ctor__);
    v20 = v21;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v20, 0);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    memcpy(&v18, dest, sizeof(v18));
    v17 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v18, ChannelId_k__BackingField, 0);
    if ( !this->fields._noticeIdTable )
      sub_1C372B4(v17);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v17,
      (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields._ChannelId_k__BackingField = channelId;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields,
    (int32_t)channelId,
    (int32_t)channelName,
    (const MethodInfo *)channelDescription);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ChannelName_k__BackingField, (int32_t)channelName, v10, v11);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)channelDescription,
    v12,
    v13);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)notificationTitle,
    v14,
    v15);
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
  const MethodInfo *v3; // x3

  this->fields._ChannelDescription_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void LocalNotificationManagerAndroid__set_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChannelId_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChannelName_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ChannelName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void LocalNotificationManagerAndroid__set_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NotificationTitle_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void LocalNotificationManagerAndroid__set_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RegisteredChannel_k__BackingField = value;
}