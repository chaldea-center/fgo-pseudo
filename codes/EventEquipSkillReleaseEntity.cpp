void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A384 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A384 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_418A37E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_418A37E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePrimaryKey(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventEquipSkillReleaseEntity__CreatePK(
           this->fields.eventId,
           this->fields.type,
           this->fields.targetId,
           this->fields.value,
           v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventEquipSkillReleaseEntity__getScriptIntParam(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        int32_t def,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v6; // x1
  Il2CppObject *ScriptObj; // x0
  EventEquipSkillReleaseEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  v4 = def;
  if ( (byte_418A381 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    sub_B2C35C(&StringLiteral_18807/*"forceOverwrite"*/, v6);
    byte_418A381 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_18807/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B2C728(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v9, v10);
}


Il2CppObject *__fastcall EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x0

  if ( (byte_418A380 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    byte_418A380 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v8 = this->fields.script;
  if ( !v8 )
    sub_B2C434(0LL, v7);
  return (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                           (System_Type_o *)key,
                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418A382 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18807/*"forceOverwrite"*/, method);
    byte_418A382 = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_418A37F & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_418A37F = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEquipSkillReleaseEntity__tryGetSkill(
        EventEquipSkillReleaseEntity_o *this,
        int32_t idx,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  _DWORD *ScriptObj; // x0
  __int64 v19; // x1
  _DWORD *v20; // x22
  __int64 v21; // x10
  int32_t v22; // w8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x21
  __int64 v24; // x10
  __int64 v25; // x8
  EventEquipSkillReleaseEntity_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_418A383 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B2C35C(&long_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v14);
    sub_B2C35C(&StringLiteral_19381/*"id"*/, v15);
    sub_B2C35C(&StringLiteral_22152/*"skills"*/, v16);
    sub_B2C35C(&StringLiteral_20333/*"lv"*/, v17);
    byte_418A383 = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_22152/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_22;
  v20 = ScriptObj;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObj + 300LL) < (unsigned int)v21
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObj + 200LL) + 8 * v21 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_22;
  }
  ScriptObj = 0LL;
  if ( (idx & 0x80000000) == 0 )
  {
    v22 = v20[6];
    if ( v22 > idx )
    {
      if ( v22 <= (unsigned int)idx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v23 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(*((_QWORD *)v20 + 2)
                                                                                           + 8LL * idx
                                                                                           + 32);
      if ( v23 )
      {
        v24 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (System_Collections_Generic_Dictionary_string__object__c *)v23->klass->_2.typeHierarchy[v24 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v23,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_19381/*"id"*/,
                  (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v23,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_20333/*"lv"*/,
                  (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            LOBYTE(ScriptObj) = 0;
            return (char)ScriptObj;
          }
          ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23,
                        (System_Type_o *)StringLiteral_19381/*"id"*/,
                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( ScriptObj )
          {
            if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) != long_TypeInfo->_1.element_class )
              goto LABEL_23;
            *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
            ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23,
                          (System_Type_o *)StringLiteral_20333/*"lv"*/,
                          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( ScriptObj )
            {
              if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) == long_TypeInfo->_1.element_class )
              {
                v25 = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
                LOBYTE(ScriptObj) = 1;
                *lv = v25;
                return (char)ScriptObj;
              }
LABEL_23:
              sub_B2C728(ScriptObj);
              EventEquipSkillReleaseEntity___ctor(v26, v27);
              return (char)ScriptObj;
            }
          }
        }
      }
LABEL_22:
      sub_B2C434(ScriptObj, v19);
    }
  }
  return (char)ScriptObj;
}