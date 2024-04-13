void __fastcall EventServantEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EC037 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21281/*"nameReleaseCond"*/, v8, v9, v10);
    byte_42EC037 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantEntity_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21281/*"nameReleaseCond"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21281/*"nameReleaseCond"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventServantEntity___ctor(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC036 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC036 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantEntity__CreatePK(int32_t eventId, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC02A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, svtId, (_DWORD)method, v3);
    byte_42EC02A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantEntity__CreatePrimaryKey(EventServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t svtId; // w19
  int32_t eventId; // w20

  if ( (byte_42EC029 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC029 = 1;
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
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *script; // x0
  CommonReleaseMaster_o *v17; // x20
  System_String_o *v18; // x0
  System_Xml_Schema_XmlSchemaObject_o *v20; // [xsp+0h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defaultMessage;
  if ( (byte_42EC031 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)key, (_DWORD)defaultMessage, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16453/*"addMessageCommonReleaseId"*/, v13, v14, v15);
    byte_42EC031 = 1;
  }
  v20 = 0LL;
  value = 0LL;
  script = (DataManager_o *)this->fields.script;
  if ( !script )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    script = (DataManager_o *)this->fields.script;
    if ( !script )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16453/*"addMessageCommonReleaseId"*/,
           &v20,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      script = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !script )
        goto LABEL_14;
      script = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  script,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v20 )
        goto LABEL_14;
      v17 = (CommonReleaseMaster_o *)script;
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                                 v20,
                                 v20->klass->vtable._4_OnAdd.methodPtr);
      script = (DataManager_o *)System_Int32__Parse(v18, 0LL);
      if ( !v17 )
        goto LABEL_14;
      if ( CommonReleaseMaster__IsOpen(v17, (int32_t)script, 0LL, 0, 0LL) )
      {
        script = (DataManager_o *)value;
        if ( value )
          return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                      value,
                                      value->klass->vtable._4_OnAdd.methodPtr);
LABEL_14:
        sub_B5D69C(script, key);
      }
    }
  }
  return v4;
}


System_String_o *__fastcall EventServantEntity__GetGetMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EC033 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16448/*"addGetMessage"*/, (_DWORD)method, v2, v3);
    byte_42EC033 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16448/*"addGetMessage"*/, this->fields.getMessage, v3);
}


bool __fastcall EventServantEntity__GetIsCondClear(
        EventServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventServantEntity_o *v20; // x0
  System_String_o **v21; // x1
  const MethodInfo *v22; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC02D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    byte_42EC02D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return (unsigned __int8)script & 1;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    LOBYTE(script) = 0;
    return (unsigned __int8)script & 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v17);
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  sub_B5D990(value);
  return EventServantEntity__TryGetBattleName(v20, v21, v22);
}


System_String_o *__fastcall EventServantEntity__GetJoinMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EC032 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16450/*"addJoinMessage"*/, (_DWORD)method, v2, v3);
    byte_42EC032 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16450/*"addJoinMessage"*/, this->fields.joinMessage, v3);
}


System_String_o *__fastcall EventServantEntity__GetLeaveMessage(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EC034 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16451/*"addLeaveMessage"*/, (_DWORD)method, v2, v3);
    byte_42EC034 = 1;
  }
  return EventServantEntity__GetAddMessage(this, (System_String_o *)StringLiteral_16451/*"addLeaveMessage"*/, this->fields.leaveMessage, v3);
}


System_String_o *__fastcall EventServantEntity__GetRuby(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EC035 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22166/*"ruby"*/, v5, v6, v7);
    byte_42EC035 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22166/*"ruby"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


bool __fastcall EventServantEntity__IsProtectedDuringEvent(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v12; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC02E & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_20201/*"isProtectedDuringEvent"*/, v8, v9, v10);
    byte_42EC02E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20201/*"isProtectedDuringEvent"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v12 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LOBYTE(script) = System_Convert__ToInt32(v12, 0LL) == 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  EventServantEntity_c *v15; // x0
  System_String_o *v17; // x1

  if ( (byte_42EC02C & 1) == 0 )
  {
    sub_B5D5C4(&EventServantEntity_TypeInfo, (_DWORD)battleName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EC02C = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.battleName, 0LL) )
    goto LABEL_8;
  v15 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v15 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v15->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v9) )
  {
LABEL_8:
    *battleName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)battleName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    return 0;
  }
  else
  {
    v17 = this->fields.battleName;
    *battleName = v17;
    sub_B5D560((BattleServantConfConponent_o *)battleName, (System_Int32_array **)v17, v9, v10, v11, v12, v13, v14);
    return 1;
  }
}


bool __fastcall EventServantEntity__TryGetName(
        EventServantEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  EventServantEntity_c *v15; // x0
  System_String_o *v17; // x1

  if ( (byte_42EC02B & 1) == 0 )
  {
    sub_B5D5C4(&EventServantEntity_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EC02B = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.name, 0LL) )
    goto LABEL_8;
  v15 = EventServantEntity_TypeInfo;
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
    v15 = EventServantEntity_TypeInfo;
  }
  if ( EventServantEntity__GetIsCondClear(this, v15->static_fields->NAME_RELEASE_COND, (const MethodInfo *)v9) )
  {
LABEL_8:
    *name = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)name,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    return 0;
  }
  else
  {
    v17 = this->fields.name;
    *name = v17;
    sub_B5D560((BattleServantConfConponent_o *)name, (System_Int32_array **)v17, v9, v10, v11, v12, v13, v14);
    return 1;
  }
}


System_DateTime_o __fastcall EventServantEntity__getEndTime(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t endedAt; // x19

  if ( (byte_42EC02F & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC02F = 1;
  }
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_26077756(endedAt, 0LL);
}


System_String_o *__fastcall EventServantEntity__getEndTimeStr(EventServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t endedAt; // x19
  System_Object_array *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x20
  __int64 v54; // x0
  __int64 v55; // x0
  int32_t Minute; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-30h] BYREF
  int32_t Day; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-28h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-24h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-18h] BYREF
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x0.8
  System_DateTime_o v64; // 0:x0.8
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8

  if ( (byte_42EC030 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23920/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v11, v12, v13);
    byte_42EC030 = 1;
  }
  dateData = 0LL;
  endedAt = this->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_26077756(endedAt, 0LL).fields.dateData;
  v15 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
  v62.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v62, 0LL);
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( !v15->max_length )
    goto LABEL_23;
  v15->m_Items[0] = (Il2CppObject *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
  v63.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v63, 0LL);
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v31 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_23;
  v15->m_Items[1] = (Il2CppObject *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v64.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v64, 0LL);
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v38 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_23;
  v15->m_Items[2] = (Il2CppObject *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  v65.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v65, 0LL);
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v45 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_23;
  v15->m_Items[3] = (Il2CppObject *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  v66.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v66, 0LL);
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v52 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_24:
      v55 = sub_B5D6BC(v16);
      sub_B5D668(v55, 0LL);
    }
  }
  if ( v15->max_length <= 4 )
  {
LABEL_23:
    v54 = sub_B5D6C8(v16);
    sub_B5D668(v54, 0LL);
  }
  v15->m_Items[4] = (Il2CppObject *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
  return System_String__Format_44656512((System_String_o *)StringLiteral_23920/*"{0}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/, v15, 0LL);
}


int32_t __fastcall EventServantEntity__getEventId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventServantEntity__getServantId(EventServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}