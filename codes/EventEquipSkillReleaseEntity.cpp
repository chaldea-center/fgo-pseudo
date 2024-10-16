void __fastcall EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5CCC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5CCC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4AB5CC6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_4AB5CC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_2EC413C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v8; // x2
  __int64 v9; // x3
  EventEquipSkillReleaseEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = def;
  if ( (byte_4AB5CC9 & 1) == 0 )
  {
    sub_1BAB41C(&long_TypeInfo, key);
    sub_1BAB41C(&StringLiteral_19565/*"forceOverwrite"*/, v6);
    byte_4AB5CC9 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19565/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BAB938(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v11, v12);
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

  if ( (byte_4AB5CC8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    byte_4AB5CC8 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v8 = this->fields.script;
  if ( !v8 )
    sub_1BAB678(0LL, v7);
  return System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v8,
           (Il2CppObject *)key,
           (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool __fastcall EventEquipSkillReleaseEntity__isForceOverwrite(
        EventEquipSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5CCA & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19565/*"forceOverwrite"*/, method);
    byte_4AB5CCA = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool __fastcall EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4AB5CC7 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5CC7 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *ScriptObj; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x10
  bool v21; // w8
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  __int64 v23; // x10
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x2
  __int64 v27; // x3
  bool result; // w0
  EventEquipSkillReleaseEntity_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4AB5CCB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&idx);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BAB41C(&long_TypeInfo, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_object__get_Count__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_object__get_Item__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_object__TypeInfo, v14);
    sub_1BAB41C(&StringLiteral_20230/*"id"*/, v15);
    sub_1BAB41C(&StringLiteral_23391/*"skills"*/, v16);
    sub_1BAB41C(&StringLiteral_21263/*"lv"*/, v17);
    byte_4AB5CCB = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_23391/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_20;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
  v21 = 0;
  if ( (idx & 0x80000000) != 0 || SLODWORD(ScriptObj[1].monitor) <= idx )
    return v21;
  ScriptObj = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)ScriptObj,
                idx,
                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  v22 = (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj;
  v23 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObj->klass->vtable[0].methodPtr) < (unsigned int)v23
    || (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_20;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj,
          (Il2CppObject *)StringLiteral_20230/*"id"*/,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v22,
          (Il2CppObject *)StringLiteral_21263/*"lv"*/,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v22,
                (Il2CppObject *)StringLiteral_20230/*"id"*/,
                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  if ( ScriptObj->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_21;
  *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v24, v25);
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v22,
                (Il2CppObject *)StringLiteral_21263/*"lv"*/,
                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
LABEL_20:
    sub_1BAB678(ScriptObj, v19);
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *lv = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v26, v27);
    return 1;
  }
LABEL_21:
  sub_1BAB938(ScriptObj);
  EventEquipSkillReleaseEntity___ctor(v29, v30);
  return result;
}