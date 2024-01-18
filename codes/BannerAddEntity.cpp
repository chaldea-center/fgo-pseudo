void __fastcall BannerAddEntity___ctor(BannerAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41849DF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41849DF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BannerAddEntity__CreatePK(
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_41849DE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&dispType);
    byte_41849DE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bannerId,
           dispType,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BannerAddEntity__CreatePrimaryKey(BannerAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BannerAddEntity__CreatePK(this->fields.bannerId, this->fields.dispType, this->fields.priority, v2);
}