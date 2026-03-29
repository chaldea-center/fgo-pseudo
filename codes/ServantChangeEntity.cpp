void ServantChangeEntity___ctor(ServantChangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3124D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3124D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantChangeEntity__CreatePK(int32_t svtId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D3124B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D3124B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           priority,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantChangeEntity__CreatePrimaryKey(ServantChangeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantChangeEntity__CreatePK(this->fields.svtId, this->fields.priority, v2);
}


bool ServantChangeEntity__HasFlag(ServantChangeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool ServantChangeEntity__IsEnable(ServantChangeEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_4D3124C & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D3124C = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0, 0);
}