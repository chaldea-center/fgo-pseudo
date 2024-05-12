void __fastcall UserEventServantFatigueEntity___ctor(UserEventServantFatigueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389CBC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_4389CBC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserEventServantFatigueEntity__CreatePrimaryKey(
        UserEventServantFatigueEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}