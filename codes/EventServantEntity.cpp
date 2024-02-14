void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421796C & 1) == 0 )
  {
    sub_B0D8A4(&EventServantEntity_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_21073/*"nameReleaseCond"*/, v8);
    byte_421796C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21073/*"nameReleaseCond"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21073/*"nameReleaseCond"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421796B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421796B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_421795F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_421795F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_421795E & 1) == 0 )
  {
    sub_B0D8A4(&EventServantEntity_TypeInfo, method);
    byte_421795E = 1;
  }
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  }
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
  System_Xml_Schema_XmlSchemaObject_o *v14; // [xsp+0h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217966 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_16305/*"addMessageCommonReleaseId"*/, v9);
    byte_4217966 = 1;
  }
  v14 = 0LL;
  value = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16305/*"addMessageCommonReleaseId"*/,
           &v14,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  script,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v14 )
        goto LABEL_14;
      v11 = (CommonReleaseMaster_o *)script;
      v12 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                                 v14,
                                 v14->klass->vtable._4_OnAdd.methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v12, 0LL);
      if ( !v11 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v11, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                      value,
                                      value->klass->vtable._4_OnAdd.methodPtr);
LABEL_14:
        sub_B0D97C(script);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4217968 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16300/*"addGetMessage"*/, method);
    byte_4217968 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16300/*"addGetMessage"*/, this->fields.getMessage, v2);
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
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventServantEntity_o *v12; // x0
  System_String_o **v13; // x1
  const MethodInfo *v14; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4217962 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&string_TypeInfo, v7);
    byte_4217962 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
  {
    Instance = (WebViewManager_o *)System_Int32__Parse((System_String_o *)value, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      LOBYTE(script) = CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL, 0, 0LL);
      return (unsigned __int8)script & 1;
    }
    goto LABEL_12;
  }
  sub_B0DC70(value);
  return EventServantEntity__TryGetBattleName(v12, v13, v14);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4217967 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16302/*"addJoinMessage"*/, method);
    byte_4217967 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16302/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4217969 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16303/*"addLeaveMessage"*/, method);
    byte_4217969 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16303/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_421796A & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21941/*"ruby"*/, v3);
    byte_421796A = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21941/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4217963 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B0D8A4(&StringLiteral_20011/*"isProtectedDuringEvent"*/, v4);
    byte_4217963 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20011/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  EventServantEntity_c *v12; // x0
  System_String_o *v14; // x1

  if ( (byte_4217961 & 1) == 0 )
  {
    sub_B0D8A4(&EventServantEntity_TypeInfo, battleName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217961 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_8;
  v12 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v12 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v12->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v6) )
  {
LABEL_8:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840(
      (BattleServantConfConponent_o *)battleName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    return 0;
  }
  else
  {
    v14 = this->fields.battleName;
    *battleName = v14;
    sub_B0D840((BattleServantConfConponent_o *)battleName, (System_Int32_array **)v14, v6, v7, v8, v9, v10, v11);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  EventServantEntity_c *v12; // x0
  System_String_o *v14; // x1

  if ( (byte_4217960 & 1) == 0 )
  {
    sub_B0D8A4(&EventServantEntity_TypeInfo, name);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4217960 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_8;
  v12 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v12 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v12->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v6) )
  {
LABEL_8:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)name, (System_Int32_array **)StringLiteral_1/*""*/, v6, v7, v8, v9, v10, v11);
    return 0;
  }
  else
  {
    v14 = this->fields.name;
    *name = v14;
    sub_B0D840((BattleServantConfConponent_o *)name, (System_Int32_array **)v14, v6, v7, v8, v9, v10, v11);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_4217964 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4217964 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_25504848(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t endedAt; // x19
  System_Object_array *v7; // x19
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t Minute; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-30h] BYREF
  int32_t Day; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-28h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-24h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-18h] BYREF
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8

  if ( (byte_4217965 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&object___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_23686/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v5);
    byte_4217965 = 1;
  }
  dateData = 0LL;
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_25504848(endedAt, 0LL).fields.dateData;
  v7 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
  v53.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v53, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v7 )
    sub_B0D97C(v8);
  v15 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B0D964(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_24;
  }
  if ( !v7->max_length )
    goto LABEL_23;
  v7->m_Items[0] = (Il2CppObject *)v15;
  sub_B0D840((BattleServantConfConponent_o *)v7->m_Items, v15, v9, v10, v11, v12, v13, v14);
  v54.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v54, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v22 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B0D964(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_24;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_23;
  v7->m_Items[1] = (Il2CppObject *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  v55.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v55, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v29 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B0D964(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_24;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_23;
  v7->m_Items[2] = (Il2CppObject *)v29;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v56.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v56, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v36 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B0D964(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_24;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_23;
  v7->m_Items[3] = (Il2CppObject *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  v57.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v57, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v43 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B0D964(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_24:
      v46 = sub_B0D99C(v8);
      sub_B0D948(v46, 0LL);
    }
  }
  if ( v7->max_length <= 4 )
  {
LABEL_23:
    v45 = sub_B0D9A8(v8);
    sub_B0D948(v45, 0LL);
  }
  v7->m_Items[4] = (Il2CppObject *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  return System_String__Format_43928628((System_String_o *)StringLiteral_23686/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v7, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}