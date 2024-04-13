void __fastcall LocalNotificationManagerAndroid___ctor(
        LocalNotificationManagerAndroid_o *this,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42ED08E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v11, v12, v13);
    byte_42ED08E = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v14,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields._noticeIdTable = (struct System_Collections_Generic_Dictionary_string__int__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._noticeIdTable,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A304CC *)Method_SingletonTemplate_LocalNotificationManagerAndroid___ctor__);
}


void __fastcall LocalNotificationManagerAndroid__Cancel(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0
  int32_t Item; // w21

  if ( (byte_42ED08C & 1) == 0 )
  {
    sub_B5D5C4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Remove__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v12, v13, v14);
    byte_42ED08C = 1;
  }
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)noticeIdTable,
         (System_Xml_XmlQualifiedName_o *)key,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    noticeIdTable = this->fields._noticeIdTable;
    if ( noticeIdTable )
    {
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               noticeIdTable,
               key,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
          (const MethodInfo_2F1CE64 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(noticeIdTable, key);
  }
}


void __fastcall LocalNotificationManagerAndroid__CancelAll(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *noticeIdTable; // x0

  if ( (byte_42ED08D & 1) == 0 )
  {
    sub_B5D5C4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, v5, v6, v7);
    byte_42ED08D = 1;
  }
  if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications(0LL);
  noticeIdTable = this->fields._noticeIdTable;
  if ( !noticeIdTable )
    sub_B5D69C(0LL, v8);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)noticeIdTable,
    (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void __fastcall LocalNotificationManagerAndroid__DeleteNotificationChannel(
        LocalNotificationManagerAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Unity_Notifications_Android_AndroidNotificationChannel_array *NotificationChannels; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  Unity_Notifications_Android_AndroidNotificationChannel_array *v8; // x20
  unsigned __int64 v9; // x22
  System_String_o **i; // x23
  System_String_o *ChannelId_k__BackingField; // x20
  __int64 v12; // x0

  if ( (byte_42ED08A & 1) == 0 )
  {
    sub_B5D5C4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED08A = 1;
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
      sub_B5D69C(0LL, v6);
    v7 = *(_QWORD *)&NotificationChannels->max_length;
    v8 = NotificationChannels;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      for ( i = &NotificationChannels->m_Items[0].fields._Id_k__BackingField; ; i += 6 )
      {
        if ( v9 >= (unsigned int)v7 )
        {
          v12 = sub_B5D6C8(NotificationChannels);
          sub_B5D668(v12, 0LL);
        }
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
  int v2; // w2
  __int64 v3; // x3
  Unity_Notifications_Android_AndroidNotificationChannel_o v5; // [xsp+0h] [xbp-A0h] BYREF
  Unity_Notifications_Android_AndroidNotificationChannel_o v6; // [xsp+30h] [xbp-70h]
  Unity_Notifications_Android_AndroidNotificationChannel_o v7; // [xsp+60h] [xbp-40h] BYREF

  if ( (byte_42ED089 & 1) == 0 )
  {
    sub_B5D5C4(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED089 = 1;
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
    *(_WORD *)&v7.fields._CanShowBadge_k__BackingField = 257;
    v7.fields._EnableVibration_k__BackingField = 0;
    v6 = v7;
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
    v5 = v6;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&v5, 0LL);
    this->fields._RegisteredChannel_k__BackingField = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LocalNotificationManagerAndroid__Schedule(
        LocalNotificationManagerAndroid_o *this,
        System_String_o *key,
        System_String_o *message,
        int32_t intervalSeconds,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  const MethodInfo *v24; // x2
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s4
  float v38; // s5
  float v39; // s6
  System_String_o *ChannelId_k__BackingField; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  Unity_Notifications_Android_AndroidNotification_o v43; // [xsp+0h] [xbp-200h] BYREF
  char v44[128]; // [xsp+80h] [xbp-180h] BYREF
  System_Nullable_Color__o v45; // [xsp+100h] [xbp-100h] BYREF
  System_Nullable_Color__o v46; // [xsp+120h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+138h] [xbp-C8h] BYREF
  char v48; // [xsp+1A0h] [xbp-60h]
  uint64_t dateData; // [xsp+1C8h] [xbp-38h] BYREF
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x3.8
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ED08B & 1) == 0 )
  {
    sub_B5D5C4(
      &Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo,
      (_DWORD)key,
      (_DWORD)message,
      *(_QWORD *)&intervalSeconds);
    sub_B5D5C4(&System_DateTime_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_Color___ctor__, v15, v16, v17);
    sub_B5D5C4(&string_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21429/*"notification_icon"*/, v21, v22, v23);
    byte_42ED08B = 1;
  }
  dateData = 0LL;
  memset(&methoda.name, 0, 0x80u);
  if ( this->fields._RegisteredChannel_k__BackingField )
  {
    LocalNotificationManagerAndroid__Cancel(this, key, v24);
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v50.fields.dateData = (uint64_t)&dateData;
    v51.fields.dateData = System_DateTime__AddSeconds(v50, (double)intervalSeconds, 0LL).fields.dateData;
    Unity_Notifications_Android_AndroidNotification___ctor(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      this->fields._NotificationTitle_k__BackingField,
      message,
      v51,
      0LL);
    methoda.return_type = (const Il2CppType *)StringLiteral_21429/*"notification_icon"*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)&methoda.return_type,
      (System_Int32_array **)StringLiteral_21429/*"notification_icon"*/,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    methoda.rgctx_data = (const Il2CppRGCTXData *)string_TypeInfo->static_fields->Empty;
    sub_B5D560(
      (BattleServantConfConponent_o *)&methoda.rgctx_data,
      (System_Int32_array **)methoda.rgctx_data,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v52.fields.r = 0.6196;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    v52.fields.g = 0.6196;
    v52.fields.b = 0.6196;
    UnityEngine_Color___ctor_41567816(v52, v37, v38, v39, &methoda);
    *(_QWORD *)&v53.fields.r = methoda.methodPointer;
    *(_QWORD *)&v53.fields.b = methoda.invoker_method;
    memset(&v46, 0, sizeof(v46));
    System_Nullable_Color____ctor(&v46, v53, (const MethodInfo_2348A24 *)Method_System_Nullable_Color___ctor__);
    v45 = v46;
    Unity_Notifications_Android_AndroidNotification__set_Color(
      (Unity_Notifications_Android_AndroidNotification_o *)&methoda.name,
      &v45,
      0LL);
    v48 = 1;
    memcpy(v44, &methoda.name, sizeof(v44));
    ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
    if ( (BYTE3(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    }
    memcpy(&v43, v44, sizeof(v43));
    v41 = Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(&v43, ChannelId_k__BackingField, 0LL);
    if ( !this->fields._noticeIdTable )
      sub_B5D69C(v41, v42);
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields._noticeIdTable,
      (System_Xml_XmlQualifiedName_o *)key,
      v41,
      (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)channelId,
    (System_String_array **)channelName,
    (System_String_array **)channelDescription,
    (System_Boolean_array **)notificationTitle,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields._ChannelName_k__BackingField = channelName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ChannelName_k__BackingField,
    (System_Int32_array **)channelName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ChannelDescription_k__BackingField = channelDescription;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ChannelDescription_k__BackingField,
    (System_Int32_array **)channelDescription,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._NotificationTitle_k__BackingField = notificationTitle;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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