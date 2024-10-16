void __fastcall EventStatusQuestEntity___ctor(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5EBF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5EBF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventStatusQuestEntity__CreatePK(
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4AB5EBD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&statusId);
    byte_4AB5EBD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           statusId,
           priority,
           questId,
           (const MethodInfo_2EC413C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventStatusQuestEntity__CreatePrimaryKey(
        EventStatusQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventStatusQuestEntity__CreatePK(
           this->fields.eventId,
           this->fields.statusId,
           this->fields.priority,
           this->fields.questId,
           v2);
}


int32_t __fastcall EventStatusQuestEntity__getPriority(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int32_t questId; // w20
  __int64 v9; // x1
  int32_t *p_priority; // x0
  int32_t result; // w0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  EventStatusQuestEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4AB5EBE & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BAB41C(&int_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22176/*"notClearPriority"*/, v6);
    byte_4AB5EBE = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22176/*"notClearPriority"*/,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_8;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37980612(questId, -1, 0, 0LL) )
  {
LABEL_8:
    p_priority = &this->fields.priority;
    return *p_priority;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_22176/*"notClearPriority"*/,
                                                                            (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BAB678(Item, v9);
  }
  if ( Item->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    p_priority = (int32_t *)j_il2cpp_object_unbox_0(Item, int_TypeInfo, v13, v14);
    return *p_priority;
  }
  sub_1BAB938(Item);
  EventStatusQuestEntity___ctor(v15, v16);
  return result;
}