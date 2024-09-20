void __fastcall BattlePointPhaseEntity___ctor(BattlePointPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C203 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C203 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattlePointPhaseEntity__CreatePK(
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4A5C202 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C202 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           battlePointId,
           phase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattlePointPhaseEntity__CreatePrimaryKey(
        BattlePointPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePointPhaseEntity__CreatePK(this->fields.battlePointId, this->fields.phase, v2);
}