void __fastcall EventStatusQuestEntity___ctor(EventStatusQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3510 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3510 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventStatusQuestEntity__CreatePK(
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_42B350E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42B350E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           statusId,
           priority,
           questId,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int32_t questId; // w20
  __int64 v5; // x1
  int32_t *p_priority; // x0
  int32_t result; // w0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  EventStatusQuestEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42B350F & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_21310/*"notClearPriority"*/);
    byte_42B350F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21310/*"notClearPriority"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_9;
  }
  questId = this->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25987760(questId, -1, 0, 0LL) )
  {
LABEL_9:
    p_priority = &this->fields.priority;
    return *p_priority;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_21310/*"notClearPriority"*/,
                                                                                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v5);
  }
  if ( Item->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    p_priority = (int32_t *)j_il2cpp_object_unbox_0(Item);
    return *p_priority;
  }
  sub_B52D50(Item);
  EventStatusQuestEntity___ctor(v9, v10);
  return result;
}