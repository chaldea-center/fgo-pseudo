void __fastcall FriendPointGachaAdjustEntity___ctor(FriendPointGachaAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B03248 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B03248 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FriendPointGachaAdjustEntity__CreatePrimaryKey(
        FriendPointGachaAdjustEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}