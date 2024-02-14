void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4218D1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__, v5);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v6);
    byte_4218D1F = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v7,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._noticeIdTable,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_4218D1D & 1) == 0 )
  {
    sub_B0D8A4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Remove__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    byte_4218D1D = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)noticeIdTable,
         (System_Xml_XmlQualifiedName_o *)key,
         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               noticeIdTable,
               key,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
          (const MethodInfo_2E44C2C *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(noticeIdTable);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_4218D1E & 1) == 0 )
  {
    sub_B0D8A4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, v3);
    byte_4218D1E = 1;
  }
  if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)noticeIdTable,
    (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void __fastcall LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v4; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v5; // x20
  unsigned __int64 v6; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20
  __int64 v9; // x0

  if ( (byte_4218D1B & 1) == 0 )
  {
    sub_B0D8A4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    byte_4218D1B = 1;
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
      sub_B0D97C(0LL);
    v4 = *(_QWORD *)&NotificationChannels->max_length;
    v5 = NotificationChannels;
    if ( (int)v4 >= 1 )
    {
      v6 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 6 )
      {
        if ( v6 >= (unsigned int)v4 )
        {
          v9 = sub_B0D9A8(NotificationChannels);
          sub_B0D948(v9, 0LL);
        }
        NotificationChannels = (Unity_Notifications_Android_AndroidNotificationChannel_array *)System_String__op_Equality(
                                                                                                 *i,
                                                                                                 this->fields._ChannelId_k__BackingField,
                                                                                                 0LL);
        if ( ((unsigned __int8)NotificationChannels & 1) != 0 )
          break;
        LODWORD(v4) = v5->max_length;
        if ( (__int64)++v6 >= (int)v4 )
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

  if ( (byte_4218D1A & 1) == 0 )
  {
    sub_B0D8A4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, method);
    byte_4218D1A = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  float v27; // s4
  float v28; // s5
  float v29; // s6
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v31; // x0
  Unity_Notifications_Android_AndroidNotification_o v32; // [xsp+0h] [xbp-200h] BYREF
  char v33[128]; // [xsp+80h] [xbp-180h] BYREF
  System_Nullable_Color__o v34; // [xsp+100h] [xbp-100h] BYREF
  System_Nullable_Color__o v35; // [xsp+120h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+138h] [xbp-C8h] BYREF
  char v37; // [xsp+1A0h] [xbp-60h]
  uint64_t dateData; // [xsp+1C8h] [xbp-38h] BYREF
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x3.8
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4218D1C & 1) == 0 )
  {
    sub_B0D8A4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, key);
    sub_B0D8A4(&System_DateTime_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_B0D8A4(&Method_System_Nullable_Color___ctor__, v11);
    sub_B0D8A4(&string_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_21220/*"notification_icon"*/, v13);
    byte_4218D1C = 1;
  }
  dateData = 0LL;
  memset(&methoda.name, 0, 0x80u);
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v14);
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v39.fields.dateData = (uint64_t)&dateData;
    v40.fields.dateData = System_DateTime__AddSeconds(v39, (double)intervalSeconds, 0LL).fields.dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v40,
      0LL);
    methoda.return_type = (const Il2CppType *)StringLiteral_21220/*"notification_icon"*/;
    sub_B0D840(
      (BattleServantConfConponent_o *)&methoda.return_type,
      (System_Int32_array **)StringLiteral_21220/*"notification_icon"*/,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    methoda.rgctx_data = (const Il2CppRGCTXData *)string_TypeInfo->static_fields->Empty;
    sub_B0D840(
      (BattleServantConfConponent_o *)&methoda.rgctx_data,
      (System_Int32_array **)methoda.rgctx_data,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v41.fields.r = 0.6196;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    v41.fields.g = 0.6196;
    v41.fields.b = 0.6196;
    UnityEngine_Color___ctor_40757524(v41, v27, v28, v29, &methoda);
    *(_QWORD *)&v42.fields.r = methoda.methodPointer;
    *(_QWORD *)&v42.fields.b = methoda.invoker_method;
    memset(&v35, 0, sizeof(v35));
    System_Nullable_Color____ctor(&v35, v42, (const MethodInfo_297D0AC *)Method_System_Nullable_Color___ctor__);
    v34 = v35;
    Unity_Notifications_Android_AndroidNotification__set_Color(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      &v34,
      0LL);
    v37 = 1;
    memcpy(v33, &methoda.name, sizeof(v33));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
    memcpy(&v32, v33, sizeof(v32));
    v31 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v32, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_B0D97C(v31);
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields._noticeIdTable,
      (System_Xml_XmlQualifiedName_o *)key,
      v31,
      (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)channelId,
    (System_String_array **)channelName,
    (System_String_array **)channelDescription,
    (System_Boolean_array **)notificationTitle,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ChannelName_k__BackingField,
    (System_Int32_array **)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ChannelDescription_k__BackingField,
    (System_Int32_array **)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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