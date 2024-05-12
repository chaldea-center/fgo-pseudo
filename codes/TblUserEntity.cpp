void __fastcall TblUserEntity___ctor(TblUserEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4388337 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_long___ctor__);
    byte_4388337 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21FB798 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall TblUserEntity__CreatePrimaryKey(TblUserEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}