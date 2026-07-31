void EventStatusQuestEntity___ctor(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938915 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938915 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventStatusQuestEntity__CreatePK(
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_5938913 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5938913 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           statusId,
           priority,
           questId,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventStatusQuestEntity__CreatePrimaryKey(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventStatusQuestEntity__CreatePK(
           this->fields.eventId,
           this->fields.statusId,
           this->fields.priority,
           this->fields.questId,
           v2);
}


int32_t EventStatusQuestEntity__getPriority(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  int32_t questId; // w20
  __int64 v6; // x1
  int32_t *p_priority; // x0
  int32_t result; // w0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  EventStatusQuestEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5938914 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_23380/*"notClearPriority"*/);
    byte_5938914 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23380/*"notClearPriority"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_8;
  }
  questId = this->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  if ( CondType__IsQuestClear_47254560(questId, -1, 0, 0) )
  {
LABEL_8:
    p_priority = &this->fields.priority;
    return *p_priority;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23380/*"notClearPriority"*/,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v6);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C070 + 64) )
  {
    p_priority = (int32_t *)j_il2cpp_object_unbox_0(Item, qword_594C070, v10);
    return *p_priority;
  }
  sub_220024C(Item, qword_594C070, v10);
  EventStatusQuestEntity___ctor(v11, v12);
  return result;
}