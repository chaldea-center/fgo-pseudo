void __fastcall BannerAddEntity___ctor(BannerAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5ADC4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BannerAddEntity__CreatePK(
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5ADC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5ADC3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bannerId,
           dispType,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BannerAddEntity__CreatePrimaryKey(BannerAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BannerAddEntity__CreatePK(this->fields.bannerId, this->fields.dispType, this->fields.priority, v2);
}