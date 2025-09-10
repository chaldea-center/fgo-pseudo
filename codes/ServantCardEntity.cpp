void ServantCardEntity___ctor(ServantCardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B0F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27B0F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCardEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4C27B0E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27B0E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCardEntity__CreatePrimaryKey(ServantCardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCardEntity__CreatePK(this->fields.svtId, this->fields.cardId, v2);
}


bool ServantCardEntity__IsAttackType(ServantCardEntity_o *this, int32_t type, const MethodInfo *method)
{
  return this->fields.attackType == type;
}