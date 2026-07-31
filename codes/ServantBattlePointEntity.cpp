void ServantBattlePointEntity___ctor(ServantBattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AC5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AC5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantBattlePointEntity__CreatePK(int32_t svtId, int32_t battlePointId, const MethodInfo *method)
{
  if ( (byte_5939AC4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939AC4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           battlePointId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantBattlePointEntity__CreatePrimaryKey(ServantBattlePointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantBattlePointEntity__CreatePK(this->fields.svtId, this->fields.battlePointId, v2);
}