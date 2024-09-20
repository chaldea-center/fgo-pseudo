void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B2AF & 1) == 0 )
  {
    sub_1B885B0(&EventServantEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_21986/*"nameReleaseCond"*/);
    byte_4A5B2AF = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_21986/*"nameReleaseCond"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_21986/*"nameReleaseCond"*/,
    v1,
    v2);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B2AE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4A5B2A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B2A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4A5B2A1 & 1) == 0 )
  {
    sub_1B885B0(&EventServantEntity_TypeInfo);
    byte_4A5B2A1 = 1;
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
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v8; // x20
  System_String_o *v9; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5B2A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16670/*"addMessageCommonReleaseId"*/);
    byte_4A5B2A9 = 1;
  }
  value = 0LL;
  v11 = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16670/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v11 )
        goto LABEL_14;
      v8 = (CommonReleaseMaster_o *)script;
      v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v11->klass->vtable[3].method)(
                                v11,
                                v11->klass->vtable[4].methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v9, 0LL);
      if ( !v8 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v8, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                      value,
                                      value->klass->vtable[4].methodPtr);
LABEL_14:
        sub_1B8880C(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B2AB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16665/*"addGetMessage"*/);
    byte_4A5B2AB = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16665/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool __fastcall EventServantEntity__GetIsCondClear(
        EventServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v10; // x0
  System_String_o **v11; // x1
  const MethodInfo *v12; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B2A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B2A5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B8880C(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1B88ACC(value);
  return EventServantEntity__TryGetBattleName(v10, v11, v12);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B2AA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16667/*"addJoinMessage"*/);
    byte_4A5B2AA = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16667/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B2AC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16668/*"addLeaveMessage"*/);
    byte_4A5B2AC = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16668/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2AD & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22982/*"ruby"*/);
    byte_4A5B2AD = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22982/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B2A6 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_20809/*"isProtectedDuringEvent"*/);
    byte_4A5B2A6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20809/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LOBYTE(script) = System_Convert__ToInt32(v4, 0LL) == 1;
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
  const MethodInfo *v5; // x2
  int32_t v6; // w3
  EventServantEntity_c *v7; // x0
  System_String_o *v9; // x1

  if ( (byte_4A5B2A4 & 1) == 0 )
  {
    sub_1B885B0(&EventServantEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B2A4 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)battleName, (int32_t)StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.battleName;
    *battleName = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)battleName, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w3
  EventServantEntity_c *v7; // x0
  System_String_o *v9; // x1

  if ( (byte_4A5B2A3 & 1) == 0 )
  {
    sub_1B885B0(&EventServantEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B2A3 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)name, (int32_t)StringLiteral_1/*""*/, (int32_t)v5, v6);
    return 0;
  }
  else
  {
    v9 = this->fields.name;
    *name = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)name, (int32_t)v9, (int32_t)v5, v6);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4A5B2A7 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B2A7 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_38479168(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19
  System_Object_array *v4; // x19
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
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

  if ( (byte_4A5B2A8 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_25052/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4A5B2A8 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38479168(endedAt, 0LL).fields._dateData;
  v4 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v45.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v45, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v5, v6, v7);
  if ( !v4 )
    sub_1B8880C(v8, v9);
  v12 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B886EC(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !v4->max_length )
    goto LABEL_24;
  v4->m_Items[0] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4->m_Items, (int32_t)v12, v10, v11);
  v46.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v46, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v13, v14, v15);
  v18 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B886EC(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[1], (int32_t)v18, v16, v17);
  v47.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v47, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v19, v20, v21);
  v24 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B886EC(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[2], (int32_t)v24, v22, v23);
  v48.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v48, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v25, v26, v27);
  v30 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B886EC(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[3], (int32_t)v30, v28, v29);
  v49.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v49, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v31, v32, v33);
  v36 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B886EC(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      v38 = sub_1B88830(v8);
      sub_1B886D8(v38, 0LL);
    }
  }
  if ( v4->max_length <= 4 )
LABEL_24:
    sub_1B88814(v8, v9);
  v4->m_Items[4] = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[4], (int32_t)v36, v34, v35);
  return System_String__Format_61721540((System_String_o *)StringLiteral_25052/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}