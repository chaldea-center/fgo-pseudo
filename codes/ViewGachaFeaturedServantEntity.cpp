void __fastcall ViewGachaFeaturedServantEntity___ctor(ViewGachaFeaturedServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C57 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6C57 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ViewGachaFeaturedServantEntity__CreatePK(int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4AB6C56 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4AB6C56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           gachaId,
           (const MethodInfo_2EC242C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall ViewGachaFeaturedServantEntity__CreatePrimaryKey(
        ViewGachaFeaturedServantEntity_o *this,
        const MethodInfo *method)
{
  return ViewGachaFeaturedServantEntity__CreatePK(this->fields.gachaId, method);
}