void LocalNotificationManagerAndroid___ctor(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59722F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
    byte_59722F7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._noticeIdTable, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_47A304C *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  __int64 v6; // x1
  int32_t Item; // w21

  if ( (byte_59722F5 & 1) == 0 )
  {
    sub_2213A60(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_59722F5 = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
         (Il2CppObject *)key,
         (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
               (Il2CppObject *)key,
               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !*(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v6);
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_object__int___Remove(
          (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
          (Il2CppObject *)key,
          (const MethodInfo_3FF5584 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(noticeIdTable, key);
  }
}


void LocalNotificationManagerAndroid__CancelAll(LocalNotificationManagerAndroid_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_59722F6 & 1) == 0 )
  {
    sub_2213A60(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_59722F6 = 1;
  }
  if ( !*(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_2213CDC(0, v3);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)noticeIdTable,
    (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v7; // x20
  unsigned __int64 v8; // x22
  System_String_o **i; // x23
  __int64 v10; // x1
  System_String_o *ChannelId_k__BackingField; // x20

  if ( (byte_59722F3 & 1) == 0 )
  {
    sub_2213A60(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_59722F3 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0) )
  {
    if ( !*(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v3);
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0);
    if ( !NotificationChannels )
      sub_2213CDC(0, v5);
    max_length = NotificationChannels->max_length;
    v7 = NotificationChannels;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 7 )
      {
        if ( v8 >= (unsigned int)max_length )
          sub_2213CE4(NotificationChannels);
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(max_length) = v7->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          return;
      }
      ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
      if ( !*(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v10);
      Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(ChannelId_k__BackingField, 0);
      this->fields._RegisteredChannel_k__BackingField = 0;
    }
  }
}


void LocalNotificationManagerAndroid__RegisterNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  System_String_o *ChannelId_k__BackingField; // x0
  __int64 v4; // x1
  int v5; // w9
  Unity_Notifications_Android_AndroidNotificationChannel_o v6; // [xsp+0h] [xbp-E0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v7; // [xsp+40h] [xbp-A0h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v8; // [xsp+80h] [xbp-60h] BYREF

  if ( (byte_59722F2 & 1) == 0 )
  {
    sub_2213A60(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_59722F2 = 1;
  }
  ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
  memset(&v8, 0, sizeof(v8));
  if ( !System_String__IsNullOrEmpty(ChannelId_k__BackingField, 0)
    && !System_String__IsNullOrEmpty(this->fields._ChannelDescription_k__BackingField, 0)
    && !System_String__IsNullOrEmpty(this->fields._ChannelName_k__BackingField, 0)
    && !this->fields._RegisteredChannel_k__BackingField )
  {
    Unity_Notifications_Android_AndroidNotificationChannel___ctor(
      &v8,
      this->fields._ChannelId_k__BackingField,
      this->fields._ChannelName_k__BackingField,
      this->fields._ChannelDescription_k__BackingField,
      3,
      0);
    *(_WORD *)&v8.fields._CanShowBadge_k__BackingField = 257;
    v8.fields._EnableVibration_k__BackingField = 0;
    *(_QWORD *)&v7.fields._LockScreenVisibility_k__BackingField = *(_QWORD *)&v8.fields._LockScreenVisibility_k__BackingField;
    v5 = *(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v7.fields._Id_k__BackingField = *(_OWORD *)&v8.fields._Id_k__BackingField;
    *(_OWORD *)&v7.fields._Description_k__BackingField = *(_OWORD *)&v8.fields._Description_k__BackingField;
    *(_OWORD *)&v7.fields._Importance_k__BackingField = *(_OWORD *)&v8.fields._Importance_k__BackingField;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v4);
    v6 = v7;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&v6, 0);
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
  __int64 v10; // x1
  System_DateTime_o v11; // x0
  System_DateTime_o v12; // x3
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  Unity_Notifications_Android_AndroidNotification_o v29; // [xsp+0h] [xbp-2D0h] BYREF
  _BYTE dest[192]; // [xsp+C0h] [xbp-210h] BYREF
  System_Nullable_Color__o v31; // [xsp+180h] [xbp-150h] BYREF
  System_Nullable_Color__o v32; // [xsp+1A0h] [xbp-130h] BYREF
  Unity_Notifications_Android_AndroidNotification_o s; // [xsp+1B8h] [xbp-118h] BYREF
  uint64_t dateData; // [xsp+278h] [xbp-58h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59722F4 & 1) == 0 )
  {
    sub_2213A60(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&Method_System_Nullable_Color___ctor__);
    sub_2213A60(&StringLiteral_23446/*"notification_icon"*/);
    byte_59722F4 = 1;
  }
  dateData = 0;
  memset(&s, 0, sizeof(s));
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v9);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v10);
    dateData = System_DateTime__get_Now(0).fields._dateData;
    v11.fields._dateData = (uint64_t)&dateData;
    v12.fields._dateData = System_DateTime__AddSeconds(v11, (double)intervalSeconds, 0).fields._dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      &s,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v12,
      0);
    s.fields._SmallIcon_k__BackingField = (struct System_String_o *)StringLiteral_23446/*"notification_icon"*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&s.fields._SmallIcon_k__BackingField,
      StringLiteral_23446/*"notification_icon"*/,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    s.fields._LargeIcon_k__BackingField = **(struct System_String_o ***)(qword_5984390 + 184);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&s.fields._LargeIcon_k__BackingField,
      (int32_t)s.fields._LargeIcon_k__BackingField,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v35.fields.a = 1.0;
    v35.fields.r = 0.6196;
    memset(&v32, 0, sizeof(v32));
    v35.fields.g = 0.6196;
    v35.fields.b = 0.6196;
    System_Nullable_Color____ctor(&v32, v35, (const MethodInfo_45E1964 *)Method_System_Nullable_Color___ctor__);
    v31 = v32;
    Unity_Notifications_Android_AndroidNotification__set_Color(&s, &v31, 0);
    s.fields._ShowTimestamp_k__BackingField = 1;
    memcpy(dest, &s, sizeof(dest));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( !*(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, v25);
    memcpy(&v29, dest, sizeof(v29));
    v27 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v29, ChannelId_k__BackingField, 0);
    if ( !this->fields._noticeIdTable )
      sub_2213CDC(v27, v28);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)this->fields._noticeIdTable,
      (Il2CppObject *)key,
      v27,
      (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields._ChannelId_k__BackingField = channelId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)channelId,
    channelName,
    channelDescription,
    (int32_t)notificationTitle,
    (int32_t)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NotificationTitle_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChannelDescription_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChannelDescription_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChannelId_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChannelName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChannelName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NotificationTitle_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NotificationTitle_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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