void __fastcall ServantRarityEntity___ctor(ServantRarityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6625 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB6625 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantRarityEntity__CreatePrimaryKey(ServantRarityEntity_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}