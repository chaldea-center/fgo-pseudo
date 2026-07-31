void ServantOverwriteEntity___ctor(ServantOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59390C2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_59390C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59390C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           type,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantOverwriteEntity__CreatePrimaryKey(ServantOverwriteEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantOverwriteEntity__CreatePK(this->fields.svtId, this->fields.type, this->fields.priority, v2);
}


int32_t ServantOverwriteEntity__GetOverwriteTreasureDeviceId(
        ServantOverwriteEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_59390C0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23697/*"overwriteTreasureDeviceId"*/);
    byte_59390C0 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.overwriteValue,
           (System_String_o *)StringLiteral_23697/*"overwriteTreasureDeviceId"*/,
           defaultValue,
           0);
}