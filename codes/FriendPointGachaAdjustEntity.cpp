void FriendPointGachaAdjustEntity___ctor(FriendPointGachaAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DB48 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2DB48 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t FriendPointGachaAdjustEntity__CreatePrimaryKey(FriendPointGachaAdjustEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}