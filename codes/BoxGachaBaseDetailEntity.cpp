void __fastcall BoxGachaBaseDetailEntity___ctor(BoxGachaBaseDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC10F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC10F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaBaseDetailEntity__CreatePrimaryKey(
        BoxGachaBaseDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}