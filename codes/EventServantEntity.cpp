void EventServantEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D30B40 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_22422/*"nameReleaseCond"*/);
    byte_4D30B40 = 1;
  }
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_22422/*"nameReleaseCond"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventServantEntity_TypeInfo->static_fields,
    StringLiteral_22422/*"nameReleaseCond"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30B3F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30B3F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4D30B34 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D30B34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_4D30B33 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantEntity_TypeInfo);
    byte_4D30B33 = 1;
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

  if ( (byte_4D30B3A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_16789/*"addMessageCommonReleaseId"*/);
    byte_4D30B3A = 1;
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
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16789/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1C93D2C(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30B3C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16781/*"addGetMessage"*/);
    byte_4D30B3C = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16781/*"addGetMessage"*/, this->fields.getMessage, v2);
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

  if ( (byte_4D30B37 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D30B37 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C93D2C(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_1C940C8(value);
  return EventServantEntity__TryGetBattleName(v10, v11, v12);
}


System_String_o *EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30B3B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16786/*"addJoinMessage"*/);
    byte_4D30B3B = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16786/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30B3D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16787/*"addLeaveMessage"*/);
    byte_4D30B3D = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16787/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30B3E & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_23456/*"ruby"*/);
    byte_4D30B3E = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23456/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


bool EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D30B38 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&StringLiteral_21192/*"isProtectedDuringEvent"*/);
    byte_4D30B38 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21192/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_4D30B36 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30B36 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0) )
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)battleName, StringLiteral_1/*""*/, (int32_t)v5, v6, v7, v8, v9, v10);
    return 0;
  }
  else
  {
    v13 = this->fields.battleName;
    *battleName = v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)battleName, (int32_t)v13, (int32_t)v5, v6, v7, v8, v9, v10);
    return 1;
  }
}


bool EventServantEntity__TryGetName(EventServantEntity_o *this, System_String_o **name, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_4D30B35 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30B35 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0) )
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)name, StringLiteral_1/*""*/, (int32_t)v5, v6, v7, v8, v9, v10);
    return 0;
  }
  else
  {
    v13 = this->fields.name;
    *name = v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)name, (int32_t)v13, (int32_t)v5, v6, v7, v8, v9, v10);
    return 1;
  }
}


System_String_o *EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19
  System_Object_array *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x20
  __int64 v43; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4D30B39 & 1) == 0 )
  {
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&StringLiteral_25479/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4D30B39 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42097084(endedAt, 0).fields._dateData;
  v4 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 5);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v4 )
    sub_1C93D2C(v5, v6);
  v13 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_1C93C10(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_24;
  v4->m_Items[0] = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v4->m_Items, (int32_t)v13, v7, v8, v9, v10, v11, v12);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v20 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_1C93C10(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = v20;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v27 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_1C93C10(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = v27;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->m_Items[2], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v34 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_1C93C10(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( LODWORD(v4->max_length) <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = v34;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v41 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_1C93C10(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_25:
      v43 = sub_1C93D50(v5);
      sub_1C93BFC(v43, 0);
    }
  }
  if ( LODWORD(v4->max_length) <= 4 )
LABEL_24:
    sub_1C93D34(v5);
  v4->m_Items[4] = v41;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->m_Items[4], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  return System_String__Format_64467168((System_String_o *)StringLiteral_25479/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0);
}