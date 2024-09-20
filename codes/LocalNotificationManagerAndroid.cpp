void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C8FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
    byte_4A5C8FB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._noticeIdTable, (int32_t)v3, v4, v5);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_4A5C8F9 & 1) == 0 )
  {
    sub_1B885B0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4A5C8F9 = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0LL);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_31BF78C *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_1B8880C(noticeIdTable, key);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_4A5C8FA & 1) == 0 )
  {
    sub_1B885B0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4A5C8FA = 1;
  }
  if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_31BE468 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void __fastcall LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v6; // x20
  unsigned __int64 v7; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20

  if ( (byte_4A5C8F7 & 1) == 0 )
  {
    sub_1B885B0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4A5C8F7 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL) )
  {
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0LL);
    if ( !NotificationChannels )
      sub_1B8880C(0LL, v4);
    v5 = *(_QWORD *)&NotificationChannels->max_length;
    v6 = NotificationChannels;
    if ( (int)v5 >= 1 )
    {
      v7 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v7 >= (unsigned int)v5 )
          sub_1B88814(NotificationChannels, v4);
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0LL);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(v5) = v6->max_length;
        if ( (__int64)++v7 >= (int)v5 )
          return;
      }
      ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(ChannelId_k__BackingField, 0LL);
      this->fields._RegisteredChannel_k__BackingField = 0;
    }
  }
}


void __fastcall LocalNotificationManagerAndroid__RegisterNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_o v3; // [xsp+0h] [xbp-E0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v4; // [xsp+40h] [xbp-A0h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v5; // [xsp+80h] [xbp-60h] BYREF

  if ( (byte_4A5C8F6 & 1) == 0 )
  {
    sub_1B885B0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_4A5C8F6 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL)
    && !System_String__IsNullOrEmpty(this->fields._ChannelDescription_k__BackingField, 0LL)
    && !System_String__IsNullOrEmpty(this->fields._ChannelName_k__BackingField, 0LL)
    && !this->fields._RegisteredChannel_k__BackingField )
  {
    Unity_Notifications_Android_AndroidNotificationChannel___ctor(
      &v5,
      this->fields._ChannelId_k__BackingField,
      this->fields._ChannelName_k__BackingField,
      this->fields._ChannelDescription_k__BackingField,
      3,
      0LL);
    v5.fields._EnableVibration_k__BackingField = 0;
    *(_WORD *)&v5.fields._CanShowBadge_k__BackingField = 257;
    v4 = v5;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    v3 = v4;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&v3, 0LL);
    this->fields._RegisteredChannel_k__BackingField = 1;
  }
}


void __fastcall LocalNotificationManagerAndroid__Schedule(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  Unity_Notifications_Android_AndroidNotification_o v17; // [xsp+0h] [xbp-2D0h] BYREF
  char dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v19; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v20; // [xsp+198h] [xbp-138h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B0h] [xbp-120h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x3.8
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5C8F8 & 1) == 0 )
  {
    sub_1B885B0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&Method_System_Nullable_Color___ctor__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22155/*"notification_icon"*/);
    byte_4A5C8F8 = 1;
  }
  memset(&s, 0, sizeof(s));
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v9);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    dateData = System_DateTime__get_Now(0LL).fields._dateData;
    v23.fields._dateData = (uint64_t)&dateData;
    v24.fields._dateData = System_DateTime__AddSeconds(v23, (double)intervalSeconds, 0LL).fields._dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      &s,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v24,
      0LL);
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_22155/*"notification_icon"*/;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&s.fields._SmallIcon_k__BackingField,
      StringLiteral_22155/*"notification_icon"*/,
      v10,
      v11);
    s.fields._LargeIcon_k__BackingField = string_TypeInfo->static_fields->Empty;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&s.fields._LargeIcon_k__BackingField,
      (int32_t)s.fields._LargeIcon_k__BackingField,
      v12,
      v13);
    v25.fields.r = 0.6196;
    v25.fields.a = 1.0;
    v25.fields.g = 0.6196;
    v25.fields.b = 0.6196;
    memset(&v20, 0, sizeof(v20));
    System_Nullable_Color____ctor(&v20, v25, (const MethodInfo_3617400 *)Method_System_Nullable_Color___ctor__);
    v19 = v20;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v19, 0LL);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    memcpy(&v17, dest, sizeof(v17));
    v15 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v17, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_1B8880C(v15, v16);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v15,
      (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
}


void __fastcall LocalNotificationManagerAndroid__SetNotificationChannelParam(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *channelId,
        System_String_o *channelName,
        System_String_o *channelDescription,
        System_String_o *notificationTitle,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  this->fields._ChannelId_k__BackingField = channelId;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields,
    (int32_t)channelId,
    (int32_t)channelName,
    (int32_t)channelDescription);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)channelName,
    v10,
    v11);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)channelDescription,
    v12,
    v13);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)notificationTitle,
    v14,
    v15);
}


System_String_o *__fastcall LocalNotificationManagerAndroid__get_ChannelDescription(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelDescription_k__BackingField;
}


System_String_o *__fastcall LocalNotificationManagerAndroid__get_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelId_k__BackingField;
}


System_String_o *__fastcall LocalNotificationManagerAndroid__get_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._ChannelName_k__BackingField;
}


System_String_o *__fastcall LocalNotificationManagerAndroid__get_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._NotificationTitle_k__BackingField;
}


bool __fastcall LocalNotificationManagerAndroid__get_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  return this->fields._RegisteredChannel_k__BackingField;
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelDescription(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ChannelDescription_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ChannelId_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ChannelName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall LocalNotificationManagerAndroid__set_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._NotificationTitle_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall LocalNotificationManagerAndroid__set_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RegisteredChannel_k__BackingField = value;
}