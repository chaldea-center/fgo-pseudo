void __fastcall BoxGachaBaseDetailEntity___ctor(BoxGachaBaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41896A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41896A1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaBaseDetailEntity__CreatePrimaryKey(
        BoxGachaBaseDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}