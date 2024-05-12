void __fastcall UserExpEntity___ctor(UserExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389CE0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_4389CE0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserExpEntity__CreatePrimaryKey(UserExpEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}