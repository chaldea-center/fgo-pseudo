void __fastcall EventStatusQuestEntity___ctor(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE67A & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE67A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventStatusQuestEntity__CreatePK(
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_49FE678 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&statusId);
    byte_49FE678 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           statusId,
           priority,
           questId,
           (const MethodInfo_2E3A23C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_49FE679 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B64870(&int_TypeInfo, v5);
    sub_1B64870(&StringLiteral_22056/*"notClearPriority"*/, v6);
    byte_49FE679 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22056/*"notClearPriority"*/,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_8;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37290360(questId, -1, 0, 0LL) )
  {
LABEL_8:
    p_priority = &this->fields.priority;
    return *p_priority;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_22056/*"notClearPriority"*/,
                                                                            (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64ACC(Item, v9);
  }
  if ( Item->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    p_priority = (int32_t *)j_il2cpp_object_unbox_0(Item, int_TypeInfo, v13, v14);
    return *p_priority;
  }
  sub_1B64D8C(Item);
  EventStatusQuestEntity___ctor(v15, v16);
  return result;
}