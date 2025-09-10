void EventServantEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2741D & 1) == 0 )
  {
    sub_1C2D490(&EventServantEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_22134/*"nameReleaseCond"*/);
    byte_4C2741D = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22134/*"nameReleaseCond"*/;
  sub_1C2D434((CGThumbnailListItem_o *)EventServantEntity_TypeInfo->static_fields, StringLiteral_22134/*"nameReleaseCond"*/, v1, v2);
}


void EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2741C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2741C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C27410 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27410 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4C2740F & 1) == 0 )
  {
    sub_1C2D490(&EventServantEntity_TypeInfo);
    byte_4C2740F = 1;
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

  if ( (byte_4C27417 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16673/*"addMessageCommonReleaseId"*/);
    byte_4C27417 = 1;
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
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16673/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1C2D6EC(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27419 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16667/*"addGetMessage"*/);
    byte_4C27419 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16667/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool EventServantEntity__GetIsCondClear(EventServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v10; // x0
  System_String_o **v11; // x1
  const MethodInfo *v12; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27413 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27413 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C2D6EC(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1C2D9AC(value);
  return EventServantEntity__TryGetBattleName(v10, v11, v12);
}


System_String_o *EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27418 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16670/*"addJoinMessage"*/);
    byte_4C27418 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16670/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2741A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16671/*"addLeaveMessage"*/);
    byte_4C2741A = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16671/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2741B & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_23145/*"ruby"*/);
    byte_4C2741B = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23145/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


bool EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C27414 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&StringLiteral_20931/*"isProtectedDuringEvent"*/);
    byte_4C27414 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20931/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4C27412 & 1) == 0 )
  {
    sub_1C2D490(&EventServantEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27412 = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)battleName, StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.battleName;
    *battleName = v9;
    sub_1C2D434((CGThumbnailListItem_o *)battleName, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


bool EventServantEntity__TryGetName(EventServantEntity_o *this, System_String_o **name, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  EventServantEntity_c *v7; // x0
  System_String_o *v9; // x1

  if ( (byte_4C27411 & 1) == 0 )
  {
    sub_1C2D490(&EventServantEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27411 = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)name, StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.name;
    *name = v9;
    sub_1C2D434((CGThumbnailListItem_o *)name, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


System_DateTime_o EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4C27415 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27415 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_41146052(endedAt, 0);
}


System_String_o *EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19
  System_Object_array *v4; // x19
  System_DateTime_o v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x20
  System_DateTime_o v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x20
  System_DateTime_o v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x20
  System_DateTime_o v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x20
  System_DateTime_o v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x20
  __int64 v39; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C27416 & 1) == 0 )
  {
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&StringLiteral_25131/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4C27416 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41146052(endedAt, 0).fields._dateData;
  v4 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 5);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v5, 0);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v6, v7, v8);
  if ( !v4 )
    sub_1C2D6EC(v9, v10);
  v13 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v4->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_24;
  v4->m_Items[0] = v13;
  sub_1C2D434((CGThumbnailListItem_o *)v4->m_Items, (int32_t)v13, v11, v12);
  v14.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v14, 0);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v15, v16, v17);
  v19 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v4->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->m_Items[1], (int32_t)v19, v11, v18);
  v20.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v20, 0);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v21, v22, v23);
  v25 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v4->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->m_Items[2], (int32_t)v25, v11, v24);
  v26.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v26, 0);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v27, v28, v29);
  v31 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v4->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->m_Items[3], (int32_t)v31, v11, v30);
  v32.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v32, 0);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v33, v34, v35);
  v37 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v4->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_25:
      v39 = sub_1C2D710(v9);
      sub_1C2D5B8(v39, 0);
    }
  }
  if ( LODWORD(v4->max_length) <= 4 )
LABEL_24:
    sub_1C2D6F4(v9, v10, v11);
  v4->m_Items[4] = v37;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->m_Items[4], (int32_t)v37, v11, v36);
  return System_String__Format_63499292((System_String_o *)StringLiteral_25131/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0);
}


int32_t EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}