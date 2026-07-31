void EventServantEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59388F5 & 1) == 0 )
  {
    sub_21FFC50(&EventServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_23224/*"nameReleaseCond"*/);
    byte_59388F5 = 1;
  }
  v7 = StringLiteral_23224/*"nameReleaseCond"*/;
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_23224/*"nameReleaseCond"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventServantEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59388F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_59388E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59388E9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_59388E8 & 1) == 0 )
  {
    sub_21FFC50(&EventServantEntity_TypeInfo);
    byte_59388E8 = 1;
  }
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, method);
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

  if ( (byte_59388EF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_17325/*"addMessageCommonReleaseId"*/);
    byte_59388EF = 1;
  }
  script = (DataManager_o *)this->fields.script;
  value = 0;
  v11 = 0;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_17325/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_21FFECC(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59388F1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17317/*"addGetMessage"*/);
    byte_59388F1 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17317/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool EventServantEntity__GetIsCondClear(EventServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v11; // x0
  System_String_o **v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59388EC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59388EC = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !value || value->klass == (Il2CppClass *)qword_594C0B8 )
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
  sub_220024C(value, qword_594C0B8, v8);
  return EventServantEntity__TryGetBattleName(v11, v12, v13);
}


System_String_o *EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59388F0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17322/*"addJoinMessage"*/);
    byte_59388F0 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17322/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59388F2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17323/*"addLeaveMessage"*/);
    byte_59388F2 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17323/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24327/*"ruby"*/);
    byte_59388F3 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_24327/*"ruby"*/,
           **(System_String_o ***)(qword_594C0B8 + 184),
           0);
}


bool EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59388ED & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&StringLiteral_21931/*"isProtectedDuringEvent"*/);
    byte_59388ED = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21931/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v5 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
      LOBYTE(script) = System_Convert__ToInt32(v5, 0) == 1;
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
  struct System_String_o **p_battleName; // x22
  __int64 v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o **v13; // x21
  bool v14; // w20
  EventServantEntity_c *v15; // x0
  bool IsCondClear; // w0
  System_String_o *v17; // x1

  if ( (byte_59388EB & 1) == 0 )
  {
    sub_21FFC50(&EventServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59388EB = 1;
  }
  p_battleName = &this->fields.battleName;
  v13 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0) )
  {
    v14 = 0;
  }
  else
  {
    v15 = EventServantEntity_TypeInfo;
    if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v6);
      v15 = EventServantEntity_TypeInfo;
    }
    IsCondClear = EventServantEntity__GetIsCondClear(this, v15->static_fields->NAME_RELEASE_COND, v7);
    v14 = !IsCondClear;
    if ( !IsCondClear )
      v13 = p_battleName;
  }
  v17 = *v13;
  *battleName = *v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)battleName,
    (int32_t)v17,
    (System_String_o *)v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  return v14;
}


bool EventServantEntity__TryGetName(EventServantEntity_o *this, System_String_o **name, const MethodInfo *method)
{
  struct System_String_o **p_name; // x22
  __int64 v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o **v13; // x21
  bool v14; // w20
  EventServantEntity_c *v15; // x0
  bool IsCondClear; // w0
  System_String_o *v17; // x1

  if ( (byte_59388EA & 1) == 0 )
  {
    sub_21FFC50(&EventServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59388EA = 1;
  }
  p_name = &this->fields.name;
  v13 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( System_String__IsNullOrEmpty(this->fields.name, 0) )
  {
    v14 = 0;
  }
  else
  {
    v15 = EventServantEntity_TypeInfo;
    if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v6);
      v15 = EventServantEntity_TypeInfo;
    }
    IsCondClear = EventServantEntity__GetIsCondClear(this, v15->static_fields->NAME_RELEASE_COND, v7);
    v14 = !IsCondClear;
    if ( !IsCondClear )
      v13 = p_name;
  }
  v17 = *v13;
  *name = *v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)name, (int32_t)v17, (System_String_o *)v7, v8, v9, v10, v11, v12);
  return v14;
}


System_String_o *EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  int64_t endedAt; // x19
  __int64 v5; // x1
  System_Object_array *v6; // x19
  System_DateTime_o v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x20
  __int64 v17; // x1
  System_DateTime_o v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x20
  System_DateTime_o v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x20
  System_DateTime_o v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x20
  System_DateTime_o v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x20
  __int64 v51; // x0
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59388EE & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_26495/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_59388EE = 1;
  }
  v3 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  endedAt = this->fields.endedAt;
  dateData = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48311712(endedAt, 0).fields._dateData;
  v6 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 5);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5);
  v7.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v7, 0);
  v8 = j_il2cpp_value_box_0(qword_594C070, &Year);
  if ( !v6 )
    sub_21FFECC(v8, v9);
  v16 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !LODWORD(v6->max_length) )
    goto LABEL_24;
  v6->m_Items[0] = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6->m_Items, (int32_t)v16, v10, v11, v12, v13, v14, v15);
  v18.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v18, 0);
  v8 = j_il2cpp_value_box_0(qword_594C070, &Month);
  v25 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  v6->m_Items[1] = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->m_Items[1], (int32_t)v25, v19, v20, v21, v22, v23, v24);
  v26.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v26, 0);
  v8 = j_il2cpp_value_box_0(qword_594C070, &Day);
  v33 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( LODWORD(v6->max_length) <= 2 )
    goto LABEL_24;
  v6->m_Items[2] = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v34.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v34, 0);
  v8 = j_il2cpp_value_box_0(qword_594C070, &Hour);
  v41 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( (v6->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_24;
  v6->m_Items[3] = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->m_Items[3], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v42.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v42, 0);
  v8 = j_il2cpp_value_box_0(qword_594C070, &Minute);
  v49 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      v51 = sub_21FFEF0(v8, v17);
      sub_21FFD90(v51, 0);
    }
  }
  if ( LODWORD(v6->max_length) <= 4 )
LABEL_24:
    sub_21FFED4(v8);
  v6->m_Items[4] = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->m_Items[4], (int32_t)v49, v43, v44, v45, v46, v47, v48);
  return System_String__Format_75484712((System_String_o *)StringLiteral_26495/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v6, 0);
}