void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC560 & 1) == 0 )
  {
    sub_1B640C8(&EventServantEntity_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_21899/*"nameReleaseCond"*/, v4);
    byte_49FC560 = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_21899/*"nameReleaseCond"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_21899/*"nameReleaseCond"*/,
    v2,
    v3);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC55F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC55F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_49FC553 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_49FC553 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_49FC552 & 1) == 0 )
  {
    sub_1B640C8(&EventServantEntity_TypeInfo, method);
    byte_49FC552 = 1;
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

  if ( (byte_49FC55A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_16601/*"addMessageCommonReleaseId"*/, v9);
    byte_49FC55A = 1;
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
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16601/*"addMessageCommonReleaseId"*/,
           &v14,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1B64324(script);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC55C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16596/*"addGetMessage"*/, method);
    byte_49FC55C = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16596/*"addGetMessage"*/, this->fields.getMessage, v2);
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
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v12; // x0
  System_String_o **v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC556 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    byte_49FC556 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1B645E4(value);
  return EventServantEntity__TryGetBattleName(v12, v13, v14);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC55B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16598/*"addJoinMessage"*/, method);
    byte_49FC55B = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16598/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC55D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16599/*"addLeaveMessage"*/, method);
    byte_49FC55D = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16599/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49FC55E & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22887/*"ruby"*/, v3);
    byte_49FC55E = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22887/*"ruby"*/,
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

  if ( (byte_49FC557 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B640C8(&StringLiteral_20727/*"isProtectedDuringEvent"*/, v4);
    byte_49FC557 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20727/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int32_t v7; // w3
  EventServantEntity_c *v8; // x0
  System_String_o *v10; // x1

  if ( (byte_49FC555 & 1) == 0 )
  {
    sub_1B640C8(&EventServantEntity_TypeInfo, battleName);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FC555 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)battleName, (int32_t)StringLiteral_1/*""*/, (int32_t)v6, v7);
    return 0;
  }
  else
  {
    v10 = this->fields.battleName;
    *battleName = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)battleName, (int32_t)v10, (int32_t)v6, v7);
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
  int32_t v7; // w3
  EventServantEntity_c *v8; // x0
  System_String_o *v10; // x1

  if ( (byte_49FC554 & 1) == 0 )
  {
    sub_1B640C8(&EventServantEntity_TypeInfo, name);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FC554 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)name, (int32_t)StringLiteral_1/*""*/, (int32_t)v6, v7);
    return 0;
  }
  else
  {
    v10 = this->fields.name;
    *name = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)name, (int32_t)v10, (int32_t)v6, v7);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_49FC558 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FC558 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_38078100(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t endedAt; // x19
  System_Object_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x20
  __int64 v27; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8

  if ( (byte_49FC559 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_24952/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v6);
    byte_49FC559 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38078100(endedAt, 0LL).fields._dateData;
  v8 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v34.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v34, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v8 )
    sub_1B64324(v9);
  v13 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1B64204(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( !v8->max_length )
    goto LABEL_24;
  v8->m_Items[0] = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  v35.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v35, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v16 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1B64204(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_24;
  v8->m_Items[1] = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v16, v14, v15);
  v36.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v36, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v19 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1B64204(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_24;
  v8->m_Items[2] = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], (int32_t)v19, v17, v18);
  v37.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v37, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v22 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1B64204(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_24;
  v8->m_Items[3] = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v22, v20, v21);
  v38.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v38, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v25 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1B64204(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_25:
      v27 = sub_1B64348(v9);
      sub_1B641F0(v27, 0LL);
    }
  }
  if ( v8->max_length <= 4 )
LABEL_24:
    sub_1B6432C(v9, v10);
  v8->m_Items[4] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], (int32_t)v25, v23, v24);
  return System_String__Format_61389904((System_String_o *)StringLiteral_24952/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v8, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}