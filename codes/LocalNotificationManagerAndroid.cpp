void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B179B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__, v7, v8);
    byte_4B179B9 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v9,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._noticeIdTable, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  __int64 v12; // x1
  int32_t Item; // w21

  if ( (byte_4B179B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Remove__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9, v10);
    byte_4B179B7 = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v12);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0LL);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_325D9C4 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(noticeIdTable, key);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_4B179B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, v4, v5);
    byte_4B179B8 = 1;
  }
  if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_1BCAA3C(0LL, v6);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void __fastcall LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v8; // x20
  unsigned __int64 v9; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20

  if ( (byte_4B179B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method, v2);
    byte_4B179B5 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL) )
  {
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v4);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0LL);
    if ( !NotificationChannels )
      sub_1BCAA3C(0LL, v6);
    v7 = *(_QWORD *)&NotificationChannels->max_length;
    v8 = NotificationChannels;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v9 >= (unsigned int)v7 )
          sub_1BCAA44(NotificationChannels, v6);
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0LL);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(v7) = v8->max_length;
        if ( (__int64)++v9 >= (int)v7 )
          return;
      }
      ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
      if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v6);
      Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(ChannelId_k__BackingField, 0LL);
      this->fields._RegisteredChannel_k__BackingField = 0;
    }
  }
}


void __fastcall LocalNotificationManagerAndroid__RegisterNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Unity_Notifications_Android_AndroidNotificationChannel_o v5; // [xsp+0h] [xbp-E0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v6; // [xsp+40h] [xbp-A0h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v7; // [xsp+80h] [xbp-60h] BYREF

  if ( (byte_4B179B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method, v2);
    byte_4B179B4 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL)
    && !System_String__IsNullOrEmpty(this->fields._ChannelDescription_k__BackingField, 0LL)
    && !System_String__IsNullOrEmpty(this->fields._ChannelName_k__BackingField, 0LL)
    && !this->fields._RegisteredChannel_k__BackingField )
  {
    Unity_Notifications_Android_AndroidNotificationChannel___ctor(
      &v7,
      this->fields._ChannelId_k__BackingField,
      this->fields._ChannelName_k__BackingField,
      this->fields._ChannelDescription_k__BackingField,
      3,
      0LL);
    v7.fields._EnableVibration_k__BackingField = 0;
    *(_WORD *)&v7.fields._CanShowBadge_k__BackingField = 257;
    v6 = v7;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v4);
    v5 = v6;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&v5, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  Unity_Notifications_Android_AndroidNotification_o v37; // [xsp+0h] [xbp-2D0h] BYREF
  char dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v39; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v40; // [xsp+198h] [xbp-138h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B0h] [xbp-120h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  System_DateTime_o v43; // 0:x0.8
  System_DateTime_o v44; // 0:x3.8
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B179B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key, message);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_Color___ctor__, v13, v14);
    sub_1BCA7E0(&string_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_22394/*"notification_icon"*/, v17, v18);
    byte_4B179B6 = 1;
  }
  memset(&s, 0, sizeof(s));
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v19);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v20);
    dateData = System_DateTime__get_Now(0LL).fields._dateData;
    v43.fields._dateData = (uint64_t)&dateData;
    v44.fields._dateData = System_DateTime__AddSeconds(v43, (double)intervalSeconds, 0LL).fields._dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      &s,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v44,
      0LL);
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_22394/*"notification_icon"*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&s.fields._SmallIcon_k__BackingField,
      StringLiteral_22394/*"notification_icon"*/,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    s.fields._LargeIcon_k__BackingField = string_TypeInfo->static_fields->Empty;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&s.fields._LargeIcon_k__BackingField,
      (int64_t)s.fields._LargeIcon_k__BackingField,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v45.fields.r = 0.6196;
    v45.fields.a = 1.0;
    v45.fields.g = 0.6196;
    v45.fields.b = 0.6196;
    memset(&v40, 0, sizeof(v40));
    System_Nullable_Color____ctor(&v40, v45, (const MethodInfo_36BBBE0 *)Method_System_Nullable_Color___ctor__);
    v39 = v40;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v39, 0LL);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v33);
    memcpy(&v37, dest, sizeof(v37));
    v35 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v37, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_1BCAA3C(v35, v36);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v35,
      (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  this->fields._ChannelId_k__BackingField = channelId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)channelId,
    (int64_t)channelName,
    (int32_t)channelDescription,
    notificationTitle,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ChannelName_k__BackingField,
    (int64_t)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ChannelDescription_k__BackingField,
    (int64_t)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NotificationTitle_k__BackingField,
    (int64_t)notificationTitle,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ChannelDescription_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ChannelDescription_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelId(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ChannelId_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ChannelName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ChannelName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall LocalNotificationManagerAndroid__set_NotificationTitle(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NotificationTitle_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NotificationTitle_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall LocalNotificationManagerAndroid__set_RegisteredChannel(
        LocalNotificationManagerAndroid_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RegisteredChannel_k__BackingField = value;
}