void __fastcall ViewGachaFeaturedServantEntity___ctor(ViewGachaFeaturedServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C054 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C054 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ViewGachaFeaturedServantEntity__CreatePK(int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4A5C053 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4A5C053 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           gachaId,
           (const MethodInfo_2E7D9C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall ViewGachaFeaturedServantEntity__CreatePrimaryKey(
        ViewGachaFeaturedServantEntity_o *this,
        const MethodInfo *method)
{
  return ViewGachaFeaturedServantEntity__CreatePK(this->fields.gachaId, method);
}