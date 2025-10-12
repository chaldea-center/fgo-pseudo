void EventServantEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C37B13 & 1) == 0 )
  {
    sub_1C32C20(&EventServantEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_22151/*"nameReleaseCond"*/);
    byte_4C37B13 = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22151/*"nameReleaseCond"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)EventServantEntity_TypeInfo->static_fields, StringLiteral_22151/*"nameReleaseCond"*/, v1, v2);
}


void EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B12 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37B12 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C37B06 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C37B06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4C37B05 & 1) == 0 )
  {
    sub_1C32C20(&EventServantEntity_TypeInfo);
    byte_4C37B05 = 1;
  }
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  return EventServantEntity__CreatePK(eventId, svtId, v2);
}


System_String_o *EventServantEntity__GetAddMessage(
        EventServantEntity_o *this,
        System_String_o *key,
        System_String_o *defaultMessage,
        const MethodInfo *method)
{
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v8; // x20
  System_String_o *v9; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C37B0D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16675/*"addMessageCommonReleaseId"*/);
    byte_4C37B0D = 1;
  }
  value = 0;
  v11 = 0;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16675/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v11 )
        goto LABEL_14;
      v8 = (CommonReleaseMaster_o *)script;
      v9 = (System_String_o *)((System_String_o *(__fastcall *)(Il2CppObject *__return_ptr, Il2CppObject *, const MethodInfo *))v11->klass->vtable[3].methodPtr)(
                                v11,
                                v11,
                                v11->klass->vtable[3].method);
      script = (DataManager_o *)System_Int32__Parse(v9, 0);
      if ( !v8 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v8, (int32_t)script, 0, 0, 0) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                      value,
                                      value->klass->vtable[3].method);
LABEL_14:
        sub_1C32E7C(script);
      }
    }
  }
  return defaultMessage;
}


System_String_o *EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37B0F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16669/*"addGetMessage"*/);
    byte_4C37B0F = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16669/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool EventServantEntity__GetIsCondClear(EventServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v9; // x0
  System_String_o **v10; // x1
  const MethodInfo *v11; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37B09 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C37B09 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C32E7C(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
  {
    Instance = (Il2CppObject *)System_Int32__Parse((System_String_o *)value, 0);
    if ( MasterData_object )
    {
      LOBYTE(script) = CommonReleaseMaster__IsOpen(
                         (CommonReleaseMaster_o *)MasterData_object,
                         (int32_t)Instance,
                         0,
                         0,
                         0);
      return (unsigned __int8)script & 1;
    }
    goto LABEL_12;
  }
  sub_1C3313C(value);
  return EventServantEntity__TryGetBattleName(v9, v10, v11);
}


System_String_o *EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37B0E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16672/*"addJoinMessage"*/);
    byte_4C37B0E = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16672/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37B10 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16673/*"addLeaveMessage"*/);
    byte_4C37B10 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16673/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B11 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_23163/*"ruby"*/);
    byte_4C37B11 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23163/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


bool EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C37B0A & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_20943/*"isProtectedDuringEvent"*/);
    byte_4C37B0A = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20943/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LOBYTE(script) = System_Convert__ToInt32(v4, 0) == 1;
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool EventServantEntity__TryGetBattleName(
        EventServantEntity_o *this,
        System_String_o **battleName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  EventServantEntity_c *v7; // x0
  System_String_o *v9; // x1

  if ( (byte_4C37B08 & 1) == 0 )
  {
    sub_1C32C20(&EventServantEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37B08 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0) )
    goto LABEL_7;
  v7 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v7 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v7->static_fields->NAME_RELEASE_COND, v5) )
  {
LABEL_7:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)battleName, StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.battleName;
    *battleName = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)battleName, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


bool EventServantEntity__TryGetName(EventServantEntity_o *this, System_String_o **name, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  EventServantEntity_c *v7; // x0
  System_String_o *v9; // x1

  if ( (byte_4C37B07 & 1) == 0 )
  {
    sub_1C32C20(&EventServantEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37B07 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0) )
    goto LABEL_7;
  v7 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v7 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v7->static_fields->NAME_RELEASE_COND, v5) )
  {
LABEL_7:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)name, StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.name;
    *name = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)name, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


System_DateTime_o EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4C37B0B & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37B0B = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_41267996(endedAt, 0);
}


System_String_o *EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19
  System_Object_array *v4; // x19
  System_DateTime_o v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x20
  System_DateTime_o v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x20
  System_DateTime_o v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x20
  System_DateTime_o v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x20
  System_DateTime_o v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x20
  __int64 v57; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C37B0C & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_25149/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4C37B0C = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41267996(endedAt, 0).fields._dateData;
  v4 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 5);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v5, 0);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v6, v7, v8, v9, v10, v11);
  if ( !v4 )
    sub_1C32E7C(v12);
  v15 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C32D5C(v12, v4->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_24;
  v4->m_Items[0] = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)v4->m_Items, (int32_t)v15, v13, v14);
  v16.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v16, 0);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v17, v18, v19, v20, v21, v22);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C32D5C(v12, v4->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->m_Items[1], (int32_t)v25, v23, v24);
  v26.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v26, 0);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v27, v28, v29, v30, v31, v32);
  v35 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C32D5C(v12, v4->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = v35;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->m_Items[2], (int32_t)v35, v33, v34);
  v36.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v36, 0);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v37, v38, v39, v40, v41, v42);
  v45 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C32D5C(v12, v4->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = v45;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->m_Items[3], (int32_t)v45, v43, v44);
  v46.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v46, 0);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v47, v48, v49, v50, v51, v52);
  v55 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C32D5C(v12, v4->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_25:
      v57 = sub_1C32EA0(v12);
      sub_1C32D48(v57, 0);
    }
  }
  if ( LODWORD(v4->max_length) <= 4 )
LABEL_24:
    sub_1C32E84(v12);
  v4->m_Items[4] = v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->m_Items[4], (int32_t)v55, v53, v54);
  return System_String__Format_63559972((System_String_o *)StringLiteral_25149/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0);
}


int32_t EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}