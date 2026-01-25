void WarBoardActionPointEntity___ctor(WarBoardActionPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF783 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF783 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardActionPointEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4CEF782 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF782 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarBoardActionPointEntity__CreatePrimaryKey(
        WarBoardActionPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardActionPointEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


bool WarBoardActionPointEntity__get_HasCost(WarBoardActionPointEntity_o *this, const MethodInfo *method)
{
  return this->fields.attackCost > 0 || this->fields.moveCost > 0;
}