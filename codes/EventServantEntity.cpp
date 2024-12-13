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

  if ( (byte_4B372EA & 1) == 0 )
  {
    sub_1BD3458(&EventServantEntity_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_22256/*"nameReleaseCond"*/, v8);
    byte_4B372EA = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22256/*"nameReleaseCond"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_22256/*"nameReleaseCond"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B372E9 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    byte_4B372E9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4B372DD & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_4B372DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_2F2F8A8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4B372DC & 1) == 0 )
  {
    sub_1BD3458(&EventServantEntity_TypeInfo, method);
    byte_4B372DC = 1;
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

  if ( (byte_4B372E4 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BD3458(&StringLiteral_16860/*"addMessageCommonReleaseId"*/, v9);
    byte_4B372E4 = 1;
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
         (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16860/*"addMessageCommonReleaseId"*/,
           &v14,
           (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1BD36B4(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B372E6 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_16855/*"addGetMessage"*/, method);
    byte_4B372E6 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16855/*"addGetMessage"*/, this->fields.getMessage, v2);
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

  if ( (byte_4B372E0 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BD3458(&string_TypeInfo, v7);
    byte_4B372E0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BD36B4(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1BD3974(value);
  return EventServantEntity__TryGetBattleName(v13, v14, v15);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B372E5 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_16857/*"addJoinMessage"*/, method);
    byte_4B372E5 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16857/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B372E7 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_16858/*"addLeaveMessage"*/, method);
    byte_4B372E7 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16858/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B372E8 & 1) == 0 )
  {
    sub_1BD3458(&string_TypeInfo, method);
    sub_1BD3458(&StringLiteral_23263/*"ruby"*/, v3);
    byte_4B372E8 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23263/*"ruby"*/,
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

  if ( (byte_4B372E1 & 1) == 0 )
  {
    sub_1BD3458(&System_Convert_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BD3458(&StringLiteral_21068/*"isProtectedDuringEvent"*/, v4);
    byte_4B372E1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21068/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  EventServantEntity_c *v12; // x0
  System_String_o *v14; // x1

  if ( (byte_4B372DF & 1) == 0 )
  {
    sub_1BD3458(&EventServantEntity_TypeInfo, battleName);
    sub_1BD3458(&StringLiteral_1/*""*/, v5);
    byte_4B372DF = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_7;
  v12 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v12 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v12->static_fields->NAME_RELEASE_COND, v6) )
  {
LABEL_7:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BD33FC((PartyOrganizationUtility_o *)battleName, (int64_t)StringLiteral_1/*""*/, (int64_t)v6, v7, v8, v9, v10, v11);
    return 0;
  }
  else
  {
    v14 = this->fields.battleName;
    *battleName = v14;
    sub_1BD33FC((PartyOrganizationUtility_o *)battleName, (int64_t)v14, (int64_t)v6, v7, v8, v9, v10, v11);
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
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  EventServantEntity_c *v12; // x0
  System_String_o *v14; // x1

  if ( (byte_4B372DE & 1) == 0 )
  {
    sub_1BD3458(&EventServantEntity_TypeInfo, name);
    sub_1BD3458(&StringLiteral_1/*""*/, v5);
    byte_4B372DE = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_7;
  v12 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v12 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v12->static_fields->NAME_RELEASE_COND, v6) )
  {
LABEL_7:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BD33FC((PartyOrganizationUtility_o *)name, (int64_t)StringLiteral_1/*""*/, (int64_t)v6, v7, v8, v9, v10, v11);
    return 0;
  }
  else
  {
    v14 = this->fields.name;
    *name = v14;
    sub_1BD33FC((PartyOrganizationUtility_o *)name, (int64_t)v14, (int64_t)v6, v7, v8, v9, v10, v11);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4B372E2 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B372E2 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_39341820(endedAt, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x20
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x20
  __int64 v62; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v69; // 0:x0.8
  System_DateTime_o v70; // 0:x0.8
  System_DateTime_o v71; // 0:x0.8
  System_DateTime_o v72; // 0:x0.8
  System_DateTime_o v73; // 0:x0.8

  if ( (byte_4B372E3 & 1) == 0 )
  {
    sub_1BD3458(&System_DateTime_TypeInfo, method);
    sub_1BD3458(&int_TypeInfo, v3);
    sub_1BD3458(&NetworkManager_TypeInfo, v4);
    sub_1BD3458(&object___TypeInfo, v5);
    sub_1BD3458(&StringLiteral_25342/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v6);
    byte_4B372E3 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_39341820(endedAt, 0LL).fields._dateData;
  v8 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v69.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v69, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v9, v10, v11);
  if ( !v8 )
    sub_1BD36B4(v12, v13);
  v20 = v12;
  if ( v12 )
  {
    v12 = sub_1BD3594(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( !v8->max_length )
    goto LABEL_24;
  v8->m_Items[0] = (Il2CppObject *)v20;
  sub_1BD33FC((PartyOrganizationUtility_o *)v8->m_Items, v20, v14, v15, v16, v17, v18, v19);
  v70.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v70, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v21, v22, v23);
  v30 = v12;
  if ( v12 )
  {
    v12 = sub_1BD3594(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_24;
  v8->m_Items[1] = (Il2CppObject *)v30;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v8->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  v71.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v71, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v31, v32, v33);
  v40 = v12;
  if ( v12 )
  {
    v12 = sub_1BD3594(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_24;
  v8->m_Items[2] = (Il2CppObject *)v40;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v8->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v72.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v72, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v41, v42, v43);
  v50 = v12;
  if ( v12 )
  {
    v12 = sub_1BD3594(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_25;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_24;
  v8->m_Items[3] = (Il2CppObject *)v50;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v8->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
  v73.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v73, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v51, v52, v53);
  v60 = v12;
  if ( v12 )
  {
    v12 = sub_1BD3594(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_25:
      v62 = sub_1BD36D8(v12);
      sub_1BD3580(v62, 0LL);
    }
  }
  if ( v8->max_length <= 4 )
LABEL_24:
    sub_1BD36BC(v12, v13);
  v8->m_Items[4] = (Il2CppObject *)v60;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v8->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  return System_String__Format_62539756((System_String_o *)StringLiteral_25342/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v8, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}