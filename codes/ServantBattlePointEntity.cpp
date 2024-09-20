void __fastcall ServantBattlePointEntity___ctor(ServantBattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C23E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C23E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantBattlePointEntity__CreatePK(
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  if ( (byte_4A5C23D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C23D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           battlePointId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantBattlePointEntity__CreatePrimaryKey(
        ServantBattlePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantBattlePointEntity__CreatePK(this->fields.svtId, this->fields.battlePointId, v2);
}