void ViewGachaFeaturedServantEntity___ctor(ViewGachaFeaturedServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397D2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ViewGachaFeaturedServantEntity__CreatePK(int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_59397D1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59397D1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           gachaId,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ViewGachaFeaturedServantEntity__CreatePrimaryKey(
        ViewGachaFeaturedServantEntity_o *this,
        const MethodInfo *method)
{
  return ViewGachaFeaturedServantEntity__CreatePK(this->fields.gachaId, method);
}