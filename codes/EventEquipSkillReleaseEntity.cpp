void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1616D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1616D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4B16167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type, *(_QWORD *)&targetId);
    byte_4B16167 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v7; // x2
  Il2CppObject *ScriptObj; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  EventEquipSkillReleaseEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = def;
  if ( (byte_4B1616A & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, *(_QWORD *)&def);
    sub_1BCA7E0(&StringLiteral_19737/*"forceOverwrite"*/, v6, v7);
    byte_4B1616A = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19737/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v9, v10);
  sub_1BCACFC(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v12, v13);
}


Il2CppObject *__fastcall EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0

  if ( (byte_4B16169 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    byte_4B16169 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1BCAA3C(0LL, v8);
  return System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1616B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19737/*"forceOverwrite"*/, method, v2);
    byte_4B1616B = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v3) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4B16168 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B16168 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(type, targetId, value, 0, 0LL, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *ScriptObj; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x10
  bool v30; // w8
  System_Collections_Generic_Dictionary_object__object__o *v31; // x21
  __int64 v32; // x10
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x2
  __int64 v36; // x3
  bool result; // w0
  EventEquipSkillReleaseEntity_o *v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_4B1616C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&idx, id);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12);
    sub_1BCA7E0(&long_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_20414/*"id"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23600/*"skills"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21457/*"lv"*/, v25, v26);
    byte_4B1616C = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_23600/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_20;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
  v30 = 0;
  if ( (idx & 0x80000000) != 0 || SLODWORD(ScriptObj[1].monitor) <= idx )
    return v30;
  ScriptObj = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)ScriptObj,
                idx,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  v31 = (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj;
  v32 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObj->klass->vtable[0].methodPtr) < (unsigned int)v32
    || (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_20;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj,
          (Il2CppObject *)StringLiteral_20414/*"id"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v31,
          (Il2CppObject *)StringLiteral_21457/*"lv"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v31,
                (Il2CppObject *)StringLiteral_20414/*"id"*/,
                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  if ( ScriptObj->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_21;
  *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v33, v34);
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v31,
                (Il2CppObject *)StringLiteral_21457/*"lv"*/,
                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
LABEL_20:
    sub_1BCAA3C(ScriptObj, v28);
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *lv = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v35, v36);
    return 1;
  }
LABEL_21:
  sub_1BCACFC(ScriptObj);
  EventEquipSkillReleaseEntity___ctor(v38, v39);
  return result;
}