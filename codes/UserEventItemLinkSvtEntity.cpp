void __fastcall UserEventItemLinkSvtEntity___ctor(UserEventItemLinkSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBB98 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BBB98 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserEventItemLinkSvtEntity__CreatePrimaryKey(
        UserEventItemLinkSvtEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}