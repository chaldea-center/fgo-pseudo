void __fastcall UserEventServantFatigueEntity___ctor(UserEventServantFatigueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F78 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4186F78 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserEventServantFatigueEntity__CreatePrimaryKey(
        UserEventServantFatigueEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}