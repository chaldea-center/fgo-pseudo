void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FDAAB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__, v5);
    byte_49FDAAB = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._noticeIdTable, (int32_t)v6, v7, v8);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EC554 *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_49FDAA9 & 1) == 0 )
  {
    sub_1B640C8(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Remove__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    byte_49FDAA9 = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0LL);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_3171B5C *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_1B64324(noticeIdTable);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_49FDAAA & 1) == 0 )
  {
    sub_1B640C8(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, v3);
    byte_49FDAAA = 1;
  }
  if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_3170838 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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

  if ( (byte_49FDAA7 & 1) == 0 )
  {
    sub_1B640C8(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    byte_49FDAA7 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL) )
  {
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0LL);
    if ( !NotificationChannels )
      sub_1B64324(0LL);
    v5 = *(_QWORD *)&NotificationChannels->max_length;
    v6 = NotificationChannels;
    if ( (int)v5 >= 1 )
    {
      v7 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v7 >= (unsigned int)v5 )
          sub_1B6432C(NotificationChannels, v4);
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

  if ( (byte_49FDAA6 & 1) == 0 )
  {
    sub_1B640C8(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    byte_49FDAA6 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v20; // x0
  Unity_Notifications_Android_AndroidNotification_o v21; // [xsp+0h] [xbp-2D0h] BYREF
  char dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v23; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v24; // [xsp+198h] [xbp-138h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B0h] [xbp-120h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x3.8
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FDAA8 & 1) == 0 )
  {
    sub_1B640C8(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key);
    sub_1B640C8(&System_DateTime_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_1B640C8(&Method_System_Nullable_Color___ctor__, v11);
    sub_1B640C8(&string_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_22067/*"notification_icon"*/, v13);
    byte_49FDAA8 = 1;
  }
  memset(&s, 0, sizeof(s));
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v14);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    dateData = System_DateTime__get_Now(0LL).fields._dateData;
    v27.fields._dateData = (uint64_t)&dateData;
    v28.fields._dateData = System_DateTime__AddSeconds(v27, (double)intervalSeconds, 0LL).fields._dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      &s,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v28,
      0LL);
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_22067/*"notification_icon"*/;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&s.fields._SmallIcon_k__BackingField,
      StringLiteral_22067/*"notification_icon"*/,
      v15,
      v16);
    s.fields._LargeIcon_k__BackingField = string_TypeInfo->static_fields->Empty;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&s.fields._LargeIcon_k__BackingField,
      (int32_t)s.fields._LargeIcon_k__BackingField,
      v17,
      v18);
    v29.fields.r = 0.6196;
    v29.fields.a = 1.0;
    v29.fields.g = 0.6196;
    v29.fields.b = 0.6196;
    memset(&v24, 0, sizeof(v24));
    System_Nullable_Color____ctor(&v24, v29, (const MethodInfo_35CAEC8 *)Method_System_Nullable_Color___ctor__);
    v23 = v24;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v23, 0LL);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    memcpy(&v21, dest, sizeof(v21));
    v20 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v21, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_1B64324(v20);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v20,
      (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields,
    (int32_t)channelId,
    (int32_t)channelName,
    (int32_t)channelDescription);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)channelName,
    v10,
    v11);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)channelDescription,
    v12,
    v13);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ChannelName_k__BackingField = value;
  sub_1B6406C(
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
  sub_1B6406C(
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