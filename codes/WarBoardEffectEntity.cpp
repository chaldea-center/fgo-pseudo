void __fastcall WarBoardEffectEntity___ctor(WarBoardEffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E36D9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_int___ctor__, method);
    byte_48E36D9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2FE684C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardEffectEntity__CreatePrimaryKey(WarBoardEffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}