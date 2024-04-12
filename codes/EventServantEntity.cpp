void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B3479 & 1) == 0 )
  {
    sub_B52984(&EventServantEntity_TypeInfo);
    sub_B52984(&StringLiteral_21175/*"nameReleaseCond"*/);
    byte_42B3479 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21175/*"nameReleaseCond"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21175/*"nameReleaseCond"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3478 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3478 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_42B346C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B346C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_42B346B & 1) == 0 )
  {
    sub_B52984(&EventServantEntity_TypeInfo);
    byte_42B346B = 1;
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
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v8; // x20
  System_String_o *v9; // x0
  System_Xml_Schema_XmlSchemaObject_o *v11; // [xsp+0h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B3473 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_16368/*"addMessageCommonReleaseId"*/);
    byte_42B3473 = 1;
  }
  v11 = 0LL;
  value = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16368/*"addMessageCommonReleaseId"*/,
           &v11,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  script,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v11 )
        goto LABEL_14;
      v8 = (CommonReleaseMaster_o *)script;
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                                v11,
                                v11->klass->vtable._4_OnAdd.methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v9, 0LL);
      if ( !v8 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v8, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                      value,
                                      value->klass->vtable._4_OnAdd.methodPtr);
LABEL_14:
        sub_B52A5C(script, key);
      }
    }
  }
  return defaultMessage;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B3475 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16363/*"addGetMessage"*/);
    byte_42B3475 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16363/*"addGetMessage"*/, this->fields.getMessage, v2);
}


bool __fastcall EventServantEntity__GetIsCondClear(
        EventServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventServantEntity_o *v10; // x0
  System_String_o **v11; // x1
  const MethodInfo *v12; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B346F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    byte_42B346F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B52A5C(Instance, v7);
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_B52D50(value);
  return EventServantEntity__TryGetBattleName(v10, v11, v12);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B3474 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16365/*"addJoinMessage"*/);
    byte_42B3474 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16365/*"addJoinMessage"*/, this->fields.joinMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B3476 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16366/*"addLeaveMessage"*/);
    byte_42B3476 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16366/*"addLeaveMessage"*/, this->fields.leaveMessage, v2);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3477 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_22052/*"ruby"*/);
    byte_42B3477 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22052/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B3470 & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&StringLiteral_20098/*"isProtectedDuringEvent"*/);
    byte_42B3470 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20098/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_42B346E & 1) == 0 )
  {
    sub_B52984(&EventServantEntity_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B346E = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_8;
  v11 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v11 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v11->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v5) )
  {
LABEL_8:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B52920(
      (BattleServantConfConponent_o *)battleName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    return 0;
  }
  else
  {
    v13 = this->fields.battleName;
    *battleName = v13;
    sub_B52920((BattleServantConfConponent_o *)battleName, (System_Int32_array **)v13, v5, v6, v7, v8, v9, v10);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  EventServantEntity_c *v11; // x0
  System_String_o *v13; // x1

  if ( (byte_42B346D & 1) == 0 )
  {
    sub_B52984(&EventServantEntity_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B346D = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_8;
  v11 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v11 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v11->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v5) )
  {
LABEL_8:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_B52920((BattleServantConfConponent_o *)name, (System_Int32_array **)StringLiteral_1/*""*/, v5, v6, v7, v8, v9, v10);
    return 0;
  }
  else
  {
    v13 = this->fields.name;
    *name = v13;
    sub_B52920((BattleServantConfConponent_o *)name, (System_Int32_array **)v13, v5, v6, v7, v8, v9, v10);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19

  if ( (byte_42B3471 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B3471 = 1;
  }
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_25742200(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int64_t endedAt; // x19
  System_Object_array *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t Minute; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-30h] BYREF
  int32_t Day; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-28h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-24h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-18h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8

  if ( (byte_42B3472 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_23802/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_42B3472 = 1;
  }
  dateData = 0LL;
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_25742200(endedAt, 0LL).fields.dateData;
  v4 = (System_Object_array *)sub_B5299C(object___TypeInfo, 5LL);
  v51.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v51, 0LL);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  v13 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_24;
  }
  if ( !v4->max_length )
    goto LABEL_23;
  v4->m_Items[0] = (Il2CppObject *)v13;
  sub_B52920((BattleServantConfConponent_o *)v4->m_Items, v13, v7, v8, v9, v10, v11, v12);
  v52.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v52, 0LL);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v20 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_24;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_23;
  v4->m_Items[1] = (Il2CppObject *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v53.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v53, 0LL);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v27 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_24;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_23;
  v4->m_Items[2] = (Il2CppObject *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v54.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v54, 0LL);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v34 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_24;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_23;
  v4->m_Items[3] = (Il2CppObject *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v55.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v55, 0LL);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v41 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_24:
      v44 = sub_B52A7C(v5);
      sub_B52A28(v44, 0LL);
    }
  }
  if ( v4->max_length <= 4 )
  {
LABEL_23:
    v43 = sub_B52A88(v5);
    sub_B52A28(v43, 0LL);
  }
  v4->m_Items[4] = (Il2CppObject *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Format_44647040((System_String_o *)StringLiteral_23802/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v4, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}