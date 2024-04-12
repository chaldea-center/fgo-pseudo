void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B47DB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    byte_42B47DB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v3,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._noticeIdTable,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2B7641C *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_42B47D9 & 1) == 0 )
  {
    sub_B52984(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_42B47D9 = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)noticeIdTable,
         (System_Xml_XmlQualifiedName_o *)key,
         (const MethodInfo_2F102FC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               noticeIdTable,
               key,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      }
      Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification(Item, 0LL);
      noticeIdTable = this->fields._noticeIdTable;
      if ( noticeIdTable )
      {
        System_Collections_Generic_Dictionary_Type__int___Remove(
          (System_Collections_Generic_Dictionary_Type__int__o *)noticeIdTable,
          (System_Type_o *)key,
          (const MethodInfo_2F11AA8 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(noticeIdTable, key);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_42B47DA & 1) == 0 )
  {
    sub_B52984(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_42B47DA = 1;
  }
  if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)noticeIdTable,
    (const MethodInfo_2F10264 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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
  __int64 v10; // x0

  if ( (byte_42B47D7 & 1) == 0 )
  {
    sub_B52984(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_42B47D7 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields._ChannelId_k__BackingField, 0LL) )
  {
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
    NotificationChannels = Unity_Notifications_Android_AndroidNotificationCenter__GetNotificationChannels(0LL);
    if ( !NotificationChannels )
      sub_B52A5C(0LL, v4);
    v5 = *(_QWORD *)&NotificationChannels->max_length;
    v6 = NotificationChannels;
    if ( (int)v5 >= 1 )
    {
      v7 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 6 )
      {
        if ( v7 >= (unsigned int)v5 )
        {
          v10 = sub_B52A88(NotificationChannels);
          sub_B52A28(v10, 0LL);
        }
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
      if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
      }
      Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(ChannelId_k__BackingField, 0LL);
      this->fields._RegisteredChannel_k__BackingField = 0;
    }
  }
}


void __fastcall LocalNotificationManagerAndroid__RegisterNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_o v3; // [xsp+0h] [xbp-A0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v4; // [xsp+30h] [xbp-70h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v5; // [xsp+60h] [xbp-40h] BYREF

  if ( (byte_42B47D6 & 1) == 0 )
  {
    sub_B52984(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    byte_42B47D6 = 1;
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
    *(_WORD *)&v5.fields._CanShowBadge_k__BackingField = 257;
    v5.fields._EnableVibration_k__BackingField = 0;
    v4 = v5;
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  float v22; // s4
  float v23; // s5
  float v24; // s6
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  Unity_Notifications_Android_AndroidNotification_o v28; // [xsp+0h] [xbp-200h] BYREF
  char v29[128]; // [xsp+80h] [xbp-180h] BYREF
  System_Nullable_Color__o v30; // [xsp+100h] [xbp-100h] BYREF
  System_Nullable_Color__o v31; // [xsp+120h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+138h] [xbp-C8h] BYREF
  char v33; // [xsp+1A0h] [xbp-60h]
  uint64_t dateData; // [xsp+1C8h] [xbp-38h] BYREF
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x3.8
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B47D8 & 1) == 0 )
  {
    sub_B52984(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    sub_B52984(&System_DateTime_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B52984(&Method_System_Nullable_Color___ctor__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_21321/*"notification_icon"*/);
    byte_42B47D8 = 1;
  }
  dateData = 0LL;
  memset(&methoda.name, 0, 0x80u);
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v9);
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v35.fields.dateData = (uint64_t)&dateData;
    v36.fields.dateData = System_DateTime__AddSeconds(v35, (double)intervalSeconds, 0LL).fields.dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v36,
      0LL);
    methoda.return_type = (const Il2CppType *)StringLiteral_21321/*"notification_icon"*/;
    sub_B52920(
      (BattleServantConfConponent_o *)&methoda.return_type,
      (System_Int32_array **)StringLiteral_21321/*"notification_icon"*/,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    methoda.rgctx_data = (const Il2CppRGCTXData *)string_TypeInfo->static_fields->Empty;
    sub_B52920(
      (BattleServantConfConponent_o *)&methoda.rgctx_data,
      (System_Int32_array **)methoda.rgctx_data,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v37.fields.r = 0.6196;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    v37.fields.g = 0.6196;
    v37.fields.b = 0.6196;
    UnityEngine_Color___ctor_41463668(v37, v22, v23, v24, &methoda);
    *(_QWORD *)&v38.fields.r = methoda.methodPointer;
    *(_QWORD *)&v38.fields.b = methoda.invoker_method;
    memset(&v31, 0, sizeof(v31));
    System_Nullable_Color____ctor(&v31, v38, (const MethodInfo_216F028 *)Method_System_Nullable_Color___ctor__);
    v30 = v31;
    Unity_Notifications_Android_AndroidNotification__set_Color(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      &v30,
      0LL);
    v33 = 1;
    memcpy(v29, &methoda.name, sizeof(v29));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
    memcpy(&v28, v29, sizeof(v28));
    v26 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v28, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_B52A5C(v26, v27);
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields._noticeIdTable,
      (System_Xml_XmlQualifiedName_o *)key,
      v26,
      (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  this->fields._ChannelId_k__BackingField = channelId;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)channelId,
    (System_String_array **)channelName,
    (System_String_array **)channelDescription,
    (System_Boolean_array **)notificationTitle,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ChannelName_k__BackingField,
    (System_Int32_array **)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ChannelDescription_k__BackingField,
    (System_Int32_array **)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._NotificationTitle_k__BackingField,
    (System_Int32_array **)notificationTitle,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ChannelDescription_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ChannelDescription_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ChannelId_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall LocalNotificationManagerAndroid__set_ChannelName(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ChannelName_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ChannelName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._NotificationTitle_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._NotificationTitle_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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