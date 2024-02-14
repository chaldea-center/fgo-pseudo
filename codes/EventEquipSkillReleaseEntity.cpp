void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216F65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216F65 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4216F5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_4216F5F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  if ( (byte_4216F62 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    sub_B0D8A4(&StringLiteral_18865/*"forceOverwrite"*/, v6);
    byte_4216F62 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_18865/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B0DC70(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v9, v10);
}


Il2CppObject *__fastcall EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0

  if ( (byte_4216F61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    byte_4216F61 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v7 = this->fields.script;
  if ( !v7 )
    sub_B0D97C(0LL);
  return (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                           (System_Type_o *)key,
                           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4216F63 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18865/*"forceOverwrite"*/, method);
    byte_4216F63 = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4216F60 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4216F60 = 1;
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
  _DWORD *v19; // x22
  __int64 v20; // x10
  int32_t v21; // w8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x21
  __int64 v23; // x10
  __int64 v24; // x8
  EventEquipSkillReleaseEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4216F64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B0D8A4(&long_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_19442/*"id"*/, v15);
    sub_B0D8A4(&StringLiteral_22227/*"skills"*/, v16);
    sub_B0D8A4(&StringLiteral_20396/*"lv"*/, v17);
    byte_4216F64 = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_22227/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_22;
  v19 = ScriptObj;
  v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObj + 300LL) < (unsigned int)v20
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObj + 200LL) + 8 * v20 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_22;
  }
  ScriptObj = 0LL;
  if ( (idx & 0x80000000) == 0 )
  {
    v21 = v19[6];
    if ( v21 > idx )
    {
      if ( v21 <= (unsigned int)idx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v22 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(*((_QWORD *)v19 + 2)
                                                                                           + 8LL * idx
                                                                                           + 32);
      if ( v22 )
      {
        v23 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (System_Collections_Generic_Dictionary_string__object__c *)v22->klass->_2.typeHierarchy[v23 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v22,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_19442/*"id"*/,
                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v22,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_20396/*"lv"*/,
                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            LOBYTE(ScriptObj) = 0;
            return (char)ScriptObj;
          }
          ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22,
                        (System_Type_o *)StringLiteral_19442/*"id"*/,
                        (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( ScriptObj )
          {
            if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) != long_TypeInfo->_1.element_class )
              goto LABEL_23;
            *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
            ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22,
                          (System_Type_o *)StringLiteral_20396/*"lv"*/,
                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( ScriptObj )
            {
              if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) == long_TypeInfo->_1.element_class )
              {
                v24 = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
                LOBYTE(ScriptObj) = 1;
                *lv = v24;
                return (char)ScriptObj;
              }
LABEL_23:
              sub_B0DC70(ScriptObj);
              EventEquipSkillReleaseEntity___ctor(v25, v26);
              return (char)ScriptObj;
            }
          }
        }
      }
LABEL_22:
      sub_B0D97C(ScriptObj);
    }
  }
  return (char)ScriptObj;
}