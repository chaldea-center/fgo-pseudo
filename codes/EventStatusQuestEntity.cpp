void EventStatusQuestEntity___ctor(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE7FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE7FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventStatusQuestEntity__CreatePK(
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4CEE7FB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CEE7FB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           statusId,
           priority,
           questId,
           (const MethodInfo_316EECC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int32_t questId; // w20
  __int64 v5; // x1
  int32_t *p_priority; // x0
  int32_t result; // w0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  EventStatusQuestEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CEE7FC & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22503/*"notClearPriority"*/);
    byte_4CEE7FC = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22503/*"notClearPriority"*/,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_8;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_40887944(questId, -1, 0, 0) )
  {
LABEL_8:
    p_priority = &this->fields.priority;
    return *p_priority;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_22503/*"notClearPriority"*/,
                                                                            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(Item, v5);
  }
  if ( Item->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    p_priority = (int32_t *)j_il2cpp_object_unbox_0(Item, int_TypeInfo, v9, v10);
    return *p_priority;
  }
  sub_1C7C0DC(Item);
  EventStatusQuestEntity___ctor(v11, v12);
  return result;
}