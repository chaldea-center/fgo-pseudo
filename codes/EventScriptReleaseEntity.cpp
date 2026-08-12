void EventScriptReleaseEntity___ctor(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59709AD & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59709AD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventScriptReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_59709AB & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_59709AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagId,
           type,
           targetId,
           (const MethodInfo_3854D88 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventScriptReleaseEntity__CreatePrimaryKey(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventScriptReleaseEntity__CreatePK(
           this->fields.eventId,
           this->fields.flagId,
           this->fields.type,
           this->fields.targetId,
           v2);
}


int32_t EventScriptReleaseEntity__GetCondType(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool EventScriptReleaseEntity__isAvailable(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w20
  int32_t targetId; // w21
  int64_t value; // x19

  if ( (byte_59709AC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59709AC = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(type, targetId, value, 0, 0, 0);
}