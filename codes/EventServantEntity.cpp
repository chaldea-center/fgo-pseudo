void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B1633E & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22223/*"nameReleaseCond"*/, v8, v9);
    byte_4B1633E = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22223/*"nameReleaseCond"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_22223/*"nameReleaseCond"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1633D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1633D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4B16331 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId, method);
    byte_4B16331 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4B16330 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantEntity_TypeInfo, method, v2);
    byte_4B16330 = 1;
  }
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, method);
  return EventServantEntity__CreatePK(eventId, svtId, v2);
}


System_String_o *__fastcall EventServantEntity__GetAddMessage(
        EventServantEntity_o *this,
        System_String_o *key,
        System_String_o *defaultMessage,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v14; // x20
  System_String_o *v15; // x0
  Il2CppObject *v17; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v4 = defaultMessage;
  if ( (byte_4B16338 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key, defaultMessage);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_16839/*"addMessageCommonReleaseId"*/, v11, v12);
    byte_4B16338 = 1;
  }
  value = 0LL;
  v17 = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16839/*"addMessageCommonReleaseId"*/,
           &v17,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v17 )
        goto LABEL_14;
      v14 = (CommonReleaseMaster_o *)script;
      v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v17->klass->vtable[3].method)(
                                 v17,
                                 v17->klass->vtable[4].methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v15, 0LL);
      if ( !v14 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v14, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                      value,
                                      value->klass->vtable[4].methodPtr);
LABEL_14:
        sub_1BCAA3C(script, key);
      }
    }
  }
  return v4;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1633A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16834/*"addGetMessage"*/, method, v2);
    byte_4B1633A = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16834/*"addGetMessage"*/, this->fields.getMessage, v3);
}


bool __fastcall EventServantEntity__GetIsCondClear(
        EventServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v16; // x0
  System_String_o **v17; // x1
  const MethodInfo *v18; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    byte_4B16334 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1BCACFC(value);
  return EventServantEntity__TryGetBattleName(v16, v17, v18);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16339 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16836/*"addJoinMessage"*/, method, v2);
    byte_4B16339 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16836/*"addJoinMessage"*/, this->fields.joinMessage, v3);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1633B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16837/*"addLeaveMessage"*/, method, v2);
    byte_4B1633B = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16837/*"addLeaveMessage"*/, this->fields.leaveMessage, v3);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B1633C & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23229/*"ruby"*/, v4, v5);
    byte_4B1633C = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23229/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16335 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&StringLiteral_21037/*"isProtectedDuringEvent"*/, v6, v7);
    byte_4B16335 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21037/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v10 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
      LOBYTE(script) = System_Convert__ToInt32(v10, 0LL) == 1;
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
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  EventServantEntity_c *v14; // x0
  System_String_o *v16; // x1

  if ( (byte_4B16333 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantEntity_TypeInfo, battleName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16333 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_7;
  v14 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v7);
    v14 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v14->static_fields->NAME_RELEASE_COND, v8) )
  {
LABEL_7:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)battleName, (int64_t)StringLiteral_1/*""*/, (int64_t)v8, v9, v10, v11, v12, v13);
    return 0;
  }
  else
  {
    v16 = this->fields.battleName;
    *battleName = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)battleName, (int64_t)v16, (int64_t)v8, v9, v10, v11, v12, v13);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  EventServantEntity_c *v14; // x0
  System_String_o *v16; // x1

  if ( (byte_4B16332 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantEntity_TypeInfo, name, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16332 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_7;
  v14 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v7);
    v14 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v14->static_fields->NAME_RELEASE_COND, v8) )
  {
LABEL_7:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)name, (int64_t)StringLiteral_1/*""*/, (int64_t)v8, v9, v10, v11, v12, v13);
    return 0;
  }
  else
  {
    v16 = this->fields.name;
    *name = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)name, (int64_t)v16, (int64_t)v8, v9, v10, v11, v12, v13);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t endedAt; // x19

  if ( (byte_4B16336 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16336 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getServerDateTime_39270492(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t endedAt; // x19
  __int64 v13; // x1
  System_Object_array *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x20
  __int64 v53; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v60; // 0:x0.8
  System_DateTime_o v61; // 0:x0.8
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x0.8
  System_DateTime_o v64; // 0:x0.8

  if ( (byte_4B16337 & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&object___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25307/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v10, v11);
    byte_4B16337 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_39270492(endedAt, 0LL).fields._dateData;
  v14 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v13);
  v60.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v60, 0LL);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v23 = v15;
  if ( v15 )
  {
    v15 = sub_1BCA91C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( !v14->max_length )
    goto LABEL_24;
  v14->m_Items[0] = (Il2CppObject *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)v14->m_Items, v23, v17, v18, v19, v20, v21, v22);
  v61.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v61, 0LL);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v30 = v15;
  if ( v15 )
  {
    v15 = sub_1BCA91C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_24;
  v14->m_Items[1] = (Il2CppObject *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  v62.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v62, 0LL);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v37 = v15;
  if ( v15 )
  {
    v15 = sub_1BCA91C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_24;
  v14->m_Items[2] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  v63.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v63, 0LL);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v44 = v15;
  if ( v15 )
  {
    v15 = sub_1BCA91C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_24;
  v14->m_Items[3] = (Il2CppObject *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  v64.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v64, 0LL);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v51 = v15;
  if ( v15 )
  {
    v15 = sub_1BCA91C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_25:
      v53 = sub_1BCAA60(v15);
      sub_1BCA908(v53, 0LL);
    }
  }
  if ( v14->max_length <= 4 )
LABEL_24:
    sub_1BCAA44(v15, v16);
  v14->m_Items[4] = (Il2CppObject *)v51;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
  return System_String__Format_62415728((System_String_o *)StringLiteral_25307/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v14, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}