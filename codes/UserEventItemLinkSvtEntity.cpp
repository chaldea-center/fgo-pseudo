void UserEventItemLinkSvtEntity___ctor(UserEventItemLinkSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB70D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB70D7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t UserEventItemLinkSvtEntity__CreatePrimaryKey(UserEventItemLinkSvtEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}