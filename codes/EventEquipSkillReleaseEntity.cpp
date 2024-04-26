void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4354565 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4354565 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_435455F & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_435455F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_1CA2C2C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  Il2CppObject *ScriptObj; // x0
  EventEquipSkillReleaseEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = def;
  if ( (byte_4354562 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_19095/*"forceOverwrite"*/);
    byte_4354562 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19095/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B70A60(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v8, v9);
}


Il2CppObject *__fastcall EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0

  if ( (byte_4354561 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4354561 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v7 = this->fields.script;
  if ( !v7 )
    sub_B7076C(0LL, v6);
  return (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                           (System_Type_o *)key,
                           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4354563 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19095/*"forceOverwrite"*/);
    byte_4354563 = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4354560 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4354560 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL);
}


bool __fastcall EventEquipSkillReleaseEntity__tryGetSkill(
        EventEquipSkillReleaseEntity_o *this,
        int32_t idx,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  _DWORD *ScriptObj; // x0
  __int64 v10; // x1
  _DWORD *v11; // x22
  __int64 v12; // x10
  int32_t v13; // w8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x21
  __int64 v15; // x10
  __int64 v16; // x8
  EventEquipSkillReleaseEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4354564 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&StringLiteral_19684/*"id"*/);
    sub_B70694(&StringLiteral_22524/*"skills"*/);
    sub_B70694(&StringLiteral_20652/*"lv"*/);
    byte_4354564 = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_22524/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_22;
  v11 = ScriptObj;
  v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObj + 300LL) < (unsigned int)v12
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObj + 200LL) + 8 * v12 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_22;
  }
  ScriptObj = 0LL;
  if ( (idx & 0x80000000) == 0 )
  {
    v13 = v11[6];
    if ( v13 > idx )
    {
      if ( v13 <= (unsigned int)idx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v14 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(*((_QWORD *)v11 + 2)
                                                                                           + 8LL * idx
                                                                                           + 32);
      if ( v14 )
      {
        v15 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (System_Collections_Generic_Dictionary_string__object__c *)v14->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v14,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_19684/*"id"*/,
                  (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v14,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_20652/*"lv"*/,
                  (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            LOBYTE(ScriptObj) = 0;
            return (char)ScriptObj;
          }
          ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                        (System_Type_o *)StringLiteral_19684/*"id"*/,
                        (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( ScriptObj )
          {
            if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) != long_TypeInfo->_1.element_class )
              goto LABEL_23;
            *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
            ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                          (System_Type_o *)StringLiteral_20652/*"lv"*/,
                          (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( ScriptObj )
            {
              if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) == long_TypeInfo->_1.element_class )
              {
                v16 = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
                LOBYTE(ScriptObj) = 1;
                *lv = v16;
                return (char)ScriptObj;
              }
LABEL_23:
              sub_B70A60(ScriptObj);
              EventEquipSkillReleaseEntity___ctor(v17, v18);
              return (char)ScriptObj;
            }
          }
        }
      }
LABEL_22:
      sub_B7076C(ScriptObj, v10);
    }
  }
  return (char)ScriptObj;
}