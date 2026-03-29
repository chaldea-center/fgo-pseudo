void EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30978 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30978 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4D30972 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4D30972 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_31A3514 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventEquipSkillReleaseEntity__CreatePrimaryKey(
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
int32_t EventEquipSkillReleaseEntity__getScriptIntParam(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        int32_t def,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  EventEquipSkillReleaseEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  v4 = def;
  if ( (byte_4D30975 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_19768/*"forceOverwrite"*/);
    byte_4D30975 = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19768/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v7, v8);
  sub_1C940C8(ScriptObj);
  return EventEquipSkillReleaseEntity__isForceOverwrite(v10, v11);
}


Il2CppObject *EventEquipSkillReleaseEntity__getScriptObj(
        EventEquipSkillReleaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0

  if ( (byte_4D30974 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4D30974 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.script;
  if ( !v7 )
    sub_1C93D2C(0, v6);
  return System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v7,
           (Il2CppObject *)key,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool EventEquipSkillReleaseEntity__isForceOverwrite(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30976 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19768/*"forceOverwrite"*/);
    byte_4D30976 = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4D30973 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30973 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0, 0);
}


bool EventEquipSkillReleaseEntity__tryGetSkill(
        EventEquipSkillReleaseEntity_o *this,
        int32_t idx,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObj; // x0
  __int64 v10; // x1
  __int64 naturalAligment; // x10
  bool v12; // w8
  System_Collections_Generic_Dictionary_object__object__o *v13; // x21
  __int64 v14; // x10
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  bool result; // w0
  EventEquipSkillReleaseEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4D30977 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&StringLiteral_20479/*"id"*/);
    sub_1C93AD4(&StringLiteral_23815/*"skills"*/);
    sub_1C93AD4(&StringLiteral_21633/*"lv"*/);
    byte_4D30977 = 1;
  }
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_23815/*"skills"*/,
                (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_20;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
  v12 = 0;
  if ( idx < 0 || SLODWORD(ScriptObj[1].monitor) <= idx )
    return v12;
  ScriptObj = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)ScriptObj,
                idx,
                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj;
  v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment < (unsigned int)v14
    || (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_20;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj,
          (Il2CppObject *)StringLiteral_20479/*"id"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v13,
          (Il2CppObject *)StringLiteral_21633/*"lv"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v13,
                (Il2CppObject *)StringLiteral_20479/*"id"*/,
                (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  if ( ScriptObj->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_21;
  *id = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v15, v16);
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v13,
                (Il2CppObject *)StringLiteral_21633/*"lv"*/,
                (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
LABEL_20:
    sub_1C93D2C(ScriptObj, v10);
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *lv = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v17, v18);
    return 1;
  }
LABEL_21:
  sub_1C940C8(ScriptObj);
  EventEquipSkillReleaseEntity___ctor(v20, v21);
  return result;
}