void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB1C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB1C6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_42EB1C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, type, targetId, *(_QWORD *)&value);
    byte_42EB1C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *ScriptObj; // x0
  EventEquipSkillReleaseEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = def;
  if ( (byte_42EB1C3 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, def, method);
    sub_B5D5C4(&StringLiteral_19043/*"forceOverwrite"*/, v6, v7, v8);
    byte_42EB1C3 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19043/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v11, v12);
}


Il2CppObject *__fastcall EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0

  if ( (byte_42EB1C2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    byte_42EB1C2 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_B5D69C(0LL, v10);
  return (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                           (System_Type_o *)key,
                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EB1C4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19043/*"forceOverwrite"*/, (_DWORD)method, v2, v3);
    byte_42EB1C4 = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v3) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_42EB1C1 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1C1 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  _DWORD *ScriptObj; // x0
  __int64 v37; // x1
  _DWORD *v38; // x22
  __int64 v39; // x10
  int32_t v40; // w8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v41; // x21
  __int64 v42; // x10
  __int64 v43; // x8
  EventEquipSkillReleaseEntity_o *v44; // x0
  const MethodInfo *v45; // x1

  if ( (byte_42EB1C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, idx, (_DWORD)id, lv);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&long_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_19625/*"id"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22454/*"skills"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_20592/*"lv"*/, v33, v34, v35);
    byte_42EB1C5 = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_22454/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_22;
  v38 = ScriptObj;
  v39 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObj + 300LL) < (unsigned int)v39
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObj + 200LL) + 8 * v39 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_22;
  }
  ScriptObj = 0LL;
  if ( (idx & 0x80000000) == 0 )
  {
    v40 = v38[6];
    if ( v40 > idx )
    {
      if ( v40 <= (unsigned int)idx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(*((_QWORD *)v38 + 2)
                                                                                           + 8LL * idx
                                                                                           + 32);
      if ( v41 )
      {
        v42 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
          && (System_Collections_Generic_Dictionary_string__object__c *)v41->klass->_2.typeHierarchy[v42 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v41,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_19625/*"id"*/,
                  (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  v41,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_20592/*"lv"*/,
                  (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            LOBYTE(ScriptObj) = 0;
            return (char)ScriptObj;
          }
          ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v41,
                        (System_Type_o *)StringLiteral_19625/*"id"*/,
                        (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( ScriptObj )
          {
            if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) != long_TypeInfo->_1.element_class )
              goto LABEL_23;
            *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
            ScriptObj = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v41,
                          (System_Type_o *)StringLiteral_20592/*"lv"*/,
                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( ScriptObj )
            {
              if ( *(Il2CppClass **)(*(_QWORD *)ScriptObj + 64LL) == long_TypeInfo->_1.element_class )
              {
                v43 = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj);
                LOBYTE(ScriptObj) = 1;
                *lv = v43;
                return (char)ScriptObj;
              }
LABEL_23:
              sub_B5D990(ScriptObj);
              EventEquipSkillReleaseEntity___ctor(v44, v45);
              return (char)ScriptObj;
            }
          }
        }
      }
LABEL_22:
      sub_B5D69C(ScriptObj, v37);
    }
  }
  return (char)ScriptObj;
}