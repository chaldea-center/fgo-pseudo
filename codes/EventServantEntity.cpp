void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B44BBF & 1) == 0 )
  {
    sub_1BDB878(&EventServantEntity_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_22170/*"nameReleaseCond"*/, v4);
    byte_4B44BBF = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22170/*"nameReleaseCond"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)EventServantEntity_TypeInfo->static_fields, StringLiteral_22170/*"nameReleaseCond"*/, v2, v3);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44BBE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44BBE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4B44BB2 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_4B44BB2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4B44BB1 & 1) == 0 )
  {
    sub_1BDB878(&EventServantEntity_TypeInfo, method);
    byte_4B44BB1 = 1;
  }
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  return EventServantEntity__CreatePK(eventId, svtId, v2);
}


System_String_o *__fastcall EventServantEntity__GetAddMessage(
        EventServantEntity_o *this,
        System_String_o *key,
        System_String_o *defaultMessage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v11; // x20
  System_String_o *v12; // x0
  Il2CppObject *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B44BB9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&StringLiteral_16661/*"addMessageCommonReleaseId"*/, v9);
    byte_4B44BB9 = 1;
  }
  value = 0LL;
  v14 = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16661/*"addMessageCommonReleaseId"*/,
           &v14,
           (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v14 )
        goto LABEL_14;
      v11 = (CommonReleaseMaster_o *)script;
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v14->klass->vtable[3].method)(
                                 v14,
                                 v14->klass->vtable[4].methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v12, 0LL);
      if ( !v11 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v11, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                      value,
                                      value->klass->vtable[4].methodPtr);
LABEL_14:
        sub_1BDBAD4(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44BBB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16655/*"addGetMessage"*/, method);
    byte_4B44BBB = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16655/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool __fastcall EventServantEntity__GetIsCondClear(
        EventServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v13; // x0
  System_String_o **v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44BB5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BDB878(&string_TypeInfo, v7);
    byte_4B44BB5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BDBAD4(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
  {
    Instance = (Il2CppObject *)System_Int32__Parse((System_String_o *)value, 0LL);
    if ( MasterData_object )
    {
      LOBYTE(script) = CommonReleaseMaster__IsOpen(
                         (CommonReleaseMaster_o *)MasterData_object,
                         (int32_t)Instance,
                         0LL,
                         0,
                         0LL);
      return (unsigned __int8)script & 1;
    }
    goto LABEL_12;
  }
  sub_1BDBD94(value);
  return EventServantEntity__TryGetBattleName(v13, v14, v15);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44BBA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16658/*"addJoinMessage"*/, method);
    byte_4B44BBA = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16658/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44BBC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16659/*"addLeaveMessage"*/, method);
    byte_4B44BBC = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16659/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B44BBD & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    sub_1BDB878(&StringLiteral_23187/*"ruby"*/, v3);
    byte_4B44BBD = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23187/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B44BB6 & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BDB878(&StringLiteral_20955/*"isProtectedDuringEvent"*/, v4);
    byte_4B44BB6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20955/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LOBYTE(script) = System_Convert__ToInt32(v6, 0LL) == 1;
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool __fastcall EventServantEntity__TryGetBattleName(
        EventServantEntity_o *this,
        System_String_o **battleName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  EventServantEntity_c *v8; // x0
  System_String_o *v10; // x1

  if ( (byte_4B44BB4 & 1) == 0 )
  {
    sub_1BDB878(&EventServantEntity_TypeInfo, battleName);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B44BB4 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_7;
  v8 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v8 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v8->static_fields->NAME_RELEASE_COND, v6) )
  {
LABEL_7:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BDB81C((CGThumbnailListItem_o *)battleName, (int32_t)StringLiteral_1/*""*/, (int32_t)v6, v7);
    return 0;
  }
  else
  {
    v10 = this->fields.battleName;
    *battleName = v10;
    sub_1BDB81C((CGThumbnailListItem_o *)battleName, (int32_t)v10, (int32_t)v6, v7);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  EventServantEntity_c *v8; // x0
  System_String_o *v10; // x1

  if ( (byte_4B44BB3 & 1) == 0 )
  {
    sub_1BDB878(&EventServantEntity_TypeInfo, name);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B44BB3 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_7;
  v8 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v8 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v8->static_fields->NAME_RELEASE_COND, v6) )
  {
LABEL_7:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BDB81C((CGThumbnailListItem_o *)name, (int32_t)StringLiteral_1/*""*/, (int32_t)v6, v7);
    return 0;
  }
  else
  {
    v10 = this->fields.name;
    *name = v10;
    sub_1BDB81C((CGThumbnailListItem_o *)name, (int32_t)v10, (int32_t)v6, v7);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4B44BB7 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B44BB7 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_40279056(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t endedAt; // x19
  System_Object_array *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x20
  __int64 v38; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8

  if ( (byte_4B44BB8 & 1) == 0 )
  {
    sub_1BDB878(&System_DateTime_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&object___TypeInfo, v5);
    sub_1BDB878(&StringLiteral_25242/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v6);
    byte_4B44BB8 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_40279056(endedAt, 0LL).fields._dateData;
  v8 = (System_Object_array *)sub_1BDB920(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v45.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v45, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v9, v10, v11);
  if ( !v8 )
    sub_1BDBAD4(v12, v13);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1BDB9B4(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( !v8->max_length )
    goto LABEL_24;
  v8->m_Items[0] = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v16, v14, v15);
  v46.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v46, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v17, v18, v19);
  v21 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1BDB9B4(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_24;
  v8->m_Items[1] = v21;
  sub_1BDB81C((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v21, v14, v20);
  v47.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v47, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v22, v23, v24);
  v26 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1BDB9B4(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_24;
  v8->m_Items[2] = v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&v8->m_Items[2], (int32_t)v26, v14, v25);
  v48.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v48, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v27, v28, v29);
  v31 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1BDB9B4(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_24;
  v8->m_Items[3] = v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v31, v14, v30);
  v49.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v49, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v32, v33, v34);
  v36 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1BDB9B4(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_25:
      v38 = sub_1BDBAF8(v12);
      sub_1BDB9A0(v38, 0LL);
    }
  }
  if ( v8->max_length <= 4 )
LABEL_24:
    sub_1BDBADC(v12, v13, v14);
  v8->m_Items[4] = v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&v8->m_Items[4], (int32_t)v36, v14, v35);
  return System_String__Format_62613688((System_String_o *)StringLiteral_25242/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v8, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}