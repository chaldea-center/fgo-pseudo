void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDC685 & 1) == 0 )
  {
    sub_1C21E38(&EventServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_22387/*"nameReleaseCond"*/);
    byte_4BDC685 = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22387/*"nameReleaseCond"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_22387/*"nameReleaseCond"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC684 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC684 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4BDC678 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDC678 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4BDC677 & 1) == 0 )
  {
    sub_1C21E38(&EventServantEntity_TypeInfo);
    byte_4BDC677 = 1;
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

  if ( (byte_4BDC67F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16952/*"addMessageCommonReleaseId"*/);
    byte_4BDC67F = 1;
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
         (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16952/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1C22094(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC681 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16946/*"addGetMessage"*/);
    byte_4BDC681 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16946/*"addGetMessage"*/, this->fields.getMessage, v2);
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

  if ( (byte_4BDC67B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDC67B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C22094(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1C22354(value);
  return EventServantEntity__TryGetBattleName(v10, v11, v12);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC680 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16949/*"addJoinMessage"*/);
    byte_4BDC680 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16949/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC682 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16950/*"addLeaveMessage"*/);
    byte_4BDC682 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16950/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC683 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_23406/*"ruby"*/);
    byte_4BDC683 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23406/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BDC67C & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&StringLiteral_21188/*"isProtectedDuringEvent"*/);
    byte_4BDC67C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21188/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_4BDC67A & 1) == 0 )
  {
    sub_1C21E38(&EventServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC67A = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_7;
  v11 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v11 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v11->static_fields->NAME_RELEASE_COND, v5) )
  {
LABEL_7:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)battleName, (int64_t)StringLiteral_1/*""*/, (int64_t)v5, v6, v7, v8, v9, v10);
    return 0;
  }
  else
  {
    v13 = this->fields.battleName;
    *battleName = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)battleName, (int64_t)v13, (int64_t)v5, v6, v7, v8, v9, v10);
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
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_4BDC679 & 1) == 0 )
  {
    sub_1C21E38(&EventServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC679 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_7;
  v11 = EventServantEntity_TypeInfo;
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v11 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v11->static_fields->NAME_RELEASE_COND, v5) )
  {
LABEL_7:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)name, (int64_t)StringLiteral_1/*""*/, (int64_t)v5, v6, v7, v8, v9, v10);
    return 0;
  }
  else
  {
    v13 = this->fields.name;
    *name = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)name, (int64_t)v13, (int64_t)v5, v6, v7, v8, v9, v10);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4BDC67D & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC67D = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_39807404(endedAt, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x20
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x20
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x20
  __int64 v58; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8
  System_DateTime_o v67; // 0:x0.8
  System_DateTime_o v68; // 0:x0.8
  System_DateTime_o v69; // 0:x0.8

  if ( (byte_4BDC67E & 1) == 0 )
  {
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_25496/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4BDC67E = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_39807404(endedAt, 0LL).fields._dateData;
  v4 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v65.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v65, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v5, v6, v7);
  if ( !v4 )
    sub_1C22094(v8, v9);
  v16 = v8;
  if ( v8 )
  {
    v8 = sub_1C21F74(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !v4->max_length )
    goto LABEL_24;
  v4->m_Items[0] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)v4->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v66.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v66, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v17, v18, v19);
  v26 = v8;
  if ( v8 )
  {
    v8 = sub_1C21F74(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = (Il2CppObject *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v67.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v67, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v27, v28, v29);
  v36 = v8;
  if ( v8 )
  {
    v8 = sub_1C21F74(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = (Il2CppObject *)v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  v68.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v68, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v37, v38, v39);
  v46 = v8;
  if ( v8 )
  {
    v8 = sub_1C21F74(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = (Il2CppObject *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  v69.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v69, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v47, v48, v49);
  v56 = v8;
  if ( v8 )
  {
    v8 = sub_1C21F74(v8, v4->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      v58 = sub_1C220B8(v8);
      sub_1C21F60(v58, 0LL);
    }
  }
  if ( v4->max_length <= 4 )
LABEL_24:
    sub_1C2209C(v8, v9);
  v4->m_Items[4] = (Il2CppObject *)v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
  return System_String__Format_63129984((System_String_o *)StringLiteral_25496/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}