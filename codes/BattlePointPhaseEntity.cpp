void __fastcall BattlePointPhaseEntity___ctor(BattlePointPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C230CE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C230CE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePointPhaseEntity__CreatePK(
        int32_t battlePointId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4C230CD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4C230CD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           battlePointId,
           phase,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattlePointPhaseEntity__CreatePrimaryKey(
        BattlePointPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePointPhaseEntity__CreatePK(this->fields.battlePointId, this->fields.phase, v2);
}