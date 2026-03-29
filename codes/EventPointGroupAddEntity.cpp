void EventPointGroupAddEntity___ctor(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30A68 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30A68 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventPointGroupAddEntity__CreatePK(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4D30A66 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4D30A66 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           termId,
           groupId,
           priority,
           (const MethodInfo_31A3514 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventPointGroupAddEntity__CreatePrimaryKey(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventPointGroupAddEntity__CreatePK(
           this->fields.eventId,
           this->fields.termId,
           this->fields.groupId,
           this->fields.priority,
           v2);
}


bool EventPointGroupAddEntity__IsAvailable(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D30A67 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30A67 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}