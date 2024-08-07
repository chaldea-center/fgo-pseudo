void __fastcall UserEventServantFatigueEntity___ctor(UserEventServantFatigueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7AF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FF7AF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserEventServantFatigueEntity__CreatePrimaryKey(
        UserEventServantFatigueEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}