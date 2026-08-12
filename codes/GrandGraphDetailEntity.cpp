void GrandGraphDetailEntity___ctor(GrandGraphDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CAB & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970CAB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GrandGraphDetailEntity__CreatePK(int32_t grandGraphId, int32_t baseClassId, const MethodInfo *method)
{
  if ( (byte_5970CAA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970CAA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           grandGraphId,
           baseClassId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GrandGraphDetailEntity__CreatePrimaryKey(GrandGraphDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GrandGraphDetailEntity__CreatePK(this->fields.grandGraphId, this->fields.baseClassId, v2);
}


bool GrandGraphDetailEntity__IsOpen(GrandGraphDetailEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condNum; // x19

  if ( (byte_5970CA9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5970CA9 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}