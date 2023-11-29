void __fastcall EventDiggingRewardEntity___ctor(EventDiggingRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC635 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC635 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDiggingRewardEntity__CreatePrimaryKey(
        EventDiggingRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}