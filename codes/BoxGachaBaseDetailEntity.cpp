void __fastcall BoxGachaBaseDetailEntity___ctor(BoxGachaBaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB43BF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_int___ctor__, method);
    byte_4BB43BF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3236140 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaBaseDetailEntity__CreatePrimaryKey(
        BoxGachaBaseDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}