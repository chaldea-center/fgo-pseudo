void __fastcall UserEventItemLinkSvtEntity___ctor(UserEventItemLinkSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F207 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_int___ctor__, method);
    byte_4A4F207 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3211D9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserEventItemLinkSvtEntity__CreatePrimaryKey(
        UserEventItemLinkSvtEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}