void __fastcall WarAddEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct WarAddEntity_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct WarAddEntity_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BC8A64 & 1) == 0 )
  {
    sub_1C1ABD4(&WarAddEntity_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_17445/*"bgChangeEffectTime"*/, v8);
    sub_1C1ABD4(&StringLiteral_17446/*"bgChangeEffectType"*/, v9);
    sub_1C1ABD4(&StringLiteral_19454/*"eventTowerId"*/, v10);
    byte_4BC8A64 = 1;
  }
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17446/*"bgChangeEffectType"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarAddEntity_TypeInfo->static_fields,
    StringLiteral_17446/*"bgChangeEffectType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_17445/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17445/*"bgChangeEffectTime"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->BG_CHANGE_TIME_KEY, v11, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_19454/*"eventTowerId"*/;
  v20 = WarAddEntity_TypeInfo->static_fields;
  v20->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_19454/*"eventTowerId"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v20->EVENT_TOWER_ID, v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8A63 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8A63 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarAddEntity__CreatePK(
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BC8A60 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4BC8A60 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_4BC8A5F & 1) == 0 )
  {
    sub_1C1ABD4(&WarAddEntity_TypeInfo, method);
    byte_4BC8A5F = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


int32_t __fastcall WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v5; // x0

  if ( (byte_4BC8A61 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C1ABD4(&WarAddEntity_TypeInfo, v3);
    byte_4BC8A61 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v5 = WarAddEntity_TypeInfo;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v5 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v5->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t __fastcall WarAddEntity__getScript(
        WarAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t result; // w0
  WarAddEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC8A62 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C1ABD4(&long_TypeInfo, v7);
    byte_4BC8A62 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C1AE30(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1C1B0F0(value);
  WarAddEntity___ctor(v13, v14);
  return result;
}