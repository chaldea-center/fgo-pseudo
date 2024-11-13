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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct WarAddEntity_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct WarAddEntity_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1715D & 1) == 0 )
  {
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17341/*"bgChangeEffectTime"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17342/*"bgChangeEffectType"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19338/*"eventTowerId"*/, v12, v13);
    byte_4B1715D = 1;
  }
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17342/*"bgChangeEffectType"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarAddEntity_TypeInfo->static_fields,
    StringLiteral_17342/*"bgChangeEffectType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_17341/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17341/*"bgChangeEffectTime"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BG_CHANGE_TIME_KEY, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_19338/*"eventTowerId"*/;
  v23 = WarAddEntity_TypeInfo->static_fields;
  v23->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_19338/*"eventTowerId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->EVENT_TOWER_ID, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1715C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1715C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarAddEntity__CreatePK(
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B17159 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type, *(_QWORD *)&priority);
    byte_4B17159 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_4B17158 & 1) == 0 )
  {
    sub_1BCA7E0(&WarAddEntity_TypeInfo, method, v2);
    byte_4B17158 = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, method);
  return WarAddEntity__CreatePK(warId, type, priority, v3);
}


int32_t __fastcall WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v7; // x0

  if ( (byte_4B1715A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v4, v5);
    byte_4B1715A = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v7 = WarAddEntity_TypeInfo;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, method);
    v7 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v7->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddEntity__getScript(
        WarAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t result; // w0
  WarAddEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B1715B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B1715B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v10);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v11, v12);
  sub_1BCACFC(value);
  WarAddEntity___ctor(v14, v15);
  return result;
}