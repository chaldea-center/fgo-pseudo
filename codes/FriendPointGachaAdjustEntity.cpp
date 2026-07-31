void FriendPointGachaAdjustEntity___ctor(FriendPointGachaAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A7C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939A7C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t FriendPointGachaAdjustEntity__CreatePrimaryKey(FriendPointGachaAdjustEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}