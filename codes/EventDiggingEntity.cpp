void __fastcall EventDiggingEntity___ctor(EventDiggingEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEA8F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEA8F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDiggingEntity__CreatePrimaryKey(EventDiggingEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}