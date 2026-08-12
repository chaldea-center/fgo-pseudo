void EventServantEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59709BF & 1) == 0 )
  {
    sub_2213A60(&EventServantEntity_TypeInfo);
    sub_2213A60(&StringLiteral_23270/*"nameReleaseCond"*/);
    byte_59709BF = 1;
  }
  v7 = StringLiteral_23270/*"nameReleaseCond"*/;
  EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND = (struct System_String_o *)StringLiteral_23270/*"nameReleaseCond"*/;
  sub_2213A04(
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
  if ( (byte_59709BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59709BE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_59709B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59709B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_59709B2 & 1) == 0 )
  {
    sub_2213A60(&EventServantEntity_TypeInfo);
    byte_59709B2 = 1;
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

  if ( (byte_59709B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_17361/*"addMessageCommonReleaseId"*/);
    byte_59709B9 = 1;
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
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_17361/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_object_(
                                  script,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_2213CDC(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59709BB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17353/*"addGetMessage"*/);
    byte_59709BB = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17353/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool EventServantEntity__GetIsCondClear(EventServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *MasterData_object; // x19
  EventServantEntity_o *v12; // x0
  System_String_o **v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59709B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59709B6 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !value || value->klass == (Il2CppClass *)qword_5984390 )
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
  sub_221405C(value, qword_5984390, v8, v9);
  return EventServantEntity__TryGetBattleName(v12, v13, v14);
}


System_String_o *EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59709BA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17358/*"addJoinMessage"*/);
    byte_59709BA = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17358/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59709BC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17359/*"addLeaveMessage"*/);
    byte_59709BC = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_17359/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59709BD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24375/*"ruby"*/);
    byte_59709BD = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_24375/*"ruby"*/,
           **(System_String_o ***)(qword_5984390 + 184),
           0);
}


bool EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59709B7 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_21973/*"isProtectedDuringEvent"*/);
    byte_59709B7 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_21973/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_59709B5 & 1) == 0 )
  {
    sub_2213A60(&EventServantEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59709B5 = 1;
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
  sub_2213A04(
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

  if ( (byte_59709B4 & 1) == 0 )
  {
    sub_2213A60(&EventServantEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59709B4 = 1;
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)v17, (System_String_o *)v7, v8, v9, v10, v11, v12);
  return v14;
}


System_String_o *EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  int64_t endedAt; // x19
  __int64 v5; // x1
  System_Object_array *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x20
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x20
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x20
  __int64 v46; // x0
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59709B8 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26546/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_59709B8 = 1;
  }
  v3 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  endedAt = this->fields.endedAt;
  dateData = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48347596(endedAt, 0).fields._dateData;
  v6 = (System_Object_array *)sub_2213B20(object___TypeInfo, 5);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5);
  Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  v7 = j_il2cpp_value_box_0(qword_5984348, &Year);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  v15 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_2213BB4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( !LODWORD(v6->max_length) )
    goto LABEL_24;
  v6->m_Items[0] = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6->m_Items, (int32_t)v15, v9, v10, v11, v12, v13, v14);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  v7 = j_il2cpp_value_box_0(qword_5984348, &Month);
  v23 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_2213BB4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  v6->m_Items[1] = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->m_Items[1], (int32_t)v23, v17, v18, v19, v20, v21, v22);
  Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  v7 = j_il2cpp_value_box_0(qword_5984348, &Day);
  v30 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_2213BB4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( LODWORD(v6->max_length) <= 2 )
    goto LABEL_24;
  v6->m_Items[2] = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->m_Items[2], (int32_t)v30, v24, v25, v26, v27, v28, v29);
  Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
  v7 = j_il2cpp_value_box_0(qword_5984348, &Hour);
  v37 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_2213BB4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( (v6->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_24;
  v6->m_Items[3] = v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->m_Items[3], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
  v7 = j_il2cpp_value_box_0(qword_5984348, &Minute);
  v44 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_2213BB4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_25:
      v46 = sub_2213D00(v7, v16);
      sub_2213BA0(v46, 0);
    }
  }
  if ( LODWORD(v6->max_length) <= 4 )
LABEL_24:
    sub_2213CE4(v7);
  v6->m_Items[4] = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->m_Items[4], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  return System_String__Format_75698016((System_String_o *)StringLiteral_26546/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v6, 0);
}