void EventJobPassportEntity___ctor(EventJobPassportEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970832 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970832 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventJobPassportEntity__CreatePK(int32_t eventId, int32_t jobId, const MethodInfo *method)
{
  if ( (byte_5970831 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970831 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           jobId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventJobPassportEntity__CreatePrimaryKey(EventJobPassportEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventJobPassportEntity__CreatePK(this->fields.eventId, this->fields.jobId, v2);
}


bool EventJobPassportEntity__IsDisplayOpen(EventJobPassportEntity_o *this, const MethodInfo *method)
{
  int32_t dispCondType; // w20
  int32_t dispCondId; // w21
  int64_t dispCondNum; // x19

  if ( (byte_597082F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_597082F = 1;
  }
  dispCondType = this->fields.dispCondType;
  dispCondId = this->fields.dispCondId;
  dispCondNum = this->fields.dispCondNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(dispCondType, dispCondId, dispCondNum, 0, 0, 0);
}


bool EventJobPassportEntity__IsOpenPassport(EventJobPassportEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_5970830 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5970830 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool EventJobPassportEntity__get_IsDisplayPassport(EventJobPassportEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return EventJobPassportEntity__IsDisplayOpen(this, method) || EventJobPassportEntity__IsOpenPassport(this, v3);
}