void __fastcall ServantRarityEntity___ctor(ServantRarityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D12D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438D12D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantRarityEntity__CreatePrimaryKey(ServantRarityEntity_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}