void EventEquipSkillReleaseEntity___ctor(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593860D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593860D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventEquipSkillReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_5938607 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5938607 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           targetId,
           value,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  if ( (byte_593860A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20444/*"forceOverwrite"*/);
    byte_593860A = 1;
  }
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_20444/*"forceOverwrite"*/,
                *(const MethodInfo **)&def);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v7, v8);
  sub_220024C(ScriptObj, qword_594C090, v7, v8);
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

  if ( (byte_5938609 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5938609 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.script;
  if ( !v7 )
    sub_21FFECC(0, v6);
  return System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v7,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
}


bool EventEquipSkillReleaseEntity__isForceOverwrite(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593860B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20444/*"forceOverwrite"*/);
    byte_593860B = 1;
  }
  return EventEquipSkillReleaseEntity__getScriptIntParam(this, (System_String_o *)method, 0, v2) == 1;
}


bool EventEquipSkillReleaseEntity__isOpen(EventEquipSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w20
  int32_t targetId; // w21
  int64_t value; // x19

  if ( (byte_5938608 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938608 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(type, targetId, value, 0, 0, 0);
}


bool EventEquipSkillReleaseEntity__tryGetSkill(
        EventEquipSkillReleaseEntity_o *this,
        int32_t idx,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  System_String_o *v9; // x1
  Il2CppObject *ScriptObj; // x0
  __int64 v11; // x1
  __int64 naturalAligment; // x10
  bool v13; // w8
  System_Collections_Generic_Dictionary_object__object__o *v14; // x21
  __int64 v15; // x10
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x1
  _QWORD *v19; // x0
  Il2CppObject *v20; // x1
  const MethodInfo_3FCA3E8 *v21; // x2
  _QWORD *v22; // x0
  bool result; // w0
  EventEquipSkillReleaseEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_593860C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_21192/*"id"*/);
    sub_21FFC50(&StringLiteral_24720/*"skills"*/);
    sub_21FFC50(&StringLiteral_22408/*"lv"*/);
    byte_593860C = 1;
  }
  v9 = (System_String_o *)StringLiteral_24720/*"skills"*/;
  *id = 0;
  *lv = 0;
  ScriptObj = EventEquipSkillReleaseEntity__getScriptObj(this, v9, (const MethodInfo *)id);
  if ( !ScriptObj )
    goto LABEL_20;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
  v13 = 0;
  if ( idx < 0 || SLODWORD(ScriptObj[1].monitor) <= idx )
    return v13;
  ScriptObj = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)ScriptObj,
                idx,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj;
  v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment < (unsigned int)v15
    || (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_20;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)ScriptObj,
          (Il2CppObject *)StringLiteral_21192/*"id"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v14,
          (Il2CppObject *)StringLiteral_22408/*"lv"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(
                v14,
                (Il2CppObject *)StringLiteral_21192/*"id"*/,
                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !ScriptObj )
    goto LABEL_20;
  v18 = qword_594C090;
  if ( ScriptObj->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    goto LABEL_21;
  v19 = (_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v16, v17);
  v20 = (Il2CppObject *)StringLiteral_22408/*"lv"*/;
  v21 = (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  *id = *v19;
  ScriptObj = System_Collections_Generic_Dictionary_object__object___get_Item(v14, v20, v21);
  if ( !ScriptObj )
LABEL_20:
    sub_21FFECC(ScriptObj, v11);
  v18 = qword_594C090;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
  {
    v22 = (_QWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v16, v17);
    v13 = 1;
    *lv = *v22;
    return v13;
  }
LABEL_21:
  sub_220024C(ScriptObj, v18, v16, v17);
  EventEquipSkillReleaseEntity___ctor(v24, v25);
  return result;
}